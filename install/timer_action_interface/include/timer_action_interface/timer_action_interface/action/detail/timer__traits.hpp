// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from timer_action_interface:action/Timer.idl
// generated code does not contain a copyright notice

#ifndef TIMER_ACTION_INTERFACE__ACTION__DETAIL__TIMER__TRAITS_HPP_
#define TIMER_ACTION_INTERFACE__ACTION__DETAIL__TIMER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "timer_action_interface/action/detail/timer__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace timer_action_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Timer_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_to_wait
  {
    out << "time_to_wait: ";
    rosidl_generator_traits::value_to_yaml(msg.time_to_wait, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Timer_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_to_wait
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_to_wait: ";
    rosidl_generator_traits::value_to_yaml(msg.time_to_wait, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Timer_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace timer_action_interface

namespace rosidl_generator_traits
{

[[deprecated("use timer_action_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const timer_action_interface::action::Timer_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  timer_action_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use timer_action_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const timer_action_interface::action::Timer_Goal & msg)
{
  return timer_action_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<timer_action_interface::action::Timer_Goal>()
{
  return "timer_action_interface::action::Timer_Goal";
}

template<>
inline const char * name<timer_action_interface::action::Timer_Goal>()
{
  return "timer_action_interface/action/Timer_Goal";
}

template<>
struct has_fixed_size<timer_action_interface::action::Timer_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<timer_action_interface::action::Timer_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<timer_action_interface::action::Timer_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace timer_action_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Timer_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_elapsed
  {
    out << "time_elapsed: ";
    rosidl_generator_traits::value_to_yaml(msg.time_elapsed, out);
    out << ", ";
  }

  // member: updates_sent
  {
    out << "updates_sent: ";
    rosidl_generator_traits::value_to_yaml(msg.updates_sent, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Timer_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_elapsed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_elapsed: ";
    rosidl_generator_traits::value_to_yaml(msg.time_elapsed, out);
    out << "\n";
  }

  // member: updates_sent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "updates_sent: ";
    rosidl_generator_traits::value_to_yaml(msg.updates_sent, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Timer_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace timer_action_interface

namespace rosidl_generator_traits
{

[[deprecated("use timer_action_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const timer_action_interface::action::Timer_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  timer_action_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use timer_action_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const timer_action_interface::action::Timer_Result & msg)
{
  return timer_action_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<timer_action_interface::action::Timer_Result>()
{
  return "timer_action_interface::action::Timer_Result";
}

template<>
inline const char * name<timer_action_interface::action::Timer_Result>()
{
  return "timer_action_interface/action/Timer_Result";
}

template<>
struct has_fixed_size<timer_action_interface::action::Timer_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<timer_action_interface::action::Timer_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<timer_action_interface::action::Timer_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace timer_action_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Timer_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_elapsed
  {
    out << "time_elapsed: ";
    rosidl_generator_traits::value_to_yaml(msg.time_elapsed, out);
    out << ", ";
  }

  // member: time_remaining
  {
    out << "time_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.time_remaining, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Timer_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_elapsed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_elapsed: ";
    rosidl_generator_traits::value_to_yaml(msg.time_elapsed, out);
    out << "\n";
  }

  // member: time_remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.time_remaining, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Timer_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace timer_action_interface

namespace rosidl_generator_traits
{

[[deprecated("use timer_action_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const timer_action_interface::action::Timer_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  timer_action_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use timer_action_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const timer_action_interface::action::Timer_Feedback & msg)
{
  return timer_action_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<timer_action_interface::action::Timer_Feedback>()
{
  return "timer_action_interface::action::Timer_Feedback";
}

template<>
inline const char * name<timer_action_interface::action::Timer_Feedback>()
{
  return "timer_action_interface/action/Timer_Feedback";
}

template<>
struct has_fixed_size<timer_action_interface::action::Timer_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<timer_action_interface::action::Timer_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<timer_action_interface::action::Timer_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "timer_action_interface/action/detail/timer__traits.hpp"

namespace timer_action_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Timer_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Timer_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Timer_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace timer_action_interface

namespace rosidl_generator_traits
{

[[deprecated("use timer_action_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const timer_action_interface::action::Timer_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  timer_action_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use timer_action_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const timer_action_interface::action::Timer_SendGoal_Request & msg)
{
  return timer_action_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<timer_action_interface::action::Timer_SendGoal_Request>()
{
  return "timer_action_interface::action::Timer_SendGoal_Request";
}

template<>
inline const char * name<timer_action_interface::action::Timer_SendGoal_Request>()
{
  return "timer_action_interface/action/Timer_SendGoal_Request";
}

template<>
struct has_fixed_size<timer_action_interface::action::Timer_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<timer_action_interface::action::Timer_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<timer_action_interface::action::Timer_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<timer_action_interface::action::Timer_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<timer_action_interface::action::Timer_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace timer_action_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Timer_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Timer_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Timer_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace timer_action_interface

namespace rosidl_generator_traits
{

[[deprecated("use timer_action_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const timer_action_interface::action::Timer_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  timer_action_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use timer_action_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const timer_action_interface::action::Timer_SendGoal_Response & msg)
{
  return timer_action_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<timer_action_interface::action::Timer_SendGoal_Response>()
{
  return "timer_action_interface::action::Timer_SendGoal_Response";
}

template<>
inline const char * name<timer_action_interface::action::Timer_SendGoal_Response>()
{
  return "timer_action_interface/action/Timer_SendGoal_Response";
}

template<>
struct has_fixed_size<timer_action_interface::action::Timer_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<timer_action_interface::action::Timer_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<timer_action_interface::action::Timer_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<timer_action_interface::action::Timer_SendGoal>()
{
  return "timer_action_interface::action::Timer_SendGoal";
}

template<>
inline const char * name<timer_action_interface::action::Timer_SendGoal>()
{
  return "timer_action_interface/action/Timer_SendGoal";
}

template<>
struct has_fixed_size<timer_action_interface::action::Timer_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<timer_action_interface::action::Timer_SendGoal_Request>::value &&
    has_fixed_size<timer_action_interface::action::Timer_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<timer_action_interface::action::Timer_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<timer_action_interface::action::Timer_SendGoal_Request>::value &&
    has_bounded_size<timer_action_interface::action::Timer_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<timer_action_interface::action::Timer_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<timer_action_interface::action::Timer_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<timer_action_interface::action::Timer_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace timer_action_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Timer_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Timer_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Timer_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace timer_action_interface

namespace rosidl_generator_traits
{

[[deprecated("use timer_action_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const timer_action_interface::action::Timer_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  timer_action_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use timer_action_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const timer_action_interface::action::Timer_GetResult_Request & msg)
{
  return timer_action_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<timer_action_interface::action::Timer_GetResult_Request>()
{
  return "timer_action_interface::action::Timer_GetResult_Request";
}

template<>
inline const char * name<timer_action_interface::action::Timer_GetResult_Request>()
{
  return "timer_action_interface/action/Timer_GetResult_Request";
}

template<>
struct has_fixed_size<timer_action_interface::action::Timer_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<timer_action_interface::action::Timer_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<timer_action_interface::action::Timer_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "timer_action_interface/action/detail/timer__traits.hpp"

namespace timer_action_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Timer_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Timer_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Timer_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace timer_action_interface

namespace rosidl_generator_traits
{

[[deprecated("use timer_action_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const timer_action_interface::action::Timer_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  timer_action_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use timer_action_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const timer_action_interface::action::Timer_GetResult_Response & msg)
{
  return timer_action_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<timer_action_interface::action::Timer_GetResult_Response>()
{
  return "timer_action_interface::action::Timer_GetResult_Response";
}

template<>
inline const char * name<timer_action_interface::action::Timer_GetResult_Response>()
{
  return "timer_action_interface/action/Timer_GetResult_Response";
}

template<>
struct has_fixed_size<timer_action_interface::action::Timer_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<timer_action_interface::action::Timer_Result>::value> {};

template<>
struct has_bounded_size<timer_action_interface::action::Timer_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<timer_action_interface::action::Timer_Result>::value> {};

template<>
struct is_message<timer_action_interface::action::Timer_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<timer_action_interface::action::Timer_GetResult>()
{
  return "timer_action_interface::action::Timer_GetResult";
}

template<>
inline const char * name<timer_action_interface::action::Timer_GetResult>()
{
  return "timer_action_interface/action/Timer_GetResult";
}

template<>
struct has_fixed_size<timer_action_interface::action::Timer_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<timer_action_interface::action::Timer_GetResult_Request>::value &&
    has_fixed_size<timer_action_interface::action::Timer_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<timer_action_interface::action::Timer_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<timer_action_interface::action::Timer_GetResult_Request>::value &&
    has_bounded_size<timer_action_interface::action::Timer_GetResult_Response>::value
  >
{
};

template<>
struct is_service<timer_action_interface::action::Timer_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<timer_action_interface::action::Timer_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<timer_action_interface::action::Timer_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "timer_action_interface/action/detail/timer__traits.hpp"

namespace timer_action_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Timer_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Timer_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Timer_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace timer_action_interface

namespace rosidl_generator_traits
{

[[deprecated("use timer_action_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const timer_action_interface::action::Timer_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  timer_action_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use timer_action_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const timer_action_interface::action::Timer_FeedbackMessage & msg)
{
  return timer_action_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<timer_action_interface::action::Timer_FeedbackMessage>()
{
  return "timer_action_interface::action::Timer_FeedbackMessage";
}

template<>
inline const char * name<timer_action_interface::action::Timer_FeedbackMessage>()
{
  return "timer_action_interface/action/Timer_FeedbackMessage";
}

template<>
struct has_fixed_size<timer_action_interface::action::Timer_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<timer_action_interface::action::Timer_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<timer_action_interface::action::Timer_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<timer_action_interface::action::Timer_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<timer_action_interface::action::Timer_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<timer_action_interface::action::Timer>
  : std::true_type
{
};

template<>
struct is_action_goal<timer_action_interface::action::Timer_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<timer_action_interface::action::Timer_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<timer_action_interface::action::Timer_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // TIMER_ACTION_INTERFACE__ACTION__DETAIL__TIMER__TRAITS_HPP_
