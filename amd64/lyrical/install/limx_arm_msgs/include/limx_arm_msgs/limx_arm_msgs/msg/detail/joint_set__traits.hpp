// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from limx_arm_msgs:msg/JointSet.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "limx_arm_msgs/msg/joint_set.hpp"


#ifndef LIMX_ARM_MSGS__MSG__DETAIL__JOINT_SET__TRAITS_HPP_
#define LIMX_ARM_MSGS__MSG__DETAIL__JOINT_SET__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "limx_arm_msgs/msg/detail/joint_set__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace limx_arm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointSet & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: deviceid
  {
    out << "deviceid: ";
    rosidl_generator_traits::value_to_yaml(msg.deviceid, out);
    out << ", ";
  }

  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
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
  const JointSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.stamp, out);
    out << "\n";
  }

  // member: deviceid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deviceid: ";
    rosidl_generator_traits::value_to_yaml(msg.deviceid, out);
    out << "\n";
  }

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
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

inline std::string to_yaml(const JointSet & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, limx_arm_msgs::msg::JointSet>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).stamp,
    std::forward<T>(msg).deviceid,
    std::forward<T>(msg).action,
    std::forward<T>(msg).mode,
    std::forward<T>(msg).data);
}

}  // namespace msg

}  // namespace limx_arm_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<limx_arm_msgs::msg::JointSet>()
{
  return "limx_arm_msgs::msg::JointSet";
}

template<>
constexpr const char * name<limx_arm_msgs::msg::JointSet>()
{
  return "limx_arm_msgs/msg/JointSet";
}

template<>
struct has_fixed_size<limx_arm_msgs::msg::JointSet>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<limx_arm_msgs::msg::JointSet>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<limx_arm_msgs::msg::JointSet>
  : std::true_type {};

template<>
struct MessageTraits<limx_arm_msgs::msg::JointSet>
{
  static constexpr std::size_t member_count = 5;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "stamp",
    "deviceid",
    "action",
    "mode",
    "data",
  };
};

}  // namespace rosidl_generator_traits

#endif  // LIMX_ARM_MSGS__MSG__DETAIL__JOINT_SET__TRAITS_HPP_
