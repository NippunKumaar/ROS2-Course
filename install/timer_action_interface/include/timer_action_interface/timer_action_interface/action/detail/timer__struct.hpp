// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from timer_action_interface:action/Timer.idl
// generated code does not contain a copyright notice

#ifndef TIMER_ACTION_INTERFACE__ACTION__DETAIL__TIMER__STRUCT_HPP_
#define TIMER_ACTION_INTERFACE__ACTION__DETAIL__TIMER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__timer_action_interface__action__Timer_Goal __attribute__((deprecated))
#else
# define DEPRECATED__timer_action_interface__action__Timer_Goal __declspec(deprecated)
#endif

namespace timer_action_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Timer_Goal_
{
  using Type = Timer_Goal_<ContainerAllocator>;

  explicit Timer_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_to_wait = 0l;
    }
  }

  explicit Timer_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_to_wait = 0l;
    }
  }

  // field types and members
  using _time_to_wait_type =
    int32_t;
  _time_to_wait_type time_to_wait;

  // setters for named parameter idiom
  Type & set__time_to_wait(
    const int32_t & _arg)
  {
    this->time_to_wait = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    timer_action_interface::action::Timer_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const timer_action_interface::action::Timer_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<timer_action_interface::action::Timer_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<timer_action_interface::action::Timer_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      timer_action_interface::action::Timer_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<timer_action_interface::action::Timer_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      timer_action_interface::action::Timer_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<timer_action_interface::action::Timer_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<timer_action_interface::action::Timer_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<timer_action_interface::action::Timer_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__timer_action_interface__action__Timer_Goal
    std::shared_ptr<timer_action_interface::action::Timer_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__timer_action_interface__action__Timer_Goal
    std::shared_ptr<timer_action_interface::action::Timer_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Timer_Goal_ & other) const
  {
    if (this->time_to_wait != other.time_to_wait) {
      return false;
    }
    return true;
  }
  bool operator!=(const Timer_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Timer_Goal_

// alias to use template instance with default allocator
using Timer_Goal =
  timer_action_interface::action::Timer_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace timer_action_interface


#ifndef _WIN32
# define DEPRECATED__timer_action_interface__action__Timer_Result __attribute__((deprecated))
#else
# define DEPRECATED__timer_action_interface__action__Timer_Result __declspec(deprecated)
#endif

namespace timer_action_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Timer_Result_
{
  using Type = Timer_Result_<ContainerAllocator>;

  explicit Timer_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_elapsed = 0l;
      this->updates_sent = 0ul;
    }
  }

  explicit Timer_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_elapsed = 0l;
      this->updates_sent = 0ul;
    }
  }

  // field types and members
  using _time_elapsed_type =
    int32_t;
  _time_elapsed_type time_elapsed;
  using _updates_sent_type =
    uint32_t;
  _updates_sent_type updates_sent;

  // setters for named parameter idiom
  Type & set__time_elapsed(
    const int32_t & _arg)
  {
    this->time_elapsed = _arg;
    return *this;
  }
  Type & set__updates_sent(
    const uint32_t & _arg)
  {
    this->updates_sent = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    timer_action_interface::action::Timer_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const timer_action_interface::action::Timer_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<timer_action_interface::action::Timer_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<timer_action_interface::action::Timer_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      timer_action_interface::action::Timer_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<timer_action_interface::action::Timer_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      timer_action_interface::action::Timer_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<timer_action_interface::action::Timer_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<timer_action_interface::action::Timer_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<timer_action_interface::action::Timer_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__timer_action_interface__action__Timer_Result
    std::shared_ptr<timer_action_interface::action::Timer_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__timer_action_interface__action__Timer_Result
    std::shared_ptr<timer_action_interface::action::Timer_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Timer_Result_ & other) const
  {
    if (this->time_elapsed != other.time_elapsed) {
      return false;
    }
    if (this->updates_sent != other.updates_sent) {
      return false;
    }
    return true;
  }
  bool operator!=(const Timer_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Timer_Result_

// alias to use template instance with default allocator
using Timer_Result =
  timer_action_interface::action::Timer_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace timer_action_interface


#ifndef _WIN32
# define DEPRECATED__timer_action_interface__action__Timer_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__timer_action_interface__action__Timer_Feedback __declspec(deprecated)
#endif

namespace timer_action_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Timer_Feedback_
{
  using Type = Timer_Feedback_<ContainerAllocator>;

  explicit Timer_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_elapsed = 0l;
      this->time_remaining = 0l;
    }
  }

  explicit Timer_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_elapsed = 0l;
      this->time_remaining = 0l;
    }
  }

  // field types and members
  using _time_elapsed_type =
    int32_t;
  _time_elapsed_type time_elapsed;
  using _time_remaining_type =
    int32_t;
  _time_remaining_type time_remaining;

  // setters for named parameter idiom
  Type & set__time_elapsed(
    const int32_t & _arg)
  {
    this->time_elapsed = _arg;
    return *this;
  }
  Type & set__time_remaining(
    const int32_t & _arg)
  {
    this->time_remaining = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    timer_action_interface::action::Timer_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const timer_action_interface::action::Timer_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<timer_action_interface::action::Timer_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<timer_action_interface::action::Timer_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      timer_action_interface::action::Timer_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<timer_action_interface::action::Timer_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      timer_action_interface::action::Timer_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<timer_action_interface::action::Timer_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<timer_action_interface::action::Timer_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<timer_action_interface::action::Timer_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__timer_action_interface__action__Timer_Feedback
    std::shared_ptr<timer_action_interface::action::Timer_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__timer_action_interface__action__Timer_Feedback
    std::shared_ptr<timer_action_interface::action::Timer_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Timer_Feedback_ & other) const
  {
    if (this->time_elapsed != other.time_elapsed) {
      return false;
    }
    if (this->time_remaining != other.time_remaining) {
      return false;
    }
    return true;
  }
  bool operator!=(const Timer_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Timer_Feedback_

// alias to use template instance with default allocator
using Timer_Feedback =
  timer_action_interface::action::Timer_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace timer_action_interface


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "timer_action_interface/action/detail/timer__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__timer_action_interface__action__Timer_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__timer_action_interface__action__Timer_SendGoal_Request __declspec(deprecated)
#endif

namespace timer_action_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Timer_SendGoal_Request_
{
  using Type = Timer_SendGoal_Request_<ContainerAllocator>;

  explicit Timer_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Timer_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    timer_action_interface::action::Timer_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const timer_action_interface::action::Timer_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    timer_action_interface::action::Timer_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const timer_action_interface::action::Timer_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<timer_action_interface::action::Timer_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<timer_action_interface::action::Timer_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      timer_action_interface::action::Timer_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<timer_action_interface::action::Timer_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      timer_action_interface::action::Timer_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<timer_action_interface::action::Timer_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<timer_action_interface::action::Timer_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<timer_action_interface::action::Timer_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__timer_action_interface__action__Timer_SendGoal_Request
    std::shared_ptr<timer_action_interface::action::Timer_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__timer_action_interface__action__Timer_SendGoal_Request
    std::shared_ptr<timer_action_interface::action::Timer_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Timer_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Timer_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Timer_SendGoal_Request_

// alias to use template instance with default allocator
using Timer_SendGoal_Request =
  timer_action_interface::action::Timer_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace timer_action_interface


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__timer_action_interface__action__Timer_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__timer_action_interface__action__Timer_SendGoal_Response __declspec(deprecated)
#endif

namespace timer_action_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Timer_SendGoal_Response_
{
  using Type = Timer_SendGoal_Response_<ContainerAllocator>;

  explicit Timer_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Timer_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    timer_action_interface::action::Timer_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const timer_action_interface::action::Timer_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<timer_action_interface::action::Timer_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<timer_action_interface::action::Timer_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      timer_action_interface::action::Timer_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<timer_action_interface::action::Timer_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      timer_action_interface::action::Timer_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<timer_action_interface::action::Timer_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<timer_action_interface::action::Timer_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<timer_action_interface::action::Timer_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__timer_action_interface__action__Timer_SendGoal_Response
    std::shared_ptr<timer_action_interface::action::Timer_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__timer_action_interface__action__Timer_SendGoal_Response
    std::shared_ptr<timer_action_interface::action::Timer_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Timer_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Timer_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Timer_SendGoal_Response_

// alias to use template instance with default allocator
using Timer_SendGoal_Response =
  timer_action_interface::action::Timer_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace timer_action_interface

namespace timer_action_interface
{

namespace action
{

struct Timer_SendGoal
{
  using Request = timer_action_interface::action::Timer_SendGoal_Request;
  using Response = timer_action_interface::action::Timer_SendGoal_Response;
};

}  // namespace action

}  // namespace timer_action_interface


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__timer_action_interface__action__Timer_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__timer_action_interface__action__Timer_GetResult_Request __declspec(deprecated)
#endif

namespace timer_action_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Timer_GetResult_Request_
{
  using Type = Timer_GetResult_Request_<ContainerAllocator>;

  explicit Timer_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Timer_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    timer_action_interface::action::Timer_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const timer_action_interface::action::Timer_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<timer_action_interface::action::Timer_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<timer_action_interface::action::Timer_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      timer_action_interface::action::Timer_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<timer_action_interface::action::Timer_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      timer_action_interface::action::Timer_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<timer_action_interface::action::Timer_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<timer_action_interface::action::Timer_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<timer_action_interface::action::Timer_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__timer_action_interface__action__Timer_GetResult_Request
    std::shared_ptr<timer_action_interface::action::Timer_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__timer_action_interface__action__Timer_GetResult_Request
    std::shared_ptr<timer_action_interface::action::Timer_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Timer_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Timer_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Timer_GetResult_Request_

// alias to use template instance with default allocator
using Timer_GetResult_Request =
  timer_action_interface::action::Timer_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace timer_action_interface


// Include directives for member types
// Member 'result'
// already included above
// #include "timer_action_interface/action/detail/timer__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__timer_action_interface__action__Timer_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__timer_action_interface__action__Timer_GetResult_Response __declspec(deprecated)
#endif

namespace timer_action_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Timer_GetResult_Response_
{
  using Type = Timer_GetResult_Response_<ContainerAllocator>;

  explicit Timer_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Timer_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    timer_action_interface::action::Timer_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const timer_action_interface::action::Timer_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    timer_action_interface::action::Timer_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const timer_action_interface::action::Timer_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<timer_action_interface::action::Timer_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<timer_action_interface::action::Timer_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      timer_action_interface::action::Timer_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<timer_action_interface::action::Timer_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      timer_action_interface::action::Timer_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<timer_action_interface::action::Timer_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<timer_action_interface::action::Timer_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<timer_action_interface::action::Timer_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__timer_action_interface__action__Timer_GetResult_Response
    std::shared_ptr<timer_action_interface::action::Timer_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__timer_action_interface__action__Timer_GetResult_Response
    std::shared_ptr<timer_action_interface::action::Timer_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Timer_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Timer_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Timer_GetResult_Response_

// alias to use template instance with default allocator
using Timer_GetResult_Response =
  timer_action_interface::action::Timer_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace timer_action_interface

namespace timer_action_interface
{

namespace action
{

struct Timer_GetResult
{
  using Request = timer_action_interface::action::Timer_GetResult_Request;
  using Response = timer_action_interface::action::Timer_GetResult_Response;
};

}  // namespace action

}  // namespace timer_action_interface


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "timer_action_interface/action/detail/timer__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__timer_action_interface__action__Timer_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__timer_action_interface__action__Timer_FeedbackMessage __declspec(deprecated)
#endif

namespace timer_action_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Timer_FeedbackMessage_
{
  using Type = Timer_FeedbackMessage_<ContainerAllocator>;

  explicit Timer_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Timer_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    timer_action_interface::action::Timer_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const timer_action_interface::action::Timer_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    timer_action_interface::action::Timer_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const timer_action_interface::action::Timer_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<timer_action_interface::action::Timer_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<timer_action_interface::action::Timer_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      timer_action_interface::action::Timer_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<timer_action_interface::action::Timer_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      timer_action_interface::action::Timer_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<timer_action_interface::action::Timer_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<timer_action_interface::action::Timer_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<timer_action_interface::action::Timer_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__timer_action_interface__action__Timer_FeedbackMessage
    std::shared_ptr<timer_action_interface::action::Timer_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__timer_action_interface__action__Timer_FeedbackMessage
    std::shared_ptr<timer_action_interface::action::Timer_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Timer_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Timer_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Timer_FeedbackMessage_

// alias to use template instance with default allocator
using Timer_FeedbackMessage =
  timer_action_interface::action::Timer_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace timer_action_interface

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace timer_action_interface
{

namespace action
{

struct Timer
{
  /// The goal message defined in the action definition.
  using Goal = timer_action_interface::action::Timer_Goal;
  /// The result message defined in the action definition.
  using Result = timer_action_interface::action::Timer_Result;
  /// The feedback message defined in the action definition.
  using Feedback = timer_action_interface::action::Timer_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = timer_action_interface::action::Timer_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = timer_action_interface::action::Timer_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = timer_action_interface::action::Timer_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Timer Timer;

}  // namespace action

}  // namespace timer_action_interface

#endif  // TIMER_ACTION_INTERFACE__ACTION__DETAIL__TIMER__STRUCT_HPP_
