// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from word_count_msg:srv/WordCount.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "word_count_msg/srv/detail/word_count__struct.h"
#include "word_count_msg/srv/detail/word_count__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace word_count_msg
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _WordCount_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _WordCount_Request_type_support_ids_t;

static const _WordCount_Request_type_support_ids_t _WordCount_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _WordCount_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _WordCount_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _WordCount_Request_type_support_symbol_names_t _WordCount_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, word_count_msg, srv, WordCount_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, word_count_msg, srv, WordCount_Request)),
  }
};

typedef struct _WordCount_Request_type_support_data_t
{
  void * data[2];
} _WordCount_Request_type_support_data_t;

static _WordCount_Request_type_support_data_t _WordCount_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _WordCount_Request_message_typesupport_map = {
  2,
  "word_count_msg",
  &_WordCount_Request_message_typesupport_ids.typesupport_identifier[0],
  &_WordCount_Request_message_typesupport_symbol_names.symbol_name[0],
  &_WordCount_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t WordCount_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_WordCount_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace word_count_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, word_count_msg, srv, WordCount_Request)() {
  return &::word_count_msg::srv::rosidl_typesupport_c::WordCount_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "word_count_msg/srv/detail/word_count__struct.h"
// already included above
// #include "word_count_msg/srv/detail/word_count__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace word_count_msg
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _WordCount_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _WordCount_Response_type_support_ids_t;

static const _WordCount_Response_type_support_ids_t _WordCount_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _WordCount_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _WordCount_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _WordCount_Response_type_support_symbol_names_t _WordCount_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, word_count_msg, srv, WordCount_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, word_count_msg, srv, WordCount_Response)),
  }
};

typedef struct _WordCount_Response_type_support_data_t
{
  void * data[2];
} _WordCount_Response_type_support_data_t;

static _WordCount_Response_type_support_data_t _WordCount_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _WordCount_Response_message_typesupport_map = {
  2,
  "word_count_msg",
  &_WordCount_Response_message_typesupport_ids.typesupport_identifier[0],
  &_WordCount_Response_message_typesupport_symbol_names.symbol_name[0],
  &_WordCount_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t WordCount_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_WordCount_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace word_count_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, word_count_msg, srv, WordCount_Response)() {
  return &::word_count_msg::srv::rosidl_typesupport_c::WordCount_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "word_count_msg/srv/detail/word_count__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace word_count_msg
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _WordCount_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _WordCount_type_support_ids_t;

static const _WordCount_type_support_ids_t _WordCount_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _WordCount_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _WordCount_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _WordCount_type_support_symbol_names_t _WordCount_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, word_count_msg, srv, WordCount)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, word_count_msg, srv, WordCount)),
  }
};

typedef struct _WordCount_type_support_data_t
{
  void * data[2];
} _WordCount_type_support_data_t;

static _WordCount_type_support_data_t _WordCount_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _WordCount_service_typesupport_map = {
  2,
  "word_count_msg",
  &_WordCount_service_typesupport_ids.typesupport_identifier[0],
  &_WordCount_service_typesupport_symbol_names.symbol_name[0],
  &_WordCount_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t WordCount_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_WordCount_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace word_count_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, word_count_msg, srv, WordCount)() {
  return &::word_count_msg::srv::rosidl_typesupport_c::WordCount_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
