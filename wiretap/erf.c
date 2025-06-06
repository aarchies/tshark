/*
 * Copyright (c) 2003 Endace Technology Ltd, Hamilton, New Zealand.
 * All rights reserved.
 *
 * This software and documentation has been developed by Endace Technology Ltd.
 * along with the DAG PCI network capture cards. For further information please
 * visit http://www.endace.com/.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * erf - Endace ERF (Extensible Record Format)
 *
 *  Rev A:
 *      http://web.archive.org/web/20050829051042/http://www.endace.com/support/EndaceRecordFormat.pdf
 *  Version 1:
 *      http://web.archive.org/web/20061111014023/http://www.endace.com/support/EndaceRecordFormat.pdf
 *  Version 8:
 *      https://gitlab.com/wireshark/wireshark/uploads/f694bfee494784425b6545892180a8b2/Endace_ERF_Types.pdf
 *        (bug #4484)
 *  Current version (version 21, as of 2023-03-28):
 *      https://www.endace.com/erf-extensible-record-format-types.pdf
 *
 * Note that version 17 drops descriptions of records for no-longer-supported
 * DAG cards.  Version 16 is probably the best version to use for those
 * older record types, but it's not in any obvious location in the Wayback
 * Machine.
 */

#include "config.h"
#include "erf.h"

#include <stdlib.h>
#include <string.h>

#include <glib.h>

#include <wsutil/crc32.h>
#include <wsutil/strtoi.h>
#include <wsutil/glib-compat.h>

#include "wtap-int.h"
#include "file_wrappers.h"
#include "erf_record.h"
#include "erf-common.h"

struct erf_anchor_mapping {
  uint64_t host_id;
  uint64_t anchor_id;
  uint64_t gen_time;
  char *comment;
};

static const unsigned erf_header_size = (unsigned)sizeof(erf_header_t);
static const unsigned erf_mc_header_size = (unsigned)sizeof(erf_mc_header_t);
static const unsigned erf_eth_hdr_size = (unsigned)sizeof(erf_eth_header_t);


static bool erf_read_header(wtap *wth, FILE_T fh,
                                wtap_rec *rec,
                                erf_header_t *erf_header,
                                int *err,
                                char **err_info,
                                uint32_t *bytes_read,
                                uint32_t *packet_size,
                                GPtrArray *anchor_mappings_to_update);
static bool erf_read(wtap *wth, wtap_rec *rec,
                         int *err, char **err_info, int64_t *data_offset);
static bool erf_seek_read(wtap *wth, int64_t seek_off,
                              wtap_rec *rec,
                              int *err, char **err_info);
static void erf_close(wtap *wth);

static int populate_summary_info(erf_t *erf_priv, wtap *wth, wtap_rec *rec, uint32_t packet_size, GPtrArray *anchor_mappings_to_update, int *err, char **err_info);
static int erf_update_anchors_from_header(erf_t *erf_priv, wtap_rec *rec, union wtap_pseudo_header *pseudo_header, uint64_t host_id, GPtrArray *anchor_mappings_to_update);
static int erf_get_source_from_header(union wtap_pseudo_header *pseudo_header, uint64_t *host_id, uint8_t *source_id);
static int erf_populate_interface(erf_t* erf_priv, wtap *wth, union wtap_pseudo_header *pseudo_header, uint64_t host_id, uint8_t source_id, uint8_t if_num, int *err, char **err_info);

typedef struct {
  bool write_next_extra_meta;
  bool last_meta_periodic;
  uint64_t host_id;
  uint64_t implicit_host_id;
  uint64_t prev_frame_ts;
  uint8_t prev_erf_type;
  uint64_t gen_time;
  time_t first_frame_time_sec;
  time_t prev_inserted_time_sec;
  char* user_comment_ptr;
  GPtrArray* periodic_sections;
  GArray *periodic_extra_ehdrs;
  GRand *rand;
} erf_dump_t;

static erf_dump_t* erf_dump_priv_create(void);
static void erf_dump_priv_free(erf_dump_t *dump_priv);
static bool erf_dump_priv_compare_capture_comment(wtap_dumper *wdh, erf_dump_t *dump_priv,const union wtap_pseudo_header *pseudo_header, const uint8_t *pd);
static bool erf_comment_to_sections(wtap_dumper *wdh, uint16_t section_type, uint16_t section_id, char *comment, GPtrArray *sections);
static bool erf_wtap_info_to_sections(wtap_dumper *wdh, GPtrArray *sections);
static bool get_user_comment_string(wtap_dumper *wdh, char** user_comment_ptr);

static bool erf_write_meta_record(wtap_dumper *wdh, erf_dump_t *dump_priv, uint64_t timestamp, GPtrArray *sections, GArray *extra_ehdrs, int *err);

static const struct {
  int erf_encap_value;
  int wtap_encap_value;
} erf_to_wtap_map[] = {
  { ERF_TYPE_HDLC_POS,  WTAP_ENCAP_CHDLC },
  { ERF_TYPE_HDLC_POS,  WTAP_ENCAP_HHDLC },
  { ERF_TYPE_HDLC_POS,  WTAP_ENCAP_CHDLC_WITH_PHDR },
  { ERF_TYPE_HDLC_POS,  WTAP_ENCAP_PPP },
  { ERF_TYPE_HDLC_POS,  WTAP_ENCAP_FRELAY },
  { ERF_TYPE_HDLC_POS,  WTAP_ENCAP_MTP2 },
  { ERF_TYPE_ETH,       WTAP_ENCAP_ETHERNET },
  { 99,       WTAP_ENCAP_ERF }, /*this type added so WTAP_ENCAP_ERF will work and then be treated at ERF->ERF*/
};

#define NUM_ERF_ENCAPS array_length(erf_to_wtap_map)

#define ERF_META_TAG_HEADERLEN 4
#define ERF_META_TAG_TOTAL_ALIGNED_LENGTH(taglength)  ((((uint32_t)taglength + 0x3U) & ~0x3U) + ERF_META_TAG_HEADERLEN)
#define ERF_META_TAG_ALIGNED_LENGTH(taglength)  ((((uint32_t)taglength + 0x3U) & ~0x3U))
#define ERF_PADDING_TO_8(len) ((8 - len % 8) % 8)

struct erf_if_info {
  int if_index;
  char *name;
  char *descr;
  int stream_num;
  struct {
    unsigned filter:1;
    unsigned fcs_len:1;
    unsigned snaplen:1;
  } set_flags;
};

struct erf_if_mapping {
  uint64_t host_id;
  uint8_t source_id;
  struct erf_if_info interfaces[ERF_MAX_INTERFACES];

  char *module_filter_str;
  /*here because we could have captures from multiple hosts in the file*/
  char *capture_filter_str;
  int8_t module_fcs_len;
  uint32_t module_snaplen;
  int interface_metadata;
  uint64_t interface_gentime;
  uint64_t module_gentime;
};

struct erf_meta_section {
  uint16_t type;
  uint16_t section_id;
  uint16_t section_length;
  GPtrArray *tags;
};

struct erf_meta_tag {
  uint16_t type;
  uint16_t length;
  uint8_t *value;
};

struct erf_meta_read_state {
  uint8_t *tag_ptr;
  uint32_t remaining_len;

  struct erf_if_mapping *if_map;

  uint16_t sectiontype;
  uint16_t sectionid;
  uint16_t parentsectiontype;
  uint16_t parentsectionid;

  uint64_t gen_time;

  int interface_metadata;
};

static bool erf_wtap_blocks_to_erf_sections(wtap_block_t block, GPtrArray *sections, uint16_t section_type, uint16_t section_id, wtap_block_foreach_func func);

static uint32_t erf_meta_read_tag(struct erf_meta_tag*, uint8_t*, uint32_t);

static int erf_file_type_subtype = -1;

void register_erf(void);

static unsigned erf_anchor_mapping_hash(const void *key) {
  const struct erf_anchor_mapping *anchor_map = (const struct erf_anchor_mapping*) key;

  return ((uint32_t)anchor_map->host_id ^ (uint32_t)anchor_map->anchor_id);

}

static gboolean erf_anchor_mapping_equal(const void *a, const void *b) {
  const struct erf_anchor_mapping *anchor_map_a = (const struct erf_anchor_mapping*) a ;
  const struct erf_anchor_mapping *anchor_map_b = (const struct erf_anchor_mapping*) b ;

  return (anchor_map_a->host_id) == (anchor_map_b->host_id) &&
    (anchor_map_a->anchor_id & ERF_EXT_HDR_TYPE_ANCHOR_ID) == (anchor_map_b->anchor_id & ERF_EXT_HDR_TYPE_ANCHOR_ID);
}

static void erf_anchor_mapping_destroy(void *key) {
  struct erf_anchor_mapping *anchor_map = (struct erf_anchor_mapping*) key;

  if(anchor_map->comment != NULL) {
    g_free(anchor_map->comment);
    anchor_map->comment = NULL;
  }
  g_free(anchor_map);
  anchor_map = NULL;
}

static gboolean erf_if_mapping_equal(const void *a, const void *b)
{
  const struct erf_if_mapping *if_map_a = (const struct erf_if_mapping*) a;
  const struct erf_if_mapping *if_map_b = (const struct erf_if_mapping*) b;

  return if_map_a->source_id == if_map_b->source_id && if_map_a->host_id == if_map_b->host_id;
}

static unsigned erf_if_mapping_hash(const void *key)
{
  const struct erf_if_mapping *if_map = (const struct erf_if_mapping*) key;

  return (((unsigned) if_map->host_id) << 16) | if_map->source_id;
}

static void erf_if_mapping_destroy(void *key)
{
  int i = 0;
  struct erf_if_mapping *if_map = (struct erf_if_mapping*) key;

  for (i = 0; i < ERF_MAX_INTERFACES; i++) {
    g_free(if_map->interfaces[i].name);
    g_free(if_map->interfaces[i].descr);
  }

  g_free(if_map->module_filter_str);
  g_free(if_map);
}

static struct erf_if_mapping* erf_if_mapping_create(uint64_t host_id, uint8_t source_id)
{
  int i = 0;
  struct erf_if_mapping *if_map = NULL;

  if_map = g_new0(struct erf_if_mapping, 1);

  if_map->host_id = host_id;
  if_map->source_id = source_id;

  for (i = 0; i < ERF_MAX_INTERFACES; i++) {
    if_map->interfaces[i].if_index = -1;
    if_map->interfaces[i].stream_num = -1;
  }

  if_map->module_fcs_len = -1;
  if_map->module_snaplen = (uint32_t) -1;
  /* everything else 0 by g_malloc0*/

  return if_map;
}


erf_t *erf_priv_create(void)
{
  erf_t *erf_priv;

  erf_priv = g_new(erf_t, 1);
  erf_priv->anchor_map = g_hash_table_new_full(erf_anchor_mapping_hash, erf_anchor_mapping_equal, erf_anchor_mapping_destroy, NULL);
  erf_priv->if_map = g_hash_table_new_full(erf_if_mapping_hash, erf_if_mapping_equal, erf_if_mapping_destroy, NULL);
  erf_priv->implicit_host_id = ERF_META_HOST_ID_IMPLICIT;
  erf_priv->capture_gentime = 0;
  erf_priv->host_gentime = 0;

  return erf_priv;
}

erf_t* erf_priv_free(erf_t* erf_priv)
{
  if (erf_priv)
  {
    g_hash_table_destroy(erf_priv->anchor_map);
    g_hash_table_destroy(erf_priv->if_map);
    g_free(erf_priv);
  }

  return NULL;
}

static void erf_dump_priv_free(erf_dump_t *dump_priv) {
  if(dump_priv) {
    if(dump_priv->periodic_sections) {
      g_ptr_array_free(dump_priv->periodic_sections, true);
    }
    if(dump_priv->periodic_extra_ehdrs) {
      g_array_free(dump_priv->periodic_extra_ehdrs, true);
    }
    if(dump_priv->user_comment_ptr) {
      g_free(dump_priv->user_comment_ptr);
    }

    g_free(dump_priv->rand);

    g_free(dump_priv);
  }

}

static void erf_meta_section_free(void *data) {
  struct erf_meta_section *section_ptr = (struct erf_meta_section*) data;
  if (section_ptr) {
    g_ptr_array_free(section_ptr->tags, true);
    section_ptr->tags = NULL;
  }
  g_free(section_ptr);
}

static void erf_meta_tag_free(void *data) {
  struct erf_meta_tag *tag_ptr = (struct erf_meta_tag*) data;
  if (tag_ptr) {
    g_free(tag_ptr->value);
    tag_ptr->value = NULL;
  }
  g_free(tag_ptr);
}


static bool erf_dump_finish(struct wtap_dumper *wdh, int *err, char **err_info _U_) {
  erf_dump_t *dump_priv = (erf_dump_t*)wdh->priv;
  bool ret = true;

  /* Write final metadata record. There are some corner cases where we should
   * do this (file <1 second, last record was ERF_TYPE_META with an out of date
   * comment) and there is no harm doing this always if we have already written
   * some metadata. */
  if(dump_priv->write_next_extra_meta) {
    if (!dump_priv->periodic_sections) {
      dump_priv->periodic_sections = g_ptr_array_new_with_free_func(erf_meta_section_free);
      if (dump_priv->prev_erf_type == ERF_TYPE_META && dump_priv->last_meta_periodic) {
        erf_comment_to_sections(wdh, ERF_META_SECTION_CAPTURE, 0, dump_priv->user_comment_ptr, dump_priv->periodic_sections);
      } else {
        /* If we get here, metadata record was not found in the first ~1 sec
         * but we have either a capture comment or a non-ERF file (see
         * erf_dump_open) */
        erf_wtap_info_to_sections(wdh, dump_priv->periodic_sections);
      }
    }

    if (!erf_write_meta_record(wdh, dump_priv, dump_priv->prev_frame_ts, dump_priv->periodic_sections, dump_priv->periodic_extra_ehdrs, err)) ret = false;
  }

  /* Clean up */
  erf_dump_priv_free(dump_priv);
  /* Avoid double freeing by setting it to NULL*/
  wdh->priv = NULL;

  return ret;

}

static void
erf_free_data(void *data, void *user_data _U_)
{
    g_free(data);
}


extern wtap_open_return_val erf_open(wtap *wth, int *err, char **err_info)
{
  int              i, n, records_for_erf_check = RECORDS_FOR_ERF_CHECK;
  int              valid_prev                  = 0;
  char            *s;
  erf_timestamp_t  prevts,ts;
  erf_header_t     header;
  uint32_t         mc_hdr;
  struct erf_eth_hdr eth_hdr;
  uint32_t         packet_size;
  uint16_t         rlen;
  uint64_t         erf_ext_header;
  unsigned         erf_ext_header_size = (unsigned)sizeof(erf_ext_header);
  uint8_t          type;

  prevts = 0;

  /* number of records to scan before deciding if this really is ERF */
  if ((s = getenv("ERF_RECORDS_TO_CHECK")) != NULL) {
    if (ws_strtoi32(s, NULL, &n) && n >= 0 && n < 101) {
      records_for_erf_check = n;
    }
  }

  /*
   * ERF is a little hard because there's no magic number; we look at
   * the first few records and see if they look enough like ERF
   * records.
   */

  for (i = 0; i < records_for_erf_check; i++) {  /* records_for_erf_check */

    if (!wtap_read_bytes_or_eof(wth->fh,&header,erf_header_size,err,err_info)) {
      if (*err == 0) {
        /* EOF - all records have been successfully checked, accept the file */
        break;
      }
      if (*err == WTAP_ERR_SHORT_READ) {
        /* ERF header too short accept the file,
           only if the very first records have been successfully checked */
        if (i < MIN_RECORDS_FOR_ERF_CHECK) {
          return WTAP_OPEN_NOT_MINE;
        } else {
          /* BREAK, the last record is too short, and will be ignored */
          break;
        }
      } else {
        return WTAP_OPEN_ERROR;
      }
    }

    rlen=g_ntohs(header.rlen);

    /* fail on invalid record type, invalid rlen, timestamps decreasing, or incrementing too far */

    /* Test valid rlen >= 16 */
    if (rlen < 16) {
      return WTAP_OPEN_NOT_MINE;
    }

    packet_size = rlen - erf_header_size;
    if (packet_size > WTAP_MAX_PACKET_SIZE_STANDARD) {
      /*
       * Probably a corrupt capture file or a file that's not an ERF file
       * but that passed earlier tests.
       */
      return WTAP_OPEN_NOT_MINE;
    }

    /* Skip PAD records, timestamps may not be set */
    if ((header.type & 0x7F) == ERF_TYPE_PAD) {
      if (!wtap_read_bytes(wth->fh, NULL, packet_size, err, err_info)) {
        if (*err != WTAP_ERR_SHORT_READ) {
          /* A real error */
          return WTAP_OPEN_ERROR;
        }
        /* ERF record too short, accept the file,
           only if the very first records have been successfully checked */
        if (i < MIN_RECORDS_FOR_ERF_CHECK) {
          return WTAP_OPEN_NOT_MINE;
        }
      }
      continue;
    }

    /* ERF Type 0 is reserved for ancient legacy records which are not supported, probably not ERF */
    if ((header.type & 0x7F) == 0) {
      return WTAP_OPEN_NOT_MINE;
    }

    /* fail on decreasing timestamps */
    if ((ts = pletoh64(&header.ts)) < prevts) {
      /* reassembled AALx records may not be in time order, also records are not in strict time order between physical interfaces, so allow 1 sec fudge */
      if ( ((prevts-ts)>>32) > 1 ) {
        return WTAP_OPEN_NOT_MINE;
      }
    }

    /* Check to see if timestamp increment is > 1 year */
    if ( (valid_prev) && (ts > prevts) && (((ts-prevts)>>32) > 3600*24*365) ) {
      return WTAP_OPEN_NOT_MINE;
    }

    prevts = ts;

    /* Read over the extension headers */
    type = header.type;
    while (type & 0x80){
      if (!wtap_read_bytes(wth->fh,&erf_ext_header,erf_ext_header_size,err,err_info)) {
        if (*err == WTAP_ERR_SHORT_READ) {
          /* Extension header missing, not an ERF file */
          return WTAP_OPEN_NOT_MINE;
        }
        return WTAP_OPEN_ERROR;
      }
      if (packet_size < erf_ext_header_size)
        return WTAP_OPEN_NOT_MINE;
      packet_size -= erf_ext_header_size;
      memcpy(&type, &erf_ext_header, sizeof(type));
    }


    /* Read over MC or ETH subheader */
    switch(header.type & 0x7F) {
      case ERF_TYPE_MC_HDLC:
      case ERF_TYPE_MC_RAW:
      case ERF_TYPE_MC_ATM:
      case ERF_TYPE_MC_RAW_CHANNEL:
      case ERF_TYPE_MC_AAL5:
      case ERF_TYPE_MC_AAL2:
      case ERF_TYPE_COLOR_MC_HDLC_POS:
      case ERF_TYPE_AAL2: /* not an MC type but has a similar 'AAL2 ext' header */
        if (!wtap_read_bytes(wth->fh,&mc_hdr,erf_mc_header_size,err,err_info)) {
          if (*err == WTAP_ERR_SHORT_READ) {
            /* Subheader missing, not an ERF file */
            return WTAP_OPEN_NOT_MINE;
          }
          return WTAP_OPEN_ERROR;
        }
        if (packet_size < erf_mc_header_size)
          return WTAP_OPEN_NOT_MINE;
        packet_size -= erf_mc_header_size;
        break;
      case ERF_TYPE_ETH:
      case ERF_TYPE_COLOR_ETH:
      case ERF_TYPE_DSM_COLOR_ETH:
      case ERF_TYPE_COLOR_HASH_ETH:
        if (!wtap_read_bytes(wth->fh,&eth_hdr,erf_eth_hdr_size,err,err_info)) {
          if (*err == WTAP_ERR_SHORT_READ) {
            /* Subheader missing, not an ERF file */
            return WTAP_OPEN_NOT_MINE;
          }
          return WTAP_OPEN_ERROR;
        }
        if (packet_size < erf_eth_hdr_size)
          return WTAP_OPEN_NOT_MINE;
        packet_size -= erf_eth_hdr_size;
        break;
      default:
        break;
    }

    if (!wtap_read_bytes(wth->fh, NULL, packet_size, err, err_info)) {
      if (*err != WTAP_ERR_SHORT_READ) {
        /* A real error */
        return WTAP_OPEN_ERROR;
      }
      /* ERF record too short, accept the file,
         only if the very first records have been successfully checked */
      if (i < MIN_RECORDS_FOR_ERF_CHECK) {
        return WTAP_OPEN_NOT_MINE;
      }
    }

    valid_prev = 1;

  } /* records_for_erf_check */

  if (file_seek(wth->fh, 0L, SEEK_SET, err) == -1) {   /* rewind */
    return WTAP_OPEN_ERROR;
  }

  /* This is an ERF file */
  wth->file_type_subtype = erf_file_type_subtype;
  wth->snapshot_length = 0;     /* not available in header, only in frame */

  /*
   * Use the encapsulation for ERF records.
   */
  wth->file_encap = WTAP_ENCAP_ERF;

  wth->subtype_read = erf_read;
  wth->subtype_seek_read = erf_seek_read;
  wth->subtype_close = erf_close;
  wth->file_tsprec = WTAP_TSPREC_NSEC;

  wth->priv = erf_priv_create();

  return WTAP_OPEN_MINE;
}

