// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from limx_arm_msgs:srv/desire_pos.idl
// generated code does not contain a copyright notice

#ifndef LIMX_ARM_MSGS__SRV__DETAIL__DESIRE_POS__TRAITS_HPP_
#define LIMX_ARM_MSGS__SRV__DETAIL__DESIRE_POS__TRAITS_HPP_

#include "limx_arm_msgs/srv/detail/desire_pos__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<limx_arm_msgs::srv::desire_pos_Request>()
{
  return "limx_arm_msgs::srv::desire_pos_Request";
}

template<>
inline const char * name<limx_arm_msgs::srv::desire_pos_Request>()
{
  return "limx_arm_msgs/srv/desire_pos_Request";
}

template<>
struct has_fixed_size<limx_arm_msgs::srv::desire_pos_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<limx_arm_msgs::srv::desire_pos_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<limx_arm_msgs::srv::desire_pos_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<limx_arm_msgs::srv::desire_pos_Response>()
{
  return "limx_arm_msgs::srv::desire_pos_Response";
}

template<>
inline const char * name<limx_arm_msgs::srv::desire_pos_Response>()
{
  return "limx_arm_msgs/srv/desire_pos_Response";
}

template<>
struct has_fixed_size<limx_arm_msgs::srv::desire_pos_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<limx_arm_msgs::srv::desire_pos_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<limx_arm_msgs::srv::desire_pos_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<limx_arm_msgs::srv::desire_pos>()
{
  return "limx_arm_msgs::srv::desire_pos";
}

template<>
inline const char * name<limx_arm_msgs::srv::desire_pos>()
{
  return "limx_arm_msgs/srv/desire_pos";
}

template<>
struct has_fixed_size<limx_arm_msgs::srv::desire_pos>
  : std::integral_constant<
    bool,
    has_fixed_size<limx_arm_msgs::srv::desire_pos_Request>::value &&
    has_fixed_size<limx_arm_msgs::srv::desire_pos_Response>::value
  >
{
};

template<>
struct has_bounded_size<limx_arm_msgs::srv::desire_pos>
  : std::integral_constant<
    bool,
    has_bounded_size<limx_arm_msgs::srv::desire_pos_Request>::value &&
    has_bounded_size<limx_arm_msgs::srv::desire_pos_Response>::value
  >
{
};

template<>
struct is_service<limx_arm_msgs::srv::desire_pos>
  : std::true_type
{
};

template<>
struct is_service_request<limx_arm_msgs::srv::desire_pos_Request>
  : std::true_type
{
};

template<>
struct is_service_response<limx_arm_msgs::srv::desire_pos_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LIMX_ARM_MSGS__SRV__DETAIL__DESIRE_POS__TRAITS_HPP_
