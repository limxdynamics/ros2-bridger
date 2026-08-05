// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hand_msgs:msg/TactileHandState.idl
// generated code does not contain a copyright notice

#ifndef HAND_MSGS__MSG__DETAIL__TACTILE_HAND_STATE__TRAITS_HPP_
#define HAND_MSGS__MSG__DETAIL__TACTILE_HAND_STATE__TRAITS_HPP_

#include "hand_msgs/msg/detail/tactile_hand_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'hand_state'
#include "hand_msgs/msg/detail/hand_msg__traits.hpp"
// Member 'hand_tactile_state'
#include "hand_msgs/msg/detail/tactile_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hand_msgs::msg::TactileHandState>()
{
  return "hand_msgs::msg::TactileHandState";
}

template<>
inline const char * name<hand_msgs::msg::TactileHandState>()
{
  return "hand_msgs/msg/TactileHandState";
}

template<>
struct has_fixed_size<hand_msgs::msg::TactileHandState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hand_msgs::msg::TactileHandState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hand_msgs::msg::TactileHandState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HAND_MSGS__MSG__DETAIL__TACTILE_HAND_STATE__TRAITS_HPP_
