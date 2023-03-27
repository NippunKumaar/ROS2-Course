// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from timer_action_interface:action/Timer.idl
// generated code does not contain a copyright notice

#ifndef TIMER_ACTION_INTERFACE__ACTION__DETAIL__TIMER__STRUCT_H_
#define TIMER_ACTION_INTERFACE__ACTION__DETAIL__TIMER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Timer in the package timer_action_interface.
typedef struct timer_action_interface__action__Timer_Goal
{
  int32_t time_to_wait;
} timer_action_interface__action__Timer_Goal;

// Struct for a sequence of timer_action_interface__action__Timer_Goal.
typedef struct timer_action_interface__action__Timer_Goal__Sequence
{
  timer_action_interface__action__Timer_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} timer_action_interface__action__Timer_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Timer in the package timer_action_interface.
typedef struct timer_action_interface__action__Timer_Result
{
  int32_t time_elapsed;
  uint32_t updates_sent;
} timer_action_interface__action__Timer_Result;

// Struct for a sequence of timer_action_interface__action__Timer_Result.
typedef struct timer_action_interface__action__Timer_Result__Sequence
{
  timer_action_interface__action__Timer_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} timer_action_interface__action__Timer_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Timer in the package timer_action_interface.
typedef struct timer_action_interface__action__Timer_Feedback
{
  int32_t time_elapsed;
  int32_t time_remaining;
} timer_action_interface__action__Timer_Feedback;

// Struct for a sequence of timer_action_interface__action__Timer_Feedback.
typedef struct timer_action_interface__action__Timer_Feedback__Sequence
{
  timer_action_interface__action__Timer_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} timer_action_interface__action__Timer_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "timer_action_interface/action/detail/timer__struct.h"

/// Struct defined in action/Timer in the package timer_action_interface.
typedef struct timer_action_interface__action__Timer_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  timer_action_interface__action__Timer_Goal goal;
} timer_action_interface__action__Timer_SendGoal_Request;

// Struct for a sequence of timer_action_interface__action__Timer_SendGoal_Request.
typedef struct timer_action_interface__action__Timer_SendGoal_Request__Sequence
{
  timer_action_interface__action__Timer_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} timer_action_interface__action__Timer_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Timer in the package timer_action_interface.
typedef struct timer_action_interface__action__Timer_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} timer_action_interface__action__Timer_SendGoal_Response;

// Struct for a sequence of timer_action_interface__action__Timer_SendGoal_Response.
typedef struct timer_action_interface__action__Timer_SendGoal_Response__Sequence
{
  timer_action_interface__action__Timer_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} timer_action_interface__action__Timer_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Timer in the package timer_action_interface.
typedef struct timer_action_interface__action__Timer_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} timer_action_interface__action__Timer_GetResult_Request;

// Struct for a sequence of timer_action_interface__action__Timer_GetResult_Request.
typedef struct timer_action_interface__action__Timer_GetResult_Request__Sequence
{
  timer_action_interface__action__Timer_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} timer_action_interface__action__Timer_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "timer_action_interface/action/detail/timer__struct.h"

/// Struct defined in action/Timer in the package timer_action_interface.
typedef struct timer_action_interface__action__Timer_GetResult_Response
{
  int8_t status;
  timer_action_interface__action__Timer_Result result;
} timer_action_interface__action__Timer_GetResult_Response;

// Struct for a sequence of timer_action_interface__action__Timer_GetResult_Response.
typedef struct timer_action_interface__action__Timer_GetResult_Response__Sequence
{
  timer_action_interface__action__Timer_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} timer_action_interface__action__Timer_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "timer_action_interface/action/detail/timer__struct.h"

/// Struct defined in action/Timer in the package timer_action_interface.
typedef struct timer_action_interface__action__Timer_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  timer_action_interface__action__Timer_Feedback feedback;
} timer_action_interface__action__Timer_FeedbackMessage;

// Struct for a sequence of timer_action_interface__action__Timer_FeedbackMessage.
typedef struct timer_action_interface__action__Timer_FeedbackMessage__Sequence
{
  timer_action_interface__action__Timer_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} timer_action_interface__action__Timer_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIMER_ACTION_INTERFACE__ACTION__DETAIL__TIMER__STRUCT_H_
