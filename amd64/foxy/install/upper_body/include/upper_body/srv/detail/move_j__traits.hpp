// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from upper_body:srv/moveJ.idl
// generated code does not contain a copyright notice

#ifndef UPPER_BODY__SRV__DETAIL__MOVE_J__TRAITS_HPP_
#define UPPER_BODY__SRV__DETAIL__MOVE_J__TRAITS_HPP_

#include "upper_body/srv/detail/move_j__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<upper_body::srv::moveJ_Request>()
{
  return "upper_body::srv::moveJ_Request";
}

template<>
inline const char * name<upper_body::srv::moveJ_Request>()
{
  return "upper_body/srv/moveJ_Request";
}

template<>
struct has_fixed_size<upper_body::srv::moveJ_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<upper_body::srv::moveJ_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<upper_body::srv::moveJ_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<upper_body::srv::moveJ_Response>()
{
  return "upper_body::srv::moveJ_Response";
}

template<>
inline const char * name<upper_body::srv::moveJ_Response>()
{
  return "upper_body/srv/moveJ_Response";
}

template<>
struct has_fixed_size<upper_body::srv::moveJ_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<upper_body::srv::moveJ_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<upper_body::srv::moveJ_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<upper_body::srv::moveJ>()
{
  return "upper_body::srv::moveJ";
}

template<>
inline const char * name<upper_body::srv::moveJ>()
{
  return "upper_body/srv/moveJ";
}

template<>
struct has_fixed_size<upper_body::srv::moveJ>
  : std::integral_constant<
    bool,
    has_fixed_size<upper_body::srv::moveJ_Request>::value &&
    has_fixed_size<upper_body::srv::moveJ_Response>::value
  >
{
};

template<>
struct has_bounded_size<upper_body::srv::moveJ>
  : std::integral_constant<
    bool,
    has_bounded_size<upper_body::srv::moveJ_Request>::value &&
    has_bounded_size<upper_body::srv::moveJ_Response>::value
  >
{
};

template<>
struct is_service<upper_body::srv::moveJ>
  : std::true_type
{
};

template<>
struct is_service_request<upper_body::srv::moveJ_Request>
  : std::true_type
{
};

template<>
struct is_service_response<upper_body::srv::moveJ_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UPPER_BODY__SRV__DETAIL__MOVE_J__TRAITS_HPP_