/* Read the next packet */
static bool erf_read(wtap *wth, wtap_rec *rec,
                         int *err, char **err_info, int64_t *data_offset)
{
  erf_header_t erf_header;
  uint32_t     packet_size, bytes_read;
  GPtrArray *anchor_mappings_to_update;

  *data_offset = file_tell(wth->fh);

  anchor_mappings_to_update = g_ptr_array_new_with_free_func(erf_anchor_mapping_destroy);

  do {
    if (!erf_read_header(wth, wth->fh, rec, &erf_header,
                         err, err_info, &bytes_read, &packet_size,
                         anchor_mappings_to_update)) {
      g_ptr_array_free(anchor_mappings_to_update, true);
      return false;
    }

    if (!wtap_read_packet_bytes(wth->fh, &rec->data, packet_size, err, err_info)) {
      g_ptr_array_free(anchor_mappings_to_update, true);
      return false;
    }

    /*
     * If Provenance metadata record, frame buffer could hold the meta erf tags.
     * It can also contain per packet comments which can be associated to another
     * frame.
     */
    if ((erf_header.type & 0x7F) == ERF_TYPE_META && packet_size > 0)
    {
      if (populate_summary_info((erf_t*) wth->priv, wth, rec, packet_size, anchor_mappings_to_update, err, err_info) < 0) {
        g_ptr_array_free(anchor_mappings_to_update, true);
        return false;
      }
    }

  } while ( erf_header.type == ERF_TYPE_PAD );

  g_ptr_array_free(anchor_mappings_to_update, true);

  return true;
}

static bool erf_seek_read(wtap *wth, int64_t seek_off,
                              wtap_rec *rec,
                              int *err, char **err_info)
{
  erf_header_t erf_header;
  uint32_t     packet_size;
  GPtrArray *anchor_mappings_to_update;

  if (file_seek(wth->random_fh, seek_off, SEEK_SET, err) == -1)
    return false;

  anchor_mappings_to_update = g_ptr_array_new_with_free_func(erf_anchor_mapping_destroy);

  do {
    if (!erf_read_header(wth, wth->random_fh, rec, &erf_header,
                         err, err_info, NULL, &packet_size, anchor_mappings_to_update)) {
      g_ptr_array_free(anchor_mappings_to_update, true);
      return false;
    }
  } while ( erf_header.type == ERF_TYPE_PAD );

  g_ptr_array_free(anchor_mappings_to_update, true);

  return wtap_read_packet_bytes(wth->random_fh, &rec->data, packet_size,
                                err, err_info);
}

static struct erf_anchor_mapping* erf_find_anchor_mapping(erf_t *priv,
    uint64_t host_id,
    uint64_t anchor_id)
{
  struct erf_anchor_mapping mapping = {
    host_id,
    anchor_id,
    0,
    NULL
  };

  if (!priv) {
    return NULL;
  }

  return (struct erf_anchor_mapping*)g_hash_table_lookup(priv->anchor_map, &mapping);

}

static bool erf_read_header(wtap *wth, FILE_T fh,
                                wtap_rec *rec,
                                erf_header_t *erf_header,
                                int *err,
                                char **err_info,
                                uint32_t *bytes_read,
                                uint32_t *packet_size,
                                GPtrArray *anchor_mappings_to_update)
{
  union wtap_pseudo_header *pseudo_header = &rec->rec_header.packet_header.pseudo_header;
  uint8_t  erf_exhdr[8];
  uint64_t erf_exhdr_sw;
  uint8_t  type    = 0;
  uint32_t mc_hdr;
  uint32_t aal2_hdr;
  struct wtap_erf_eth_hdr eth_hdr;
  uint32_t skiplen = 0;
  int     i       = 0;
  int     max     = array_length(pseudo_header->erf.ehdr_list);
  erf_t *priv = (erf_t*)wth->priv;
  int    interface_id;

  uint64_t host_id  = ERF_META_HOST_ID_IMPLICIT;
  uint8_t source_id = 0;
  uint8_t if_num    = 0;
  bool host_id_found = false;

  if (!wtap_read_bytes_or_eof(fh, erf_header, sizeof(*erf_header), err, err_info)) {
    return false;
  }
  if (bytes_read != NULL) {
    *bytes_read = sizeof(*erf_header);
  }

  *packet_size =  g_ntohs(erf_header->rlen) - (uint32_t)sizeof(*erf_header);

  if (*packet_size > WTAP_MAX_PACKET_SIZE_STANDARD) {
    /*
     * Probably a corrupt capture file; don't blow up trying
     * to allocate space for an immensely-large packet.
     */
    *err = WTAP_ERR_BAD_FILE;
    *err_info = ws_strdup_printf("erf: File has %u-byte packet, bigger than maximum of %u",
                                *packet_size, WTAP_MAX_PACKET_SIZE_STANDARD);
    return false;
  }

  if (*packet_size == 0) {
    /* If this isn't a pad record, it's a corrupt packet; bail out */
    if ((erf_header->type & 0x7F) != ERF_TYPE_PAD) {
      *err = WTAP_ERR_BAD_FILE;
      *err_info = g_strdup("erf: File has 0 byte packet");

      return false;
    }
  }

  {
    uint64_t ts = pletoh64(&erf_header->ts);

    /*if ((erf_header->type & 0x7f) != ERF_TYPE_META || wth->file_type_subtype != file_type_subtype_erf) {*/
      rec->rec_type = REC_TYPE_PACKET;
      rec->block = wtap_block_create(WTAP_BLOCK_PACKET);
    /*
     * XXX: ERF_TYPE_META records should ideally be FT_SPECIFIC for display
     * purposes, but currently ft_specific_record_phdr clashes with erf_mc_phdr
     * and the pcapng dumper assumes it is a pcapng block type. Ideally we
     * would register a block handler with pcapng and write out the closest
     * pcapng block, or a custom block/Provenance record.
     *
     */
#if 0
    } else {
      /*
       * TODO: how to identify, distinguish and timestamp events?
       * What to do about ENCAP_ERF in pcap/pcapng? Filetype dissector is
       * chosen by wth->file_type_subtype?
       */
      /* For now just treat all Provenance records as reports */
      rec->rec_type = REC_TYPE_FT_SPECIFIC_REPORT;
      rec->block = wtap_block_create(WTAP_BLOCK_FT_SPECIFIC_REPORT);
      /* XXX: phdr ft_specific_record_phdr? */
    }
#endif
    rec->presence_flags = WTAP_HAS_TS|WTAP_HAS_CAP_LEN|WTAP_HAS_INTERFACE_ID;
    rec->ts.secs = (long) (ts >> 32);
    ts  = ((ts & 0xffffffff) * 1000 * 1000 * 1000);
    ts += (ts & 0x80000000) << 1; /* rounding */
    rec->ts.nsecs = ((int) (ts >> 32));
    if (rec->ts.nsecs >= 1000000000) {
      rec->ts.nsecs -= 1000000000;
      rec->ts.secs += 1;
    }

    if_num = erf_interface_id_from_flags(erf_header->flags);
  }

  /* Copy the ERF pseudo header */
  memset(&pseudo_header->erf, 0, sizeof(pseudo_header->erf));
  pseudo_header->erf.phdr.ts = pletoh64(&erf_header->ts);
  pseudo_header->erf.phdr.type = erf_header->type;
  pseudo_header->erf.phdr.flags = erf_header->flags;
  pseudo_header->erf.phdr.rlen = g_ntohs(erf_header->rlen);
  pseudo_header->erf.phdr.lctr = g_ntohs(erf_header->lctr);
  pseudo_header->erf.phdr.wlen = g_ntohs(erf_header->wlen);

  /* Copy the ERF extension header into the pseudo header */
  type = erf_header->type;
  while (type & 0x80){
    if (!wtap_read_bytes(fh, &erf_exhdr, sizeof(erf_exhdr),
                         err, err_info))
      return false;
    if (bytes_read != NULL)
      *bytes_read += (uint32_t)sizeof(erf_exhdr);
    *packet_size -=  (uint32_t)sizeof(erf_exhdr);
    skiplen += (uint32_t)sizeof(erf_exhdr);
    erf_exhdr_sw = pntoh64(erf_exhdr);
    if (i < max)
      memcpy(&pseudo_header->erf.ehdr_list[i].ehdr, &erf_exhdr_sw, sizeof(erf_exhdr_sw));
    type = erf_exhdr[0];

    /*
     * XXX: Only want first Source ID and Host ID, and want to preserve HID n SID 0 (see
     * erf_populate_interface)
     */
    switch (type & 0x7FU) {
      case ERF_EXT_HDR_TYPE_HOST_ID:
        if (!host_id_found)
          host_id = erf_exhdr_sw & ERF_EHDR_HOST_ID_MASK;

        host_id_found = true;
        /* Fall through */
      case ERF_EXT_HDR_TYPE_FLOW_ID:
        /* Source ID is present in both Flow ID and Host ID extension headers */
        if (!source_id)
          source_id = (erf_exhdr_sw >> 48) & 0xff;
        break;
      case ERF_EXT_HDR_TYPE_ANCHOR_ID:
        /* handled below*/
        break;
    }
    i++;
  }

  interface_id = erf_populate_interface((erf_t*) wth->priv, wth, pseudo_header, host_id, source_id, if_num, err, err_info);
  if (interface_id < 0) {
    return false;
  }
  rec->rec_header.packet_header.interface_id = (unsigned) interface_id;

  /* Try to find comment links using Anchor ID. Done here after we found the first Host ID and have updated the implicit Host ID. */
  erf_update_anchors_from_header(priv, rec, pseudo_header, host_id, anchor_mappings_to_update);

  switch (erf_header->type & 0x7F) {
    case ERF_TYPE_IPV4:
    case ERF_TYPE_IPV6:
    case ERF_TYPE_RAW_LINK:
    case ERF_TYPE_INFINIBAND:
    case ERF_TYPE_INFINIBAND_LINK:
    case ERF_TYPE_META:
    case ERF_TYPE_OPA_SNC:
    case ERF_TYPE_OPA_9B:
#if 0
      {
        rec->rec_header.packet_header.len =  g_htons(erf_header->wlen);
        rec->rec_header.packet_header.caplen = g_htons(erf_header->wlen);
      }
      return true;
#endif
      break;
    case ERF_TYPE_PAD:
    case ERF_TYPE_HDLC_POS:
    case ERF_TYPE_COLOR_HDLC_POS:
    case ERF_TYPE_DSM_COLOR_HDLC_POS:
    case ERF_TYPE_COLOR_HASH_POS:
    case ERF_TYPE_ATM:
    case ERF_TYPE_AAL5:
      break;

    case ERF_TYPE_ETH:
    case ERF_TYPE_COLOR_ETH:
    case ERF_TYPE_DSM_COLOR_ETH:
    case ERF_TYPE_COLOR_HASH_ETH:
      if (!wtap_read_bytes(fh, &eth_hdr, sizeof(eth_hdr), err, err_info))
        return false;
      if (bytes_read != NULL)
        *bytes_read += (uint32_t)sizeof(eth_hdr);
      *packet_size -=  (uint32_t)sizeof(eth_hdr);
      skiplen += (uint32_t)sizeof(eth_hdr);
      pseudo_header->erf.subhdr.eth_hdr = eth_hdr;
      break;

    case ERF_TYPE_MC_HDLC:
    case ERF_TYPE_MC_RAW:
    case ERF_TYPE_MC_ATM:
    case ERF_TYPE_MC_RAW_CHANNEL:
    case ERF_TYPE_MC_AAL5:
    case ERF_TYPE_MC_AAL2:
    case ERF_TYPE_COLOR_MC_HDLC_POS:
      if (!wtap_read_bytes(fh, &mc_hdr, sizeof(mc_hdr), err, err_info))
        return false;
      if (bytes_read != NULL)
        *bytes_read += (uint32_t)sizeof(mc_hdr);
      *packet_size -=  (uint32_t)sizeof(mc_hdr);
      skiplen += (uint32_t)sizeof(mc_hdr);
      pseudo_header->erf.subhdr.mc_hdr = g_ntohl(mc_hdr);
      break;

    case ERF_TYPE_AAL2:
      if (!wtap_read_bytes(fh, &aal2_hdr, sizeof(aal2_hdr), err, err_info))
        return false;
      if (bytes_read != NULL)
        *bytes_read += (uint32_t)sizeof(aal2_hdr);
      *packet_size -=  (uint32_t)sizeof(aal2_hdr);
      skiplen += (uint32_t)sizeof(aal2_hdr);
      pseudo_header->erf.subhdr.aal2_hdr = g_ntohl(aal2_hdr);
      break;

    case ERF_TYPE_IP_COUNTER:
    case ERF_TYPE_TCP_FLOW_COUNTER:
      /* unsupported, continue with default: */
    default:
      /* let the dissector dissect as unknown record type for forwards compatibility */
      break;
  }

  {
    rec->rec_header.packet_header.len = g_ntohs(erf_header->wlen);
    rec->rec_header.packet_header.caplen = MIN( g_ntohs(erf_header->wlen),
                        g_ntohs(erf_header->rlen) - (uint32_t)sizeof(*erf_header) - skiplen );
  }

  if (*packet_size > WTAP_MAX_PACKET_SIZE_STANDARD) {
    /*
     * Probably a corrupt capture file; don't blow up trying
     * to allocate space for an immensely-large packet.
     */
    *err = WTAP_ERR_BAD_FILE;
    *err_info = ws_strdup_printf("erf: File has %u-byte packet, bigger than maximum of %u",
                                *packet_size, WTAP_MAX_PACKET_SIZE_STANDARD);
    return false;
  }

  return true;
}

static int wtap_wtap_encap_to_erf_encap(int encap)
{
  unsigned int i;
  for(i = 0; i < NUM_ERF_ENCAPS; i++){
    if(erf_to_wtap_map[i].wtap_encap_value == encap)
      return erf_to_wtap_map[i].erf_encap_value;
  }
  return -1;
}

