// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from teleop_msgs:msg/TeleopTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_msgs/msg/teleop_target.hpp"


#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_TARGET__TRAITS_HPP_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "teleop_msgs/msg/detail/teleop_target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'source_stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace teleop_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TeleopTarget & msg,
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
    out << ", ";
  }

  // member: validity
  {
    out << "validity: ";
    rosidl_generator_traits::value_to_yaml(msg.validity, out);
    out << ", ";
  }

  // member: source_stamp
  {
    out << "source_stamp: ";
    to_flow_style_yaml(msg.source_stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TeleopTarget & msg,
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

  // member: validity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "validity: ";
    rosidl_generator_traits::value_to_yaml(msg.validity, out);
    out << "\n";
  }

  // member: source_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_stamp:\n";
    to_block_style_yaml(msg.source_stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TeleopTarget & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace teleop_msgs

namespace rosidl_generator_traits
{

[[deprecated("use teleop_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const teleop_msgs::msg::TeleopTarget & msg,
  std::ostream & out, size_t indentation = 0)
{
  teleop_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use teleop_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const teleop_msgs::msg::TeleopTarget & msg)
{
  return teleop_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<teleop_msgs::msg::TeleopTarget>()
{
  return "teleop_msgs::msg::TeleopTarget";
}

template<>
inline const char * name<teleop_msgs::msg::TeleopTarget>()
{
  return "teleop_msgs/msg/TeleopTarget";
}

template<>
struct has_fixed_size<teleop_msgs::msg::TeleopTarget>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<teleop_msgs::msg::TeleopTarget>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<teleop_msgs::msg::TeleopTarget>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_TARGET__TRAITS_HPP_
