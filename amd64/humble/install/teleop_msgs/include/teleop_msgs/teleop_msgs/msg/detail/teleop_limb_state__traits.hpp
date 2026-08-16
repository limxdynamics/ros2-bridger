// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from teleop_msgs:msg/TeleopLimbState.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_LIMB_STATE__TRAITS_HPP_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_LIMB_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "teleop_msgs/msg/detail/teleop_limb_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace teleop_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TeleopLimbState & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: following
  {
    out << "following: ";
    rosidl_generator_traits::value_to_yaml(msg.following, out);
    out << ", ";
  }

  // member: ee_closure_enabled
  {
    out << "ee_closure_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.ee_closure_enabled, out);
    out << ", ";
  }

  // member: ee_gesture_index
  {
    out << "ee_gesture_index: ";
    rosidl_generator_traits::value_to_yaml(msg.ee_gesture_index, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TeleopLimbState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: following
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "following: ";
    rosidl_generator_traits::value_to_yaml(msg.following, out);
    out << "\n";
  }

  // member: ee_closure_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ee_closure_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.ee_closure_enabled, out);
    out << "\n";
  }

  // member: ee_gesture_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ee_gesture_index: ";
    rosidl_generator_traits::value_to_yaml(msg.ee_gesture_index, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TeleopLimbState & msg, bool use_flow_style = false)
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
  const teleop_msgs::msg::TeleopLimbState & msg,
  std::ostream & out, size_t indentation = 0)
{
  teleop_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use teleop_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const teleop_msgs::msg::TeleopLimbState & msg)
{
  return teleop_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<teleop_msgs::msg::TeleopLimbState>()
{
  return "teleop_msgs::msg::TeleopLimbState";
}

template<>
inline const char * name<teleop_msgs::msg::TeleopLimbState>()
{
  return "teleop_msgs/msg/TeleopLimbState";
}

template<>
struct has_fixed_size<teleop_msgs::msg::TeleopLimbState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<teleop_msgs::msg::TeleopLimbState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<teleop_msgs::msg::TeleopLimbState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_LIMB_STATE__TRAITS_HPP_