static bool erf_write_phdr(wtap_dumper *wdh, int encap, const union wtap_pseudo_header *pseudo_header, int * err)
{
  uint8_t erf_hdr[sizeof(struct erf_mc_phdr)];
  uint8_t erf_subhdr[sizeof(union erf_subhdr)];
  uint8_t ehdr[8*MAX_ERF_EHDR];
  size_t size        = 0;
  size_t subhdr_size = 0;
  int    i           = 0;
  uint8_t has_more    = 0;

  switch(encap){
    case WTAP_ENCAP_ERF:
      memset(&erf_hdr, 0, sizeof(erf_hdr));
      phtolell(&erf_hdr[0], pseudo_header->erf.phdr.ts);
      erf_hdr[8] = pseudo_header->erf.phdr.type;
      erf_hdr[9] = pseudo_header->erf.phdr.flags;
      phtons(&erf_hdr[10], pseudo_header->erf.phdr.rlen);
      phtons(&erf_hdr[12], pseudo_header->erf.phdr.lctr);
      phtons(&erf_hdr[14], pseudo_header->erf.phdr.wlen);
      size = sizeof(struct erf_phdr);

      switch(pseudo_header->erf.phdr.type & 0x7F) {
        case ERF_TYPE_MC_HDLC:
        case ERF_TYPE_MC_RAW:
        case ERF_TYPE_MC_ATM:
        case ERF_TYPE_MC_RAW_CHANNEL:
        case ERF_TYPE_MC_AAL5:
        case ERF_TYPE_MC_AAL2:
        case ERF_TYPE_COLOR_MC_HDLC_POS:
          phtonl(&erf_subhdr[0], pseudo_header->erf.subhdr.mc_hdr);
          subhdr_size += (int)sizeof(struct erf_mc_hdr);
          break;
        case ERF_TYPE_AAL2:
          phtonl(&erf_subhdr[0], pseudo_header->erf.subhdr.aal2_hdr);
          subhdr_size += (int)sizeof(struct erf_aal2_hdr);
          break;
        case ERF_TYPE_ETH:
        case ERF_TYPE_COLOR_ETH:
        case ERF_TYPE_DSM_COLOR_ETH:
        case ERF_TYPE_COLOR_HASH_ETH:
          memcpy(&erf_subhdr[0], &pseudo_header->erf.subhdr.eth_hdr, sizeof pseudo_header->erf.subhdr.eth_hdr);
          subhdr_size += erf_eth_hdr_size;
          break;
        default:
          break;
      }
      break;
    default:
      return false;

  }
  if (!wtap_dump_file_write(wdh, erf_hdr, size, err))
    return false;

  /*write out up to MAX_ERF_EHDR extension headers*/
  has_more = pseudo_header->erf.phdr.type & 0x80;
  if(has_more){  /*we have extension headers*/
    do{
      phtonll(ehdr+(i*8), pseudo_header->erf.ehdr_list[i].ehdr);
      if(i == MAX_ERF_EHDR-1) ehdr[i*8] = ehdr[i*8] & 0x7F;
      has_more = ehdr[i*8] & 0x80;
      i++;
    }while(has_more && i < MAX_ERF_EHDR);
    if (!wtap_dump_file_write(wdh, ehdr, 8*i, err))
      return false;
  }

  if(!wtap_dump_file_write(wdh, erf_subhdr, subhdr_size, err))
    return false;

  return true;
}


static void erf_dump_priv_init_gen_time(erf_dump_t *dump_priv) {
  int64_t real_time;

  real_time = g_get_real_time();
  /* Convert TimeVal to ERF timestamp */
  dump_priv->gen_time = ((real_time / G_USEC_PER_SEC) << 32) + ((real_time % G_USEC_PER_SEC) << 32) / 1000 / 1000;
}


static bool erf_write_wtap_option_to_capture_tag(wtap_block_t block _U_,
    unsigned option_id,
    wtap_opttype_e option_type _U_,
    wtap_optval_t *optval,
    void* user_data) {

  struct erf_meta_section *section_ptr = (struct erf_meta_section*) user_data;
  struct erf_meta_tag *tag_ptr = NULL;

  tag_ptr = g_new0(struct erf_meta_tag, 1);

  switch(option_id) {
    case OPT_SHB_USERAPPL:
      tag_ptr->type = ERF_META_TAG_app_name;
      tag_ptr->value = (uint8_t*)g_strdup(optval->stringval);
      tag_ptr->length = (uint16_t)strlen((char*)tag_ptr->value);
      break;
    case OPT_COMMENT:
      tag_ptr->type = ERF_META_TAG_comment;
      tag_ptr->value = (uint8_t*)g_strdup(optval->stringval);
      tag_ptr->length = (uint16_t)strlen((char*)tag_ptr->value);
      break;
    default:
      erf_meta_tag_free(tag_ptr);
      tag_ptr = NULL;
      break;
  }

  if (tag_ptr)
    g_ptr_array_add(section_ptr->tags, tag_ptr);

  return true; /* we always succeed */
}

static bool erf_write_wtap_option_to_host_tag(wtap_block_t block _U_,
    unsigned option_id,
    wtap_opttype_e option_type _U_,
    wtap_optval_t *optval,
    void* user_data) {

  struct erf_meta_section *section_ptr = (struct erf_meta_section*) user_data;
  struct erf_meta_tag *tag_ptr = NULL;

  tag_ptr = g_new0(struct erf_meta_tag, 1);

  switch(option_id) {
    case OPT_SHB_HARDWARE:
      tag_ptr->type = ERF_META_TAG_cpu;
      tag_ptr->value = (uint8_t*)g_strdup(optval->stringval);
      tag_ptr->length = (uint16_t)strlen((char*)tag_ptr->value);
      break;
    case OPT_SHB_OS:
      tag_ptr->type = ERF_META_TAG_os;
      tag_ptr->value = (uint8_t*)g_strdup(optval->stringval);
      tag_ptr->length = (uint16_t)strlen((char*)tag_ptr->value);
      break;
    default:
      erf_meta_tag_free(tag_ptr);
      tag_ptr = NULL;
      break;
  }

  if (tag_ptr)
    g_ptr_array_add(section_ptr->tags, tag_ptr);

  return true; /* we always succeed */
}

static bool erf_write_wtap_option_to_interface_tag(wtap_block_t block _U_,
    unsigned option_id,
    wtap_opttype_e option_type _U_,
    wtap_optval_t *optval,
    void* user_data) {

  struct erf_meta_section *section_ptr = (struct erf_meta_section*) user_data;
  struct erf_meta_tag *tag_ptr = NULL;

  tag_ptr = g_new0(struct erf_meta_tag, 1);

  switch(option_id) {
    case OPT_COMMENT:
      tag_ptr->type = ERF_META_TAG_comment;
      tag_ptr->value = (uint8_t*)g_strdup(optval->stringval);
      tag_ptr->length = (uint16_t)strlen((char*)tag_ptr->value);
      break;
    case OPT_IDB_NAME:
      tag_ptr->type = ERF_META_TAG_name;
      tag_ptr->value = (uint8_t*)g_strdup(optval->stringval);
      tag_ptr->length = (uint16_t)strlen((char*)tag_ptr->value);
      break;
    case OPT_IDB_DESCRIPTION:
      tag_ptr->type = ERF_META_TAG_descr;
      tag_ptr->value = (uint8_t*)g_strdup(optval->stringval);
      tag_ptr->length = (uint16_t)strlen((char*)tag_ptr->value);
      break;
    case OPT_IDB_OS:
      tag_ptr->type = ERF_META_TAG_os;
      tag_ptr->value = (uint8_t*)g_strdup(optval->stringval);
      tag_ptr->length = (uint16_t)strlen((char*)tag_ptr->value);
      break;
    case OPT_IDB_TSOFFSET:
      tag_ptr->type = ERF_META_TAG_ts_offset;
      tag_ptr->length = 8;
      tag_ptr->value = (uint8_t*)g_malloc(sizeof(optval->uint64val));
      /* convert to relative ERF timestamp */
      phtolell(tag_ptr->value, optval->uint64val << 32);
      break;
    case OPT_IDB_SPEED:
      tag_ptr->type = ERF_META_TAG_if_speed;
      tag_ptr->length = 8;
      tag_ptr->value = (uint8_t*)g_malloc(sizeof(optval->uint64val));
      phtonll(tag_ptr->value, optval->uint64val);
      break;
    case OPT_IDB_IP4ADDR:
      tag_ptr->type = ERF_META_TAG_if_ipv4;
      tag_ptr->length = 4;
      tag_ptr->value = (uint8_t*)g_malloc(sizeof(optval->ipv4val));
      memcpy(tag_ptr->value, &optval->ipv4val, sizeof(optval->ipv4val));
      break;
    case OPT_IDB_IP6ADDR:
      tag_ptr->type = ERF_META_TAG_if_ipv6;
      tag_ptr->length = 16;
      tag_ptr->value = (uint8_t*)g_malloc(sizeof(optval->ipv6val));
      memcpy(tag_ptr->value, &optval->ipv6val, sizeof(optval->ipv6val));
      break;
    case OPT_IDB_FILTER:
      {
        if_filter_opt_t *filter;
        filter = &optval->if_filterval;
        tag_ptr->type = 0xF800;
        if(filter->type == if_filter_pcap) {
          tag_ptr->type = ERF_META_TAG_filter;
          tag_ptr->value = (uint8_t*)g_strdup(filter->data.filter_str);
          tag_ptr->length = (uint16_t)strlen((char*)tag_ptr->value);
        }
      }
      break;
    case OPT_IDB_FCSLEN:
      tag_ptr->type = ERF_META_TAG_fcs_len;
      tag_ptr->length = 4;
      tag_ptr->value = (uint8_t*)g_malloc(tag_ptr->length);
      phtonl(tag_ptr->value, (uint32_t)optval->uint8val);
      break;
    /* TODO: Don't know what to do with these yet */
    case OPT_IDB_EUIADDR:
#if 0
      tag_ptr->type = ERF_META_TAG_if_eui;
      tag_ptr->length = 8;
      tag_ptr->value = (uint8_t*)g_malloc(sizeof(optval->eui64val));
      memcpy(tag_ptr->value, &optval->euival, sizeof(optval->eui64val));
      break;
#endif
    case OPT_IDB_MACADDR:
#if 0
      tag_ptr->type = ERF_META_TAG_if_mac;
      tag_ptr->length = 6;
      /*value same format as pcapng (6-byte canonical, padded by write
       * function automatically to 32-bit boundary)*/
      tag_ptr->value = (uint8_t*)g_malloc(sizeof(optval->macval));
      memcpy(tag_ptr->value, &optval->macval, sizeof(optval->macval));
      break;
#endif
    case OPT_IDB_TSRESOL:
    case OPT_IDB_TZONE:
    /* Fall through */
    default:
      erf_meta_tag_free(tag_ptr);
      tag_ptr = NULL;
      break;
  }

  if (tag_ptr)
    g_ptr_array_add(section_ptr->tags, tag_ptr);

  return true; /* we always succeed */
}

static void erf_populate_section_length_by_tags(struct erf_meta_section *section_ptr) {
  unsigned i = 0;
  struct erf_meta_tag *tag_ptr;

  section_ptr->section_length = 8;

  for(;i < section_ptr->tags->len; i++) {
    tag_ptr = (struct erf_meta_tag*)g_ptr_array_index(section_ptr->tags, i);
    section_ptr->section_length += ERF_META_TAG_TOTAL_ALIGNED_LENGTH(tag_ptr->length);
  }
}

/**
 * @brief Converts a wtap_block_t block to ERF metadata sections
 * @param block a wtap_block_t block
 * @param sections pointer to a GPtrArray containing pointers to sections
 * @param section_type the pre-specified section_type
 * @param section_id Section ID to assign
 * @param func a wtap_block_foreach_func call back function to specify
 *             what needs to be done on the block
 * @return true if success, false if failed
 */
static bool erf_wtap_blocks_to_erf_sections(wtap_block_t block, GPtrArray *sections, uint16_t section_type, uint16_t section_id, wtap_block_foreach_func func) {

  if(!block || !sections || !func) {
    return false;
  }

  struct erf_meta_section *section_ptr;

  section_ptr = g_new(struct erf_meta_section, 1);
  section_ptr->tags = g_ptr_array_new_with_free_func(erf_meta_tag_free);
  section_ptr->type = section_type;
  section_ptr->section_id = section_id;

  wtap_block_foreach_option(block, func, (void*)section_ptr);
  erf_populate_section_length_by_tags(section_ptr);
  g_ptr_array_add(sections, section_ptr);

  return true;
}


static bool erf_meta_write_tag(wtap_dumper *wdh, struct erf_meta_tag *tag_ptr, int *err) {

  uint16_t data[2];
  unsigned pad = 0;
  /* we only need to pad up to 32 bits*/
  uint32_t padbuf = 0;

  pad = ERF_META_TAG_ALIGNED_LENGTH(tag_ptr->length) - tag_ptr->length;
  data[0] = g_htons(tag_ptr->type);
  data[1] = g_htons(tag_ptr->length);

  if(!wtap_dump_file_write(wdh, data, sizeof(data), err)) return false;

  if(!wtap_dump_file_write(wdh, tag_ptr->value, tag_ptr->length, err)) return false;

  if(pad) {
    if(!wtap_dump_file_write(wdh, &padbuf, pad, err)) return false;
  }

  return true;

}

static bool erf_meta_write_section(wtap_dumper *wdh, struct erf_meta_section *section_ptr, int *err) {

  struct erf_meta_tag *tag_ptr;
  unsigned i;
  uint16_t data[4];

  data[0] = g_htons(section_ptr->type);
  data[1] = g_htons(4); /*section header length*/
  data[2] = g_htons(section_ptr->section_id);
  data[3] = g_htons(section_ptr->section_length);

  if(!wtap_dump_file_write(wdh, data, sizeof(data), err)) return false;

  for(i = 0; i < section_ptr->tags->len; i++) {
    tag_ptr = (struct erf_meta_tag*)g_ptr_array_index(section_ptr->tags, i);
    if(!erf_meta_write_tag(wdh, tag_ptr, err)) return false;
  }

  return true;

}

static bool erf_wtap_info_to_sections(wtap_dumper *wdh, GPtrArray *sections) {
  wtap_block_t block;
  unsigned i = 0;

  block = g_array_index(wdh->shb_hdrs, wtap_block_t, 0);
  erf_wtap_blocks_to_erf_sections(block, sections, ERF_META_SECTION_CAPTURE, 0, erf_write_wtap_option_to_capture_tag);

  block = g_array_index(wdh->shb_hdrs, wtap_block_t, 0);
  erf_wtap_blocks_to_erf_sections(block, sections, ERF_META_SECTION_HOST, 0, erf_write_wtap_option_to_host_tag);

  /*TODO: support >4 interfaces by using more Source IDs. Affects more than this
   * function as need more metadata records. Just dump them all out for now. */
  for(i = 0; i < wdh->interface_data->len; i++) {
    block = g_array_index(wdh->interface_data, wtap_block_t, i);
    erf_wtap_blocks_to_erf_sections(block, sections, ERF_META_SECTION_INTERFACE, (int16_t)i+1, erf_write_wtap_option_to_interface_tag);
  }

  return true;
}

static bool erf_comment_to_sections(wtap_dumper *wdh _U_, uint16_t section_type, uint16_t section_id, char *comment, GPtrArray *sections){
  struct erf_meta_section *section_ptr;
  struct erf_meta_tag *comment_tag_ptr = NULL;
  struct erf_meta_tag *user_tag_ptr = NULL;
  const char *user = NULL;

  /* Generate the section */
  section_ptr = g_new(struct erf_meta_section, 1);
  section_ptr->type = section_type;
  section_ptr->section_id = section_id;
  section_ptr->tags = g_ptr_array_new_with_free_func(erf_meta_tag_free);

  /* Generate the comment tag */
  comment_tag_ptr = g_new(struct erf_meta_tag, 1);
  comment_tag_ptr->type = ERF_META_TAG_comment;
  /* XXX: if the comment has been cleared write the empty string (which
   * conveniently is all a zero length tag which means the value is
   * invalidated) */
  comment_tag_ptr->value = (uint8_t*)g_strdup(comment ? comment : "");
  comment_tag_ptr->length = (uint16_t)strlen((char*)comment_tag_ptr->value);
  g_ptr_array_add(section_ptr->tags, comment_tag_ptr);

  user = g_get_user_name();
  if (user) {
    /* Generate username tag */
    user_tag_ptr = g_new(struct erf_meta_tag, 1);
    user_tag_ptr->type = ERF_META_TAG_user;
    user_tag_ptr->value = (uint8_t*)g_strdup(user);
    user_tag_ptr->length = (uint16_t)strlen((char*)user_tag_ptr->value);
    g_ptr_array_add(section_ptr->tags, user_tag_ptr);
  }

  erf_populate_section_length_by_tags(section_ptr);

  g_ptr_array_add(sections, section_ptr);

  return true;
}

static uint64_t erf_get_random_anchor_id(erf_dump_t *dump_priv) {
  return (((uint64_t)g_rand_int(dump_priv->rand) << 32) | (uint64_t)g_rand_int(dump_priv->rand)) >> 16;
}

static uint64_t erf_metaid_ext_hdr(uint8_t exthdr_type, uint64_t id, uint8_t srcid_flags) {
  uint64_t ext_hdr;

  ext_hdr = id & ERF_EHDR_HOST_ID_MASK;
  ext_hdr |= ((uint64_t)srcid_flags) << 48;
  ext_hdr |= ((uint64_t)exthdr_type) << 56;

  return ext_hdr;
}
#define erf_host_id_ext_hdr(host_id, source_id) erf_metaid_ext_hdr(ERF_EXT_HDR_TYPE_HOST_ID, host_id, source_id)
#define erf_anchor_id_ext_hdr(anchor_id, flags) erf_metaid_ext_hdr(ERF_EXT_HDR_TYPE_ANCHOR_ID, anchor_id, flags)

static inline bool erf_add_ext_hdr_to_list(uint64_t ext_hdr, uint64_t comparison_mask, GArray *extra_ehdrs) {
  /* check for existing Host ID in set and add */
  unsigned i = 0;
  struct erf_ehdr ehdr_tmp;
  struct erf_ehdr *ehdr_ptr = NULL;

  if (!extra_ehdrs)
    return false;

  ext_hdr = ext_hdr & ~ERF_EHDR_MORE_EXTHDR_MASK;
  if (comparison_mask == 0)
    comparison_mask = UINT64_MAX;

  comparison_mask &= ~ERF_EHDR_MORE_EXTHDR_MASK;

  for (i = 0; i < extra_ehdrs->len; i++) {
    ehdr_ptr = &g_array_index(extra_ehdrs, struct erf_ehdr, i);
    /* Check if we already have this Host ID extension header */
    if (ext_hdr == (ehdr_ptr->ehdr & comparison_mask)) {
      return true;
    }
  }

  /* set more flag on last extension header */
  if (ehdr_ptr) {
    ehdr_ptr->ehdr |= ERF_EHDR_MORE_EXTHDR_MASK;
  }

  ehdr_tmp.ehdr = ext_hdr; /*more flag already cleared above*/
  g_array_append_val(extra_ehdrs, ehdr_tmp);

  return true;
}

