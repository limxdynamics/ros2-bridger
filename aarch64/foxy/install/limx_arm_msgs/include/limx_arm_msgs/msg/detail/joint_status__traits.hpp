// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from limx_arm_msgs:msg/JointStatus.idl
// generated code does not contain a copyright notice

#ifndef LIMX_ARM_MSGS__MSG__DETAIL__JOINT_STATUS__TRAITS_HPP_
#define LIMX_ARM_MSGS__MSG__DETAIL__JOINT_STATUS__TRAITS_HPP_

#include "limx_arm_msgs/msg/detail/joint_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<limx_arm_msgs::msg::JointStatus>()
{
  return "limx_arm_msgs::msg::JointStatus";
}

template<>
inline const char * name<limx_arm_msgs::msg::JointStatus>()
{
  return "limx_arm_msgs/msg/JointStatus";
}

template<>
struct has_fixed_size<limx_arm_msgs::msg::JointStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<limx_arm_msgs::msg::JointStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<limx_arm_msgs::msg::JointStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIMX_ARM_MSGS__MSG__DETAIL__JOINT_STATUS__TRAITS_HPP_
