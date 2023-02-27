// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from complex_msg:msg/Complex.idl
// generated code does not contain a copyright notice

#ifndef COMPLEX_MSG__MSG__DETAIL__COMPLEX__BUILDER_HPP_
#define COMPLEX_MSG__MSG__DETAIL__COMPLEX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "complex_msg/msg/detail/complex__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace complex_msg
{

namespace msg
{

namespace builder
{

class Init_Complex_imaginary
{
public:
  explicit Init_Complex_imaginary(::complex_msg::msg::Complex & msg)
  : msg_(msg)
  {}
  ::complex_msg::msg::Complex imaginary(::complex_msg::msg::Complex::_imaginary_type arg)
  {
    msg_.imaginary = std::move(arg);
    return std::move(msg_);
  }

private:
  ::complex_msg::msg::Complex msg_;
};

class Init_Complex_real
{
public:
  Init_Complex_real()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Complex_imaginary real(::complex_msg::msg::Complex::_real_type arg)
  {
    msg_.real = std::move(arg);
    return Init_Complex_imaginary(msg_);
  }

private:
  ::complex_msg::msg::Complex msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::complex_msg::msg::Complex>()
{
  return complex_msg::msg::builder::Init_Complex_real();
}

}  // namespace complex_msg

#endif  // COMPLEX_MSG__MSG__DETAIL__COMPLEX__BUILDER_HPP_
