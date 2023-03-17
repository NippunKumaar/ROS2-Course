// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from word_count_msg:srv/WordCount.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "word_count_msg/srv/detail/word_count__rosidl_typesupport_introspection_c.h"
#include "word_count_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "word_count_msg/srv/detail/word_count__functions.h"
#include "word_count_msg/srv/detail/word_count__struct.h"


// Include directives for member types
// Member `words`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void word_count_msg__srv__WordCount_Request__rosidl_typesupport_introspection_c__WordCount_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  word_count_msg__srv__WordCount_Request__init(message_memory);
}

void word_count_msg__srv__WordCount_Request__rosidl_typesupport_introspection_c__WordCount_Request_fini_function(void * message_memory)
{
  word_count_msg__srv__WordCount_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember word_count_msg__srv__WordCount_Request__rosidl_typesupport_introspection_c__WordCount_Request_message_member_array[1] = {
  {
    "words",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(word_count_msg__srv__WordCount_Request, words),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers word_count_msg__srv__WordCount_Request__rosidl_typesupport_introspection_c__WordCount_Request_message_members = {
  "word_count_msg__srv",  // message namespace
  "WordCount_Request",  // message name
  1,  // number of fields
  sizeof(word_count_msg__srv__WordCount_Request),
  word_count_msg__srv__WordCount_Request__rosidl_typesupport_introspection_c__WordCount_Request_message_member_array,  // message members
  word_count_msg__srv__WordCount_Request__rosidl_typesupport_introspection_c__WordCount_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  word_count_msg__srv__WordCount_Request__rosidl_typesupport_introspection_c__WordCount_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t word_count_msg__srv__WordCount_Request__rosidl_typesupport_introspection_c__WordCount_Request_message_type_support_handle = {
  0,
  &word_count_msg__srv__WordCount_Request__rosidl_typesupport_introspection_c__WordCount_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_word_count_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, word_count_msg, srv, WordCount_Request)() {
  if (!word_count_msg__srv__WordCount_Request__rosidl_typesupport_introspection_c__WordCount_Request_message_type_support_handle.typesupport_identifier) {
    word_count_msg__srv__WordCount_Request__rosidl_typesupport_introspection_c__WordCount_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &word_count_msg__srv__WordCount_Request__rosidl_typesupport_introspection_c__WordCount_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "word_count_msg/srv/detail/word_count__rosidl_typesupport_introspection_c.h"
// already included above
// #include "word_count_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "word_count_msg/srv/detail/word_count__functions.h"
// already included above
// #include "word_count_msg/srv/detail/word_count__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void word_count_msg__srv__WordCount_Response__rosidl_typesupport_introspection_c__WordCount_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  word_count_msg__srv__WordCount_Response__init(message_memory);
}

void word_count_msg__srv__WordCount_Response__rosidl_typesupport_introspection_c__WordCount_Response_fini_function(void * message_memory)
{
  word_count_msg__srv__WordCount_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember word_count_msg__srv__WordCount_Response__rosidl_typesupport_introspection_c__WordCount_Response_message_member_array[1] = {
  {
    "count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(word_count_msg__srv__WordCount_Response, count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers word_count_msg__srv__WordCount_Response__rosidl_typesupport_introspection_c__WordCount_Response_message_members = {
  "word_count_msg__srv",  // message namespace
  "WordCount_Response",  // message name
  1,  // number of fields
  sizeof(word_count_msg__srv__WordCount_Response),
  word_count_msg__srv__WordCount_Response__rosidl_typesupport_introspection_c__WordCount_Response_message_member_array,  // message members
  word_count_msg__srv__WordCount_Response__rosidl_typesupport_introspection_c__WordCount_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  word_count_msg__srv__WordCount_Response__rosidl_typesupport_introspection_c__WordCount_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t word_count_msg__srv__WordCount_Response__rosidl_typesupport_introspection_c__WordCount_Response_message_type_support_handle = {
  0,
  &word_count_msg__srv__WordCount_Response__rosidl_typesupport_introspection_c__WordCount_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_word_count_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, word_count_msg, srv, WordCount_Response)() {
  if (!word_count_msg__srv__WordCount_Response__rosidl_typesupport_introspection_c__WordCount_Response_message_type_support_handle.typesupport_identifier) {
    word_count_msg__srv__WordCount_Response__rosidl_typesupport_introspection_c__WordCount_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &word_count_msg__srv__WordCount_Response__rosidl_typesupport_introspection_c__WordCount_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "word_count_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "word_count_msg/srv/detail/word_count__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers word_count_msg__srv__detail__word_count__rosidl_typesupport_introspection_c__WordCount_service_members = {
  "word_count_msg__srv",  // service namespace
  "WordCount",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // word_count_msg__srv__detail__word_count__rosidl_typesupport_introspection_c__WordCount_Request_message_type_support_handle,
  NULL  // response message
  // word_count_msg__srv__detail__word_count__rosidl_typesupport_introspection_c__WordCount_Response_message_type_support_handle
};

static rosidl_service_type_support_t word_count_msg__srv__detail__word_count__rosidl_typesupport_introspection_c__WordCount_service_type_support_handle = {
  0,
  &word_count_msg__srv__detail__word_count__rosidl_typesupport_introspection_c__WordCount_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, word_count_msg, srv, WordCount_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, word_count_msg, srv, WordCount_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_word_count_msg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, word_count_msg, srv, WordCount)() {
  if (!word_count_msg__srv__detail__word_count__rosidl_typesupport_introspection_c__WordCount_service_type_support_handle.typesupport_identifier) {
    word_count_msg__srv__detail__word_count__rosidl_typesupport_introspection_c__WordCount_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)word_count_msg__srv__detail__word_count__rosidl_typesupport_introspection_c__WordCount_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, word_count_msg, srv, WordCount_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, word_count_msg, srv, WordCount_Response)()->data;
  }

  return &word_count_msg__srv__detail__word_count__rosidl_typesupport_introspection_c__WordCount_service_type_support_handle;
}