static inline bool erf_append_ext_hdr_to_list(uint64_t ext_hdr, GArray *extra_ehdrs) {
  struct erf_ehdr ehdr_tmp;

  if (!extra_ehdrs)
    return false;

  ehdr_tmp.ehdr = ext_hdr & ~ERF_EHDR_MORE_EXTHDR_MASK;

  /* set more flag on last extension header */
  if (extra_ehdrs->len) {
    g_array_index(extra_ehdrs, struct erf_ehdr, extra_ehdrs->len - 1).ehdr |= ERF_EHDR_MORE_EXTHDR_MASK;
  }

  g_array_append_val(extra_ehdrs, ehdr_tmp);

  return true;
}

static bool erf_update_host_id_ext_hdrs_list(erf_dump_t *dump_priv, const union wtap_pseudo_header *pseudo_header, GArray *extra_ehdrs) {
  uint8_t type;
  uint8_t erf_type;
  int has_more;
  uint64_t hdr;
  int i = 0;
  uint8_t source_id = 0;
  uint64_t host_id = 0;
  bool host_id_found = false;

  if (!extra_ehdrs)
    return false;

  erf_type = pseudo_header->erf.phdr.type & 0x7f;
  has_more = pseudo_header->erf.phdr.type & 0x80;

  while (has_more && i < MAX_ERF_EHDR) {
    hdr = pseudo_header->erf.ehdr_list[i].ehdr;
    type = (uint8_t) (hdr >> 56);

    switch (type & 0x7f) {
      case ERF_EXT_HDR_TYPE_HOST_ID:
        host_id = hdr & ERF_EHDR_HOST_ID_MASK;
        source_id = (hdr >> 48) & 0xff;

        /* Don't add the wireshark Host ID Source ID 0 twice since we already add it to metadata records */
        if (host_id != dump_priv->host_id || source_id != 0)
          if (!erf_add_ext_hdr_to_list(hdr, 0, extra_ehdrs)) return false;

        if (!host_id_found) {
          /* XXX: Take the opportunity to update the implicit Host ID if we
           * don't know it yet. Ideally we should pass this through from the
           * reader as a custom option or similar. */
          if (erf_type == ERF_TYPE_META && ((hdr >> 48) & 0xff) > 0) {
            if (dump_priv->implicit_host_id == ERF_META_HOST_ID_IMPLICIT) {
              dump_priv->implicit_host_id = host_id;
            }
          }
        }

        host_id_found = true;
        break;
      case ERF_EXT_HDR_TYPE_FLOW_ID:
        if (source_id == 0) /* If no Host ID extension header use the first Source ID only */
          source_id = (hdr >> 48) & 0xff;
        break;
    }

    has_more = type & 0x80;
    i++;
  }

  /* Add Source ID with implicit Host ID if not found */
  if (!host_id_found) {
    uint64_t implicit_host_id = dump_priv->implicit_host_id == ERF_META_HOST_ID_IMPLICIT ? 0 : dump_priv->implicit_host_id;
    /* Don't add the wireshark Host ID Source ID 0 twice since we already add it to metadata records */
    if (implicit_host_id != dump_priv->host_id || source_id != 0)
      if (!erf_add_ext_hdr_to_list(erf_host_id_ext_hdr(implicit_host_id, source_id), 0, extra_ehdrs)) return false;
  }

  return true;
}

/**
 * Writes a metadata record with a randomly generated Anchor ID with the
 * user comment attached to its comment section, also updates the
 * modified frame header to include a Host ID extension header and
 * a Anchor ID extension header to link the records together.
 * @param wdh the wtap_dumper structure
 * @param dump_priv private data for the dump stream
 * @param rec record metadata from which to get user comment
 * @param mutable_hdr pseudo_header to update with Anchor ID for comment record
 * @param err the error value
 * @return A bool value to indicate whether the dump was successful
 */
static bool erf_write_anchor_meta_update_phdr(wtap_dumper *wdh, erf_dump_t *dump_priv, const wtap_rec *rec, union wtap_pseudo_header *mutable_hdr, int *err) {
  GArray *meta_ehdrs;
  GPtrArray* sections = NULL;
  uint8_t has_more;
  uint8_t i = 0;
  uint8_t ext_hdr_count = 0;
  uint8_t j = 0;
  uint64_t host_id_src_hdr = ERF_META_HOST_ID_IMPLICIT;
  uint64_t host_id_own_hdr = erf_host_id_ext_hdr(dump_priv->host_id, 0);
  uint64_t flow_id_hdr = 0;
  uint64_t anchor_id_hdr = 0;
  bool found_host_id = false;
  bool found_own_host_id = false;
  bool found_flow_id = false;
  int new_ext_hdrs = 0;
  uint8_t insert_idx = 0;
  uint8_t source_id = 0;
  bool ret = false;
  uint64_t implicit_host_id = dump_priv->implicit_host_id == ERF_META_HOST_ID_IMPLICIT ? 0 : dump_priv->implicit_host_id;
  char *pkt_comment;


  /*
   * There are 3 possible scenarios:
   * a. The record has a source Host ID but not our Host ID. We need to add our
   *    Host ID extension header then our Anchor ID extension header.
   * b. The record already has our Host ID extension header on it. We should
   *    insert the Anchor ID at the end of the list for that Host ID just
   *    before the next Host ID extension header.
   * c. The record has no Host ID extension header at all. We need to add the Host ID
   *    extension header making the Implicit Host ID explicit before we add our
   *    one to avoid claiming the packet was captured by us.
   */

  /*
   * Extract information from the packet extension header stack
   * 1. original source Host ID extension header.
   * 2. Anchor ID extension header insertion point (see b., above).
   * 3. Flow ID extension header so we can add it for reference to the metadata
   * record.
   * 4. Enough information to generate an explicit Host ID extension header if
   *    there wasn't one (see erf_get_source_from_header).
   */

  has_more = mutable_hdr->erf.phdr.type & 0x80;

  while (has_more && (i < MAX_ERF_EHDR)) {
    uint64_t hdr = mutable_hdr->erf.ehdr_list[i].ehdr;
    uint8_t type = (uint8_t) (hdr >> 56);

    switch (type & 0x7f) {
      case ERF_EXT_HDR_TYPE_HOST_ID:
        /* Set insertion point of anchor ID to be at end of Host ID list (i.e.
         * just before the next one). */
        if (found_own_host_id && !insert_idx)
          insert_idx = i;

        if ((hdr & ERF_EHDR_HOST_ID_MASK) == dump_priv->host_id){
          found_own_host_id = true;
        }

        if (!found_host_id)
          host_id_src_hdr = hdr;

        found_host_id = true;
        break;

      case ERF_EXT_HDR_TYPE_FLOW_ID:
        /*XXX: we only use this when making the implicit host id explicit,
         * otherwise we'd need to check the one in Host ID header too*/
        if (source_id == 0)
          source_id = (uint8_t)(hdr >> 48);

        if (!found_flow_id)
          flow_id_hdr = hdr;

        found_flow_id = true;
        break;
    }

    has_more = type & 0x80;
    i += 1;
  }

  ext_hdr_count = i;

  if (!insert_idx)
    insert_idx = i;

  /* Don't need to add our own Host ID twice if it is the same as the implicit*/
  if (!found_host_id && implicit_host_id == dump_priv->host_id) {
    found_own_host_id = true;
  }

  /*
   * Update the packet record pseudo_header with Anchor ID and extension header(s)
   */
  new_ext_hdrs = 1 /*anchor id*/ + (found_own_host_id?0:1) + (found_host_id?0:1);

  if(ext_hdr_count + new_ext_hdrs > MAX_ERF_EHDR
      || mutable_hdr->erf.phdr.rlen + new_ext_hdrs * 8 > 65535) {
    /* Not enough extension header slots to add Anchor ID */
    *err = WTAP_ERR_PACKET_TOO_LARGE;
    return false;
  }

  mutable_hdr->erf.phdr.rlen += new_ext_hdrs * 8;

  /* Set the more extension headers flag */
  mutable_hdr->erf.phdr.type |= 0x80;
  if (insert_idx > 0) {
    mutable_hdr->erf.ehdr_list[insert_idx-1].ehdr |= ERF_EHDR_MORE_EXTHDR_MASK;
  }

  /* Generate the Anchor ID extension header */
  anchor_id_hdr = erf_anchor_id_ext_hdr(erf_get_random_anchor_id(dump_priv), 0);

  /* Either we can insert Anchor ID at the end of the list for our Host ID or we
   * need to append the Host ID(s) and Anchor ID */
  if (insert_idx < ext_hdr_count) {
    /* shuffle up any following extension headers FIRST - we know we have room now */
    for (j = ext_hdr_count; j > insert_idx; j--) {
      mutable_hdr->erf.ehdr_list[j].ehdr = mutable_hdr->erf.ehdr_list[j-1].ehdr;
    }

    /* copy more extension headers bit from previous extension header */
    anchor_id_hdr |= ERF_EHDR_MORE_EXTHDR_MASK;
  }

  if(!found_host_id) {
    /* No Host ID extension header found and we have an implicit Host ID which
     * we want to make explicit */

    /* XXX: it is important that we know the implicit Host ID here or we end
     * up semi-permentantly associating the packet with Host 0 (unknown), we should
     * pass it through from the reader. In theory we should be on the
     * original capture machine if we have no Host ID extension headers. */
    host_id_src_hdr = erf_host_id_ext_hdr(implicit_host_id, source_id);
    mutable_hdr->erf.ehdr_list[insert_idx++].ehdr = ERF_EHDR_SET_MORE_EXTHDR(host_id_src_hdr);
  }

  if(!found_own_host_id) {
    /* Add our Host ID extension header */
    mutable_hdr->erf.ehdr_list[insert_idx++].ehdr = ERF_EHDR_SET_MORE_EXTHDR(host_id_own_hdr);
  }

  /*Add the Anchor ID extension header */
  mutable_hdr->erf.ehdr_list[insert_idx].ehdr = anchor_id_hdr;


  /*
   * Now construct the metadata Anchor record with the same Anchor ID
   */

  meta_ehdrs = g_array_new(false, false, sizeof(struct erf_ehdr));

  /* We need up to 4 extension headers on the Provenance metadata record */
  /*Required*/
  /* 1. Added by erf_write_meta_record: HostID exthdr to indicate this Anchor
   * record was generated by this host. Source ID 0 to avoid changing the
   * implicit Host ID. */

  /* 2. AnchorID exthdr with 'unique' per-host Anchor ID assigned by this host
   * (in this case Wireshark). Anchor definition flag set to 1 to indicate this
   * record contains a definition of the ID, in this case a comment on a single
   * packet. Tied to above extension header by ordering like a list */
  erf_append_ext_hdr_to_list(anchor_id_hdr | ERF_EHDR_ANCHOR_ID_DEFINITION_MASK, meta_ehdrs);

  /*Helpful for indexing*/
  /* 3. HostID exthdr with the original Source (first Host ID extension header) of the packet record */
  erf_append_ext_hdr_to_list(host_id_src_hdr, meta_ehdrs);

  /* Flow ID extension header from the packet record if we have one */
  if (found_flow_id) {
    /* 4. FlowID exthdr with Flow ID from the packet so a flow search will find the comment
     * record too. Must come here so the (redundant here) Source ID is scoped to the
     * correct Host ID. */
    /* Clear the stack type just in case something tries to assume we're an IP
     * packet without looking at the ERF type. Clear Source ID too just in case
     * we're trying to associate with the wrong Host ID. */
    erf_append_ext_hdr_to_list(flow_id_hdr & ~(ERF_EHDR_FLOW_ID_STACK_TYPE_MASK|ERF_EHDR_FLOW_ID_SOURCE_ID_MASK), meta_ehdrs);
  }

  /* Generate the metadata payload with the packet comment */
  /* XXX - can ERF have more than one comment? */
  sections = g_ptr_array_new_with_free_func(erf_meta_section_free);
  if (WTAP_OPTTYPE_SUCCESS != wtap_block_get_nth_string_option_value(rec->block, OPT_COMMENT, 0, &pkt_comment)) {
    pkt_comment = NULL;
  }
  erf_comment_to_sections(wdh, ERF_META_SECTION_INFO, 0x8000 /*local to record*/, pkt_comment, sections);

  /* Write the metadata record, but not the packet record as what we do depends
   * on the WTAP_ENCAP */
  ret = erf_write_meta_record(wdh, dump_priv, mutable_hdr->erf.phdr.ts, sections, meta_ehdrs, err);
  g_ptr_array_free(sections, true);
  g_array_free(meta_ehdrs, true);

  return ret;
}

static bool erf_write_meta_record(wtap_dumper *wdh, erf_dump_t *dump_priv, uint64_t timestamp, GPtrArray *sections, GArray *extra_ehdrs, int *err) {
  union wtap_pseudo_header other_header;
  struct erf_meta_tag gen_time_tag;
  struct erf_meta_section *section_ptr;
  unsigned total_wlen = 0;
  unsigned total_rlen = 0;
  int64_t alignbytes = 0;
  unsigned i;
  unsigned num_extra_ehdrs = 0;

  if(!sections || sections->len <= 0)
    return false;

  for(i = 0; i < sections->len; i++) {
    section_ptr = (struct erf_meta_section*)g_ptr_array_index(sections, i);
    total_wlen += section_ptr->section_length;
  }

  gen_time_tag.type = ERF_META_TAG_gen_time;
  gen_time_tag.length = 8U;
  gen_time_tag.value = (uint8_t*)&dump_priv->gen_time;
  total_wlen += gen_time_tag.length + 4;

  total_rlen = total_wlen + 24; /* 24 is the header + extension header length */
  if (extra_ehdrs) {
    /*
     * These will be appended to the first extension header in
     * other_header.erf.ehdr_list.  There are a total of MAX_ERF_EHDR
     * extension headers in that array, so we can append no more than
     * MAX_ERF_EHDR - 1 extension headeers.
     */
    num_extra_ehdrs = MIN(extra_ehdrs->len, MAX_ERF_EHDR - 1);
    total_rlen += num_extra_ehdrs * 8;
  }
  /*padding to 8 byte alignment*/
  total_rlen += ERF_PADDING_TO_8(total_rlen);

  if(total_rlen > 65535) {
    *err = WTAP_ERR_PACKET_TOO_LARGE;
    return false;
  }

  other_header.erf.phdr.ts = timestamp;
  other_header.erf.phdr.type = ERF_TYPE_META | 0x80;
  other_header.erf.phdr.flags = 0x04; /* Varying record length */
  other_header.erf.phdr.lctr = 0;
  other_header.erf.phdr.wlen = (uint16_t)total_wlen;
  other_header.erf.phdr.rlen = (uint16_t)total_rlen;
  /*Add our Host ID in Host ID extension header indicating we generated this
   * record. Source ID 0 to avoid affecting implicit Host ID. */
  other_header.erf.ehdr_list[0].ehdr = erf_host_id_ext_hdr(dump_priv->host_id, 0);
  /*Additional extension headers*/
  /*XXX: If we end up cutting the list short, erf_write_phdr will correct the
   * unterminated extension header list*/
  if (num_extra_ehdrs > 0) {
    other_header.erf.ehdr_list[0].ehdr |= ERF_EHDR_MORE_EXTHDR_MASK;
    memcpy(&other_header.erf.ehdr_list[1], extra_ehdrs->data, sizeof(struct erf_ehdr) * num_extra_ehdrs);
  }

  /* Make sure we always write out rlen, regardless of what happens */
  alignbytes = wdh->bytes_dumped + other_header.erf.phdr.rlen;

  if(!erf_write_phdr(wdh, WTAP_ENCAP_ERF, &other_header, err)) return false;

  /* Generation time */
  erf_meta_write_tag(wdh, &gen_time_tag, err);

  /* Section(s) */
  for(i = 0; i < sections->len; i++) {
    section_ptr = (struct erf_meta_section*)g_ptr_array_index(sections, i);
    erf_meta_write_section(wdh, section_ptr, err);
  }

  while(wdh->bytes_dumped < alignbytes){
    if(!wtap_dump_file_write(wdh, "", 1, err)) return false;
  }

  /* We wrote new packets, reloading is required */
  wdh->needs_reload = true;

  return true;

}

static erf_dump_t *erf_dump_priv_create(void) {
  erf_dump_t *dump_priv;

  dump_priv = g_new(erf_dump_t, 1);
  dump_priv->write_next_extra_meta = false;
  dump_priv->last_meta_periodic = false;
  dump_priv->gen_time = 0;
  dump_priv->host_id = ERF_WS_DEFAULT_HOST_ID;
  dump_priv->implicit_host_id = ERF_META_HOST_ID_IMPLICIT;
  dump_priv->first_frame_time_sec = 0;
  dump_priv->prev_inserted_time_sec = 0;
  dump_priv->prev_frame_ts = 0;
  dump_priv->prev_erf_type = 0;
  dump_priv->user_comment_ptr = NULL;
  dump_priv->periodic_sections = NULL;
  dump_priv->periodic_extra_ehdrs = g_array_new(false, false, sizeof(struct erf_ehdr));
  dump_priv->rand = g_rand_new();

  return dump_priv;
}

