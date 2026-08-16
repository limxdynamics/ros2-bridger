// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from std_srvs:srv/GetBoolWithTile.idl
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__DETAIL__GET_BOOL_WITH_TILE__TRAITS_HPP_
#define STD_SRVS__SRV__DETAIL__GET_BOOL_WITH_TILE__TRAITS_HPP_

#include "std_srvs/srv/detail/get_bool_with_tile__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_srvs::srv::GetBoolWithTile_Request>()
{
  return "std_srvs::srv::GetBoolWithTile_Request";
}

template<>
inline const char * name<std_srvs::srv::GetBoolWithTile_Request>()
{
  return "std_srvs/srv/GetBoolWithTile_Request";
}

template<>
struct has_fixed_size<std_srvs::srv::GetBoolWithTile_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<std_srvs::srv::GetBoolWithTile_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<std_srvs::srv::GetBoolWithTile_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_srvs::srv::GetBoolWithTile_Response>()
{
  return "std_srvs::srv::GetBoolWithTile_Response";
}

template<>
inline const char * name<std_srvs::srv::GetBoolWithTile_Response>()
{
  return "std_srvs/srv/GetBoolWithTile_Response";
}

template<>
struct has_fixed_size<std_srvs::srv::GetBoolWithTile_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<std_srvs::srv::GetBoolWithTile_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<std_srvs::srv::GetBoolWithTile_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_srvs::srv::GetBoolWithTile>()
{
  return "std_srvs::srv::GetBoolWithTile";
}

template<>
inline const char * name<std_srvs::srv::GetBoolWithTile>()
{
  return "std_srvs/srv/GetBoolWithTile";
}

template<>
struct has_fixed_size<std_srvs::srv::GetBoolWithTile>
  : std::integral_constant<
    bool,
    has_fixed_size<std_srvs::srv::GetBoolWithTile_Request>::value &&
    has_fixed_size<std_srvs::srv::GetBoolWithTile_Response>::value
  >
{
};

template<>
struct has_bounded_size<std_srvs::srv::GetBoolWithTile>
  : std::integral_constant<
    bool,
    has_bounded_size<std_srvs::srv::GetBoolWithTile_Request>::value &&
    has_bounded_size<std_srvs::srv::GetBoolWithTile_Response>::value
  >
{
};

template<>
struct is_service<std_srvs::srv::GetBoolWithTile>
  : std::true_type
{
};

template<>
struct is_service_request<std_srvs::srv::GetBoolWithTile_Request>
  : std::true_type
{
};

template<>
struct is_service_response<std_srvs::srv::GetBoolWithTile_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // STD_SRVS__SRV__DETAIL__GET_BOOL_WITH_TILE__TRAITS_HPP_
