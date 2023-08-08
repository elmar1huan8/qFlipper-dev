/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.6-dev */

#ifndef PB_PB_SYSTEM_SYSTEM_PB_H_INCLUDED
#define PB_PB_SYSTEM_SYSTEM_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _PB_System_RebootRequest_RebootMode { 
    PB_System_RebootRequest_RebootMode_OS = 0, 
    PB_System_RebootRequest_RebootMode_DFU = 1, 
    PB_System_RebootRequest_RebootMode_UPDATE = 2 
} PB_System_RebootRequest_RebootMode;

typedef enum _PB_System_UpdateResponse_UpdateResultCode { 
    PB_System_UpdateResponse_UpdateResultCode_OK = 0, 
    PB_System_UpdateResponse_UpdateResultCode_ManifestPathInvalid = 1, 
    PB_System_UpdateResponse_UpdateResultCode_ManifestFolderNotFound = 2, 
    PB_System_UpdateResponse_UpdateResultCode_ManifestInvalid = 3, 
    PB_System_UpdateResponse_UpdateResultCode_StageMissing = 4, 
    PB_System_UpdateResponse_UpdateResultCode_StageIntegrityError = 5, 
    PB_System_UpdateResponse_UpdateResultCode_ManifestPointerError = 6, 
    PB_System_UpdateResponse_UpdateResultCode_TargetMismatch = 7, 
    PB_System_UpdateResponse_UpdateResultCode_OutdatedManifestVersion = 8, 
    PB_System_UpdateResponse_UpdateResultCode_IntFull = 9, 
    PB_System_UpdateResponse_UpdateResultCode_UnspecifiedError = 10 
} PB_System_UpdateResponse_UpdateResultCode;

/* Struct definitions */
typedef struct _PB_System_DeviceInfoRequest { 
    char dummy_field;
} PB_System_DeviceInfoRequest;

typedef struct _PB_System_DeviceInfoResponse { 
    char *key; 
    char *value; 
} PB_System_DeviceInfoResponse;

typedef struct _PB_System_FactoryResetRequest { 
    char dummy_field;
} PB_System_FactoryResetRequest;

typedef struct _PB_System_GetDateTimeRequest { 
    char dummy_field;
} PB_System_GetDateTimeRequest;

typedef struct _PB_System_PingRequest { 
    pb_bytes_array_t *data; 
} PB_System_PingRequest;

typedef struct _PB_System_PingResponse { 
    pb_bytes_array_t *data; 
} PB_System_PingResponse;

typedef struct _PB_System_PlayAudiovisualAlertRequest { 
    char dummy_field;
} PB_System_PlayAudiovisualAlertRequest;

typedef struct _PB_System_PowerInfoRequest { 
    char dummy_field;
} PB_System_PowerInfoRequest;

typedef struct _PB_System_PowerInfoResponse { 
    char *key; 
    char *value; 
} PB_System_PowerInfoResponse;

typedef struct _PB_System_ProtobufVersionRequest { 
    char dummy_field;
} PB_System_ProtobufVersionRequest;

typedef struct _PB_System_UpdateRequest { 
    char *update_manifest; 
} PB_System_UpdateRequest;

typedef struct _PB_System_DateTime { 
    /* Time */
    uint8_t hour; /* *< Hour in 24H format: 0-23 */
    uint8_t minute; /* *< Minute: 0-59 */
    uint8_t second; /* *< Second: 0-59 */
    /* Date */
    uint8_t day; /* *< Current day: 1-31 */
    uint8_t month; /* *< Current month: 1-12 */
    uint16_t year; /* *< Current year: 2000-2099 */
    uint8_t weekday; /* *< Current weekday: 1-7 */
} PB_System_DateTime;

typedef struct _PB_System_ProtobufVersionResponse { 
    uint32_t major; 
    uint32_t minor; 
} PB_System_ProtobufVersionResponse;

typedef struct _PB_System_RebootRequest { 
    PB_System_RebootRequest_RebootMode mode; 
} PB_System_RebootRequest;

typedef struct _PB_System_UpdateResponse { 
    PB_System_UpdateResponse_UpdateResultCode code; 
} PB_System_UpdateResponse;

typedef struct _PB_System_GetDateTimeResponse { 
    bool has_datetime;
    PB_System_DateTime datetime; 
} PB_System_GetDateTimeResponse;

typedef struct _PB_System_SetDateTimeRequest { 
    bool has_datetime;
    PB_System_DateTime datetime; 
} PB_System_SetDateTimeRequest;