static bool erf_dump(
    wtap_dumper                    *wdh,
    const wtap_rec                 *rec,
    const uint8_t                  *pd,
    int                            *err,
    char                           **err_info _U_)
{
  const union wtap_pseudo_header *pseudo_header = &rec->rec_header.packet_header.pseudo_header;
  union wtap_pseudo_header other_phdr;
  int      erf_type;
  int64_t  alignbytes   = 0;
  unsigned padbytes   = 0;
  int      round_down   = 0;
  bool must_add_crc = false;
  uint32_t crc32        = 0x00000000;
  erf_dump_t *dump_priv = (erf_dump_t*)wdh->priv;
  /* Host ID extension header with Host ID 0 (unknown). For now use Source ID 1. */
  /* TODO: How to know if record was captured by this Wireshark? */
  uint64_t non_erf_host_id_ehdr = erf_host_id_ext_hdr(0, 1);

  /* Don't write anything bigger than we're willing to read. */
  if(rec->rec_header.packet_header.caplen > WTAP_MAX_PACKET_SIZE_STANDARD) {
    *err = WTAP_ERR_PACKET_TOO_LARGE;
    return false;
  }

  if(!dump_priv->gen_time) {
    erf_dump_priv_init_gen_time(dump_priv);
    dump_priv->first_frame_time_sec = rec->ts.secs;
  }

  /*
   * ERF doesn't have a per-file encapsulation type, and it
   * doesn't have a pcapng-style notion of interfaces that
   * support a per-interface encapsulation type.  Therefore,
   * we can just use this particular packet's encapsulation
   * without checking whether it's the encapsulation for the
   * dump file (as there isn't an encapsulation for an ERF
   * file, unless you count WTAP_ENCAP_ERF as the encapsulation
   * for all files, but we add ERF metadata if a packet is
   * written with an encapsulation other than WTAP_ENCAP_ERF).
   *
   * We will check whether the encapsulation is something we
   * support later.
   */
  if (rec->rec_header.packet_header.pkt_encap != WTAP_ENCAP_ERF) {
    unsigned int total_rlen;
    unsigned int total_wlen;

    /* Non-ERF encapsulation; generate ERF metadata */

    total_rlen = rec->rec_header.packet_header.caplen+16;
    total_wlen = rec->rec_header.packet_header.len;

    /* We can only convert packet records. */
    if (rec->rec_type != REC_TYPE_PACKET) {
      *err = WTAP_ERR_UNWRITABLE_REC_TYPE;
      return false;
    }

    erf_type = wtap_wtap_encap_to_erf_encap(rec->rec_header.packet_header.pkt_encap);
    if (erf_type == -1) {
      *err = WTAP_ERR_UNWRITABLE_ENCAP;
      return false;
    }

    /* Generate a fake header in other_phdr using data that we know*/
    memset(&other_phdr, 0, sizeof(union wtap_pseudo_header));
    /* Convert time erf timestamp format*/
    other_phdr.erf.phdr.ts = ((uint64_t) rec->ts.secs << 32) + (((uint64_t) rec->ts.nsecs <<32) / 1000 / 1000 / 1000);
    other_phdr.erf.phdr.type = (uint8_t)erf_type;
    /* Support up to 4 interfaces */
    /* TODO: use multiple Source IDs and metadata records to support >4 interfaces */
    other_phdr.erf.phdr.flags = rec->rec_header.packet_header.interface_id % ERF_MAX_INTERFACES;
    other_phdr.erf.phdr.flags |= 0x4;  /*vlen flag set because we're creating variable length records*/

    other_phdr.erf.phdr.lctr = 0;

    /*now we work out rlen, accounting for all the different headers and missing fcs(eth)*/
    switch(other_phdr.erf.phdr.type & 0x7F){
      case ERF_TYPE_ETH:
        total_rlen += 2;  /*2 bytes for erf eth_type*/
        if (pseudo_header->eth.fcs_len != 4) {
          /* Either this packet doesn't include the FCS
             (pseudo_header->eth.fcs_len = 0), or we don't
             know whether it has an FCS (= -1).  We have to
             synthesize an FCS.*/
          if(!(rec->rec_header.packet_header.caplen < rec->rec_header.packet_header.len)){ /*don't add FCS if packet has been snapped off*/
            crc32 = crc32_ccitt_seed(pd, rec->rec_header.packet_header.caplen, 0xFFFFFFFF);
            total_rlen += 4;  /*4 bytes for added checksum*/
            total_wlen += 4;
            must_add_crc = true;
          }
        }
        break;
      case ERF_TYPE_HDLC_POS:
        /*we assume that it's missing a FCS checksum, make one up*/
        if(!(rec->rec_header.packet_header.caplen < rec->rec_header.packet_header.len)){  /*unless of course, the packet has been snapped off*/
          crc32 = crc32_ccitt_seed(pd, rec->rec_header.packet_header.caplen, 0xFFFFFFFF);
          total_rlen += 4;  /*4 bytes for added checksum*/
          total_wlen += 4;
          must_add_crc = true; /* XXX - these never have an FCS? */
        }
        break;
      default:
        break;
    }

    /* Add Host ID extension header with Host ID 0 (unknown). For now use Source ID 1. */
    other_phdr.erf.phdr.type |= 0x80;
    other_phdr.erf.ehdr_list[0].ehdr = non_erf_host_id_ehdr;
    total_rlen += 8;

    padbytes = ERF_PADDING_TO_8(total_rlen);  /*calculate how much padding will be required */
    if(rec->rec_header.packet_header.caplen < rec->rec_header.packet_header.len){ /*if packet has been snapped, we need to round down what we output*/
      round_down = (8 - padbytes) % 8;
      total_rlen -= round_down;
    }else{
      total_rlen += padbytes;
    }

    if (total_rlen > UINT16_MAX || total_wlen > UINT16_MAX) {
      *err = WTAP_ERR_PACKET_TOO_LARGE;
      return false;
    }

    other_phdr.erf.phdr.rlen = (uint16_t)total_rlen;
    other_phdr.erf.phdr.wlen = (uint16_t)total_wlen;

    pseudo_header = &other_phdr;
  } else if (rec->presence_flags & WTAP_HAS_TS) {
    // Update timestamp if changed.
    time_t secs;
    int nsecs;
    uint64_t ts = pseudo_header->erf.phdr.ts;

    secs = (long) (ts >> 32);
    ts  = ((ts & 0xffffffff) * 1000 * 1000 * 1000);
    ts += (ts & 0x80000000) << 1; /* rounding */
    nsecs = ((int) (ts >> 32));
    if (nsecs >= 1000000000) {
      nsecs -= 1000000000;
      secs += 1;
    }

    if (secs != rec->ts.secs || nsecs != rec->ts.nsecs) {
      other_phdr = *pseudo_header;
      other_phdr.erf.phdr.ts = ((uint64_t) rec->ts.secs << 32) + (((uint64_t) rec->ts.nsecs <<32) / 1000 / 1000 / 1000);
      pseudo_header = &other_phdr;
    }
  }

  /* We now have a (real or fake) ERF record */
  erf_type = pseudo_header->erf.phdr.type & 0x7FU;

  /* Accumulate Host ID/Source ID to put in updated periodic metadata */
  /* TODO: pass these through from read interface list instead? */
  /* Note: this includes the one we made for the fake ERF header */
  erf_update_host_id_ext_hdrs_list(dump_priv, pseudo_header, dump_priv->periodic_extra_ehdrs);

  /* Insert new metadata record depending on whether the capture comment has
   * changed. Write metadata each second at boundaries. If there is metadata
   * write at the end of each of metadata records so we update the metadata. */
  if (erf_type == ERF_TYPE_META) {
    /* Check whether the capture comment string has changed */
    /* Updates write_next_extra_meta */
    dump_priv->last_meta_periodic = erf_dump_priv_compare_capture_comment(wdh, dump_priv, pseudo_header, pd);
  } else { /* don't want to insert a new metadata record while looking at another */
    if (dump_priv->prev_erf_type == ERF_TYPE_META && dump_priv->last_meta_periodic) {
      /* Last frame was a periodic (non-comment) metadata record (and this frame is not), check if we
       * need to insert one to update metadata. */

      if(dump_priv->write_next_extra_meta) {
        if (!dump_priv->periodic_sections) {
          /* If we've seen metadata just insert the capture comment and not the
           * rest of the metadata */
          dump_priv->periodic_sections = g_ptr_array_new_with_free_func(erf_meta_section_free);
          erf_comment_to_sections(wdh, ERF_META_SECTION_CAPTURE, 0, dump_priv->user_comment_ptr, dump_priv->periodic_sections);
        }

        if (!erf_write_meta_record(wdh, dump_priv, dump_priv->prev_frame_ts, dump_priv->periodic_sections, dump_priv->periodic_extra_ehdrs, err)) return false;
        dump_priv->prev_inserted_time_sec = rec->ts.secs;
        /*TODO: clear accumulated existing extension headers here?*/
      }

      /* If we have seen a metadata record in the first ~1 second it
       * means that we are dealing with an ERF file with metadata already in them.
       * We don't want to write extra metadata if nothing has changed. We can't
       * trust the Wireshark representation since we massage the fields on
       * read. */
      /* restart searching for next meta record to update capture comment at */
      dump_priv->write_next_extra_meta = false;
    } else if (rec->ts.secs > dump_priv->first_frame_time_sec + 1
          && dump_priv->prev_inserted_time_sec != rec->ts.secs) {
      /* For compatibility, don't insert metadata for older ERF files with no changed metadata */
      if (dump_priv->write_next_extra_meta) {
        if (!dump_priv->periodic_sections) {
          /* If we get here, metadata record was not found in the first ~1 sec
           * but we have either a capture comment or a non-ERF file (see
           * erf_dump_open) */
          /* Start inserting metadata records from wtap data at second boundaries */
          dump_priv->periodic_sections = g_ptr_array_new_with_free_func(erf_meta_section_free);
          erf_wtap_info_to_sections(wdh, dump_priv->periodic_sections);
        }
      }

      /* At second boundaries insert either the updated comment (if we've seen some metadata records
       * already) or the full metadata */
      if (dump_priv->periodic_sections) {
        if (!erf_write_meta_record(wdh, dump_priv, (uint64_t)(rec->ts.secs) << 32, dump_priv->periodic_sections, dump_priv->periodic_extra_ehdrs, err)) return false;
        dump_priv->prev_inserted_time_sec = rec->ts.secs;
      }
    }
  }

  /* If the packet user comment has changed, we need to
   * construct a new header with additional Host ID and Anchor ID
   * and insert a metadata record before that frame */
  /*XXX: The user may have changed the comment to cleared! */
  if(rec->block_was_modified) {
    if (rec->rec_header.packet_header.pkt_encap == WTAP_ENCAP_ERF) {
      /* XXX: What about ERF-in-pcapng with existing comment (that wasn't
       * modified)? */
      if(rec->block_was_modified) {
        memmove(&other_phdr, pseudo_header, sizeof(union wtap_pseudo_header));
        if(!erf_write_anchor_meta_update_phdr(wdh, dump_priv, rec, &other_phdr, err)) return false;
        pseudo_header = &other_phdr;
      }
    } else {
      /* Always write the comment if non-ERF */
      if(!erf_write_anchor_meta_update_phdr(wdh, dump_priv, rec, &other_phdr, err)) return false;
    }
  }

  /* Make sure we always write out rlen, regardless of what happens */
  alignbytes = wdh->bytes_dumped + pseudo_header->erf.phdr.rlen;

  if(!erf_write_phdr(wdh, WTAP_ENCAP_ERF, pseudo_header, err)) return false;

  if(!wtap_dump_file_write(wdh, pd, rec->rec_header.packet_header.caplen - round_down, err)) return false;

  /*add the 4 byte CRC if necessary*/
  if(must_add_crc){
    if(!wtap_dump_file_write(wdh, &crc32, 4, err)) return false;
  }

  /*XXX: In the case of ENCAP_ERF, this pads the record to its original length, which is fine in most
   * cases. However with >MAX_ERF_EHDR unnecessary padding will be added, and
   * if the record was truncated this will be incorrectly treated as payload.
   * More than 8 extension headers is unusual though, only the first 8 are
   * written out anyway and fixing properly would require major refactor.*/
  /*records should be 8byte aligned, so we add padding to our calculated rlen */
  while(wdh->bytes_dumped < alignbytes){
    if(!wtap_dump_file_write(wdh, "", 1, err)) return false;
  }

  dump_priv->prev_erf_type = pseudo_header->erf.phdr.type & 0x7FU;
  dump_priv->prev_frame_ts = pseudo_header->erf.phdr.ts;

  return true;
}

static int erf_dump_can_write_encap(int encap)
{

  if(encap == WTAP_ENCAP_PER_PACKET)
    return 0;

  if (wtap_wtap_encap_to_erf_encap(encap) == -1)
    return WTAP_ERR_UNWRITABLE_ENCAP;

  return 0;
}

static bool erf_dump_open(wtap_dumper *wdh, int *err _U_, char **err_info _U_)
{
  erf_dump_t *dump_priv;
  char *s;
  uint64_t host_id;
  char *first_shb_comment = NULL;

  dump_priv = erf_dump_priv_create();

  wdh->subtype_write = erf_dump;
  wdh->priv = dump_priv;
  wdh->subtype_finish = erf_dump_finish;

  /* Get the first capture comment string */
  get_user_comment_string(wdh, &first_shb_comment);
  /* Save a copy of it */
  dump_priv->user_comment_ptr = g_strdup(first_shb_comment);
  /* XXX: If we have a capture comment or a non-ERF file assume we need to
   * write metadata unless we see existing metadata in the first second. */
  if (dump_priv->user_comment_ptr || wdh->file_encap != WTAP_ENCAP_ERF)
    dump_priv->write_next_extra_meta = true;

  /* Read Host ID from environment variable */
  /* TODO: generate one from MAC address? */
  if ((s = getenv("ERF_HOST_ID")) != NULL) {
    /* TODO: support both decimal and hex strings (base 0)? */
    if (ws_hexstrtou64(s, NULL, &host_id)) {
      dump_priv->host_id = host_id & ERF_EHDR_HOST_ID_MASK;
    }
  }

  return true;
}

static int erf_get_source_from_header(union wtap_pseudo_header *pseudo_header, uint64_t *host_id, uint8_t *source_id)
{
  uint8_t  type;
  uint8_t  has_more;
  uint64_t hdr;
  int      i             = 0;
  bool host_id_found = false;

  if (!pseudo_header || !host_id || !source_id)
      return -1;

  *host_id = ERF_META_HOST_ID_IMPLICIT;
  *source_id = 0;

  has_more = pseudo_header->erf.phdr.type & 0x80;

  while (has_more && (i < MAX_ERF_EHDR)) {
    hdr = pseudo_header->erf.ehdr_list[i].ehdr;
    type = (uint8_t) (hdr >> 56);

    /*
     * XXX: Only want first Source ID and Host ID, and want to preserve HID n SID 0 (see
     * erf_populate_interface)
     */
    switch (type & 0x7f) {
      case ERF_EXT_HDR_TYPE_HOST_ID:
        if (!host_id_found)
          *host_id = hdr & ERF_EHDR_HOST_ID_MASK;

        host_id_found = true;
        /* Fall through */
      case ERF_EXT_HDR_TYPE_FLOW_ID:
        if (*source_id == 0)
          *source_id = (hdr >> 48) & 0xff;
        break;
    }

    if (host_id_found)
      break;

    has_more = type & 0x80;
    i += 1;
  }

  return 0;
}

int erf_populate_interface_from_header(erf_t *erf_priv, wtap *wth, union wtap_pseudo_header *pseudo_header, int *err, char **err_info)
{
  uint64_t host_id;
  uint8_t source_id;
  uint8_t if_num;

  if (!pseudo_header)
    return -1;

  if_num = (pseudo_header->erf.phdr.flags & 0x03) | ((pseudo_header->erf.phdr.flags & 0x40)>>4);

  erf_get_source_from_header(pseudo_header, &host_id, &source_id);

  return erf_populate_interface(erf_priv, wth, pseudo_header, host_id, source_id, if_num, err, err_info);
}

static struct erf_if_mapping* erf_find_interface_mapping(erf_t *erf_priv, uint64_t host_id, uint8_t source_id)
{
  struct erf_if_mapping if_map_lookup;

  /* XXX: erf_priv should never be NULL here */
  if (!erf_priv)
    return NULL;

  if_map_lookup.host_id = host_id;
  if_map_lookup.source_id = source_id;

  return (struct erf_if_mapping*) g_hash_table_lookup(erf_priv->if_map, &if_map_lookup);
}

static void erf_set_interface_descr(wtap_block_t block, unsigned option_id, uint64_t host_id, uint8_t source_id, uint8_t if_num, const char *descr)
{
  /* Source XXX,*/
  char sourceid_buf[16];
  /* Host XXXXXXXXXXXX,*/
  char hostid_buf[24];

  sourceid_buf[0] = '\0';
  hostid_buf[0] = '\0';

  /* Implicit Host ID defaults to 0 */
  if (host_id == ERF_META_HOST_ID_IMPLICIT) {
    host_id = 0;
  }

  if (host_id > 0) {
    snprintf(hostid_buf, sizeof(hostid_buf), " Host %012" PRIx64 ",", host_id);
  }

  if (source_id > 0) {
    snprintf(sourceid_buf, sizeof(sourceid_buf), " Source %u,", source_id);
  }

  if (descr) {
    wtap_block_set_string_option_value_format(block, option_id, "%s (ERF%s%s Interface %d)", descr, hostid_buf, sourceid_buf, if_num);
  } else {
    wtap_block_set_string_option_value_format(block, option_id, "Port %c (ERF%s%s Interface %d)", 'A'+if_num, hostid_buf, sourceid_buf, if_num);
  }
}

