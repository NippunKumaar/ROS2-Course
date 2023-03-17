// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from word_count_msg:srv/WordCount.idl
// generated code does not contain a copyright notice

#ifndef WORD_COUNT_MSG__SRV__DETAIL__WORD_COUNT__BUILDER_HPP_
#define WORD_COUNT_MSG__SRV__DETAIL__WORD_COUNT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "word_count_msg/srv/detail/word_count__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace word_count_msg
{

namespace srv
{

namespace builder
{

class Init_WordCount_Request_words
{
public:
  Init_WordCount_Request_words()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::word_count_msg::srv::WordCount_Request words(::word_count_msg::srv::WordCount_Request::_words_type arg)
  {
    msg_.words = std::move(arg);
    return std::move(msg_);
  }

private:
  ::word_count_msg::srv::WordCount_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::word_count_msg::srv::WordCount_Request>()
{
  return word_count_msg::srv::builder::Init_WordCount_Request_words();
}

}  // namespace word_count_msg


namespace word_count_msg
{

namespace srv
{

namespace builder
{

class Init_WordCount_Response_count
{
public:
  Init_WordCount_Response_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::word_count_msg::srv::WordCount_Response count(::word_count_msg::srv::WordCount_Response::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::word_count_msg::srv::WordCount_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::word_count_msg::srv::WordCount_Response>()
{
  return word_count_msg::srv::builder::Init_WordCount_Response_count();
}

}  // namespace word_count_msg

#endif  // WORD_COUNT_MSG__SRV__DETAIL__WORD_COUNT__BUILDER_HPP_
