// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from std_srvs:srv/SetStringWithTitle.idl
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__DETAIL__SET_STRING_WITH_TITLE__TRAITS_HPP_
#define STD_SRVS__SRV__DETAIL__SET_STRING_WITH_TITLE__TRAITS_HPP_

#include "std_srvs/srv/detail/set_string_with_title__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_srvs::srv::SetStringWithTitle_Request>()
{
  return "std_srvs::srv::SetStringWithTitle_Request";
}

template<>
inline const char * name<std_srvs::srv::SetStringWithTitle_Request>()
{
  return "std_srvs/srv/SetStringWithTitle_Request";
}

template<>
struct has_fixed_size<std_srvs::srv::SetStringWithTitle_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<std_srvs::srv::SetStringWithTitle_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<std_srvs::srv::SetStringWithTitle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_srvs::srv::SetStringWithTitle_Response>()
{
  return "std_srvs::srv::SetStringWithTitle_Response";
}

template<>
inline const char * name<std_srvs::srv::SetStringWithTitle_Response>()
{
  return "std_srvs/srv/SetStringWithTitle_Response";
}

template<>
struct has_fixed_size<std_srvs::srv::SetStringWithTitle_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<std_srvs::srv::SetStringWithTitle_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<std_srvs::srv::SetStringWithTitle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_srvs::srv::SetStringWithTitle>()
{
  return "std_srvs::srv::SetStringWithTitle";
}

template<>
inline const char * name<std_srvs::srv::SetStringWithTitle>()
{
  return "std_srvs/srv/SetStringWithTitle";
}

template<>
struct has_fixed_size<std_srvs::srv::SetStringWithTitle>
  : std::integral_constant<
    bool,
    has_fixed_size<std_srvs::srv::SetStringWithTitle_Request>::value &&
    has_fixed_size<std_srvs::srv::SetStringWithTitle_Response>::value
  >
{
};

template<>
struct has_bounded_size<std_srvs::srv::SetStringWithTitle>
  : std::integral_constant<
    bool,
    has_bounded_size<std_srvs::srv::SetStringWithTitle_Request>::value &&
    has_bounded_size<std_srvs::srv::SetStringWithTitle_Response>::value
  >
{
};

template<>
struct is_service<std_srvs::srv::SetStringWithTitle>
  : std::true_type
{
};

template<>
struct is_service_request<std_srvs::srv::SetStringWithTitle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<std_srvs::srv::SetStringWithTitle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // STD_SRVS__SRV__DETAIL__SET_STRING_WITH_TITLE__TRAITS_HPP_
