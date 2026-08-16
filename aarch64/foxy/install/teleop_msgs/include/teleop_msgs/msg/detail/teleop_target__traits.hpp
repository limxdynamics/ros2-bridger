// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from teleop_msgs:msg/TeleopTarget.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_TARGET__TRAITS_HPP_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_TARGET__TRAITS_HPP_

#include "teleop_msgs/msg/detail/teleop_target__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'source_stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

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
