// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mros_msgs:msg/AshmemInfo.idl
// generated code does not contain a copyright notice

#ifndef MROS_MSGS__MSG__DETAIL__ASHMEM_INFO__TRAITS_HPP_
#define MROS_MSGS__MSG__DETAIL__ASHMEM_INFO__TRAITS_HPP_

#include "mros_msgs/msg/detail/ashmem_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mros_msgs::msg::AshmemInfo>()
{
  return "mros_msgs::msg::AshmemInfo";
}

template<>
inline const char * name<mros_msgs::msg::AshmemInfo>()
{
  return "mros_msgs/msg/AshmemInfo";
}

template<>
struct has_fixed_size<mros_msgs::msg::AshmemInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mros_msgs::msg::AshmemInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mros_msgs::msg::AshmemInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MROS_MSGS__MSG__DETAIL__ASHMEM_INFO__TRAITS_HPP_
