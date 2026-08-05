// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from limx_arm_msgs:msg/JointData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "limx_arm_msgs/msg/joint_data.hpp"


#ifndef LIMX_ARM_MSGS__MSG__DETAIL__JOINT_DATA__TRAITS_HPP_
#define LIMX_ARM_MSGS__MSG__DETAIL__JOINT_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "limx_arm_msgs/msg/detail/joint_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace limx_arm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointData & msg,
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

  // member: angle
  {
    if (msg.angle.size() == 0) {
      out << "angle: []";
    } else {
      out << "angle: [";
      size_t pending_items = msg.angle.size();
      for (auto item : msg.angle) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocity
  {
    if (msg.velocity.size() == 0) {
      out << "velocity: []";
    } else {
      out << "velocity: [";
      size_t pending_items = msg.velocity.size();
      for (auto item : msg.velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current
  {
    if (msg.current.size() == 0) {
      out << "current: []";
    } else {
      out << "current: [";
      size_t pending_items = msg.current.size();
      for (auto item : msg.current) {
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
  const JointData & msg,
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

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angle.size() == 0) {
      out << "angle: []\n";
    } else {
      out << "angle:\n";
      for (auto item : msg.angle) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity.size() == 0) {
      out << "velocity: []\n";
    } else {
      out << "velocity:\n";
      for (auto item : msg.velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.current.size() == 0) {
      out << "current: []\n";
    } else {
      out << "current:\n";
      for (auto item : msg.current) {
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

inline std::string to_yaml(const JointData & msg, bool use_flow_style = false)
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

}  // namespace limx_arm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use limx_arm_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const limx_arm_msgs::msg::JointData & msg,
  std::ostream & out, size_t indentation = 0)
{
  limx_arm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use limx_arm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const limx_arm_msgs::msg::JointData & msg)
{
  return limx_arm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<limx_arm_msgs::msg::JointData>()
{
  return "limx_arm_msgs::msg::JointData";
}

template<>
inline const char * name<limx_arm_msgs::msg::JointData>()
{
  return "limx_arm_msgs/msg/JointData";
}

template<>
struct has_fixed_size<limx_arm_msgs::msg::JointData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<limx_arm_msgs::msg::JointData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<limx_arm_msgs::msg::JointData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIMX_ARM_MSGS__MSG__DETAIL__JOINT_DATA__TRAITS_HPP_