/* Helper constants for enums */
#define _PB_System_RebootRequest_RebootMode_MIN PB_System_RebootRequest_RebootMode_OS
#define _PB_System_RebootRequest_RebootMode_MAX PB_System_RebootRequest_RebootMode_UPDATE
#define _PB_System_RebootRequest_RebootMode_ARRAYSIZE ((PB_System_RebootRequest_RebootMode)(PB_System_RebootRequest_RebootMode_UPDATE+1))

#define _PB_System_UpdateResponse_UpdateResultCode_MIN PB_System_UpdateResponse_UpdateResultCode_OK
#define _PB_System_UpdateResponse_UpdateResultCode_MAX PB_System_UpdateResponse_UpdateResultCode_UnspecifiedError
#define _PB_System_UpdateResponse_UpdateResultCode_ARRAYSIZE ((PB_System_UpdateResponse_UpdateResultCode)(PB_System_UpdateResponse_UpdateResultCode_UnspecifiedError+1))


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define PB_System_PingRequest_init_default       {NULL}
#define PB_System_PingResponse_init_default      {NULL}
#define PB_System_RebootRequest_init_default     {_PB_System_RebootRequest_RebootMode_MIN}
#define PB_System_DeviceInfoRequest_init_default {0}
#define PB_System_DeviceInfoResponse_init_default {NULL, NULL}
#define PB_System_FactoryResetRequest_init_default {0}
#define PB_System_GetDateTimeRequest_init_default {0}
#define PB_System_GetDateTimeResponse_init_default {false, PB_System_DateTime_init_default}
#define PB_System_SetDateTimeRequest_init_default {false, PB_System_DateTime_init_default}
#define PB_System_DateTime_init_default          {0, 0, 0, 0, 0, 0, 0}
#define PB_System_PlayAudiovisualAlertRequest_init_default {0}
#define PB_System_ProtobufVersionRequest_init_default {0}
#define PB_System_ProtobufVersionResponse_init_default {0, 0}
#define PB_System_UpdateRequest_init_default     {NULL}
#define PB_System_UpdateResponse_init_default    {_PB_System_UpdateResponse_UpdateResultCode_MIN}
#define PB_System_PowerInfoRequest_init_default  {0}
#define PB_System_PowerInfoResponse_init_default {NULL, NULL}
#define PB_System_PingRequest_init_zero          {NULL}
#define PB_System_PingResponse_init_zero         {NULL}
#define PB_System_RebootRequest_init_zero        {_PB_System_RebootRequest_RebootMode_MIN}
#define PB_System_DeviceInfoRequest_init_zero    {0}
#define PB_System_DeviceInfoResponse_init_zero   {NULL, NULL}
#define PB_System_FactoryResetRequest_init_zero  {0}
#define PB_System_GetDateTimeRequest_init_zero   {0}
#define PB_System_GetDateTimeResponse_init_zero  {false, PB_System_DateTime_init_zero}
#define PB_System_SetDateTimeRequest_init_zero   {false, PB_System_DateTime_init_zero}
#define PB_System_DateTime_init_zero             {0, 0, 0, 0, 0, 0, 0}
#define PB_System_PlayAudiovisualAlertRequest_init_zero {0}
#define PB_System_ProtobufVersionRequest_init_zero {0}
#define PB_System_ProtobufVersionResponse_init_zero {0, 0}
#define PB_System_UpdateRequest_init_zero        {NULL}
#define PB_System_UpdateResponse_init_zero       {_PB_System_UpdateResponse_UpdateResultCode_MIN}
#define PB_System_PowerInfoRequest_init_zero     {0}
#define PB_System_PowerInfoResponse_init_zero    {NULL, NULL}

/* Field tags (for use in manual encoding/decoding) */
#define PB_System_DeviceInfoResponse_key_tag     1
#define PB_System_DeviceInfoResponse_value_tag   2
#define PB_System_PingRequest_data_tag           1
#define PB_System_PingResponse_data_tag          1
#define PB_System_PowerInfoResponse_key_tag      1
#define PB_System_PowerInfoResponse_value_tag    2
#define PB_System_UpdateRequest_update_manifest_tag 1
#define PB_System_DateTime_hour_tag              1
#define PB_System_DateTime_minute_tag            2
#define PB_System_DateTime_second_tag            3
#define PB_System_DateTime_day_tag               4
#define PB_System_DateTime_month_tag             5
#define PB_System_DateTime_year_tag              6
#define PB_System_DateTime_weekday_tag           7
#define PB_System_ProtobufVersionResponse_major_tag 1
#define PB_System_ProtobufVersionResponse_minor_tag 2
#define PB_System_RebootRequest_mode_tag         1
#define PB_System_UpdateResponse_code_tag        1
#define PB_System_GetDateTimeResponse_datetime_tag 1
#define PB_System_SetDateTimeRequest_datetime_tag 1

