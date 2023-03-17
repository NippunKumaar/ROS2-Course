// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from word_count_msg:srv/WordCount.idl
// generated code does not contain a copyright notice

#ifndef WORD_COUNT_MSG__SRV__DETAIL__WORD_COUNT__STRUCT_HPP_
#define WORD_COUNT_MSG__SRV__DETAIL__WORD_COUNT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__word_count_msg__srv__WordCount_Request __attribute__((deprecated))
#else
# define DEPRECATED__word_count_msg__srv__WordCount_Request __declspec(deprecated)
#endif

namespace word_count_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WordCount_Request_
{
  using Type = WordCount_Request_<ContainerAllocator>;

  explicit WordCount_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->words = "";
    }
  }

  explicit WordCount_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : words(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->words = "";
    }
  }

  // field types and members
  using _words_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _words_type words;

  // setters for named parameter idiom
  Type & set__words(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->words = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    word_count_msg::srv::WordCount_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const word_count_msg::srv::WordCount_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<word_count_msg::srv::WordCount_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<word_count_msg::srv::WordCount_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      word_count_msg::srv::WordCount_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<word_count_msg::srv::WordCount_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      word_count_msg::srv::WordCount_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<word_count_msg::srv::WordCount_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<word_count_msg::srv::WordCount_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<word_count_msg::srv::WordCount_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__word_count_msg__srv__WordCount_Request
    std::shared_ptr<word_count_msg::srv::WordCount_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__word_count_msg__srv__WordCount_Request
    std::shared_ptr<word_count_msg::srv::WordCount_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WordCount_Request_ & other) const
  {
    if (this->words != other.words) {
      return false;
    }
    return true;
  }
  bool operator!=(const WordCount_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WordCount_Request_

// alias to use template instance with default allocator
using WordCount_Request =
  word_count_msg::srv::WordCount_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace word_count_msg


#ifndef _WIN32
# define DEPRECATED__word_count_msg__srv__WordCount_Response __attribute__((deprecated))
#else
# define DEPRECATED__word_count_msg__srv__WordCount_Response __declspec(deprecated)
#endif

namespace word_count_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WordCount_Response_
{
  using Type = WordCount_Response_<ContainerAllocator>;

  explicit WordCount_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0ull;
    }
  }

  explicit WordCount_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0ull;
    }
  }

  // field types and members
  using _count_type =
    uint64_t;
  _count_type count;

  // setters for named parameter idiom
  Type & set__count(
    const uint64_t & _arg)
  {
    this->count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    word_count_msg::srv::WordCount_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const word_count_msg::srv::WordCount_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<word_count_msg::srv::WordCount_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<word_count_msg::srv::WordCount_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      word_count_msg::srv::WordCount_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<word_count_msg::srv::WordCount_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      word_count_msg::srv::WordCount_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<word_count_msg::srv::WordCount_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<word_count_msg::srv::WordCount_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<word_count_msg::srv::WordCount_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__word_count_msg__srv__WordCount_Response
    std::shared_ptr<word_count_msg::srv::WordCount_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__word_count_msg__srv__WordCount_Response
    std::shared_ptr<word_count_msg::srv::WordCount_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WordCount_Response_ & other) const
  {
    if (this->count != other.count) {
      return false;
    }
    return true;
  }
  bool operator!=(const WordCount_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WordCount_Response_

// alias to use template instance with default allocator
using WordCount_Response =
  word_count_msg::srv::WordCount_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace word_count_msg

namespace word_count_msg
{

namespace srv
{

struct WordCount
{
  using Request = word_count_msg::srv::WordCount_Request;
  using Response = word_count_msg::srv::WordCount_Response;
};

}  // namespace srv

}  // namespace word_count_msg

#endif  // WORD_COUNT_MSG__SRV__DETAIL__WORD_COUNT__STRUCT_HPP_
