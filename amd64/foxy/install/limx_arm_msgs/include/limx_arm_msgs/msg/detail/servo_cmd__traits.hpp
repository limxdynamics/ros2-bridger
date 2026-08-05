// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from limx_arm_msgs:msg/ServoCmd.idl
// generated code does not contain a copyright notice

#ifndef LIMX_ARM_MSGS__MSG__DETAIL__SERVO_CMD__TRAITS_HPP_
#define LIMX_ARM_MSGS__MSG__DETAIL__SERVO_CMD__TRAITS_HPP_

#include "limx_arm_msgs/msg/detail/servo_cmd__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<limx_arm_msgs::msg::ServoCmd>()
{
  return "limx_arm_msgs::msg::ServoCmd";
}

template<>
inline const char * name<limx_arm_msgs::msg::ServoCmd>()
{
  return "limx_arm_msgs/msg/ServoCmd";
}

template<>
struct has_fixed_size<limx_arm_msgs::msg::ServoCmd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<limx_arm_msgs::msg::ServoCmd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<limx_arm_msgs::msg::ServoCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIMX_ARM_MSGS__MSG__DETAIL__SERVO_CMD__TRAITS_HPP_