/* Struct field encoding specification for nanopb */
#define PB_System_PingRequest_FIELDLIST(X, a) \
X(a, POINTER,  SINGULAR, BYTES,    data,              1)
#define PB_System_PingRequest_CALLBACK NULL
#define PB_System_PingRequest_DEFAULT NULL

#define PB_System_PingResponse_FIELDLIST(X, a) \
X(a, POINTER,  SINGULAR, BYTES,    data,              1)
#define PB_System_PingResponse_CALLBACK NULL
#define PB_System_PingResponse_DEFAULT NULL

#define PB_System_RebootRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    mode,              1)
#define PB_System_RebootRequest_CALLBACK NULL
#define PB_System_RebootRequest_DEFAULT NULL

#define PB_System_DeviceInfoRequest_FIELDLIST(X, a) \

#define PB_System_DeviceInfoRequest_CALLBACK NULL
#define PB_System_DeviceInfoRequest_DEFAULT NULL

#define PB_System_DeviceInfoResponse_FIELDLIST(X, a) \
X(a, POINTER,  SINGULAR, STRING,   key,               1) \
X(a, POINTER,  SINGULAR, STRING,   value,             2)
#define PB_System_DeviceInfoResponse_CALLBACK NULL
#define PB_System_DeviceInfoResponse_DEFAULT NULL

#define PB_System_FactoryResetRequest_FIELDLIST(X, a) \

#define PB_System_FactoryResetRequest_CALLBACK NULL
#define PB_System_FactoryResetRequest_DEFAULT NULL

#define PB_System_GetDateTimeRequest_FIELDLIST(X, a) \

#define PB_System_GetDateTimeRequest_CALLBACK NULL
#define PB_System_GetDateTimeRequest_DEFAULT NULL

#define PB_System_GetDateTimeResponse_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  datetime,          1)
#define PB_System_GetDateTimeResponse_CALLBACK NULL
#define PB_System_GetDateTimeResponse_DEFAULT NULL
#define PB_System_GetDateTimeResponse_datetime_MSGTYPE PB_System_DateTime

#define PB_System_SetDateTimeRequest_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  datetime,          1)
#define PB_System_SetDateTimeRequest_CALLBACK NULL
#define PB_System_SetDateTimeRequest_DEFAULT NULL
#define PB_System_SetDateTimeRequest_datetime_MSGTYPE PB_System_DateTime

#define PB_System_DateTime_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   hour,              1) \
X(a, STATIC,   SINGULAR, UINT32,   minute,            2) \
X(a, STATIC,   SINGULAR, UINT32,   second,            3) \
X(a, STATIC,   SINGULAR, UINT32,   day,               4) \
X(a, STATIC,   SINGULAR, UINT32,   month,             5) \
X(a, STATIC,   SINGULAR, UINT32,   year,              6) \
X(a, STATIC,   SINGULAR, UINT32,   weekday,           7)
#define PB_System_DateTime_CALLBACK NULL
#define PB_System_DateTime_DEFAULT NULL

#define PB_System_PlayAudiovisualAlertRequest_FIELDLIST(X, a) \

#define PB_System_PlayAudiovisualAlertRequest_CALLBACK NULL
#define PB_System_PlayAudiovisualAlertRequest_DEFAULT NULL

#define PB_System_ProtobufVersionRequest_FIELDLIST(X, a) \

#define PB_System_ProtobufVersionRequest_CALLBACK NULL
#define PB_System_ProtobufVersionRequest_DEFAULT NULL

#define PB_System_ProtobufVersionResponse_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   major,             1) \
X(a, STATIC,   SINGULAR, UINT32,   minor,             2)
#define PB_System_ProtobufVersionResponse_CALLBACK NULL
#define PB_System_ProtobufVersionResponse_DEFAULT NULL

#define PB_System_UpdateRequest_FIELDLIST(X, a) \
X(a, POINTER,  SINGULAR, STRING,   update_manifest,   1)
#define PB_System_UpdateRequest_CALLBACK NULL
#define PB_System_UpdateRequest_DEFAULT NULL

#define PB_System_UpdateResponse_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    code,              1)
#define PB_System_UpdateResponse_CALLBACK NULL
#define PB_System_UpdateResponse_DEFAULT NULL

