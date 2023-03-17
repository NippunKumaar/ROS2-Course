// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from word_count_msg:srv/WordCount.idl
// generated code does not contain a copyright notice

#ifndef WORD_COUNT_MSG__SRV__DETAIL__WORD_COUNT__STRUCT_H_
#define WORD_COUNT_MSG__SRV__DETAIL__WORD_COUNT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'words'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/WordCount in the package word_count_msg.
typedef struct word_count_msg__srv__WordCount_Request
{
  rosidl_runtime_c__String words;
} word_count_msg__srv__WordCount_Request;

// Struct for a sequence of word_count_msg__srv__WordCount_Request.
typedef struct word_count_msg__srv__WordCount_Request__Sequence
{
  word_count_msg__srv__WordCount_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} word_count_msg__srv__WordCount_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/WordCount in the package word_count_msg.
typedef struct word_count_msg__srv__WordCount_Response
{
  uint64_t count;
} word_count_msg__srv__WordCount_Response;

// Struct for a sequence of word_count_msg__srv__WordCount_Response.
typedef struct word_count_msg__srv__WordCount_Response__Sequence
{
  word_count_msg__srv__WordCount_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} word_count_msg__srv__WordCount_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WORD_COUNT_MSG__SRV__DETAIL__WORD_COUNT__STRUCT_H_
