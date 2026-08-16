// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from std_srvs:srv/GetStringArrayWithTitle.idl
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__DETAIL__GET_STRING_ARRAY_WITH_TITLE__TRAITS_HPP_
#define STD_SRVS__SRV__DETAIL__GET_STRING_ARRAY_WITH_TITLE__TRAITS_HPP_

#include "std_srvs/srv/detail/get_string_array_with_title__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_srvs::srv::GetStringArrayWithTitle_Request>()
{
  return "std_srvs::srv::GetStringArrayWithTitle_Request";
}

template<>
inline const char * name<std_srvs::srv::GetStringArrayWithTitle_Request>()
{
  return "std_srvs/srv/GetStringArrayWithTitle_Request";
}

template<>
struct has_fixed_size<std_srvs::srv::GetStringArrayWithTitle_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<std_srvs::srv::GetStringArrayWithTitle_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<std_srvs::srv::GetStringArrayWithTitle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_srvs::srv::GetStringArrayWithTitle_Response>()
{
  return "std_srvs::srv::GetStringArrayWithTitle_Response";
}

template<>
inline const char * name<std_srvs::srv::GetStringArrayWithTitle_Response>()
{
  return "std_srvs/srv/GetStringArrayWithTitle_Response";
}

template<>
struct has_fixed_size<std_srvs::srv::GetStringArrayWithTitle_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<std_srvs::srv::GetStringArrayWithTitle_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<std_srvs::srv::GetStringArrayWithTitle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_srvs::srv::GetStringArrayWithTitle>()
{
  return "std_srvs::srv::GetStringArrayWithTitle";
}

template<>
inline const char * name<std_srvs::srv::GetStringArrayWithTitle>()
{
  return "std_srvs/srv/GetStringArrayWithTitle";
}

template<>
struct has_fixed_size<std_srvs::srv::GetStringArrayWithTitle>
  : std::integral_constant<
    bool,
    has_fixed_size<std_srvs::srv::GetStringArrayWithTitle_Request>::value &&
    has_fixed_size<std_srvs::srv::GetStringArrayWithTitle_Response>::value
  >
{
};

template<>
struct has_bounded_size<std_srvs::srv::GetStringArrayWithTitle>
  : std::integral_constant<
    bool,
    has_bounded_size<std_srvs::srv::GetStringArrayWithTitle_Request>::value &&
    has_bounded_size<std_srvs::srv::GetStringArrayWithTitle_Response>::value
  >
{
};

template<>
struct is_service<std_srvs::srv::GetStringArrayWithTitle>
  : std::true_type
{
};

template<>
struct is_service_request<std_srvs::srv::GetStringArrayWithTitle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<std_srvs::srv::GetStringArrayWithTitle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // STD_SRVS__SRV__DETAIL__GET_STRING_ARRAY_WITH_TITLE__TRAITS_HPP_
