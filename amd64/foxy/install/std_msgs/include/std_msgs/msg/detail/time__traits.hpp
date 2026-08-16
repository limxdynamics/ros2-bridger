// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from std_msgs:msg/Time.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__TIME__TRAITS_HPP_
#define STD_MSGS__MSG__DETAIL__TIME__TRAITS_HPP_

#include "std_msgs/msg/detail/time__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'data'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_msgs::msg::Time>()
{
  return "std_msgs::msg::Time";
}

template<>
inline const char * name<std_msgs::msg::Time>()
{
  return "std_msgs/msg/Time";
}

template<>
struct has_fixed_size<std_msgs::msg::Time>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<std_msgs::msg::Time>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<std_msgs::msg::Time>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STD_MSGS__MSG__DETAIL__TIME__TRAITS_HPP_