static int erf_update_anchors_from_header(erf_t *erf_priv, wtap_rec *rec, union wtap_pseudo_header *pseudo_header, uint64_t host_id, GPtrArray *anchor_mappings_to_update)
{
  uint8_t  type;
  uint8_t  has_more;
  uint64_t hdr;
  uint64_t comment_gen_time = 0;
  uint64_t host_id_current;
  uint64_t anchor_id_current = 0;
  int      i             = 0;
  char    *comment = NULL;

  if (!rec || !pseudo_header)
    return -1;

  /* Start with the first Host ID that was found on the record
   * as the Anchor ID isn't required to be the first extension header' */
  host_id_current = host_id == ERF_META_HOST_ID_IMPLICIT ? erf_priv->implicit_host_id : host_id;

  has_more = pseudo_header->erf.phdr.type & 0x80;

  while (has_more && (i < MAX_ERF_EHDR)) {
    hdr = pseudo_header->erf.ehdr_list[i].ehdr;
    type = (uint8_t) (hdr >> 56);

    switch (type & 0x7f) {
      case ERF_EXT_HDR_TYPE_HOST_ID:
        host_id_current = hdr & ERF_EHDR_HOST_ID_MASK;
        break;

      case ERF_EXT_HDR_TYPE_ANCHOR_ID:
      {
        anchor_id_current = hdr & ERF_EHDR_ANCHOR_ID_MASK;
        if (!(ERF_ANCHOR_ID_IS_DEFINITION(hdr))) {
          /*
            * Anchor definition flag is 0, attempt to associate a comment with this record
            * XXX: currently the comment count may be wrong on the first pass!
            */
          /* We may not have found the implicit Host ID yet, if so we are unlikely to find anything */
          struct erf_anchor_mapping* lookup_result;
          lookup_result = erf_find_anchor_mapping(erf_priv, host_id_current, anchor_id_current);
          if (lookup_result) {
            if (lookup_result->gen_time > comment_gen_time) {
              /* XXX: we might have a comment that clears the comment (i.e.
               * empty string)! */
              if (lookup_result->comment && lookup_result->comment[0] != '\0') {
                comment = lookup_result->comment;
              }
              comment_gen_time = lookup_result->gen_time;
            }
          }
        }
        else {
          if (anchor_mappings_to_update && (pseudo_header->erf.phdr.type & 0x7f) == ERF_TYPE_META) {
            /*
             * Anchor definition flag is 1, put the mapping in an array
             * which we will later update when we walk through
             * the metadata tags
             */
            /* Only Provenance record can contain the information we need */
            struct erf_anchor_mapping *mapping_ptr =
              g_new0(struct erf_anchor_mapping, 1);
            /* May be ERF_META_HOST_ID_IMPLICIT */
            mapping_ptr->host_id = host_id_current;
            mapping_ptr->anchor_id = anchor_id_current;
            g_ptr_array_add(anchor_mappings_to_update, mapping_ptr);
          }
        }
        break;
      }
    }

    has_more = type & 0x80;
    i += 1;
  }

  if (comment) {
    wtap_block_add_string_option(rec->block, OPT_COMMENT, comment, strlen(comment));
  }

  return 0;
}

/**
 * @brief Update the implicit Host ID and Anchor Mapping information
 */
static int erf_update_implicit_host_id(erf_t *erf_priv, wtap *wth, uint64_t implicit_host_id)
{
  GHashTableIter iter;
  void *iter_value;
  GList* implicit_list = NULL;
  GList* item = NULL;
  wtap_block_t int_data;
  struct erf_if_mapping* if_map = NULL;
  struct erf_if_mapping* if_map_other = NULL;
  struct erf_if_info* if_info = NULL;
  struct erf_anchor_mapping* anchor_mapping = NULL;
  struct erf_anchor_mapping* anchor_mapping_other = NULL;
  char *oldstr = NULL;
  char portstr_buf[16];
  int i;

  if (!erf_priv)
    return -1;

  erf_priv->implicit_host_id = implicit_host_id;

  /*
   * We need to update the descriptions of all the interfaces with no Host
   * ID to the correct Host ID.
   */
  g_hash_table_iter_init(&iter, erf_priv->if_map);

  /* Remove the implicit mappings from the mapping table */
  while (g_hash_table_iter_next(&iter, &iter_value, NULL)) {
    if_map = (struct erf_if_mapping*) iter_value;

    if (if_map->host_id == ERF_META_HOST_ID_IMPLICIT) {
      /* Check we don't have an existing interface that matches */
      if_map_other = erf_find_interface_mapping(erf_priv, implicit_host_id, if_map->source_id);

      if (!if_map_other) {
        /* Pull mapping for update */
        /* XXX: Can't add while iterating hash table so use list instead */
        g_hash_table_iter_steal(&iter);
        implicit_list = g_list_prepend(implicit_list, if_map);
      } else {
        /*
         * XXX: We have duplicate interfaces in this case, but not much else we
         * can do since we have already dissected the earlier packets. Expected
         * to be unusual as it reqires a mix of explicit and implicit Host ID
         * (e.g. FlowID extension header only) packets with the same effective
         * Host ID before the first ERF_TYPE_META record.
         */

        /*
         * Update the description of the ERF_META_HOST_ID_IMPLICIT interface(s)
         * for the first records in one pass mode. In 2 pass mode (Wireshark
         * initial open, TShark in 2 pass mode) we will update the interface
         * mapping for the frames on the second pass. Relatively consistent
         * with the dissector behaviour.
         *
         * TODO: Can we delete this interface on the second (or even first)
         * pass? Should we try to merge in other metadata?
         * Needs a wtap_block_copy() that supports overwriting and/or expose
         * custom option copy and do with wtap_block_foreach_option().
         */
        for (i = 0; i < ERF_MAX_INTERFACES; i++) {
          if_info = &if_map->interfaces[i];

          if (if_info->if_index >= 0) {
            /* XXX: this is a pointer! */
            int_data = g_array_index(wth->interface_data, wtap_block_t, if_info->if_index);

            snprintf(portstr_buf, sizeof(portstr_buf), "Port %c", 'A'+i);

            oldstr = if_info->name;
            if_info->name = g_strconcat(oldstr ? oldstr : portstr_buf, " [unmatched implicit]", NULL);
            g_free(oldstr); /* probably null, but g_free doesn't care */

            oldstr = if_info->descr;
            if_info->descr = g_strconcat(oldstr ? oldstr : portstr_buf, " [unmatched implicit]", NULL);
            g_free(oldstr);

            erf_set_interface_descr(int_data, OPT_IDB_NAME, implicit_host_id, if_map->source_id, (uint8_t) i, if_info->name);
            erf_set_interface_descr(int_data, OPT_IDB_DESCRIPTION, implicit_host_id, if_map->source_id, (uint8_t) i, if_info->descr);
          }
        }
      }
    }
  }

  /* Re-add the non-clashing items under the real implicit Host ID */
  if (implicit_list) {
    item = implicit_list;
    do {
      if_map = (struct erf_if_mapping*) item->data;

      for (i = 0; i < ERF_MAX_INTERFACES; i++) {
        if_info = &if_map->interfaces[i];

        if (if_info->if_index >= 0) {
          /* XXX: this is a pointer! */
          int_data = g_array_index(wth->interface_data, wtap_block_t, if_info->if_index);
          erf_set_interface_descr(int_data, OPT_IDB_NAME, implicit_host_id, if_map->source_id, (uint8_t) i, if_info->name);
          erf_set_interface_descr(int_data, OPT_IDB_DESCRIPTION, implicit_host_id, if_map->source_id, (uint8_t) i, if_info->descr);
        }
      }

      if_map->host_id = implicit_host_id;
      /* g_hash_table_add() only exists since 2.32. */
      g_hash_table_replace(erf_priv->if_map, if_map, if_map);
    } while ((item = g_list_next(item)));

    g_list_free(implicit_list);
    implicit_list = NULL;
  }

  /*
   * We also need to update the anchor comment mappings
   * to the correct Host ID.
   */
  g_hash_table_iter_init(&iter, erf_priv->anchor_map);

  /* Remove the implicit mappings from the mapping table */
  while (g_hash_table_iter_next(&iter, &iter_value, NULL)) {
    anchor_mapping = (struct erf_anchor_mapping*) iter_value;

    if (anchor_mapping->host_id == ERF_META_HOST_ID_IMPLICIT) {
      /* Check we don't have an existing anchor that matches */
      anchor_mapping_other = erf_find_anchor_mapping(erf_priv, implicit_host_id,
          anchor_mapping->anchor_id);

      if (anchor_mapping_other && anchor_mapping_other->gen_time >= anchor_mapping->gen_time) {
        /*
         * XXX: Duplicate entry of anchor mapping, keep the one with newer
         * gen_time.
         */
          g_hash_table_iter_remove(&iter);
      } else {
        /* Pull mapping for update */
        /* XXX: Can't add while iterating hash table so use list instead */
        g_hash_table_iter_steal(&iter);
        implicit_list = g_list_prepend(implicit_list, anchor_mapping);
        /* existing entry (if any) will be removed by g_hash_table_replace */
      }
    }
  }

  /* Re-add the non-clashing items under the real implicit Host ID */
  if (implicit_list) {
    item = implicit_list;
    do {
      anchor_mapping = (struct erf_anchor_mapping*) item->data;
      anchor_mapping->host_id = implicit_host_id;
      g_hash_table_replace(erf_priv->anchor_map, anchor_mapping, anchor_mapping);
    } while ((item = g_list_next(item)));

    g_list_free(implicit_list);
    implicit_list = NULL;
  }

  return 0;
}

static int erf_populate_interface(erf_t *erf_priv, wtap *wth, union wtap_pseudo_header *pseudo_header, uint64_t host_id, uint8_t source_id, uint8_t if_num, int *err, char **err_info)
{
  wtap_block_t int_data;
  wtapng_if_descr_mandatory_t* int_data_mand;
  struct erf_if_mapping* if_map = NULL;

  if (!wth) {
    *err = WTAP_ERR_INTERNAL;
    *err_info = ws_strdup_printf("erf: erf_populate_interface called with wth NULL");
    return -1;
  }
  if (!pseudo_header) {
    *err = WTAP_ERR_INTERNAL;
    *err_info = ws_strdup_printf("erf: erf_populate_interface called with pseudo_header NULL");
    return -1;
  }
  if (!erf_priv) {
    *err = WTAP_ERR_INTERNAL;
    *err_info = ws_strdup_printf("erf: erf_populate_interface called with erf_priv NULL");
    return -1;
  }
  if (if_num > ERF_MAX_INTERFACES-1) {
    *err = WTAP_ERR_INTERNAL;
    *err_info = ws_strdup_printf("erf: erf_populate_interface called with if_num %u > %u",
                                if_num, ERF_MAX_INTERFACES-1);
    return -1;
  }

  if (host_id == ERF_META_HOST_ID_IMPLICIT) {
    /* Defaults to ERF_META_HOST_ID_IMPLICIT so we can update mapping later */
    host_id = erf_priv->implicit_host_id;
  } else if ((pseudo_header->erf.phdr.type & 0x7f) == ERF_TYPE_META) {
    /*
     * XXX: We assume there is only one Implicit Host ID. As a special case a first
     * Host ID extension header with Source ID 0 on a record does not change
     * the implicit Host ID. We respect this even though we support only one
     * Implicit Host ID.
     */
    if (erf_priv->implicit_host_id == ERF_META_HOST_ID_IMPLICIT && source_id > 0) {
      erf_update_implicit_host_id(erf_priv, wth, host_id);
    }
  }

  if_map = erf_find_interface_mapping(erf_priv, host_id, source_id);

  if (!if_map) {
    if_map = erf_if_mapping_create(host_id, source_id);
    /* g_hash_table_add() only exists since 2.32. */
    g_hash_table_replace(erf_priv->if_map, if_map, if_map);

  }

  /* Return the existing interface if we have it */
  if (if_map->interfaces[if_num].if_index >= 0) {
    return if_map->interfaces[if_num].if_index;
  }

  int_data = wtap_block_create(WTAP_BLOCK_IF_ID_AND_INFO);
  int_data_mand = (wtapng_if_descr_mandatory_t*)wtap_block_get_mandatory_data(int_data);

  int_data_mand->wtap_encap = WTAP_ENCAP_ERF;
  /* int_data.time_units_per_second = (1LL<<32);  ERF format resolution is 2^-32, capture resolution is unknown */
  int_data_mand->time_units_per_second = 1000000000; /* XXX Since Wireshark only supports down to nanosecond resolution we have to dilute to this */
  int_data_mand->tsprecision = WTAP_TSPREC_NSEC;
  int_data_mand->snap_len = 65535; /* ERF max length */

  /* XXX: if_IPv4addr opt 4  Interface network address and netmask.*/
  /* XXX: if_IPv6addr opt 5  Interface network address and prefix length (stored in the last byte).*/
  /* XXX: if_MACaddr  opt 6  Interface Hardware MAC address (48 bits).*/
  /* XXX: if_EUIaddr  opt 7  Interface Hardware EUI address (64 bits)*/
  /* XXX: if_speed    opt 8  Interface speed (in bits per second)*/
  /* int_data.if_tsresol = 0xa0;  ERF format resolution is 2^-32 = 0xa0, capture resolution is unknown */
  wtap_block_add_uint8_option(int_data, OPT_IDB_TSRESOL, 0x09); /* XXX Since Wireshark only supports down to nanosecond resolution we have to dilute to this */
  /* XXX: if_tzone      10  Time zone for GMT support (TODO: specify better). */
  /* XXX if_tsoffset; opt 14  A 64 bits integer value that specifies an offset (in seconds)...*/
  /* Interface statistics */
  int_data_mand->num_stat_entries = 0;
  int_data_mand->interface_statistics = NULL;

  erf_set_interface_descr(int_data, OPT_IDB_NAME, host_id, source_id, if_num, NULL);
  erf_set_interface_descr(int_data, OPT_IDB_DESCRIPTION, host_id, source_id, if_num, NULL);

  if_map->interfaces[if_num].if_index = (int) wth->interface_data->len;
  wtap_add_idb(wth, int_data);

  return if_map->interfaces[if_num].if_index;
}

static uint32_t erf_meta_read_tag(struct erf_meta_tag* tag, uint8_t *tag_ptr, uint32_t remaining_len)
{
  uint16_t tagtype;
  uint16_t taglength;
  uint32_t tagtotallength;

  if (!tag_ptr || !tag || remaining_len < ERF_META_TAG_HEADERLEN)
    return 0;

  /* tagtype (2 bytes) */
  tagtype = pntoh16(&tag_ptr[0]);

  /* length (2 bytes) */
  taglength = pntoh16(&tag_ptr[2]);

  tagtotallength = ERF_META_TAG_TOTAL_ALIGNED_LENGTH(taglength);

  if (remaining_len < tagtotallength) {
    return 0;
  }

  tag->type = tagtype;
  tag->length = taglength;
  tag->value = &tag_ptr[4];

  return tagtotallength;
}

static int populate_capture_host_info(erf_t *erf_priv, wtap *wth, union wtap_pseudo_header *pseudo_header _U_, struct erf_meta_read_state *state, int *err, char **err_info)
{
  struct erf_meta_tag tag = {0, 0, NULL};

  wtap_block_t shb_hdr;
  char* tmp;
  char* app_name    = NULL;
  char* app_version = NULL;
  char* model       = NULL;
  char* descr       = NULL;
  char* cpu         = NULL;
  char* modelcpu    = NULL;
  uint32_t tagtotallength;

  if (!wth) {
    *err = WTAP_ERR_INTERNAL;
    *err_info = ws_strdup_printf("erf: populate_capture_host_info called with wth NULL");
    return -1;
  }
  if (!state) {
    *err = WTAP_ERR_INTERNAL;
    *err_info = ws_strdup_printf("erf: populate_capture_host_info called with state NULL");
    return -1;
  }
  if (!wth->shb_hdrs) {
    *err = WTAP_ERR_INTERNAL;
    *err_info = ws_strdup_printf("erf: populate_capture_host_info called with wth->shb_hdrs NULL");
    return -1;
  }
  if (wth->shb_hdrs->len == 0) {
    *err = WTAP_ERR_INTERNAL;
    *err_info = ws_strdup_printf("erf: populate_capture_host_info called with wth->shb_hdrs->len 0");
    return -1;
  }

  /* XXX: wth->shb_hdr is already created by different layer, using directly for now. */
  /* XXX: Only one section header is supported at this time */
  shb_hdr = g_array_index(wth->shb_hdrs, wtap_block_t, 0);

  while ((tagtotallength = erf_meta_read_tag(&tag, state->tag_ptr, state->remaining_len)) && !ERF_META_IS_SECTION(tag.type)) {
    switch (state->sectiontype) {
      case ERF_META_SECTION_CAPTURE:
      {
        if (erf_priv->capture_gentime > state->gen_time) {
          return 0;
        }

        switch (tag.type) {
          case ERF_META_TAG_comment:
          {
            char *existing_comment = NULL;
            /*XXX: hack to make changing capture comment work since Wireshark only
             * displays one. For now just overwrite the comment as we won't
             * pick up all of them yet due to the gen_time check above */
            if (wtap_block_get_nth_string_option_value(shb_hdr, OPT_COMMENT, 0, &existing_comment) == WTAP_OPTTYPE_SUCCESS) {
              wtap_block_set_nth_string_option_value(shb_hdr, OPT_COMMENT, 0, tag.value, tag.length);
            } else {
              wtap_block_add_string_option(shb_hdr, OPT_COMMENT, tag.value, tag.length);
            }
            break;
          }
        }
      }
      /* Fall through */
      case ERF_META_SECTION_HOST:
      {
        if (erf_priv->host_gentime > state->gen_time) {
          return 0;
        }

        switch (tag.type) {
          case ERF_META_TAG_model:
            g_free(model);
            model = g_strndup((char*) tag.value, tag.length);
            break;
          case ERF_META_TAG_cpu:
            g_free(cpu);
            cpu = g_strndup((char*) tag.value, tag.length);
            break;
          case ERF_META_TAG_descr:
            g_free(descr);
            descr = g_strndup((char*) tag.value, tag.length);
            break;
          case ERF_META_TAG_os:
            wtap_block_set_string_option_value(shb_hdr, OPT_SHB_OS, tag.value, tag.length);
            break;
          case ERF_META_TAG_app_name:
            g_free(app_name);
            app_name = g_strndup((char*) tag.value, tag.length);
            break;
          case ERF_META_TAG_app_version:
            g_free(app_version);
            app_version = g_strndup((char*) tag.value, tag.length);
            break;
            /* TODO: dag_version? */
            /* TODO: could concatenate comment(s)? */
          case ERF_META_TAG_filter:
            g_free(state->if_map->capture_filter_str);
            state->if_map->capture_filter_str = g_strndup((char*) tag.value, tag.length);
            break;
          default:
            break;
        }
      }
      break;
    }

    state->tag_ptr += tagtotallength;
    state->remaining_len -= tagtotallength;
  }

  /* Post processing */

  if (app_name || app_version) {
    /*
     * If we have no app_name, we use "(Unknown application)".
     *
     * If we have no app_version, this will just use app_name.
     */
    tmp = g_strjoin(" ", app_name ? app_name : "(Unknown application)", app_version, NULL);
    wtap_block_set_string_option_value(shb_hdr, OPT_SHB_USERAPPL, tmp, strlen(tmp));
    g_free(tmp);

    g_free(app_name);
    g_free(app_version);
    app_name = NULL;
    app_version = NULL;
  }

  /* For the hardware field show description followed by (model; cpu) */
  /* Build "Model; CPU" part */
  if (model || cpu) {
    /* g_strjoin() would be nice to use here if the API didn't stop on the first NULL... */
    if (model && cpu) {
      modelcpu = g_strconcat(model, "; ", cpu, NULL);
    } else if (cpu) {
      modelcpu = cpu;
      /* avoid double-free */
      cpu = NULL;
    } else {
      modelcpu = model;
      /* avoid double-free */
      model = NULL;
    }
  }

  /* Combine into "Description (Model; CPU)" */
  if (state->sectiontype == ERF_META_SECTION_HOST && descr) {
    if (modelcpu) {
      wtap_block_set_string_option_value_format(shb_hdr, OPT_SHB_HARDWARE, "%s (%s)", descr, modelcpu);
    } else {
      wtap_block_set_string_option_value(shb_hdr, OPT_SHB_HARDWARE, descr, strlen(descr));
      /*descr = NULL;*/
    }
  } else if (modelcpu) {
    wtap_block_set_string_option_value(shb_hdr, OPT_SHB_HARDWARE, modelcpu, strlen(modelcpu));
    /*modelcpu = NULL;*/
  }

  /* Free the fields we didn't end up using */
  g_free(modelcpu);
  g_free(model);
  g_free(descr);
  g_free(cpu);

  if (state->sectiontype == ERF_META_SECTION_CAPTURE) {
    erf_priv->capture_gentime = state->gen_time;
  } else {
    erf_priv->host_gentime = state->gen_time;
  }

  return 1;
}

