// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from limx_arm_msgs:msg/arm_status.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "limx_arm_msgs/msg/arm_status.hpp"


#ifndef LIMX_ARM_MSGS__MSG__DETAIL__ARM_STATUS__TRAITS_HPP_
#define LIMX_ARM_MSGS__MSG__DETAIL__ARM_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "limx_arm_msgs/msg/detail/arm_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace limx_arm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const arm_status & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_joints
  {
    if (msg.left_joints.size() == 0) {
      out << "left_joints: []";
    } else {
      out << "left_joints: [";
      size_t pending_items = msg.left_joints.size();
      for (auto item : msg.left_joints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_joints
  {
    if (msg.right_joints.size() == 0) {
      out << "right_joints: []";
    } else {
      out << "right_joints: [";
      size_t pending_items = msg.right_joints.size();
      for (auto item : msg.right_joints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left_endEffector
  {
    if (msg.left_endEffector.size() == 0) {
      out << "left_endEffector: []";
    } else {
      out << "left_endEffector: [";
      size_t pending_items = msg.left_endEffector.size();
      for (auto item : msg.left_endEffector) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_endEffector
  {
    if (msg.right_endEffector.size() == 0) {
      out << "right_endEffector: []";
    } else {
      out << "right_endEffector: [";
      size_t pending_items = msg.right_endEffector.size();
      for (auto item : msg.right_endEffector) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ik_statu
  {
    out << "ik_statu: ";
    rosidl_generator_traits::value_to_yaml(msg.ik_statu, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const arm_status & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_joints.size() == 0) {
      out << "left_joints: []\n";
    } else {
      out << "left_joints:\n";
      for (auto item : msg.left_joints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: right_joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_joints.size() == 0) {
      out << "right_joints: []\n";
    } else {
      out << "right_joints:\n";
      for (auto item : msg.right_joints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: left_endEffector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_endEffector.size() == 0) {
      out << "left_endEffector: []\n";
    } else {
      out << "left_endEffector:\n";
      for (auto item : msg.left_endEffector) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: right_endEffector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_endEffector.size() == 0) {
      out << "right_endEffector: []\n";
    } else {
      out << "right_endEffector:\n";
      for (auto item : msg.right_endEffector) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ik_statu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ik_statu: ";
    rosidl_generator_traits::value_to_yaml(msg.ik_statu, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const arm_status & msg, bool use_flow_style = false)
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
  const limx_arm_msgs::msg::arm_status & msg,
  std::ostream & out, size_t indentation = 0)
{
  limx_arm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use limx_arm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const limx_arm_msgs::msg::arm_status & msg)
{
  return limx_arm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<limx_arm_msgs::msg::arm_status>()
{
  return "limx_arm_msgs::msg::arm_status";
}

template<>
inline const char * name<limx_arm_msgs::msg::arm_status>()
{
  return "limx_arm_msgs/msg/arm_status";
}

template<>
struct has_fixed_size<limx_arm_msgs::msg::arm_status>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<limx_arm_msgs::msg::arm_status>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<limx_arm_msgs::msg::arm_status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIMX_ARM_MSGS__MSG__DETAIL__ARM_STATUS__TRAITS_HPP_
