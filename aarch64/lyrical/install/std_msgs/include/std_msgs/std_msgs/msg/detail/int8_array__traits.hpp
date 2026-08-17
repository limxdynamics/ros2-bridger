// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from std_msgs:msg/Int8Array.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "std_msgs/msg/int8_array.hpp"


#ifndef STD_MSGS__MSG__DETAIL__INT8_ARRAY__TRAITS_HPP_
#define STD_MSGS__MSG__DETAIL__INT8_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "std_msgs/msg/detail/int8_array__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace std_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Int8Array & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Int8Array & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Int8Array & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, std_msgs::msg::Int8Array>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).header,
    std::forward<T>(msg).data);
}

}  // namespace msg

}  // namespace std_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<std_msgs::msg::Int8Array>()
{
  return "std_msgs::msg::Int8Array";
}

template<>
constexpr const char * name<std_msgs::msg::Int8Array>()
{
  return "std_msgs/msg/Int8Array";
}

template<>
struct has_fixed_size<std_msgs::msg::Int8Array>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<std_msgs::msg::Int8Array>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<std_msgs::msg::Int8Array>
  : std::true_type {};

template<>
struct MessageTraits<std_msgs::msg::Int8Array>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "header",
    "data",
  };
};

}  // namespace rosidl_generator_traits

#endif  // STD_MSGS__MSG__DETAIL__INT8_ARRAY__TRAITS_HPP_
