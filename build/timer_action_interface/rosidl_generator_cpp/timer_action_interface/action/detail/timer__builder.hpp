// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from timer_action_interface:action/Timer.idl
// generated code does not contain a copyright notice

#ifndef TIMER_ACTION_INTERFACE__ACTION__DETAIL__TIMER__BUILDER_HPP_
#define TIMER_ACTION_INTERFACE__ACTION__DETAIL__TIMER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "timer_action_interface/action/detail/timer__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace timer_action_interface
{

namespace action
{

namespace builder
{

class Init_Timer_Goal_time_to_wait
{
public:
  Init_Timer_Goal_time_to_wait()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::timer_action_interface::action::Timer_Goal time_to_wait(::timer_action_interface::action::Timer_Goal::_time_to_wait_type arg)
  {
    msg_.time_to_wait = std::move(arg);
    return std::move(msg_);
  }

private:
  ::timer_action_interface::action::Timer_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::timer_action_interface::action::Timer_Goal>()
{
  return timer_action_interface::action::builder::Init_Timer_Goal_time_to_wait();
}

}  // namespace timer_action_interface


namespace timer_action_interface
{

namespace action
{

namespace builder
{

class Init_Timer_Result_updates_sent
{
public:
  explicit Init_Timer_Result_updates_sent(::timer_action_interface::action::Timer_Result & msg)
  : msg_(msg)
  {}
  ::timer_action_interface::action::Timer_Result updates_sent(::timer_action_interface::action::Timer_Result::_updates_sent_type arg)
  {
    msg_.updates_sent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::timer_action_interface::action::Timer_Result msg_;
};

class Init_Timer_Result_time_elapsed
{
public:
  Init_Timer_Result_time_elapsed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Timer_Result_updates_sent time_elapsed(::timer_action_interface::action::Timer_Result::_time_elapsed_type arg)
  {
    msg_.time_elapsed = std::move(arg);
    return Init_Timer_Result_updates_sent(msg_);
  }

private:
  ::timer_action_interface::action::Timer_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::timer_action_interface::action::Timer_Result>()
{
  return timer_action_interface::action::builder::Init_Timer_Result_time_elapsed();
}

}  // namespace timer_action_interface


namespace timer_action_interface
{

namespace action
{

namespace builder
{

class Init_Timer_Feedback_time_remaining
{
public:
  explicit Init_Timer_Feedback_time_remaining(::timer_action_interface::action::Timer_Feedback & msg)
  : msg_(msg)
  {}
  ::timer_action_interface::action::Timer_Feedback time_remaining(::timer_action_interface::action::Timer_Feedback::_time_remaining_type arg)
  {
    msg_.time_remaining = std::move(arg);
    return std::move(msg_);
  }

private:
  ::timer_action_interface::action::Timer_Feedback msg_;
};

class Init_Timer_Feedback_time_elapsed
{
public:
  Init_Timer_Feedback_time_elapsed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Timer_Feedback_time_remaining time_elapsed(::timer_action_interface::action::Timer_Feedback::_time_elapsed_type arg)
  {
    msg_.time_elapsed = std::move(arg);
    return Init_Timer_Feedback_time_remaining(msg_);
  }

private:
  ::timer_action_interface::action::Timer_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::timer_action_interface::action::Timer_Feedback>()
{
  return timer_action_interface::action::builder::Init_Timer_Feedback_time_elapsed();
}

}  // namespace timer_action_interface


namespace timer_action_interface
{

namespace action
{

namespace builder
{

class Init_Timer_SendGoal_Request_goal
{
public:
  explicit Init_Timer_SendGoal_Request_goal(::timer_action_interface::action::Timer_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::timer_action_interface::action::Timer_SendGoal_Request goal(::timer_action_interface::action::Timer_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::timer_action_interface::action::Timer_SendGoal_Request msg_;
};

class Init_Timer_SendGoal_Request_goal_id
{
public:
  Init_Timer_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Timer_SendGoal_Request_goal goal_id(::timer_action_interface::action::Timer_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Timer_SendGoal_Request_goal(msg_);
  }

private:
  ::timer_action_interface::action::Timer_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::timer_action_interface::action::Timer_SendGoal_Request>()
{
  return timer_action_interface::action::builder::Init_Timer_SendGoal_Request_goal_id();
}

}  // namespace timer_action_interface


namespace timer_action_interface
{

namespace action
{

namespace builder
{

class Init_Timer_SendGoal_Response_stamp
{
public:
  explicit Init_Timer_SendGoal_Response_stamp(::timer_action_interface::action::Timer_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::timer_action_interface::action::Timer_SendGoal_Response stamp(::timer_action_interface::action::Timer_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::timer_action_interface::action::Timer_SendGoal_Response msg_;
};

class Init_Timer_SendGoal_Response_accepted
{
public:
  Init_Timer_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Timer_SendGoal_Response_stamp accepted(::timer_action_interface::action::Timer_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Timer_SendGoal_Response_stamp(msg_);
  }

private:
  ::timer_action_interface::action::Timer_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::timer_action_interface::action::Timer_SendGoal_Response>()
{
  return timer_action_interface::action::builder::Init_Timer_SendGoal_Response_accepted();
}

}  // namespace timer_action_interface


namespace timer_action_interface
{

namespace action
{

namespace builder
{

class Init_Timer_GetResult_Request_goal_id
{
public:
  Init_Timer_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::timer_action_interface::action::Timer_GetResult_Request goal_id(::timer_action_interface::action::Timer_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::timer_action_interface::action::Timer_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::timer_action_interface::action::Timer_GetResult_Request>()
{
  return timer_action_interface::action::builder::Init_Timer_GetResult_Request_goal_id();
}

}  // namespace timer_action_interface


namespace timer_action_interface
{

namespace action
{

namespace builder
{

class Init_Timer_GetResult_Response_result
{
public:
  explicit Init_Timer_GetResult_Response_result(::timer_action_interface::action::Timer_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::timer_action_interface::action::Timer_GetResult_Response result(::timer_action_interface::action::Timer_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::timer_action_interface::action::Timer_GetResult_Response msg_;
};

class Init_Timer_GetResult_Response_status
{
public:
  Init_Timer_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Timer_GetResult_Response_result status(::timer_action_interface::action::Timer_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Timer_GetResult_Response_result(msg_);
  }

private:
  ::timer_action_interface::action::Timer_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::timer_action_interface::action::Timer_GetResult_Response>()
{
  return timer_action_interface::action::builder::Init_Timer_GetResult_Response_status();
}

}  // namespace timer_action_interface


namespace timer_action_interface
{

namespace action
{

namespace builder
{

class Init_Timer_FeedbackMessage_feedback
{
public:
  explicit Init_Timer_FeedbackMessage_feedback(::timer_action_interface::action::Timer_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::timer_action_interface::action::Timer_FeedbackMessage feedback(::timer_action_interface::action::Timer_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::timer_action_interface::action::Timer_FeedbackMessage msg_;
};

class Init_Timer_FeedbackMessage_goal_id
{
public:
  Init_Timer_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Timer_FeedbackMessage_feedback goal_id(::timer_action_interface::action::Timer_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Timer_FeedbackMessage_feedback(msg_);
  }

private:
  ::timer_action_interface::action::Timer_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::timer_action_interface::action::Timer_FeedbackMessage>()
{
  return timer_action_interface::action::builder::Init_Timer_FeedbackMessage_goal_id();
}

}  // namespace timer_action_interface

#endif  // TIMER_ACTION_INTERFACE__ACTION__DETAIL__TIMER__BUILDER_HPP_
