// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from teleop_msgs:msg/KeyPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_msgs/msg/key_point.hpp"


#ifndef TELEOP_MSGS__MSG__DETAIL__KEY_POINT__TRAITS_HPP_
#define TELEOP_MSGS__MSG__DETAIL__KEY_POINT__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "teleop_msgs/msg/detail/key_point__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace teleop_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const KeyPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KeyPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KeyPoint & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, teleop_msgs::msg::KeyPoint>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).name,
    std::forward<T>(msg).pose);
}

}  // namespace msg

}  // namespace teleop_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<teleop_msgs::msg::KeyPoint>()
{
  return "teleop_msgs::msg::KeyPoint";
}

template<>
constexpr const char * name<teleop_msgs::msg::KeyPoint>()
{
  return "teleop_msgs/msg/KeyPoint";
}

template<>
struct has_fixed_size<teleop_msgs::msg::KeyPoint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<teleop_msgs::msg::KeyPoint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<teleop_msgs::msg::KeyPoint>
  : std::true_type {};

template<>
struct MessageTraits<teleop_msgs::msg::KeyPoint>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "name",
    "pose",
  };
};

}  // namespace rosidl_generator_traits

#endif  // TELEOP_MSGS__MSG__DETAIL__KEY_POINT__TRAITS_HPP_
