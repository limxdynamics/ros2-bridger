// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from teleop_msgs:msg/TeleopMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_msgs/msg/teleop_msg.hpp"


#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_MSG__TRAITS_HPP_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_MSG__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "teleop_msgs/msg/detail/teleop_msg__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'world'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'anchors'
#include "teleop_msgs/msg/detail/key_point__traits.hpp"
// Member 'joint_cmd'
#include "controller_msgs/msg/detail/joint_cmd__traits.hpp"

namespace teleop_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TeleopMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: world
  {
    out << "world: ";
    to_flow_style_yaml(msg.world, out);
    out << ", ";
  }

  // member: anchors
  {
    if (msg.anchors.size() == 0) {
      out << "anchors: []";
    } else {
      out << "anchors: [";
      size_t pending_items = msg.anchors.size();
      for (auto item : msg.anchors) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_cmd
  {
    out << "joint_cmd: ";
    to_flow_style_yaml(msg.joint_cmd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TeleopMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: world
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "world:\n";
    to_block_style_yaml(msg.world, out, indentation + 2);
  }

  // member: anchors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.anchors.size() == 0) {
      out << "anchors: []\n";
    } else {
      out << "anchors:\n";
      for (auto item : msg.anchors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: joint_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_cmd:\n";
    to_block_style_yaml(msg.joint_cmd, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TeleopMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, teleop_msgs::msg::TeleopMsg>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).header,
    std::forward<T>(msg).world,
    std::forward<T>(msg).anchors,
    std::forward<T>(msg).joint_cmd);
}

}  // namespace msg

}  // namespace teleop_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<teleop_msgs::msg::TeleopMsg>()
{
  return "teleop_msgs::msg::TeleopMsg";
}

template<>
constexpr const char * name<teleop_msgs::msg::TeleopMsg>()
{
  return "teleop_msgs/msg/TeleopMsg";
}

template<>
struct has_fixed_size<teleop_msgs::msg::TeleopMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<teleop_msgs::msg::TeleopMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<teleop_msgs::msg::TeleopMsg>
  : std::true_type {};

template<>
struct MessageTraits<teleop_msgs::msg::TeleopMsg>
{
  static constexpr std::size_t member_count = 4;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "header",
    "world",
    "anchors",
    "joint_cmd",
  };
};

}  // namespace rosidl_generator_traits

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_MSG__TRAITS_HPP_
