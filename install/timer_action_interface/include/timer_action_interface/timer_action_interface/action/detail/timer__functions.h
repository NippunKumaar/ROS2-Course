// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from timer_action_interface:action/Timer.idl
// generated code does not contain a copyright notice

#ifndef TIMER_ACTION_INTERFACE__ACTION__DETAIL__TIMER__FUNCTIONS_H_
#define TIMER_ACTION_INTERFACE__ACTION__DETAIL__TIMER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "timer_action_interface/msg/rosidl_generator_c__visibility_control.h"

#include "timer_action_interface/action/detail/timer__struct.h"

/// Initialize action/Timer message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * timer_action_interface__action__Timer_Goal
 * )) before or use
 * timer_action_interface__action__Timer_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_Goal__init(timer_action_interface__action__Timer_Goal * msg);

/// Finalize action/Timer message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_Goal__fini(timer_action_interface__action__Timer_Goal * msg);

/// Create action/Timer message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * timer_action_interface__action__Timer_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
timer_action_interface__action__Timer_Goal *
timer_action_interface__action__Timer_Goal__create();

/// Destroy action/Timer message.
/**
 * It calls
 * timer_action_interface__action__Timer_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_Goal__destroy(timer_action_interface__action__Timer_Goal * msg);

/// Check for action/Timer message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_Goal__are_equal(const timer_action_interface__action__Timer_Goal * lhs, const timer_action_interface__action__Timer_Goal * rhs);

/// Copy a action/Timer message.
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
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_Goal__copy(
  const timer_action_interface__action__Timer_Goal * input,
  timer_action_interface__action__Timer_Goal * output);

/// Initialize array of action/Timer messages.
/**
 * It allocates the memory for the number of elements and calls
 * timer_action_interface__action__Timer_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_Goal__Sequence__init(timer_action_interface__action__Timer_Goal__Sequence * array, size_t size);

/// Finalize array of action/Timer messages.
/**
 * It calls
 * timer_action_interface__action__Timer_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_Goal__Sequence__fini(timer_action_interface__action__Timer_Goal__Sequence * array);

/// Create array of action/Timer messages.
/**
 * It allocates the memory for the array and calls
 * timer_action_interface__action__Timer_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
timer_action_interface__action__Timer_Goal__Sequence *
timer_action_interface__action__Timer_Goal__Sequence__create(size_t size);

/// Destroy array of action/Timer messages.
/**
 * It calls
 * timer_action_interface__action__Timer_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_Goal__Sequence__destroy(timer_action_interface__action__Timer_Goal__Sequence * array);

/// Check for action/Timer message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_Goal__Sequence__are_equal(const timer_action_interface__action__Timer_Goal__Sequence * lhs, const timer_action_interface__action__Timer_Goal__Sequence * rhs);

/// Copy an array of action/Timer messages.
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
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_Goal__Sequence__copy(
  const timer_action_interface__action__Timer_Goal__Sequence * input,
  timer_action_interface__action__Timer_Goal__Sequence * output);

/// Initialize action/Timer message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * timer_action_interface__action__Timer_Result
 * )) before or use
 * timer_action_interface__action__Timer_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_Result__init(timer_action_interface__action__Timer_Result * msg);

/// Finalize action/Timer message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_Result__fini(timer_action_interface__action__Timer_Result * msg);

/// Create action/Timer message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * timer_action_interface__action__Timer_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
timer_action_interface__action__Timer_Result *
timer_action_interface__action__Timer_Result__create();

/// Destroy action/Timer message.
/**
 * It calls
 * timer_action_interface__action__Timer_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_Result__destroy(timer_action_interface__action__Timer_Result * msg);

/// Check for action/Timer message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_Result__are_equal(const timer_action_interface__action__Timer_Result * lhs, const timer_action_interface__action__Timer_Result * rhs);

/// Copy a action/Timer message.
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
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_Result__copy(
  const timer_action_interface__action__Timer_Result * input,
  timer_action_interface__action__Timer_Result * output);

/// Initialize array of action/Timer messages.
/**
 * It allocates the memory for the number of elements and calls
 * timer_action_interface__action__Timer_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_Result__Sequence__init(timer_action_interface__action__Timer_Result__Sequence * array, size_t size);

/// Finalize array of action/Timer messages.
/**
 * It calls
 * timer_action_interface__action__Timer_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_Result__Sequence__fini(timer_action_interface__action__Timer_Result__Sequence * array);

/// Create array of action/Timer messages.
/**
 * It allocates the memory for the array and calls
 * timer_action_interface__action__Timer_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
timer_action_interface__action__Timer_Result__Sequence *
timer_action_interface__action__Timer_Result__Sequence__create(size_t size);

/// Destroy array of action/Timer messages.
/**
 * It calls
 * timer_action_interface__action__Timer_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_Result__Sequence__destroy(timer_action_interface__action__Timer_Result__Sequence * array);

/// Check for action/Timer message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_Result__Sequence__are_equal(const timer_action_interface__action__Timer_Result__Sequence * lhs, const timer_action_interface__action__Timer_Result__Sequence * rhs);

/// Copy an array of action/Timer messages.
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
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_Result__Sequence__copy(
  const timer_action_interface__action__Timer_Result__Sequence * input,
  timer_action_interface__action__Timer_Result__Sequence * output);

/// Initialize action/Timer message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * timer_action_interface__action__Timer_Feedback
 * )) before or use
 * timer_action_interface__action__Timer_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_Feedback__init(timer_action_interface__action__Timer_Feedback * msg);

/// Finalize action/Timer message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_Feedback__fini(timer_action_interface__action__Timer_Feedback * msg);

/// Create action/Timer message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * timer_action_interface__action__Timer_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
timer_action_interface__action__Timer_Feedback *
timer_action_interface__action__Timer_Feedback__create();

/// Destroy action/Timer message.
/**
 * It calls
 * timer_action_interface__action__Timer_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_Feedback__destroy(timer_action_interface__action__Timer_Feedback * msg);

/// Check for action/Timer message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_Feedback__are_equal(const timer_action_interface__action__Timer_Feedback * lhs, const timer_action_interface__action__Timer_Feedback * rhs);

/// Copy a action/Timer message.
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
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_Feedback__copy(
  const timer_action_interface__action__Timer_Feedback * input,
  timer_action_interface__action__Timer_Feedback * output);

/// Initialize array of action/Timer messages.
/**
 * It allocates the memory for the number of elements and calls
 * timer_action_interface__action__Timer_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_Feedback__Sequence__init(timer_action_interface__action__Timer_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Timer messages.
/**
 * It calls
 * timer_action_interface__action__Timer_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_Feedback__Sequence__fini(timer_action_interface__action__Timer_Feedback__Sequence * array);

/// Create array of action/Timer messages.
/**
 * It allocates the memory for the array and calls
 * timer_action_interface__action__Timer_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
timer_action_interface__action__Timer_Feedback__Sequence *
timer_action_interface__action__Timer_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Timer messages.
/**
 * It calls
 * timer_action_interface__action__Timer_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_Feedback__Sequence__destroy(timer_action_interface__action__Timer_Feedback__Sequence * array);

/// Check for action/Timer message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_Feedback__Sequence__are_equal(const timer_action_interface__action__Timer_Feedback__Sequence * lhs, const timer_action_interface__action__Timer_Feedback__Sequence * rhs);

/// Copy an array of action/Timer messages.
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
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_Feedback__Sequence__copy(
  const timer_action_interface__action__Timer_Feedback__Sequence * input,
  timer_action_interface__action__Timer_Feedback__Sequence * output);

/// Initialize action/Timer message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * timer_action_interface__action__Timer_SendGoal_Request
 * )) before or use
 * timer_action_interface__action__Timer_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_SendGoal_Request__init(timer_action_interface__action__Timer_SendGoal_Request * msg);

/// Finalize action/Timer message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_SendGoal_Request__fini(timer_action_interface__action__Timer_SendGoal_Request * msg);

/// Create action/Timer message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * timer_action_interface__action__Timer_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
timer_action_interface__action__Timer_SendGoal_Request *
timer_action_interface__action__Timer_SendGoal_Request__create();

/// Destroy action/Timer message.
/**
 * It calls
 * timer_action_interface__action__Timer_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_SendGoal_Request__destroy(timer_action_interface__action__Timer_SendGoal_Request * msg);

/// Check for action/Timer message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_SendGoal_Request__are_equal(const timer_action_interface__action__Timer_SendGoal_Request * lhs, const timer_action_interface__action__Timer_SendGoal_Request * rhs);

/// Copy a action/Timer message.
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
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_SendGoal_Request__copy(
  const timer_action_interface__action__Timer_SendGoal_Request * input,
  timer_action_interface__action__Timer_SendGoal_Request * output);

/// Initialize array of action/Timer messages.
/**
 * It allocates the memory for the number of elements and calls
 * timer_action_interface__action__Timer_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_SendGoal_Request__Sequence__init(timer_action_interface__action__Timer_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Timer messages.
/**
 * It calls
 * timer_action_interface__action__Timer_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_SendGoal_Request__Sequence__fini(timer_action_interface__action__Timer_SendGoal_Request__Sequence * array);

/// Create array of action/Timer messages.
/**
 * It allocates the memory for the array and calls
 * timer_action_interface__action__Timer_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
timer_action_interface__action__Timer_SendGoal_Request__Sequence *
timer_action_interface__action__Timer_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Timer messages.
/**
 * It calls
 * timer_action_interface__action__Timer_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_SendGoal_Request__Sequence__destroy(timer_action_interface__action__Timer_SendGoal_Request__Sequence * array);

/// Check for action/Timer message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_SendGoal_Request__Sequence__are_equal(const timer_action_interface__action__Timer_SendGoal_Request__Sequence * lhs, const timer_action_interface__action__Timer_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Timer messages.
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
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_SendGoal_Request__Sequence__copy(
  const timer_action_interface__action__Timer_SendGoal_Request__Sequence * input,
  timer_action_interface__action__Timer_SendGoal_Request__Sequence * output);

/// Initialize action/Timer message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * timer_action_interface__action__Timer_SendGoal_Response
 * )) before or use
 * timer_action_interface__action__Timer_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_SendGoal_Response__init(timer_action_interface__action__Timer_SendGoal_Response * msg);

/// Finalize action/Timer message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_SendGoal_Response__fini(timer_action_interface__action__Timer_SendGoal_Response * msg);

/// Create action/Timer message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * timer_action_interface__action__Timer_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
timer_action_interface__action__Timer_SendGoal_Response *
timer_action_interface__action__Timer_SendGoal_Response__create();

/// Destroy action/Timer message.
/**
 * It calls
 * timer_action_interface__action__Timer_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_SendGoal_Response__destroy(timer_action_interface__action__Timer_SendGoal_Response * msg);

/// Check for action/Timer message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_SendGoal_Response__are_equal(const timer_action_interface__action__Timer_SendGoal_Response * lhs, const timer_action_interface__action__Timer_SendGoal_Response * rhs);

/// Copy a action/Timer message.
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
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_SendGoal_Response__copy(
  const timer_action_interface__action__Timer_SendGoal_Response * input,
  timer_action_interface__action__Timer_SendGoal_Response * output);

/// Initialize array of action/Timer messages.
/**
 * It allocates the memory for the number of elements and calls
 * timer_action_interface__action__Timer_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_SendGoal_Response__Sequence__init(timer_action_interface__action__Timer_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Timer messages.
/**
 * It calls
 * timer_action_interface__action__Timer_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_SendGoal_Response__Sequence__fini(timer_action_interface__action__Timer_SendGoal_Response__Sequence * array);

/// Create array of action/Timer messages.
/**
 * It allocates the memory for the array and calls
 * timer_action_interface__action__Timer_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
timer_action_interface__action__Timer_SendGoal_Response__Sequence *
timer_action_interface__action__Timer_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Timer messages.
/**
 * It calls
 * timer_action_interface__action__Timer_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_SendGoal_Response__Sequence__destroy(timer_action_interface__action__Timer_SendGoal_Response__Sequence * array);

/// Check for action/Timer message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_SendGoal_Response__Sequence__are_equal(const timer_action_interface__action__Timer_SendGoal_Response__Sequence * lhs, const timer_action_interface__action__Timer_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Timer messages.
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
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_SendGoal_Response__Sequence__copy(
  const timer_action_interface__action__Timer_SendGoal_Response__Sequence * input,
  timer_action_interface__action__Timer_SendGoal_Response__Sequence * output);

/// Initialize action/Timer message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * timer_action_interface__action__Timer_GetResult_Request
 * )) before or use
 * timer_action_interface__action__Timer_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_GetResult_Request__init(timer_action_interface__action__Timer_GetResult_Request * msg);

/// Finalize action/Timer message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_GetResult_Request__fini(timer_action_interface__action__Timer_GetResult_Request * msg);

/// Create action/Timer message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * timer_action_interface__action__Timer_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
timer_action_interface__action__Timer_GetResult_Request *
timer_action_interface__action__Timer_GetResult_Request__create();

/// Destroy action/Timer message.
/**
 * It calls
 * timer_action_interface__action__Timer_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_GetResult_Request__destroy(timer_action_interface__action__Timer_GetResult_Request * msg);

/// Check for action/Timer message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_GetResult_Request__are_equal(const timer_action_interface__action__Timer_GetResult_Request * lhs, const timer_action_interface__action__Timer_GetResult_Request * rhs);

/// Copy a action/Timer message.
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
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_GetResult_Request__copy(
  const timer_action_interface__action__Timer_GetResult_Request * input,
  timer_action_interface__action__Timer_GetResult_Request * output);

/// Initialize array of action/Timer messages.
/**
 * It allocates the memory for the number of elements and calls
 * timer_action_interface__action__Timer_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_GetResult_Request__Sequence__init(timer_action_interface__action__Timer_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Timer messages.
/**
 * It calls
 * timer_action_interface__action__Timer_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_GetResult_Request__Sequence__fini(timer_action_interface__action__Timer_GetResult_Request__Sequence * array);

/// Create array of action/Timer messages.
/**
 * It allocates the memory for the array and calls
 * timer_action_interface__action__Timer_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
timer_action_interface__action__Timer_GetResult_Request__Sequence *
timer_action_interface__action__Timer_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Timer messages.
/**
 * It calls
 * timer_action_interface__action__Timer_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_GetResult_Request__Sequence__destroy(timer_action_interface__action__Timer_GetResult_Request__Sequence * array);

/// Check for action/Timer message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_GetResult_Request__Sequence__are_equal(const timer_action_interface__action__Timer_GetResult_Request__Sequence * lhs, const timer_action_interface__action__Timer_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Timer messages.
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
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_GetResult_Request__Sequence__copy(
  const timer_action_interface__action__Timer_GetResult_Request__Sequence * input,
  timer_action_interface__action__Timer_GetResult_Request__Sequence * output);

/// Initialize action/Timer message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * timer_action_interface__action__Timer_GetResult_Response
 * )) before or use
 * timer_action_interface__action__Timer_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_GetResult_Response__init(timer_action_interface__action__Timer_GetResult_Response * msg);

/// Finalize action/Timer message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_GetResult_Response__fini(timer_action_interface__action__Timer_GetResult_Response * msg);

/// Create action/Timer message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * timer_action_interface__action__Timer_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
timer_action_interface__action__Timer_GetResult_Response *
timer_action_interface__action__Timer_GetResult_Response__create();

/// Destroy action/Timer message.
/**
 * It calls
 * timer_action_interface__action__Timer_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_GetResult_Response__destroy(timer_action_interface__action__Timer_GetResult_Response * msg);

/// Check for action/Timer message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_GetResult_Response__are_equal(const timer_action_interface__action__Timer_GetResult_Response * lhs, const timer_action_interface__action__Timer_GetResult_Response * rhs);

/// Copy a action/Timer message.
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
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_GetResult_Response__copy(
  const timer_action_interface__action__Timer_GetResult_Response * input,
  timer_action_interface__action__Timer_GetResult_Response * output);

/// Initialize array of action/Timer messages.
/**
 * It allocates the memory for the number of elements and calls
 * timer_action_interface__action__Timer_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_GetResult_Response__Sequence__init(timer_action_interface__action__Timer_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Timer messages.
/**
 * It calls
 * timer_action_interface__action__Timer_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_GetResult_Response__Sequence__fini(timer_action_interface__action__Timer_GetResult_Response__Sequence * array);

/// Create array of action/Timer messages.
/**
 * It allocates the memory for the array and calls
 * timer_action_interface__action__Timer_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
timer_action_interface__action__Timer_GetResult_Response__Sequence *
timer_action_interface__action__Timer_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Timer messages.
/**
 * It calls
 * timer_action_interface__action__Timer_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_GetResult_Response__Sequence__destroy(timer_action_interface__action__Timer_GetResult_Response__Sequence * array);

/// Check for action/Timer message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_GetResult_Response__Sequence__are_equal(const timer_action_interface__action__Timer_GetResult_Response__Sequence * lhs, const timer_action_interface__action__Timer_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Timer messages.
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
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_GetResult_Response__Sequence__copy(
  const timer_action_interface__action__Timer_GetResult_Response__Sequence * input,
  timer_action_interface__action__Timer_GetResult_Response__Sequence * output);

/// Initialize action/Timer message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * timer_action_interface__action__Timer_FeedbackMessage
 * )) before or use
 * timer_action_interface__action__Timer_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_FeedbackMessage__init(timer_action_interface__action__Timer_FeedbackMessage * msg);

/// Finalize action/Timer message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_FeedbackMessage__fini(timer_action_interface__action__Timer_FeedbackMessage * msg);

/// Create action/Timer message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * timer_action_interface__action__Timer_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
timer_action_interface__action__Timer_FeedbackMessage *
timer_action_interface__action__Timer_FeedbackMessage__create();

/// Destroy action/Timer message.
/**
 * It calls
 * timer_action_interface__action__Timer_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_FeedbackMessage__destroy(timer_action_interface__action__Timer_FeedbackMessage * msg);

/// Check for action/Timer message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_FeedbackMessage__are_equal(const timer_action_interface__action__Timer_FeedbackMessage * lhs, const timer_action_interface__action__Timer_FeedbackMessage * rhs);

/// Copy a action/Timer message.
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
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_FeedbackMessage__copy(
  const timer_action_interface__action__Timer_FeedbackMessage * input,
  timer_action_interface__action__Timer_FeedbackMessage * output);

/// Initialize array of action/Timer messages.
/**
 * It allocates the memory for the number of elements and calls
 * timer_action_interface__action__Timer_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_FeedbackMessage__Sequence__init(timer_action_interface__action__Timer_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Timer messages.
/**
 * It calls
 * timer_action_interface__action__Timer_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_FeedbackMessage__Sequence__fini(timer_action_interface__action__Timer_FeedbackMessage__Sequence * array);

/// Create array of action/Timer messages.
/**
 * It allocates the memory for the array and calls
 * timer_action_interface__action__Timer_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
timer_action_interface__action__Timer_FeedbackMessage__Sequence *
timer_action_interface__action__Timer_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Timer messages.
/**
 * It calls
 * timer_action_interface__action__Timer_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
void
timer_action_interface__action__Timer_FeedbackMessage__Sequence__destroy(timer_action_interface__action__Timer_FeedbackMessage__Sequence * array);

/// Check for action/Timer message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_FeedbackMessage__Sequence__are_equal(const timer_action_interface__action__Timer_FeedbackMessage__Sequence * lhs, const timer_action_interface__action__Timer_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Timer messages.
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
ROSIDL_GENERATOR_C_PUBLIC_timer_action_interface
bool
timer_action_interface__action__Timer_FeedbackMessage__Sequence__copy(
  const timer_action_interface__action__Timer_FeedbackMessage__Sequence * input,
  timer_action_interface__action__Timer_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TIMER_ACTION_INTERFACE__ACTION__DETAIL__TIMER__FUNCTIONS_H_
