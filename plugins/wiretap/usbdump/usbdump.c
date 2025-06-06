/* usbdump.c
 *
 * Wiretap Library
 * Copyright (c) 1998 by Gilbert Ramirez <gram@alumni.rice.edu>
 *
 * File format support for usbdump file format
 * Copyright (c) 2017 by Jaap Keuter <jaap.keuter@xs4all.nl>
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

/*
 * This wiretap is for an usbdump file format reader. The format is
 * reverse engineered from FreeBSD source code.
 *
 * File format is little endian!
 *
 *                            Header
 *                            ---------------------------------
 * 0E 00 90 9A                header magic
 * 00                         version major
 * 03                         version minor
 * 00 00 00 00 00 00 00 00    reserved
 * 00 00 00 00 00 00 00 00
 * 00 00 00 00 00 00 00 00
 * 00 00
 *
 *                            Frames
 *                            ---------------------------------
 * F0 26 00 00                length of multiframe read from bpf (9968 octets)
 *
 *                            Frame, bpf header (little endian)
 *                            ---------------------------------
 * DE 3F 0E 59                ts sec
 * 6A 77 01 00                ts usec
 * 98 00 00 00                capture length (152)
 * 98 00 00 00                data length (152)
 * 1C                         header length (28)
 * 04                         bpf word alignment size
 * 00 00 00 00 00 00 00 00    padding
 * 00 00
 *
 *                            Frame, captured data
 *                            ---------------------------------
 * 98 00 00 00 00 00 00 00    length, ....
 *
 */

#include "config.h"
#include "wtap-int.h"
#include "file_wrappers.h"
#include "string.h"

void wtap_register_usbdump(void);

#define USBDUMP_MAGIC 0x9a90000e

/* Private data needed to read the file initially. */
typedef struct {
    uint16_t	version;
    uint32_t multiframe_size;
    bool multiframe_overrun;
} usbdump_info_t;


static bool usbdump_read(wtap *wth, wtap_rec *rec,
                             int *err, char **err_info,
                             int64_t *data_offset);
static bool usbdump_seek_read(wtap *wth, int64_t seek_off,
                                  wtap_rec *rec,
                                  int *err, char **err_info);
static bool usbdump_read_packet(wtap *wth, FILE_T fh, wtap_rec *rec,
                                    int *err, char **err_info);

static int usbdump_file_type_subtype;

/*
 * Try to interpret a file as a usbdump formatted file.
 * Read relevant parts of the given file and collect information needed to
 * read the individual frames. Return value indicates whether or not this is
 * recognized as an usbdump file.
 */
static wtap_open_return_val
usbdump_open(wtap *wth, int *err, char **err_info)
{
    uint32_t magic;
    uint16_t version;
    uint32_t multiframe_size;
    usbdump_info_t *usbdump_info;

    /* Read in the number that should be at the start of a "usbdump" file */
    if (!wtap_read_bytes(wth->fh, &magic, sizeof magic, err, err_info)) {
        if (*err != WTAP_ERR_SHORT_READ)
            return WTAP_OPEN_ERROR;
        return WTAP_OPEN_NOT_MINE;
    }

    /* Check the file magic */
    if (GUINT32_FROM_LE(magic) != USBDUMP_MAGIC)
    {
        return WTAP_OPEN_NOT_MINE;
    }

    /* Read the version of the header */
    if (!wtap_read_bytes(wth->fh, &version, sizeof version, err, err_info)) {
        if (*err != WTAP_ERR_SHORT_READ)
            return WTAP_OPEN_ERROR;
        return WTAP_OPEN_NOT_MINE;
    }

    /* Check for the supported version number */
    if (GUINT16_FROM_BE(version) != 3) {
        /* We only support version 0.3 */
        *err = WTAP_ERR_UNSUPPORTED;
        *err_info = ws_strdup_printf("usbdump: version %u.%u unsupported",
            version >> 8, version & 0xff);
        return WTAP_OPEN_NOT_MINE;
    }

    /* Read the reserved field of the header */
    if (!wtap_read_bytes(wth->fh, NULL, 26, err, err_info)) {
        if (*err != WTAP_ERR_SHORT_READ)
            return WTAP_OPEN_ERROR;
        return WTAP_OPEN_NOT_MINE;
    }

    /* Read the initial multiframe size field */
    if (!wtap_read_bytes(wth->fh, &multiframe_size, sizeof multiframe_size,
        err, err_info)) {
        if (*err != WTAP_ERR_SHORT_READ)
            return WTAP_OPEN_ERROR;
        return WTAP_OPEN_NOT_MINE;
    }

    /* Create a private structure to track the multiframe */
    usbdump_info = g_new(usbdump_info_t, 1);
    usbdump_info->version = GUINT16_FROM_BE(version);
    usbdump_info->multiframe_size = GUINT32_FROM_LE(multiframe_size);
    usbdump_info->multiframe_overrun = false;

    /*
     * We are convinced this is a usbdump format file.
     * Setup the wiretap structure and fill it with info of this format.
     */
    wth->priv = (void *)usbdump_info;
    wth->subtype_read = usbdump_read;
    wth->subtype_seek_read = usbdump_seek_read;
    wth->file_type_subtype = usbdump_file_type_subtype;
    wth->file_encap = WTAP_ENCAP_USB_FREEBSD;
    wth->file_tsprec = WTAP_TSPREC_USEC;

    return WTAP_OPEN_MINE;
}

