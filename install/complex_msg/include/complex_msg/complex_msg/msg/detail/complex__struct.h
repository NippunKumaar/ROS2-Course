// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from complex_msg:msg/Complex.idl
// generated code does not contain a copyright notice

#ifndef COMPLEX_MSG__MSG__DETAIL__COMPLEX__STRUCT_H_
#define COMPLEX_MSG__MSG__DETAIL__COMPLEX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Complex in the package complex_msg.
typedef struct complex_msg__msg__Complex
{
  float real;
  float imaginary;
} complex_msg__msg__Complex;

// Struct for a sequence of complex_msg__msg__Complex.
typedef struct complex_msg__msg__Complex__Sequence
{
  complex_msg__msg__Complex * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} complex_msg__msg__Complex__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMPLEX_MSG__MSG__DETAIL__COMPLEX__STRUCT_H_
