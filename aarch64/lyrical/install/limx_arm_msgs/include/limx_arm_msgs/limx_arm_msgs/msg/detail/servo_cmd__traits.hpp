// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from limx_arm_msgs:msg/ServoCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "limx_arm_msgs/msg/servo_cmd.hpp"


#ifndef LIMX_ARM_MSGS__MSG__DETAIL__SERVO_CMD__TRAITS_HPP_
#define LIMX_ARM_MSGS__MSG__DETAIL__SERVO_CMD__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "limx_arm_msgs/msg/detail/servo_cmd__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace limx_arm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ServoCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: functionName
  {
    out << "functionName: ";
    rosidl_generator_traits::value_to_yaml(msg.functionName, out);
    out << ", ";
  }

  // member: left_arm_pos
  {
    if (msg.left_arm_pos.size() == 0) {
      out << "left_arm_pos: []";
    } else {
      out << "left_arm_pos: [";
      size_t pending_items = msg.left_arm_pos.size();
      for (auto item : msg.left_arm_pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_arm_pos
  {
    if (msg.right_arm_pos.size() == 0) {
      out << "right_arm_pos: []";
    } else {
      out << "right_arm_pos: [";
      size_t pending_items = msg.right_arm_pos.size();
      for (auto item : msg.right_arm_pos) {
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
  const ServoCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: functionName
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "functionName: ";
    rosidl_generator_traits::value_to_yaml(msg.functionName, out);
    out << "\n";
  }

  // member: left_arm_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_arm_pos.size() == 0) {
      out << "left_arm_pos: []\n";
    } else {
      out << "left_arm_pos:\n";
      for (auto item : msg.left_arm_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: right_arm_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_arm_pos.size() == 0) {
      out << "right_arm_pos: []\n";
    } else {
      out << "right_arm_pos:\n";
      for (auto item : msg.right_arm_pos) {
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

inline std::string to_yaml(const ServoCmd & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, limx_arm_msgs::msg::ServoCmd>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).functionName,
    std::forward<T>(msg).left_arm_pos,
    std::forward<T>(msg).right_arm_pos);
}

}  // namespace msg

}  // namespace limx_arm_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<limx_arm_msgs::msg::ServoCmd>()
{
  return "limx_arm_msgs::msg::ServoCmd";
}

template<>
constexpr const char * name<limx_arm_msgs::msg::ServoCmd>()
{
  return "limx_arm_msgs/msg/ServoCmd";
}

template<>
struct has_fixed_size<limx_arm_msgs::msg::ServoCmd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<limx_arm_msgs::msg::ServoCmd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<limx_arm_msgs::msg::ServoCmd>
  : std::true_type {};

template<>
struct MessageTraits<limx_arm_msgs::msg::ServoCmd>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "functionName",
    "left_arm_pos",
    "right_arm_pos",
  };
};

}  // namespace rosidl_generator_traits

#endif  // LIMX_ARM_MSGS__MSG__DETAIL__SERVO_CMD__TRAITS_HPP_
