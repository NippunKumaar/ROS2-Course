// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from word_count_msg:srv/WordCount.idl
// generated code does not contain a copyright notice
#include "word_count_msg/srv/detail/word_count__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "word_count_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "word_count_msg/srv/detail/word_count__struct.h"
#include "word_count_msg/srv/detail/word_count__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // words
#include "rosidl_runtime_c/string_functions.h"  // words

// forward declare type support functions


using _WordCount_Request__ros_msg_type = word_count_msg__srv__WordCount_Request;

static bool _WordCount_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WordCount_Request__ros_msg_type * ros_message = static_cast<const _WordCount_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: words
  {
    const rosidl_runtime_c__String * str = &ros_message->words;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _WordCount_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WordCount_Request__ros_msg_type * ros_message = static_cast<_WordCount_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: words
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->words.data) {
      rosidl_runtime_c__String__init(&ros_message->words);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->words,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'words'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_word_count_msg
size_t get_serialized_size_word_count_msg__srv__WordCount_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WordCount_Request__ros_msg_type * ros_message = static_cast<const _WordCount_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name words
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->words.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _WordCount_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_word_count_msg__srv__WordCount_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_word_count_msg
size_t max_serialized_size_word_count_msg__srv__WordCount_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: words
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _WordCount_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_word_count_msg__srv__WordCount_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WordCount_Request = {
  "word_count_msg::srv",
  "WordCount_Request",
  _WordCount_Request__cdr_serialize,
  _WordCount_Request__cdr_deserialize,
  _WordCount_Request__get_serialized_size,
  _WordCount_Request__max_serialized_size
};

static rosidl_message_type_support_t _WordCount_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WordCount_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, word_count_msg, srv, WordCount_Request)() {
  return &_WordCount_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "word_count_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "word_count_msg/srv/detail/word_count__struct.h"
// already included above
// #include "word_count_msg/srv/detail/word_count__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _WordCount_Response__ros_msg_type = word_count_msg__srv__WordCount_Response;

static bool _WordCount_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WordCount_Response__ros_msg_type * ros_message = static_cast<const _WordCount_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: count
  {
    cdr << ros_message->count;
  }

  return true;
}

static bool _WordCount_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WordCount_Response__ros_msg_type * ros_message = static_cast<_WordCount_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: count
  {
    cdr >> ros_message->count;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_word_count_msg
size_t get_serialized_size_word_count_msg__srv__WordCount_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WordCount_Response__ros_msg_type * ros_message = static_cast<const _WordCount_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name count
  {
    size_t item_size = sizeof(ros_message->count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WordCount_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_word_count_msg__srv__WordCount_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_word_count_msg
size_t max_serialized_size_word_count_msg__srv__WordCount_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _WordCount_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_word_count_msg__srv__WordCount_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WordCount_Response = {
  "word_count_msg::srv",
  "WordCount_Response",
  _WordCount_Response__cdr_serialize,
  _WordCount_Response__cdr_deserialize,
  _WordCount_Response__get_serialized_size,
  _WordCount_Response__max_serialized_size
};

static rosidl_message_type_support_t _WordCount_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WordCount_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, word_count_msg, srv, WordCount_Response)() {
  return &_WordCount_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "word_count_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "word_count_msg/srv/word_count.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t WordCount__callbacks = {
  "word_count_msg::srv",
  "WordCount",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, word_count_msg, srv, WordCount_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, word_count_msg, srv, WordCount_Response)(),
};

static rosidl_service_type_support_t WordCount__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &WordCount__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, word_count_msg, srv, WordCount)() {
  return &WordCount__handle;
}

#if defined(__cplusplus)
}
#endif
