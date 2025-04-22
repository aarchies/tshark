#ifndef TSHARK_H
#define TSHARK_H

#ifdef _WIN32
#ifdef TESTDLLEXPORT
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT __declspec(dllimport)
#endif
#else
#define DLLEXPORT
#endif

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

    typedef struct
    {
        char proto[50];
        char sip[50];
        char dip[50];
        char desc[400];
    } edt_data;

    typedef struct
    {
        edt_data packet_info;
        GArray *protocol_info;
    } packet_result;

    typedef struct _protocol_field
    {
        gchar *name;
        gchar *showname;
        gchar *size;
        gchar *pos;
        gchar *show;
        gchar *value;
    } protocol_field;

    typedef struct _protocol_data
    {
        gchar *name;
        gchar *showname;
        gchar *size;
        gchar *pos;
        GArray *fields;
    } protocol_data;

    WS_DLL_PUBLIC void free_packet_result(packet_result *result);                       // 释放内存
    WS_DLL_PUBLIC packet_result dissect_single_packet(const uint8_t *data, size_t len); // 帧解析
    WS_DLL_PUBLIC void process_main_init(void);
    WS_DLL_PUBLIC void process_main_after(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* TSHARK_H */