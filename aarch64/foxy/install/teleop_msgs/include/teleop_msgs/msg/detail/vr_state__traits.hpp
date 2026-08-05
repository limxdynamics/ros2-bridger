// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from teleop_msgs:msg/VRState.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__VR_STATE__TRAITS_HPP_
#define TELEOP_MSGS__MSG__DETAIL__VR_STATE__TRAITS_HPP_

#include "teleop_msgs/msg/detail/vr_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<teleop_msgs::msg::VRState>()
{
  return "teleop_msgs::msg::VRState";
}

template<>
inline const char * name<teleop_msgs::msg::VRState>()
{
  return "teleop_msgs/msg/VRState";
}

template<>
struct has_fixed_size<teleop_msgs::msg::VRState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<teleop_msgs::msg::VRState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<teleop_msgs::msg::VRState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TELEOP_MSGS__MSG__DETAIL__VR_STATE__TRAITS_HPP_