#define PB_System_PowerInfoRequest_FIELDLIST(X, a) \

#define PB_System_PowerInfoRequest_CALLBACK NULL
#define PB_System_PowerInfoRequest_DEFAULT NULL

#define PB_System_PowerInfoResponse_FIELDLIST(X, a) \
X(a, POINTER,  SINGULAR, STRING,   key,               1) \
X(a, POINTER,  SINGULAR, STRING,   value,             2)
#define PB_System_PowerInfoResponse_CALLBACK NULL
#define PB_System_PowerInfoResponse_DEFAULT NULL

extern const pb_msgdesc_t PB_System_PingRequest_msg;
extern const pb_msgdesc_t PB_System_PingResponse_msg;
extern const pb_msgdesc_t PB_System_RebootRequest_msg;
extern const pb_msgdesc_t PB_System_DeviceInfoRequest_msg;
extern const pb_msgdesc_t PB_System_DeviceInfoResponse_msg;
extern const pb_msgdesc_t PB_System_FactoryResetRequest_msg;
extern const pb_msgdesc_t PB_System_GetDateTimeRequest_msg;
extern const pb_msgdesc_t PB_System_GetDateTimeResponse_msg;
extern const pb_msgdesc_t PB_System_SetDateTimeRequest_msg;
extern const pb_msgdesc_t PB_System_DateTime_msg;
extern const pb_msgdesc_t PB_System_PlayAudiovisualAlertRequest_msg;
extern const pb_msgdesc_t PB_System_ProtobufVersionRequest_msg;
extern const pb_msgdesc_t PB_System_ProtobufVersionResponse_msg;
extern const pb_msgdesc_t PB_System_UpdateRequest_msg;
extern const pb_msgdesc_t PB_System_UpdateResponse_msg;
extern const pb_msgdesc_t PB_System_PowerInfoRequest_msg;
extern const pb_msgdesc_t PB_System_PowerInfoResponse_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define PB_System_PingRequest_fields &PB_System_PingRequest_msg
#define PB_System_PingResponse_fields &PB_System_PingResponse_msg
#define PB_System_RebootRequest_fields &PB_System_RebootRequest_msg
#define PB_System_DeviceInfoRequest_fields &PB_System_DeviceInfoRequest_msg
#define PB_System_DeviceInfoResponse_fields &PB_System_DeviceInfoResponse_msg
#define PB_System_FactoryResetRequest_fields &PB_System_FactoryResetRequest_msg
#define PB_System_GetDateTimeRequest_fields &PB_System_GetDateTimeRequest_msg
#define PB_System_GetDateTimeResponse_fields &PB_System_GetDateTimeResponse_msg
#define PB_System_SetDateTimeRequest_fields &PB_System_SetDateTimeRequest_msg
#define PB_System_DateTime_fields &PB_System_DateTime_msg
#define PB_System_PlayAudiovisualAlertRequest_fields &PB_System_PlayAudiovisualAlertRequest_msg
#define PB_System_ProtobufVersionRequest_fields &PB_System_ProtobufVersionRequest_msg
#define PB_System_ProtobufVersionResponse_fields &PB_System_ProtobufVersionResponse_msg
#define PB_System_UpdateRequest_fields &PB_System_UpdateRequest_msg
#define PB_System_UpdateResponse_fields &PB_System_UpdateResponse_msg
#define PB_System_PowerInfoRequest_fields &PB_System_PowerInfoRequest_msg
#define PB_System_PowerInfoResponse_fields &PB_System_PowerInfoResponse_msg

/* Maximum encoded size of messages (where known) */
/* PB_System_PingRequest_size depends on runtime parameters */
/* PB_System_PingResponse_size depends on runtime parameters */
/* PB_System_DeviceInfoResponse_size depends on runtime parameters */
/* PB_System_UpdateRequest_size depends on runtime parameters */
/* PB_System_PowerInfoResponse_size depends on runtime parameters */
#define PB_System_DateTime_size                  22
#define PB_System_DeviceInfoRequest_size         0
#define PB_System_FactoryResetRequest_size       0
#define PB_System_GetDateTimeRequest_size        0
#define PB_System_GetDateTimeResponse_size       24
#define PB_System_PlayAudiovisualAlertRequest_size 0
#define PB_System_PowerInfoRequest_size          0
#define PB_System_ProtobufVersionRequest_size    0
#define PB_System_ProtobufVersionResponse_size   12
#define PB_System_RebootRequest_size             2
#define PB_System_SetDateTimeRequest_size        24
#define PB_System_UpdateResponse_size            2

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
