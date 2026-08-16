// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from teleop_msgs:msg/TeleopLimbState.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_LIMB_STATE__TRAITS_HPP_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_LIMB_STATE__TRAITS_HPP_

#include "teleop_msgs/msg/detail/teleop_limb_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<teleop_msgs::msg::TeleopLimbState>()
{
  return "teleop_msgs::msg::TeleopLimbState";
}

template<>
inline const char * name<teleop_msgs::msg::TeleopLimbState>()
{
  return "teleop_msgs/msg/TeleopLimbState";
}

template<>
struct has_fixed_size<teleop_msgs::msg::TeleopLimbState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<teleop_msgs::msg::TeleopLimbState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<teleop_msgs::msg::TeleopLimbState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_LIMB_STATE__TRAITS_HPP_
