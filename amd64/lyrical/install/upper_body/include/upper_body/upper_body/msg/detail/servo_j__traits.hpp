// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from upper_body:msg/servoJ.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "upper_body/msg/servo_j.hpp"


#ifndef UPPER_BODY__MSG__DETAIL__SERVO_J__TRAITS_HPP_
#define UPPER_BODY__MSG__DETAIL__SERVO_J__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "upper_body/msg/detail/servo_j__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace upper_body
{

namespace msg
{

inline void to_flow_style_yaml(
  const servoJ & msg,
  std::ostream & out)
{
  out << "{";
  // member: joints
  {
    if (msg.joints.size() == 0) {
      out << "joints: []";
    } else {
      out << "joints: [";
      size_t pending_items = msg.joints.size();
      for (auto item : msg.joints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const servoJ & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joints.size() == 0) {
      out << "joints: []\n";
    } else {
      out << "joints:\n";
      for (auto item : msg.joints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const servoJ & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, upper_body::msg::servoJ>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).joints);
}

}  // namespace msg

}  // namespace upper_body

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<upper_body::msg::servoJ>()
{
  return "upper_body::msg::servoJ";
}

template<>
constexpr const char * name<upper_body::msg::servoJ>()
{
  return "upper_body/msg/servoJ";
}

template<>
struct has_fixed_size<upper_body::msg::servoJ>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<upper_body::msg::servoJ>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<upper_body::msg::servoJ>
  : std::true_type {};

template<>
struct MessageTraits<upper_body::msg::servoJ>
{
  static constexpr std::size_t member_count = 1;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "joints",
  };
};

}  // namespace rosidl_generator_traits

#endif  // UPPER_BODY__MSG__DETAIL__SERVO_J__TRAITS_HPP_
