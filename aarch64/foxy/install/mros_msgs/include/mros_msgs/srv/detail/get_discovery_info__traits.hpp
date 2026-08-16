// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mros_msgs:srv/GetDiscoveryInfo.idl
// generated code does not contain a copyright notice

#ifndef MROS_MSGS__SRV__DETAIL__GET_DISCOVERY_INFO__TRAITS_HPP_
#define MROS_MSGS__SRV__DETAIL__GET_DISCOVERY_INFO__TRAITS_HPP_

#include "mros_msgs/srv/detail/get_discovery_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mros_msgs::srv::GetDiscoveryInfo_Request>()
{
  return "mros_msgs::srv::GetDiscoveryInfo_Request";
}

template<>
inline const char * name<mros_msgs::srv::GetDiscoveryInfo_Request>()
{
  return "mros_msgs/srv/GetDiscoveryInfo_Request";
}

template<>
struct has_fixed_size<mros_msgs::srv::GetDiscoveryInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mros_msgs::srv::GetDiscoveryInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mros_msgs::srv::GetDiscoveryInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mros_msgs::srv::GetDiscoveryInfo_Response>()
{
  return "mros_msgs::srv::GetDiscoveryInfo_Response";
}

template<>
inline const char * name<mros_msgs::srv::GetDiscoveryInfo_Response>()
{
  return "mros_msgs/srv/GetDiscoveryInfo_Response";
}

template<>
struct has_fixed_size<mros_msgs::srv::GetDiscoveryInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mros_msgs::srv::GetDiscoveryInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mros_msgs::srv::GetDiscoveryInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mros_msgs::srv::GetDiscoveryInfo>()
{
  return "mros_msgs::srv::GetDiscoveryInfo";
}

template<>
inline const char * name<mros_msgs::srv::GetDiscoveryInfo>()
{
  return "mros_msgs/srv/GetDiscoveryInfo";
}

template<>
struct has_fixed_size<mros_msgs::srv::GetDiscoveryInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<mros_msgs::srv::GetDiscoveryInfo_Request>::value &&
    has_fixed_size<mros_msgs::srv::GetDiscoveryInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<mros_msgs::srv::GetDiscoveryInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<mros_msgs::srv::GetDiscoveryInfo_Request>::value &&
    has_bounded_size<mros_msgs::srv::GetDiscoveryInfo_Response>::value
  >
{
};

template<>
struct is_service<mros_msgs::srv::GetDiscoveryInfo>
  : std::true_type
{
};

template<>
struct is_service_request<mros_msgs::srv::GetDiscoveryInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mros_msgs::srv::GetDiscoveryInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MROS_MSGS__SRV__DETAIL__GET_DISCOVERY_INFO__TRAITS_HPP_