static int populate_module_info(erf_t *erf_priv _U_, wtap *wth, union wtap_pseudo_header *pseudo_header _U_, struct erf_meta_read_state *state, int *err, char **err_info)
{
  struct erf_meta_tag tag = {0, 0, NULL};

  uint32_t tagtotallength;

  if (!wth) {
    *err = WTAP_ERR_INTERNAL;
    *err_info = ws_strdup_printf("erf: populate_module_info called with wth NULL");
    return -1;
  }
  if (!state) {
    *err = WTAP_ERR_INTERNAL;
    *err_info = ws_strdup_printf("erf: populate_module_info called with stat NULL");
    return -1;
  }

  if (state->if_map->module_gentime > state->gen_time) {
    return 0;
  }

  while ((tagtotallength = erf_meta_read_tag(&tag, state->tag_ptr, state->remaining_len)) && !ERF_META_IS_SECTION(tag.type)) {
    switch (tag.type) {
      case ERF_META_TAG_fcs_len:
        if (tag.length >= 4) {
          state->if_map->module_fcs_len = (int8_t) pntoh32(tag.value);
        }
        break;
      case ERF_META_TAG_snaplen:
        /* XXX: this is generally per stream */
        if (tag.length >= 4) {
          state->if_map->module_snaplen = pntoh32(tag.value);
        }
        break;
      case ERF_META_TAG_filter:
        g_free(state->if_map->module_filter_str);
        state->if_map->module_filter_str = g_strndup((char*) tag.value, tag.length);
        break;
    }

    state->tag_ptr += tagtotallength;
    state->remaining_len -= tagtotallength;
  }

  state->if_map->module_gentime = state->gen_time;

  return 1;
}

static int populate_interface_info(erf_t *erf_priv, wtap *wth, union wtap_pseudo_header *pseudo_header, struct erf_meta_read_state *state, int *err, char **err_info)
{
  struct erf_meta_tag tag = {0, 0, NULL};
  uint32_t tagtotallength;
  int interface_index = -1;
  wtap_block_t int_data = NULL;
  wtapng_if_descr_mandatory_t* int_data_mand = NULL;
  if_filter_opt_t if_filter;
  uint32_t if_num = 0;
  struct erf_if_info* if_info = NULL;

  if (!wth) {
    *err = WTAP_ERR_INTERNAL;
    *err_info = ws_strdup_printf("erf: populate_interface_info called with wth NULL");
    return -1;
  }
  if (!state) {
    *err = WTAP_ERR_INTERNAL;
    *err_info = ws_strdup_printf("erf: populate_interface_info called with state NULL");
    return -1;
  }
  if (!pseudo_header) {
    *err = WTAP_ERR_INTERNAL;
    *err_info = ws_strdup_printf("erf: populate_interface_info called with pseudo_header NULL");
    return -1;
  }
  if (!state->if_map) {
    *err = WTAP_ERR_INTERNAL;
    *err_info = ws_strdup_printf("erf: populate_interface_info called with state->if_map NULL");
    return -1;
  }

  /* Section ID of interface is defined to match ERF interface id. */
  if_num = state->sectionid - 1;
  /*
   * Get or create the interface (there can be multiple interfaces in
   * a Provenance record).
   */
  if (if_num < ERF_MAX_INTERFACES) { /* Note: -1u > ERF_MAX_INTERFACES */
    if_info = &state->if_map->interfaces[if_num];
    interface_index = if_info->if_index;

    /* Check if the interface information is still uninitialized */
    if (interface_index == -1) {
      uint8_t *tag_ptr_tmp = state->tag_ptr;
      uint32_t remaining_len_tmp = state->remaining_len;

      /* First iterate tags, checking we aren't looking at a timing port */
      /*
       * XXX: we deliberately only do this logic here rather than the per-packet
       * population function so that if somehow we do see packets for an
       * 'invalid' port the interface will be created at that time.
       */
      while ((tagtotallength = erf_meta_read_tag(&tag, tag_ptr_tmp, remaining_len_tmp)) && !ERF_META_IS_SECTION(tag.type)) {
        if (tag.type == ERF_META_TAG_if_port_type) {
          if (tag.length >= 4 && pntoh32(tag.value) == 2) {
            /* This is a timing port, skip it from now on */
            /* XXX: should we skip all non-capture ports instead? */

            if_info->if_index = -2;
            interface_index = -2;
          }
        } else if (tag.type == ERF_META_TAG_stream_num) {
          if (tag.length >= 4) {
            if_info->stream_num = (int32_t) pntoh32(tag.value);
          }
        }

        tag_ptr_tmp += tagtotallength;
        remaining_len_tmp -= tagtotallength;
      }

      /* If the interface is valid but uninitialized, create it */
      if (interface_index == -1) {
        interface_index = erf_populate_interface(erf_priv, wth, pseudo_header, state->if_map->host_id, state->if_map->source_id, (uint8_t) if_num, err, err_info);
        if (interface_index == -1) {
          return -1;
        }
      }
    }

    /* Get the wiretap interface metadata */
    if (interface_index >= 0) {
      int_data = g_array_index(wth->interface_data, wtap_block_t, interface_index);
      int_data_mand = (wtapng_if_descr_mandatory_t*)wtap_block_get_mandatory_data(int_data);
    } else if (interface_index == -2) {
      /* timing/unknown port */
      return 0;
    } else {
      *err = WTAP_ERR_INTERNAL;
      *err_info = ws_strdup_printf("erf: populate_interface_info got interface_index %d < 0 and != -2", interface_index);
      return -1;
    }
  }

  /*
   * Bail if already have interface metadata or no interface to associate with.
   * We also don't support metadata for >ERF_MAX_INTERFACES interfaces per Host + Source
   * as we only use interface ID.
   */
  if (!int_data)
    return 0;

  if (state->if_map->interface_gentime > state->gen_time && state->if_map->interface_metadata & (1 << if_num))
    return 0;

  while ((tagtotallength = erf_meta_read_tag(&tag, state->tag_ptr, state->remaining_len)) && !ERF_META_IS_SECTION(tag.type)) {
    switch (tag.type) {
      case ERF_META_TAG_name:
        /* TODO: fall back to module "dev_name Port N"? */
        if (!if_info->name) {
          if_info->name = g_strndup((char*) tag.value, tag.length);
          erf_set_interface_descr(int_data, OPT_IDB_NAME, state->if_map->host_id, state->if_map->source_id, (uint8_t) if_num, if_info->name);

          /* If we have no description, also copy to wtap if_description */
          if (!if_info->descr) {
            erf_set_interface_descr(int_data, OPT_IDB_DESCRIPTION, state->if_map->host_id, state->if_map->source_id, (uint8_t) if_num, if_info->name);
          }
        }
        break;
      case ERF_META_TAG_descr:
        if (!if_info->descr) {
          if_info->descr = g_strndup((char*) tag.value, tag.length);
          erf_set_interface_descr(int_data, OPT_IDB_DESCRIPTION, state->if_map->host_id, state->if_map->source_id, (uint8_t) if_num, if_info->descr);

          /* If we have no name, also copy to wtap if_name */
          if (!if_info->name) {
            erf_set_interface_descr(int_data, OPT_IDB_NAME, state->if_map->host_id, state->if_map->source_id, (uint8_t) if_num, if_info->descr);
          }
        }
        break;
      case ERF_META_TAG_if_speed:
        if (tag.length >= 8)
          wtap_block_add_uint64_option(int_data, OPT_IDB_SPEED, pntoh64(tag.value));
        break;
      case ERF_META_TAG_if_num:
        /*
         * XXX: We ignore this as Section ID must match the ERF ifid and
         * that is all we care about/have space for at the moment. if_num
         * is only really useful with >ERF_MAX_INTERFACES interfaces.
         */
        /* TODO: might want to put this number in description */
        break;
      case ERF_META_TAG_fcs_len:
        if (tag.length >= 4) {
          wtap_block_add_uint8_option(int_data, OPT_IDB_FCSLEN, (uint8_t) pntoh32(tag.value));
          if_info->set_flags.fcs_len = 1;
        }
        break;
      case ERF_META_TAG_snaplen:
        /* XXX: this generally per stream */
        if (tag.length >= 4) {
          int_data_mand->snap_len = pntoh32(tag.value);
          if_info->set_flags.snaplen = 1;
        }
        break;
      case ERF_META_TAG_comment:
        wtap_block_add_string_option(int_data, OPT_COMMENT, tag.value, tag.length);
        break;
      case ERF_META_TAG_filter:
        if_filter.type = if_filter_pcap;
        if_filter.data.filter_str = g_strndup((char*) tag.value, tag.length);
        wtap_block_add_if_filter_option(int_data, OPT_IDB_FILTER, &if_filter);
        g_free(if_filter.data.filter_str);
        if_info->set_flags.filter = 1;
        break;
      default:
        break;
    }

    state->tag_ptr += tagtotallength;
    state->remaining_len -= tagtotallength;
  }

  /* Post processing */
  /*
   * XXX: Assumes module defined first. It is higher in hierarchy so only set
   * if not already.
   */

  /*
   * XXX: Missing exposed existence/type-check. No way currently to check if
   * been set in the optionblock.
   */
  if (!if_info->set_flags.filter) {
    if (state->if_map->module_filter_str) {
      /* Duplicate because might use with multiple interfaces */
      if_filter.type = if_filter_pcap;
      if_filter.data.filter_str = state->if_map->module_filter_str;
      wtap_block_add_if_filter_option(int_data, OPT_IDB_FILTER, &if_filter);
      /*
       * Don't set flag because stream is more specific than module.
       */
    } else if (state->if_map->capture_filter_str) {
      /* TODO: display separately? Note that we could have multiple captures
       * from multiple hosts in the file */
      if_filter.type = if_filter_pcap;
      if_filter.data.filter_str = state->if_map->capture_filter_str;
      wtap_block_add_if_filter_option(int_data, OPT_IDB_FILTER, &if_filter);
    }
  }

  if (state->if_map->module_fcs_len != -1 && !if_info->set_flags.fcs_len) {
    wtap_block_add_uint8_option(int_data, OPT_IDB_FCSLEN, (uint8_t) state->if_map->module_fcs_len);
    if_info->set_flags.fcs_len = 1;
  }

  if (state->if_map->module_snaplen != (uint32_t) -1 && !if_info->set_flags.snaplen && tag.value) {
    int_data_mand->snap_len = pntoh32(tag.value);
    if_info->set_flags.snaplen = 1;
  }

  state->interface_metadata |= 1 << if_num;

  return 1;
}

static int populate_stream_info(erf_t *erf_priv _U_, wtap *wth, union wtap_pseudo_header *pseudo_header, struct erf_meta_read_state *state, int *err, char **err_info)
{
  struct erf_meta_tag tag = {0, 0, NULL};
  uint32_t tagtotallength;
  int interface_index = -1;
  wtap_block_t int_data = NULL;
  wtapng_if_descr_mandatory_t* int_data_mand = NULL;
  if_filter_opt_t if_filter;
  uint32_t if_num = 0;
  int32_t stream_num = -1;
  uint8_t *tag_ptr_tmp;
  uint32_t remaining_len_tmp;
  struct erf_if_info* if_info = NULL;

  if (!wth) {
    *err = WTAP_ERR_INTERNAL;
    *err_info = ws_strdup_printf("erf: populate_stream_info called with wth NULL");
    return -1;
  }
  if (!pseudo_header) {
    *err = WTAP_ERR_INTERNAL;
    *err_info = ws_strdup_printf("erf: populate_stream_info called with pseudo_header NULL");
    return -1;
  }
  if (!state) {
    *err = WTAP_ERR_INTERNAL;
    *err_info = ws_strdup_printf("erf: populate_stream_info called with state NULL");
    return -1;
  }
  if (!state->if_map) {
    *err = WTAP_ERR_INTERNAL;
    *err_info = ws_strdup_printf("erf: populate_stream_info called with state->if_map NULL");
    return -1;
  }

  tag_ptr_tmp = state->tag_ptr;
  remaining_len_tmp = state->remaining_len;

  /*
   * XXX: We ignore parent section ID because it doesn't represent the
   * many-to-many relationship of interfaces and streams very well. The stream is
   * associated with all interfaces in the record that don't have a stream_num
   * that says otherwise.
   */

  if (state->sectionid > 0 && state->sectionid != 0x7fff) {
    /* Section ID of stream is supposed to match stream_num. */
    stream_num = state->sectionid - 1;
  } else {
    /* First iterate tags, looking for the stream number interfaces might associate with. */
    while ((tagtotallength = erf_meta_read_tag(&tag, tag_ptr_tmp, remaining_len_tmp)) && !ERF_META_IS_SECTION(tag.type)) {
      if (tag.type == ERF_META_TAG_stream_num) {
        if (tag.length >= 4) {
          stream_num = (int32_t) pntoh32(tag.value);
        }
      }

      tag_ptr_tmp += tagtotallength;
      remaining_len_tmp -= tagtotallength;
    }
  }
  /* Otherwise assume the stream applies to all interfaces in the record */

  for (if_num = 0; if_num < ERF_MAX_INTERFACES; if_num++) {
    tag_ptr_tmp = state->tag_ptr;
    remaining_len_tmp = state->remaining_len;
    if_info = &state->if_map->interfaces[if_num];

    /* Check if we should be handling this interface */
    /* XXX: currently skips interfaces that are not in the record. */
    if (state->if_map->interface_metadata & (1 << if_num)
        || !(state->interface_metadata & (1 << if_num))) {
      continue;
    }

    if (if_info->stream_num != -1
        && if_info->stream_num != stream_num) {
      continue;
    }

    interface_index = if_info->if_index;
    /* Get the wiretap interface metadata */
    if (interface_index >= 0) {
        int_data = g_array_index(wth->interface_data, wtap_block_t, interface_index);
        int_data_mand = (wtapng_if_descr_mandatory_t*)wtap_block_get_mandatory_data(int_data);
    }

    if (!int_data) {
      continue;
    }

    while ((tagtotallength = erf_meta_read_tag(&tag, tag_ptr_tmp, remaining_len_tmp)) && !ERF_META_IS_SECTION(tag.type)) {
      switch (tag.type) {
        case ERF_META_TAG_fcs_len:
          if (tag.length >= 4) {
            /* Use the largest fcslen of matching streams */
            int8_t fcs_len = (int8_t) pntoh32(tag.value);
            uint8_t old_fcs_len = 0;

            switch (wtap_block_get_uint8_option_value(int_data, OPT_IDB_FCSLEN, &old_fcs_len)) {

              case WTAP_OPTTYPE_SUCCESS:
                /* We already have an FCS length option; update it. */
                if (fcs_len > old_fcs_len || !if_info->set_flags.fcs_len) {
                  wtap_block_set_uint8_option_value(int_data, OPT_IDB_FCSLEN, (uint8_t) pntoh32(tag.value));
                  if_info->set_flags.fcs_len = 1;
                }
                break;

              case WTAP_OPTTYPE_NOT_FOUND:
                /* We don't have an FCS length option; add it. */
                wtap_block_add_uint8_option(int_data, OPT_IDB_FCSLEN, (uint8_t) pntoh32(tag.value));
                if_info->set_flags.fcs_len = 1;
                break;

              default:
                /* "shouldn't happen" */
                break;
            }
          }
          break;
        case ERF_META_TAG_snaplen:
          if (tag.length >= 4) {
            /* Use the largest snaplen of matching streams */
            uint32_t snaplen = pntoh32(tag.value);

            if (snaplen > int_data_mand->snap_len || !if_info->set_flags.snaplen) {
              int_data_mand->snap_len = pntoh32(tag.value);
              if_info->set_flags.snaplen = 1;
            }
          }
          break;
        case ERF_META_TAG_filter:
          /* Override only if not set */
          if (!if_info->set_flags.filter) {
            if_filter.type = if_filter_pcap;
            if_filter.data.filter_str = g_strndup((char*) tag.value, tag.length);
            wtap_block_add_if_filter_option(int_data, OPT_IDB_FILTER, &if_filter);
            g_free(if_filter.data.filter_str);
            if_info->set_flags.filter = 1;
          }
          break;
        default:
          break;
      }

      tag_ptr_tmp += tagtotallength;
      remaining_len_tmp -= tagtotallength;
    }
  }
  state->tag_ptr = tag_ptr_tmp;
  state->remaining_len = remaining_len_tmp;

  return 1;
}

