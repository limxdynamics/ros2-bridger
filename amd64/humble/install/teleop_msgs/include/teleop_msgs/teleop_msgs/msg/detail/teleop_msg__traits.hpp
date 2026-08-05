// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from teleop_msgs:msg/TeleopMsg.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_MSG__TRAITS_HPP_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "teleop_msgs/msg/detail/teleop_msg__struct.hpp"
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

}  // namespace msg

}  // namespace teleop_msgs

namespace rosidl_generator_traits
{

[[deprecated("use teleop_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const teleop_msgs::msg::TeleopMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  teleop_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use teleop_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const teleop_msgs::msg::TeleopMsg & msg)
{
  return teleop_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<teleop_msgs::msg::TeleopMsg>()
{
  return "teleop_msgs::msg::TeleopMsg";
}

template<>
inline const char * name<teleop_msgs::msg::TeleopMsg>()
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

}  // namespace rosidl_generator_traits

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_MSG__TRAITS_HPP_
