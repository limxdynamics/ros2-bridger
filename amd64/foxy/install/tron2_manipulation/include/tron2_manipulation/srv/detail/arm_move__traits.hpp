// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tron2_manipulation:srv/arm_move.idl
// generated code does not contain a copyright notice

#ifndef TRON2_MANIPULATION__SRV__DETAIL__ARM_MOVE__TRAITS_HPP_
#define TRON2_MANIPULATION__SRV__DETAIL__ARM_MOVE__TRAITS_HPP_

#include "tron2_manipulation/srv/detail/arm_move__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tron2_manipulation::srv::arm_move_Request>()
{
  return "tron2_manipulation::srv::arm_move_Request";
}

template<>
inline const char * name<tron2_manipulation::srv::arm_move_Request>()
{
  return "tron2_manipulation/srv/arm_move_Request";
}

template<>
struct has_fixed_size<tron2_manipulation::srv::arm_move_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tron2_manipulation::srv::arm_move_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tron2_manipulation::srv::arm_move_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tron2_manipulation::srv::arm_move_Response>()
{
  return "tron2_manipulation::srv::arm_move_Response";
}

template<>
inline const char * name<tron2_manipulation::srv::arm_move_Response>()
{
  return "tron2_manipulation/srv/arm_move_Response";
}

template<>
struct has_fixed_size<tron2_manipulation::srv::arm_move_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tron2_manipulation::srv::arm_move_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tron2_manipulation::srv::arm_move_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tron2_manipulation::srv::arm_move>()
{
  return "tron2_manipulation::srv::arm_move";
}

template<>
inline const char * name<tron2_manipulation::srv::arm_move>()
{
  return "tron2_manipulation/srv/arm_move";
}

template<>
struct has_fixed_size<tron2_manipulation::srv::arm_move>
  : std::integral_constant<
    bool,
    has_fixed_size<tron2_manipulation::srv::arm_move_Request>::value &&
    has_fixed_size<tron2_manipulation::srv::arm_move_Response>::value
  >
{
};

template<>
struct has_bounded_size<tron2_manipulation::srv::arm_move>
  : std::integral_constant<
    bool,
    has_bounded_size<tron2_manipulation::srv::arm_move_Request>::value &&
    has_bounded_size<tron2_manipulation::srv::arm_move_Response>::value
  >
{
};

template<>
struct is_service<tron2_manipulation::srv::arm_move>
  : std::true_type
{
};

template<>
struct is_service_request<tron2_manipulation::srv::arm_move_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tron2_manipulation::srv::arm_move_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TRON2_MANIPULATION__SRV__DETAIL__ARM_MOVE__TRAITS_HPP_
