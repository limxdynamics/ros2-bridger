// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mros_msgs:msg/SyncTime.idl
// generated code does not contain a copyright notice

#ifndef MROS_MSGS__MSG__DETAIL__SYNC_TIME__TRAITS_HPP_
#define MROS_MSGS__MSG__DETAIL__SYNC_TIME__TRAITS_HPP_

#include "mros_msgs/msg/detail/sync_time__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'data'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mros_msgs::msg::SyncTime>()
{
  return "mros_msgs::msg::SyncTime";
}

template<>
inline const char * name<mros_msgs::msg::SyncTime>()
{
  return "mros_msgs/msg/SyncTime";
}

template<>
struct has_fixed_size<mros_msgs::msg::SyncTime>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<mros_msgs::msg::SyncTime>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<mros_msgs::msg::SyncTime>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MROS_MSGS__MSG__DETAIL__SYNC_TIME__TRAITS_HPP_
