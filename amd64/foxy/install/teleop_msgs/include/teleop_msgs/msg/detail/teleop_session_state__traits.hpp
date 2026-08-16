// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from teleop_msgs:msg/TeleopSessionState.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_SESSION_STATE__TRAITS_HPP_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_SESSION_STATE__TRAITS_HPP_

#include "teleop_msgs/msg/detail/teleop_session_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<teleop_msgs::msg::TeleopSessionState>()
{
  return "teleop_msgs::msg::TeleopSessionState";
}

template<>
inline const char * name<teleop_msgs::msg::TeleopSessionState>()
{
  return "teleop_msgs/msg/TeleopSessionState";
}

template<>
struct has_fixed_size<teleop_msgs::msg::TeleopSessionState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<teleop_msgs::msg::TeleopSessionState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<teleop_msgs::msg::TeleopSessionState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_SESSION_STATE__TRAITS_HPP_
