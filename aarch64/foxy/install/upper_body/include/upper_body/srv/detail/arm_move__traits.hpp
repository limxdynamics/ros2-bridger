// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from upper_body:srv/arm_move.idl
// generated code does not contain a copyright notice

#ifndef UPPER_BODY__SRV__DETAIL__ARM_MOVE__TRAITS_HPP_
#define UPPER_BODY__SRV__DETAIL__ARM_MOVE__TRAITS_HPP_

#include "upper_body/srv/detail/arm_move__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<upper_body::srv::arm_move_Request>()
{
  return "upper_body::srv::arm_move_Request";
}

template<>
inline const char * name<upper_body::srv::arm_move_Request>()
{
  return "upper_body/srv/arm_move_Request";
}

template<>
struct has_fixed_size<upper_body::srv::arm_move_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<upper_body::srv::arm_move_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<upper_body::srv::arm_move_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<upper_body::srv::arm_move_Response>()
{
  return "upper_body::srv::arm_move_Response";
}

template<>
inline const char * name<upper_body::srv::arm_move_Response>()
{
  return "upper_body/srv/arm_move_Response";
}

template<>
struct has_fixed_size<upper_body::srv::arm_move_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<upper_body::srv::arm_move_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<upper_body::srv::arm_move_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<upper_body::srv::arm_move>()
{
  return "upper_body::srv::arm_move";
}

template<>
inline const char * name<upper_body::srv::arm_move>()
{
  return "upper_body/srv/arm_move";
}

template<>
struct has_fixed_size<upper_body::srv::arm_move>
  : std::integral_constant<
    bool,
    has_fixed_size<upper_body::srv::arm_move_Request>::value &&
    has_fixed_size<upper_body::srv::arm_move_Response>::value
  >
{
};

template<>
struct has_bounded_size<upper_body::srv::arm_move>
  : std::integral_constant<
    bool,
    has_bounded_size<upper_body::srv::arm_move_Request>::value &&
    has_bounded_size<upper_body::srv::arm_move_Response>::value
  >
{
};

template<>
struct is_service<upper_body::srv::arm_move>
  : std::true_type
{
};

template<>
struct is_service_request<upper_body::srv::arm_move_Request>
  : std::true_type
{
};

template<>
struct is_service_response<upper_body::srv::arm_move_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UPPER_BODY__SRV__DETAIL__ARM_MOVE__TRAITS_HPP_
