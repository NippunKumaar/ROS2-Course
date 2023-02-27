// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from complex_msg:msg/Complex.idl
// generated code does not contain a copyright notice

#ifndef COMPLEX_MSG__MSG__DETAIL__COMPLEX__FUNCTIONS_H_
#define COMPLEX_MSG__MSG__DETAIL__COMPLEX__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "complex_msg/msg/rosidl_generator_c__visibility_control.h"

#include "complex_msg/msg/detail/complex__struct.h"

/// Initialize msg/Complex message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * complex_msg__msg__Complex
 * )) before or use
 * complex_msg__msg__Complex__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msg
bool
complex_msg__msg__Complex__init(complex_msg__msg__Complex * msg);

/// Finalize msg/Complex message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msg
void
complex_msg__msg__Complex__fini(complex_msg__msg__Complex * msg);

/// Create msg/Complex message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * complex_msg__msg__Complex__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msg
complex_msg__msg__Complex *
complex_msg__msg__Complex__create();

/// Destroy msg/Complex message.
/**
 * It calls
 * complex_msg__msg__Complex__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msg
void
complex_msg__msg__Complex__destroy(complex_msg__msg__Complex * msg);

/// Check for msg/Complex message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msg
bool
complex_msg__msg__Complex__are_equal(const complex_msg__msg__Complex * lhs, const complex_msg__msg__Complex * rhs);

/// Copy a msg/Complex message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msg
bool
complex_msg__msg__Complex__copy(
  const complex_msg__msg__Complex * input,
  complex_msg__msg__Complex * output);

/// Initialize array of msg/Complex messages.
/**
 * It allocates the memory for the number of elements and calls
 * complex_msg__msg__Complex__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msg
bool
complex_msg__msg__Complex__Sequence__init(complex_msg__msg__Complex__Sequence * array, size_t size);

/// Finalize array of msg/Complex messages.
/**
 * It calls
 * complex_msg__msg__Complex__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msg
void
complex_msg__msg__Complex__Sequence__fini(complex_msg__msg__Complex__Sequence * array);

/// Create array of msg/Complex messages.
/**
 * It allocates the memory for the array and calls
 * complex_msg__msg__Complex__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msg
complex_msg__msg__Complex__Sequence *
complex_msg__msg__Complex__Sequence__create(size_t size);

/// Destroy array of msg/Complex messages.
/**
 * It calls
 * complex_msg__msg__Complex__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msg
void
complex_msg__msg__Complex__Sequence__destroy(complex_msg__msg__Complex__Sequence * array);

/// Check for msg/Complex message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msg
bool
complex_msg__msg__Complex__Sequence__are_equal(const complex_msg__msg__Complex__Sequence * lhs, const complex_msg__msg__Complex__Sequence * rhs);

/// Copy an array of msg/Complex messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_complex_msg
bool
complex_msg__msg__Complex__Sequence__copy(
  const complex_msg__msg__Complex__Sequence * input,
  complex_msg__msg__Complex__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COMPLEX_MSG__MSG__DETAIL__COMPLEX__FUNCTIONS_H_
