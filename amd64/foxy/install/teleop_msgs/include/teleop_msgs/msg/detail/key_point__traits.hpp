// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from teleop_msgs:msg/KeyPoint.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__KEY_POINT__TRAITS_HPP_
#define TELEOP_MSGS__MSG__DETAIL__KEY_POINT__TRAITS_HPP_

#include "teleop_msgs/msg/detail/key_point__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<teleop_msgs::msg::KeyPoint>()
{
  return "teleop_msgs::msg::KeyPoint";
}

template<>
inline const char * name<teleop_msgs::msg::KeyPoint>()
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

}  // namespace rosidl_generator_traits

#endif  // TELEOP_MSGS__MSG__DETAIL__KEY_POINT__TRAITS_HPP_