static int populate_anchor_info(erf_t *erf_priv, wtap *wth, union wtap_pseudo_header *pseudo_header, struct erf_meta_read_state *state, GPtrArray *anchor_mappings_to_update, int *err, char **err_info) {
  struct erf_meta_tag tag = {0, 0, NULL};
  uint32_t tagtotallength;
  char *comment_ptr = NULL;
  unsigned i = 0;

  if (!wth) {
    *err = WTAP_ERR_INTERNAL;
    *err_info = ws_strdup_printf("erf: populate_anchor_info called with wth NULL");
    return -1;
  }
  if (!state) {
    *err = WTAP_ERR_INTERNAL;
    *err_info = ws_strdup_printf("erf: populate_anchor_info called with state NULL");
    return -1;
  }
  if (!pseudo_header) {
    *err = WTAP_ERR_INTERNAL;
    *err_info = ws_strdup_printf("erf: populate_anchor_info called with pseudo_header NULL");
    return -1;
  }

  if (!anchor_mappings_to_update || anchor_mappings_to_update->len == 0)
    return 0;

  while ((tagtotallength = erf_meta_read_tag(&tag, state->tag_ptr, state->remaining_len)) && !ERF_META_IS_SECTION(tag.type)) {
    /* XXX:Always gets the first comment tag in the section */
    switch(tag.type) {
      case ERF_META_TAG_comment:
        if(!comment_ptr) {
          comment_ptr = g_strndup((char*)tag.value, tag.length);
        }
        break;
      default:
        break;
    }

    state->tag_ptr += tagtotallength;
    state->remaining_len -= tagtotallength;
  }

  if(comment_ptr) {
    for(i = 0; i < anchor_mappings_to_update->len; i++) {
      struct erf_anchor_mapping *mapping;
      struct erf_anchor_mapping *lookup_result;

      mapping = (struct erf_anchor_mapping*)g_ptr_array_index(anchor_mappings_to_update, i);
      lookup_result = (struct erf_anchor_mapping*)g_hash_table_lookup(erf_priv->anchor_map, mapping);

      /* Use the most recent comment, across all anchors associated with the
       * record. */
      if(lookup_result) {
        if(lookup_result->gen_time < state->gen_time) {
          lookup_result->gen_time = state->gen_time;
          g_free(lookup_result->comment);
          lookup_result->comment = g_strdup(comment_ptr);
        }
      }
      else {
        /* !lookup_result */
        struct erf_anchor_mapping *new_mapping;
        new_mapping = g_new0(struct erf_anchor_mapping, 1);
        new_mapping->anchor_id = mapping->anchor_id;
        new_mapping->host_id = mapping->host_id;
        new_mapping->gen_time = state->gen_time;
        new_mapping->comment = g_strdup(comment_ptr);
        g_hash_table_replace(erf_priv->anchor_map, new_mapping, new_mapping);
      }
    }
  }

  g_free(comment_ptr);

  return 1;
}

/* Populates the capture and interface information for display on the Capture File Properties */
static int populate_summary_info(erf_t *erf_priv, wtap *wth, wtap_rec *rec, uint32_t packet_size, GPtrArray *anchor_mappings_to_update, int *err, char **err_info)
{
  struct erf_meta_read_state state = {0};
  struct erf_meta_read_state *state_post = NULL;
  uint64_t host_id;
  uint8_t source_id;
  GList *post_list = NULL;
  GList *item = NULL;

  struct erf_meta_tag tag = {0, 0, NULL};
  uint32_t tagtotallength;

  if (!wth) {
    *err = WTAP_ERR_INTERNAL;
    *err_info = ws_strdup_printf("erf: populate_summary_info called with wth NULL");
    return -1;
  }
  if (!erf_priv) {
    *err = WTAP_ERR_INTERNAL;
    *err_info = ws_strdup_printf("erf: populate_summary_info called with erf_priv NULL");
    return -1;
  }

  erf_get_source_from_header(&rec->rec_header.packet_header.pseudo_header, &host_id, &source_id);

  if (host_id == 0) {
    host_id = erf_priv->implicit_host_id;
  }

  state.if_map = erf_find_interface_mapping(erf_priv, host_id, source_id);

  if (!state.if_map) {
    state.if_map = erf_if_mapping_create(host_id, source_id);
    /* g_hash_table_add() only exists since 2.32. */
    g_hash_table_replace(erf_priv->if_map, state.if_map, state.if_map);

  }


  state.tag_ptr = rec->data.data;
  state.remaining_len = packet_size;

  /* Read until see next section tag */
  while ((tagtotallength = erf_meta_read_tag(&tag, state.tag_ptr, state.remaining_len))) {
    /*
     * Obtain the gen_time from the non-section at the beginning of the record
     */
    if (!ERF_META_IS_SECTION(tag.type)) {
      if(state.gen_time == 0U
          && tag.type == ERF_META_TAG_gen_time
          ) {
        memcpy(&state.gen_time, tag.value, sizeof(state.gen_time));

        /*
         * Since wireshark doesn't have a concept of different summary metadata
         * over time, skip the record if metadata is older than what we already have.
         */
        /* TODO: This doesn't work very well for some tags that map to
         * pcapng options where the pcapng specification only allows one
         * instance per block, which is the case for most options.  The
         * only current exxceptions are:
         *
         *   comments;
         *   IPv4 and IPv6 addresses for an interface;
         *   hash values for a packet;
         *   custom options.
         *
         * For options where only one instance is allowed per block,
         * wtap_block_add_XXX_option() is currently used to add a new
         * instance of an option to a block that has no instance (it
         * fails if there's already an instance), and
         * wtap_block_set_XXX_optin() is currently used to change the
         * value of an option in a block that has one instance (it fails
         * if there isn't already an instance).
         *
         * For options where more than one instance is allowed per block,
         * wtap_block_add_XXX_option() is used to add a new instance to
         * a block, no matter how many instances it currently has, and
         * wtap_block_set_nth_XXX_option() is used to change the value
         * of the Nth instance of an option in a block (the block must
         * *have* an Nth instance).
         *
         * Currently we only particularly care about updating the capture comment
         * and a few counters anyway.
         */
        if ((state.if_map->interface_metadata & 0xff)
            && state.gen_time < erf_priv->host_gentime && state.gen_time < erf_priv->capture_gentime
            && (!anchor_mappings_to_update || !anchor_mappings_to_update->len)) {
          return 0;
        }
      }
      /*
       * Skip until we get to the next section tag (which could be the current tag
       * after an empty section or successful parsing).
       */
      /* adjust offset */
      state.tag_ptr += tagtotallength;
      state.remaining_len -= tagtotallength;
      continue;
    }

    /*
     * We are now looking at the next section (and would have exited the loop
     * if we reached the end).
     */

    /* Update parent section. Implicit grouping is by a change in section except Interface and Stream. */
    if (tag.type != state.sectiontype) {
      if ((tag.type == ERF_META_SECTION_STREAM && state.sectiontype == ERF_META_SECTION_INTERFACE) ||
          (tag.type == ERF_META_SECTION_INTERFACE && state.sectiontype == ERF_META_SECTION_STREAM)) {
        /* do nothing */
      } else {
        state.parentsectiontype = state.sectiontype;
        state.parentsectionid = state.sectionid;
      }
    }

    /* Update with new sectiontype */
    state.sectiontype = tag.type;
    if (tag.length >= 4) {
      state.sectionid = pntoh16(tag.value);
    } else {
      state.sectionid = 0;
    }

    /* Adjust offset to that of first tag in section */
    state.tag_ptr += tagtotallength;
    state.remaining_len -= tagtotallength;

    if (erf_meta_read_tag(&tag, state.tag_ptr, state.remaining_len)) {
      /*
       * Process parent section tag if present (which must be the first tag in
       * the section).
       */
      if (tag.type == ERF_META_TAG_parent_section && tag.length >= 4) {
        state.parentsectiontype = pntoh16(tag.value);
        state.parentsectionid = pntoh16(&tag.value[2]);
      }
    }

    /* Skip empty sections (includes if above read fails) */
    if (ERF_META_IS_SECTION(tag.type)) {
      continue;
    }

    /*
     * Skip sections that don't apply to the general set of records
     * (extension point for per-packet/event metadata).
     * Unless we need to update the anchor info
     * in which case, read into it
     */
    if (state.sectionid & 0x8000) {
      if(state.sectiontype & (ERF_META_SECTION_INFO)) {
        /* TODO: do we care if it returns 0 or 1? */
        if (populate_anchor_info(erf_priv, wth, &rec->rec_header.packet_header.pseudo_header, &state, anchor_mappings_to_update, err, err_info) < 0) {
          return -1;
        }
      }
      continue;
    }

    /*
     * Start at first tag in section, makes loop
     * simpler in called functions too. Also makes iterating after failure
     * much simpler.
     */
    switch (state.sectiontype) {
      case ERF_META_SECTION_CAPTURE:
      case ERF_META_SECTION_HOST:
        /* TODO: do we care if it returns 0 or 1? */
        if (populate_capture_host_info(erf_priv, wth, &rec->rec_header.packet_header.pseudo_header, &state, err, err_info) < 0) {
          return -1;
        }
        break;
      case ERF_META_SECTION_MODULE:
        /* TODO: do we care if it returns 0 or 1? */
        if (populate_module_info(erf_priv, wth, &rec->rec_header.packet_header.pseudo_header, &state, err, err_info) < 0) {
          return -1;
        }
        break;
      case ERF_META_SECTION_INTERFACE:
        /* TODO: do we care if it returns 0 or 1? */
        if (populate_interface_info(erf_priv, wth, &rec->rec_header.packet_header.pseudo_header, &state, err, err_info) < 0) {
          return -1;
        }
        break;
      case ERF_META_SECTION_STREAM:
        /*
         * XXX: Treat streams specially in case the stream information appears
         * before the interface information, as we associate them to interface
         * data.
         */
        post_list = g_list_append(post_list, g_memdup2(&state, sizeof(struct erf_meta_read_state)));
        break;
      case ERF_META_SECTION_SOURCE:
      case ERF_META_SECTION_DNS:
      default:
        /* TODO: Not yet implemented */
        break;
    }
  }

  /* Process streams last */
  if (post_list) {
    item = post_list;
    do {
      state_post = (struct erf_meta_read_state*) item->data;
      switch (state_post->sectiontype) {
        case ERF_META_SECTION_STREAM:
          if (populate_stream_info(erf_priv, wth, &rec->rec_header.packet_header.pseudo_header, state_post, err, err_info) < 0) {
            g_list_foreach(post_list, erf_free_data, NULL);
            g_list_free(post_list);
            return -1;
          }
          break;
      }
    } while ((item = g_list_next(item)));
    /* g_list_free_full() only exists since 2.28. */
    g_list_foreach(post_list, erf_free_data, NULL);
    g_list_free(post_list);
  }

  /*
   * Update known metadata so we only examine the first set of metadata. Need to
   * do this here so can have interface and stream in same record.
   */
  if (state.interface_metadata) {
    state.if_map->interface_metadata |= state.interface_metadata;
    state.if_map->interface_gentime = state.gen_time;
  }

  return 0;
}

static bool get_user_comment_string(wtap_dumper *wdh, char** user_comment_ptr) {
  wtap_block_t wtap_block;
  wtap_opttype_return_val ret;

  wtap_block = NULL;

  if(wdh->shb_hdrs && (wdh->shb_hdrs->len > 0)) {
    wtap_block = g_array_index(wdh->shb_hdrs, wtap_block_t, 0);
  }

  if(wtap_block != NULL) {
    ret = wtap_block_get_nth_string_option_value(wtap_block, OPT_COMMENT, 0, user_comment_ptr);
    if(ret != WTAP_OPTTYPE_SUCCESS) {
      return false;
    }
  }

  return true;
}

static bool erf_dump_priv_compare_capture_comment(wtap_dumper *wdh _U_, erf_dump_t *dump_priv, const union wtap_pseudo_header *pseudo_header, const uint8_t *pd){
  struct erf_meta_read_state state = {0};
  struct erf_meta_tag tag = {0, 0, NULL};
  uint32_t tagtotallength;
  bool found_capture_section = false;
  bool found_normal_section = false;
  char* comment_ptr = NULL;

  state.remaining_len = pseudo_header->erf.phdr.wlen;
  memcpy(&(state.tag_ptr), &pd, sizeof(pd));

  while((tagtotallength = erf_meta_read_tag(&tag, state.tag_ptr, state.remaining_len))) {
    if (ERF_META_IS_SECTION(tag.type)) {
      state.sectiontype = tag.type;
      if (tag.length >= 4) {
        state.sectionid = pntoh16(tag.value);
      } else {
        state.sectionid = 0;
      }

      /* Skip sections that don't apply to the general set of records */
      if (!(state.sectionid & 0x8000)) {
        found_normal_section = true;

        if(tag.type == ERF_META_SECTION_CAPTURE) {
          /* Found the Capture Section */
          found_capture_section = true;
        }
      }
    } else {
      if (state.sectiontype == ERF_META_SECTION_CAPTURE && !(state.sectionid & 0x8000)) {
        if (tag.type == ERF_META_TAG_comment) {
          /* XXX: Only compare the first comment tag */
          if(!comment_ptr) {
            comment_ptr = g_strndup((char*)tag.value, tag.length);
          }
          break;
        }
      }
    }

    /* Read until we have the Capture section */
    state.tag_ptr += tagtotallength;
    state.remaining_len -= tagtotallength;
  }

  if(found_capture_section && (comment_ptr || dump_priv->user_comment_ptr)) {
    if(g_strcmp0(comment_ptr, dump_priv->user_comment_ptr)
        && !(dump_priv->user_comment_ptr == NULL && comment_ptr && comment_ptr[0] == '\0')) {
        /* Also treat "" in ERF as equivalent to NULL as that is how we clear the comment on write. */

      /* Comments are different, we should write extra metadata record at the end of the list */
      dump_priv->write_next_extra_meta = true;
      g_free(comment_ptr);
      return true;
    } else {
      /* We have a capture comment but there is no change, we don't
       * need to insert the 'changed' comment. This most likely happened
       * because we were looking at list of periodic records and got up to the
       * one where the comment was last set. */
      dump_priv->write_next_extra_meta = false;
    }
    /* Otherwise no effect on whether we need to write extra metadata record */
  }
  /* We didn't find a capture section (e.g. looking at a comment Anchor
   * record), or the comment hadn't changed. */

  g_free(comment_ptr);
  /* Return whether we found any non-local metadata (i.e. whether the record has
   * metadata that is more than just packet 'comments') */
  return found_normal_section;
}

static void erf_close(wtap *wth)
{
  erf_t* erf_priv = (erf_t*)wth->priv;

  erf_priv_free(erf_priv);
  /* XXX: Prevent double free by wtap_close() */
  wth->priv = NULL;
}

static const struct supported_option_type section_block_options_supported[] = {
  { OPT_COMMENT, ONE_OPTION_SUPPORTED }, /* XXX - multiple? */
  { OPT_SHB_USERAPPL, ONE_OPTION_SUPPORTED }
};

static const struct supported_option_type interface_block_options_supported[] = {
  { OPT_COMMENT, ONE_OPTION_SUPPORTED }, /* XXX - multiple? */
  { OPT_IDB_NAME, ONE_OPTION_SUPPORTED },
  { OPT_IDB_DESCRIPTION, ONE_OPTION_SUPPORTED },
  { OPT_IDB_OS, ONE_OPTION_SUPPORTED },
  { OPT_IDB_TSOFFSET, ONE_OPTION_SUPPORTED },
  { OPT_IDB_SPEED, ONE_OPTION_SUPPORTED },
  { OPT_IDB_IP4ADDR, ONE_OPTION_SUPPORTED }, /* XXX - multiple? */
  { OPT_IDB_IP6ADDR, ONE_OPTION_SUPPORTED }, /* XXX - multiple? */
  { OPT_IDB_FILTER, ONE_OPTION_SUPPORTED },
  { OPT_IDB_FCSLEN, ONE_OPTION_SUPPORTED }
};

static const struct supported_option_type packet_block_options_supported[] = {
  { OPT_COMMENT, ONE_OPTION_SUPPORTED } /* XXX - multiple? */
};

static const struct supported_block_type erf_blocks_supported[] = {
  /*
   * Per-file comments and application supported; section blocks
   * are used for that.
   * ERF files have only one section.  (XXX - true?)
   */
  { WTAP_BLOCK_SECTION, ONE_BLOCK_SUPPORTED, OPTION_TYPES_SUPPORTED(section_block_options_supported) },

  /*
   * ERF supports multiple interfaces, with information, and
   * supports associating packets with interfaces.  Interface
   * description blocks are used for that.
   */
  { WTAP_BLOCK_IF_ID_AND_INFO, MULTIPLE_BLOCKS_SUPPORTED, OPTION_TYPES_SUPPORTED(interface_block_options_supported) },

  /*
   * Name resolution is supported, but we don't support comments.
   */
  { WTAP_BLOCK_NAME_RESOLUTION, ONE_BLOCK_SUPPORTED, NO_OPTIONS_SUPPORTED },

  /*
   * ERF is a capture format, so it obviously supports packets.
   */
  { WTAP_BLOCK_PACKET, MULTIPLE_BLOCKS_SUPPORTED, OPTION_TYPES_SUPPORTED(packet_block_options_supported) }
};

static const struct file_type_subtype_info erf_info = {
  "Endace ERF capture", "erf", "erf", NULL,
  false, BLOCKS_SUPPORTED(erf_blocks_supported),
  erf_dump_can_write_encap, erf_dump_open, NULL
};

void register_erf(void)
{
  erf_file_type_subtype = wtap_register_file_type_subtype(&erf_info);

  /*
   * Register name for backwards compatibility with the
   * wtap_filetypes table in Lua.
   */
  wtap_register_backwards_compatibility_lua_name("ERF", erf_file_type_subtype);
}

/*
 * Editor modelines  -  https://www.wireshark.org/tools/modelines.html
 *
 * Local Variables:
 * c-basic-offset: 2
 * tab-width: 8
 * indent-tabs-mode: nil
 * End:
 *
 * vi: set shiftwidth=2 tabstop=8 expandtab:
 * :indentSize=2:tabSize=8:noTabs=true:
 */
