// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from upper_body:msg/waist_cmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "upper_body/msg/waist_cmd.hpp"


#ifndef UPPER_BODY__MSG__DETAIL__WAIST_CMD__TRAITS_HPP_
#define UPPER_BODY__MSG__DETAIL__WAIST_CMD__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "upper_body/msg/detail/waist_cmd__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace upper_body
{

namespace msg
{

inline void to_flow_style_yaml(
  const waist_cmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: waistCMD
  {
    if (msg.waistCMD.size() == 0) {
      out << "waistCMD: []";
    } else {
      out << "waistCMD: [";
      size_t pending_items = msg.waistCMD.size();
      for (auto item : msg.waistCMD) {
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
  const waist_cmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waistCMD
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waistCMD.size() == 0) {
      out << "waistCMD: []\n";
    } else {
      out << "waistCMD:\n";
      for (auto item : msg.waistCMD) {
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

inline std::string to_yaml(const waist_cmd & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, upper_body::msg::waist_cmd>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).waistCMD);
}

}  // namespace msg

}  // namespace upper_body

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<upper_body::msg::waist_cmd>()
{
  return "upper_body::msg::waist_cmd";
}

template<>
constexpr const char * name<upper_body::msg::waist_cmd>()
{
  return "upper_body/msg/waist_cmd";
}

template<>
struct has_fixed_size<upper_body::msg::waist_cmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<upper_body::msg::waist_cmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<upper_body::msg::waist_cmd>
  : std::true_type {};

template<>
struct MessageTraits<upper_body::msg::waist_cmd>
{
  static constexpr std::size_t member_count = 1;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "waistCMD",
  };
};

}  // namespace rosidl_generator_traits

#endif  // UPPER_BODY__MSG__DETAIL__WAIST_CMD__TRAITS_HPP_
