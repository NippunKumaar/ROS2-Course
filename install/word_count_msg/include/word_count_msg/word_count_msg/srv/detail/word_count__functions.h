// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from word_count_msg:srv/WordCount.idl
// generated code does not contain a copyright notice

#ifndef WORD_COUNT_MSG__SRV__DETAIL__WORD_COUNT__FUNCTIONS_H_
#define WORD_COUNT_MSG__SRV__DETAIL__WORD_COUNT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "word_count_msg/msg/rosidl_generator_c__visibility_control.h"

#include "word_count_msg/srv/detail/word_count__struct.h"

/// Initialize srv/WordCount message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * word_count_msg__srv__WordCount_Request
 * )) before or use
 * word_count_msg__srv__WordCount_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
bool
word_count_msg__srv__WordCount_Request__init(word_count_msg__srv__WordCount_Request * msg);

/// Finalize srv/WordCount message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
void
word_count_msg__srv__WordCount_Request__fini(word_count_msg__srv__WordCount_Request * msg);

/// Create srv/WordCount message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * word_count_msg__srv__WordCount_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
word_count_msg__srv__WordCount_Request *
word_count_msg__srv__WordCount_Request__create();

/// Destroy srv/WordCount message.
/**
 * It calls
 * word_count_msg__srv__WordCount_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
void
word_count_msg__srv__WordCount_Request__destroy(word_count_msg__srv__WordCount_Request * msg);

/// Check for srv/WordCount message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
bool
word_count_msg__srv__WordCount_Request__are_equal(const word_count_msg__srv__WordCount_Request * lhs, const word_count_msg__srv__WordCount_Request * rhs);

/// Copy a srv/WordCount message.
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
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
bool
word_count_msg__srv__WordCount_Request__copy(
  const word_count_msg__srv__WordCount_Request * input,
  word_count_msg__srv__WordCount_Request * output);

/// Initialize array of srv/WordCount messages.
/**
 * It allocates the memory for the number of elements and calls
 * word_count_msg__srv__WordCount_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
bool
word_count_msg__srv__WordCount_Request__Sequence__init(word_count_msg__srv__WordCount_Request__Sequence * array, size_t size);

/// Finalize array of srv/WordCount messages.
/**
 * It calls
 * word_count_msg__srv__WordCount_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
void
word_count_msg__srv__WordCount_Request__Sequence__fini(word_count_msg__srv__WordCount_Request__Sequence * array);

/// Create array of srv/WordCount messages.
/**
 * It allocates the memory for the array and calls
 * word_count_msg__srv__WordCount_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
word_count_msg__srv__WordCount_Request__Sequence *
word_count_msg__srv__WordCount_Request__Sequence__create(size_t size);

/// Destroy array of srv/WordCount messages.
/**
 * It calls
 * word_count_msg__srv__WordCount_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
void
word_count_msg__srv__WordCount_Request__Sequence__destroy(word_count_msg__srv__WordCount_Request__Sequence * array);

/// Check for srv/WordCount message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
bool
word_count_msg__srv__WordCount_Request__Sequence__are_equal(const word_count_msg__srv__WordCount_Request__Sequence * lhs, const word_count_msg__srv__WordCount_Request__Sequence * rhs);

/// Copy an array of srv/WordCount messages.
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
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
bool
word_count_msg__srv__WordCount_Request__Sequence__copy(
  const word_count_msg__srv__WordCount_Request__Sequence * input,
  word_count_msg__srv__WordCount_Request__Sequence * output);

/// Initialize srv/WordCount message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * word_count_msg__srv__WordCount_Response
 * )) before or use
 * word_count_msg__srv__WordCount_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
bool
word_count_msg__srv__WordCount_Response__init(word_count_msg__srv__WordCount_Response * msg);

/// Finalize srv/WordCount message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
void
word_count_msg__srv__WordCount_Response__fini(word_count_msg__srv__WordCount_Response * msg);

/// Create srv/WordCount message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * word_count_msg__srv__WordCount_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
word_count_msg__srv__WordCount_Response *
word_count_msg__srv__WordCount_Response__create();

/// Destroy srv/WordCount message.
/**
 * It calls
 * word_count_msg__srv__WordCount_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
void
word_count_msg__srv__WordCount_Response__destroy(word_count_msg__srv__WordCount_Response * msg);

/// Check for srv/WordCount message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
bool
word_count_msg__srv__WordCount_Response__are_equal(const word_count_msg__srv__WordCount_Response * lhs, const word_count_msg__srv__WordCount_Response * rhs);

/// Copy a srv/WordCount message.
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
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
bool
word_count_msg__srv__WordCount_Response__copy(
  const word_count_msg__srv__WordCount_Response * input,
  word_count_msg__srv__WordCount_Response * output);

/// Initialize array of srv/WordCount messages.
/**
 * It allocates the memory for the number of elements and calls
 * word_count_msg__srv__WordCount_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
bool
word_count_msg__srv__WordCount_Response__Sequence__init(word_count_msg__srv__WordCount_Response__Sequence * array, size_t size);

/// Finalize array of srv/WordCount messages.
/**
 * It calls
 * word_count_msg__srv__WordCount_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
void
word_count_msg__srv__WordCount_Response__Sequence__fini(word_count_msg__srv__WordCount_Response__Sequence * array);

/// Create array of srv/WordCount messages.
/**
 * It allocates the memory for the array and calls
 * word_count_msg__srv__WordCount_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
word_count_msg__srv__WordCount_Response__Sequence *
word_count_msg__srv__WordCount_Response__Sequence__create(size_t size);

/// Destroy array of srv/WordCount messages.
/**
 * It calls
 * word_count_msg__srv__WordCount_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
void
word_count_msg__srv__WordCount_Response__Sequence__destroy(word_count_msg__srv__WordCount_Response__Sequence * array);

/// Check for srv/WordCount message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
bool
word_count_msg__srv__WordCount_Response__Sequence__are_equal(const word_count_msg__srv__WordCount_Response__Sequence * lhs, const word_count_msg__srv__WordCount_Response__Sequence * rhs);

/// Copy an array of srv/WordCount messages.
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
ROSIDL_GENERATOR_C_PUBLIC_word_count_msg
bool
word_count_msg__srv__WordCount_Response__Sequence__copy(
  const word_count_msg__srv__WordCount_Response__Sequence * input,
  word_count_msg__srv__WordCount_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WORD_COUNT_MSG__SRV__DETAIL__WORD_COUNT__FUNCTIONS_H_
