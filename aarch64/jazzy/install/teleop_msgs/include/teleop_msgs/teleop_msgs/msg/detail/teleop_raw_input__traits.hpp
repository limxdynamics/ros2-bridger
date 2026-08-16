// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from teleop_msgs:msg/TeleopRawInput.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_msgs/msg/teleop_raw_input.hpp"


#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_RAW_INPUT__TRAITS_HPP_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_RAW_INPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "teleop_msgs/msg/detail/teleop_raw_input__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace teleop_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TeleopRawInput & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_trigger
  {
    out << "left_trigger: ";
    rosidl_generator_traits::value_to_yaml(msg.left_trigger, out);
    out << ", ";
  }

  // member: right_trigger
  {
    out << "right_trigger: ";
    rosidl_generator_traits::value_to_yaml(msg.right_trigger, out);
    out << ", ";
  }

  // member: left_grip
  {
    out << "left_grip: ";
    rosidl_generator_traits::value_to_yaml(msg.left_grip, out);
    out << ", ";
  }

  // member: right_grip
  {
    out << "right_grip: ";
    rosidl_generator_traits::value_to_yaml(msg.right_grip, out);
    out << ", ";
  }

  // member: left_stick
  {
    if (msg.left_stick.size() == 0) {
      out << "left_stick: []";
    } else {
      out << "left_stick: [";
      size_t pending_items = msg.left_stick.size();
      for (auto item : msg.left_stick) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_stick
  {
    if (msg.right_stick.size() == 0) {
      out << "right_stick: []";
    } else {
      out << "right_stick: [";
      size_t pending_items = msg.right_stick.size();
      for (auto item : msg.right_stick) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: buttons
  {
    out << "buttons: ";
    rosidl_generator_traits::value_to_yaml(msg.buttons, out);
    out << ", ";
  }

  // member: buttons_valid
  {
    out << "buttons_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.buttons_valid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TeleopRawInput & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_trigger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_trigger: ";
    rosidl_generator_traits::value_to_yaml(msg.left_trigger, out);
    out << "\n";
  }

  // member: right_trigger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_trigger: ";
    rosidl_generator_traits::value_to_yaml(msg.right_trigger, out);
    out << "\n";
  }

  // member: left_grip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_grip: ";
    rosidl_generator_traits::value_to_yaml(msg.left_grip, out);
    out << "\n";
  }

  // member: right_grip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_grip: ";
    rosidl_generator_traits::value_to_yaml(msg.right_grip, out);
    out << "\n";
  }

  // member: left_stick
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_stick.size() == 0) {
      out << "left_stick: []\n";
    } else {
      out << "left_stick:\n";
      for (auto item : msg.left_stick) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: right_stick
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_stick.size() == 0) {
      out << "right_stick: []\n";
    } else {
      out << "right_stick:\n";
      for (auto item : msg.right_stick) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: buttons
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "buttons: ";
    rosidl_generator_traits::value_to_yaml(msg.buttons, out);
    out << "\n";
  }

  // member: buttons_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "buttons_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.buttons_valid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TeleopRawInput & msg, bool use_flow_style = false)
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
  const teleop_msgs::msg::TeleopRawInput & msg,
  std::ostream & out, size_t indentation = 0)
{
  teleop_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use teleop_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const teleop_msgs::msg::TeleopRawInput & msg)
{
  return teleop_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<teleop_msgs::msg::TeleopRawInput>()
{
  return "teleop_msgs::msg::TeleopRawInput";
}

template<>
inline const char * name<teleop_msgs::msg::TeleopRawInput>()
{
  return "teleop_msgs/msg/TeleopRawInput";
}

template<>
struct has_fixed_size<teleop_msgs::msg::TeleopRawInput>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<teleop_msgs::msg::TeleopRawInput>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<teleop_msgs::msg::TeleopRawInput>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_RAW_INPUT__TRAITS_HPP_
