// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from word_count_msg:srv/WordCount.idl
// generated code does not contain a copyright notice

#ifndef WORD_COUNT_MSG__SRV__DETAIL__WORD_COUNT__TRAITS_HPP_
#define WORD_COUNT_MSG__SRV__DETAIL__WORD_COUNT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "word_count_msg/srv/detail/word_count__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace word_count_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const WordCount_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: words
  {
    out << "words: ";
    rosidl_generator_traits::value_to_yaml(msg.words, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WordCount_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: words
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "words: ";
    rosidl_generator_traits::value_to_yaml(msg.words, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WordCount_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace word_count_msg

namespace rosidl_generator_traits
{

[[deprecated("use word_count_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const word_count_msg::srv::WordCount_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  word_count_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use word_count_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const word_count_msg::srv::WordCount_Request & msg)
{
  return word_count_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<word_count_msg::srv::WordCount_Request>()
{
  return "word_count_msg::srv::WordCount_Request";
}

template<>
inline const char * name<word_count_msg::srv::WordCount_Request>()
{
  return "word_count_msg/srv/WordCount_Request";
}

template<>
struct has_fixed_size<word_count_msg::srv::WordCount_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<word_count_msg::srv::WordCount_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<word_count_msg::srv::WordCount_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace word_count_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const WordCount_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WordCount_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WordCount_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace word_count_msg

namespace rosidl_generator_traits
{

[[deprecated("use word_count_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const word_count_msg::srv::WordCount_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  word_count_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use word_count_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const word_count_msg::srv::WordCount_Response & msg)
{
  return word_count_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<word_count_msg::srv::WordCount_Response>()
{
  return "word_count_msg::srv::WordCount_Response";
}

template<>
inline const char * name<word_count_msg::srv::WordCount_Response>()
{
  return "word_count_msg/srv/WordCount_Response";
}

template<>
struct has_fixed_size<word_count_msg::srv::WordCount_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<word_count_msg::srv::WordCount_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<word_count_msg::srv::WordCount_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<word_count_msg::srv::WordCount>()
{
  return "word_count_msg::srv::WordCount";
}

template<>
inline const char * name<word_count_msg::srv::WordCount>()
{
  return "word_count_msg/srv/WordCount";
}

template<>
struct has_fixed_size<word_count_msg::srv::WordCount>
  : std::integral_constant<
    bool,
    has_fixed_size<word_count_msg::srv::WordCount_Request>::value &&
    has_fixed_size<word_count_msg::srv::WordCount_Response>::value
  >
{
};

template<>
struct has_bounded_size<word_count_msg::srv::WordCount>
  : std::integral_constant<
    bool,
    has_bounded_size<word_count_msg::srv::WordCount_Request>::value &&
    has_bounded_size<word_count_msg::srv::WordCount_Response>::value
  >
{
};

template<>
struct is_service<word_count_msg::srv::WordCount>
  : std::true_type
{
};

template<>
struct is_service_request<word_count_msg::srv::WordCount_Request>
  : std::true_type
{
};

template<>
struct is_service_response<word_count_msg::srv::WordCount_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WORD_COUNT_MSG__SRV__DETAIL__WORD_COUNT__TRAITS_HPP_
