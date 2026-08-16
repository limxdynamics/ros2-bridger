// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from teleop_msgs:msg/TeleopIntentFrame.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_msgs/msg/teleop_intent_frame.hpp"


#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_INTENT_FRAME__TRAITS_HPP_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_INTENT_FRAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "teleop_msgs/msg/detail/teleop_intent_frame__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'reference_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'targets'
#include "teleop_msgs/msg/detail/teleop_target__traits.hpp"
// Member 'raw'
#include "teleop_msgs/msg/detail/teleop_raw_input__traits.hpp"
// Member 'retarget_joints'
#include "controller_msgs/msg/detail/joint_cmd__traits.hpp"

namespace teleop_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TeleopIntentFrame & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: schema_version
  {
    out << "schema_version: ";
    rosidl_generator_traits::value_to_yaml(msg.schema_version, out);
    out << ", ";
  }

  // member: source
  {
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << ", ";
  }

  // member: source_mask
  {
    out << "source_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.source_mask, out);
    out << ", ";
  }

  // member: reference_frame
  {
    out << "reference_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_frame, out);
    out << ", ";
  }

  // member: reference_pose
  {
    out << "reference_pose: ";
    to_flow_style_yaml(msg.reference_pose, out);
    out << ", ";
  }

  // member: targets
  {
    if (msg.targets.size() == 0) {
      out << "targets: []";
    } else {
      out << "targets: [";
      size_t pending_items = msg.targets.size();
      for (auto item : msg.targets) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: raw_valid
  {
    out << "raw_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_valid, out);
    out << ", ";
  }

  // member: raw
  {
    out << "raw: ";
    to_flow_style_yaml(msg.raw, out);
    out << ", ";
  }

  // member: head_control_selected
  {
    out << "head_control_selected: ";
    rosidl_generator_traits::value_to_yaml(msg.head_control_selected, out);
    out << ", ";
  }

  // member: retarget_valid
  {
    out << "retarget_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.retarget_valid, out);
    out << ", ";
  }

  // member: retarget_joints
  {
    out << "retarget_joints: ";
    to_flow_style_yaml(msg.retarget_joints, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TeleopIntentFrame & msg,
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

  // member: schema_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "schema_version: ";
    rosidl_generator_traits::value_to_yaml(msg.schema_version, out);
    out << "\n";
  }

  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << "\n";
  }

  // member: source_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.source_mask, out);
    out << "\n";
  }

  // member: reference_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_frame, out);
    out << "\n";
  }

  // member: reference_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_pose:\n";
    to_block_style_yaml(msg.reference_pose, out, indentation + 2);
  }

  // member: targets
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.targets.size() == 0) {
      out << "targets: []\n";
    } else {
      out << "targets:\n";
      for (auto item : msg.targets) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: raw_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "raw_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_valid, out);
    out << "\n";
  }

  // member: raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "raw:\n";
    to_block_style_yaml(msg.raw, out, indentation + 2);
  }

  // member: head_control_selected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head_control_selected: ";
    rosidl_generator_traits::value_to_yaml(msg.head_control_selected, out);
    out << "\n";
  }

  // member: retarget_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "retarget_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.retarget_valid, out);
    out << "\n";
  }

  // member: retarget_joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "retarget_joints:\n";
    to_block_style_yaml(msg.retarget_joints, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TeleopIntentFrame & msg, bool use_flow_style = false)
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
  const teleop_msgs::msg::TeleopIntentFrame & msg,
  std::ostream & out, size_t indentation = 0)
{
  teleop_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use teleop_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const teleop_msgs::msg::TeleopIntentFrame & msg)
{
  return teleop_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<teleop_msgs::msg::TeleopIntentFrame>()
{
  return "teleop_msgs::msg::TeleopIntentFrame";
}

template<>
inline const char * name<teleop_msgs::msg::TeleopIntentFrame>()
{
  return "teleop_msgs/msg/TeleopIntentFrame";
}

template<>
struct has_fixed_size<teleop_msgs::msg::TeleopIntentFrame>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<teleop_msgs::msg::TeleopIntentFrame>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<teleop_msgs::msg::TeleopIntentFrame>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_INTENT_FRAME__TRAITS_HPP_