/*
 * Sequential read with offset reporting.
 * Read the next frame in the file and adjust for the multiframe size
 * indication. Report back where reading of this frame started to
 * support subsequent random access read.
 */
static bool
usbdump_read(wtap *wth, wtap_rec *rec, int *err, char **err_info,
             int64_t *data_offset)
{
    usbdump_info_t *usbdump_info = (usbdump_info_t *)wth->priv;

    /* Report the current file location */
    *data_offset = file_tell(wth->fh);

    /* Try to read a packet worth of data */
    if (!usbdump_read_packet(wth, wth->fh, rec, err, err_info))
        return false;

    /* Check if we overrun the multiframe during the last read */
    if (usbdump_info->multiframe_overrun)
    {
        *err = WTAP_ERR_BAD_FILE;
        *err_info = ws_strdup_printf("Multiframe overrun");
        return false;
    }

    /* See if we reached the end of the multiframe */
    if (usbdump_info->multiframe_size == 0)
    {
        /*
         * Try to read the subsequent multiframe size field.
         * This will fail at end of file, but that is accepted.
         */
        wtap_read_bytes_or_eof(wth->fh, &usbdump_info->multiframe_size,
                               sizeof usbdump_info->multiframe_size,
                               err, err_info);
    }

    return true;
}

/*
 * Random access read.
 * Read the frame at the given offset in the file. Store the frame data
 * in a buffer and fill in the packet header info.
 */
static bool
usbdump_seek_read(wtap *wth, int64_t seek_off, wtap_rec *rec,
                  int *err, char **err_info)
{
    /* Seek to the desired file position at the start of the frame */
    if (file_seek(wth->random_fh, seek_off, SEEK_SET, err) == -1)
        return false;

    /* Try to read a packet worth of data */
    if (!usbdump_read_packet(wth, wth->random_fh, rec, err, err_info)) {
        if (*err == 0)
            *err = WTAP_ERR_SHORT_READ;
        return false;
    }

    return true;
}

/*
 * Read the actual frame data from the file.
 * This requires reading the header, determine the size, read frame size worth
 * of data into the buffer and setting the packet header fields to the values
 * of the frame header.
 *
 * Also, for the sequential read, keep track of the position in the multiframe
 * so that we can find the next multiframe size field.
 */
