// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from add_two_ints:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef ADD_TWO_INTS__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_
#define ADD_TWO_INTS__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddTwoInts in the package add_two_ints.
typedef struct add_two_ints__srv__AddTwoInts_Request
{
  int64_t a;
  int64_t b;
} add_two_ints__srv__AddTwoInts_Request;

// Struct for a sequence of add_two_ints__srv__AddTwoInts_Request.
typedef struct add_two_ints__srv__AddTwoInts_Request__Sequence
{
  add_two_ints__srv__AddTwoInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} add_two_ints__srv__AddTwoInts_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/AddTwoInts in the package add_two_ints.
typedef struct add_two_ints__srv__AddTwoInts_Response
{
  int64_t sum;
} add_two_ints__srv__AddTwoInts_Response;

// Struct for a sequence of add_two_ints__srv__AddTwoInts_Response.
typedef struct add_two_ints__srv__AddTwoInts_Response__Sequence
{
  add_two_ints__srv__AddTwoInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} add_two_ints__srv__AddTwoInts_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ADD_TWO_INTS__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_