static bool
usbdump_read_packet(wtap *wth, FILE_T fh, wtap_rec *rec,
                    int *err, char **err_info)
{
    usbdump_info_t *usbdump_info = (usbdump_info_t *)wth->priv;

    uint8_t bpf_hdr[18];
    uint8_t bpf_hdr_len, alignment;

    /* Read the packet header */
    if (!wtap_read_bytes_or_eof(fh, bpf_hdr, 18, err, err_info))
        return false;

    /* Get sizes */
    bpf_hdr_len = bpf_hdr[16];
    alignment = bpf_hdr[17];

    /* Check header length */
    if (bpf_hdr_len > 18)
    {
        /* Read packet header padding */
        if (!wtap_read_bytes_or_eof(fh, NULL, bpf_hdr_len - 18, err, err_info))
            return false;
    }

    /* Keep track of multiframe_size and detect overrun */
    if (usbdump_info->multiframe_size < bpf_hdr_len) {
        usbdump_info->multiframe_overrun = true;
    } else {
        usbdump_info->multiframe_size -= bpf_hdr_len;
    }

    /* Setup the per packet structure and fill it with info from this frame */
    rec->rec_type = REC_TYPE_PACKET;
    rec->block = wtap_block_create(WTAP_BLOCK_PACKET);
    rec->presence_flags = WTAP_HAS_TS | WTAP_HAS_CAP_LEN;
    rec->ts.secs = (uint32_t)bpf_hdr[3] << 24 | (uint32_t)bpf_hdr[2] << 16 |
                    (uint32_t)bpf_hdr[1] << 8 | (uint32_t)bpf_hdr[0];
    rec->ts.nsecs = ((uint32_t)bpf_hdr[7] << 24 | (uint32_t)bpf_hdr[6] << 16 |
                     (uint32_t)bpf_hdr[5] << 8 | (uint32_t)bpf_hdr[4]) * 1000;
    rec->rec_header.packet_header.caplen = (uint32_t)bpf_hdr[11] << 24 | (uint32_t)bpf_hdr[10] << 16 |
                   (uint32_t)bpf_hdr[9] << 8 | (uint32_t)bpf_hdr[8];
    rec->rec_header.packet_header.len = (uint32_t)bpf_hdr[15] << 24 | (uint32_t)bpf_hdr[14] << 16 |
                (uint32_t)bpf_hdr[13] << 8 | (uint32_t)bpf_hdr[12];

    /* Read the packet data */
    if (!wtap_read_packet_bytes(fh, &rec->data, rec->rec_header.packet_header.caplen, err, err_info))
        return false;

    /* Keep track of multiframe_size and detect overrun */
    if (usbdump_info->multiframe_size < rec->rec_header.packet_header.caplen) {
        usbdump_info->multiframe_overrun = true;
    } else {
        usbdump_info->multiframe_size -= rec->rec_header.packet_header.caplen;
    }

    /* Check for and apply alignment as defined in the frame header */
    uint8_t pad_len = (uint32_t)alignment -
                     (((uint32_t)bpf_hdr_len + rec->rec_header.packet_header.caplen) &
                      ((uint32_t)alignment - 1));
    if (pad_len < alignment) {
        /* Read alignment from the file */
        if (!wtap_read_bytes(fh, NULL, pad_len, err, err_info))
            return false;

        /* Keep track of multiframe_size and detect overrun */
        if (usbdump_info->multiframe_size < pad_len) {
            usbdump_info->multiframe_overrun = true;
        } else {
            usbdump_info->multiframe_size -= pad_len;
        }
    }

    return true;
}

/*
 * Register with wiretap.
 * Register how we can handle an unknown file to see if this is a valid
 * usbdump file and register information about this file format.
 */
static const struct supported_block_type usbdump_blocks_supported[] = {
    /* We support packet blocks, with no comments or other options. */
    { WTAP_BLOCK_PACKET, MULTIPLE_BLOCKS_SUPPORTED, NO_OPTIONS_SUPPORTED }
};
static const struct file_type_subtype_info fi = {
    "FreeBSD USBDUMP",
    "usbdump",
    NULL,
    NULL,
    false,
    BLOCKS_SUPPORTED(usbdump_blocks_supported),
    NULL,
    NULL,
    NULL
};

void
wtap_register_usbdump(void)
{
    struct open_info oi = {
        "FreeBSD usbdump",
        OPEN_INFO_MAGIC,
        usbdump_open,
        NULL,
        NULL,
        NULL
    };

    wtap_register_open_info(&oi, false);

    usbdump_file_type_subtype = wtap_register_file_type_subtype(&fi);
}

/*
 * Editor modelines  -  https://www.wireshark.org/tools/modelines.html
 *
 * Local variables:
 * c-basic-offset: 4
 * tab-width: 8
 * indent-tabs-mode: nil
 * End:
 *
 * vi: set shiftwidth=4 tabstop=8 expandtab:
 * :indentSize=4:tabSize=8:noTabs=true:
 */
