// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from teleop_msgs:msg/TeleopSessionState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_msgs/msg/teleop_session_state.hpp"


#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_SESSION_STATE__TRAITS_HPP_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_SESSION_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "teleop_msgs/msg/detail/teleop_session_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'limbs'
#include "teleop_msgs/msg/detail/teleop_limb_state__traits.hpp"

namespace teleop_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TeleopSessionState & msg,
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

  // member: session_state
  {
    out << "session_state: ";
    rosidl_generator_traits::value_to_yaml(msg.session_state, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: limbs
  {
    if (msg.limbs.size() == 0) {
      out << "limbs: []";
    } else {
      out << "limbs: [";
      size_t pending_items = msg.limbs.size();
      for (auto item : msg.limbs) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: reanchor_epoch
  {
    out << "reanchor_epoch: ";
    rosidl_generator_traits::value_to_yaml(msg.reanchor_epoch, out);
    out << ", ";
  }

  // member: retarget_required
  {
    out << "retarget_required: ";
    rosidl_generator_traits::value_to_yaml(msg.retarget_required, out);
    out << ", ";
  }

  // member: fault_code
  {
    out << "fault_code: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_code, out);
    out << ", ";
  }

  // member: fault_detail
  {
    out << "fault_detail: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_detail, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TeleopSessionState & msg,
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

  // member: session_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "session_state: ";
    rosidl_generator_traits::value_to_yaml(msg.session_state, out);
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

  // member: limbs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.limbs.size() == 0) {
      out << "limbs: []\n";
    } else {
      out << "limbs:\n";
      for (auto item : msg.limbs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: reanchor_epoch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reanchor_epoch: ";
    rosidl_generator_traits::value_to_yaml(msg.reanchor_epoch, out);
    out << "\n";
  }

  // member: retarget_required
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "retarget_required: ";
    rosidl_generator_traits::value_to_yaml(msg.retarget_required, out);
    out << "\n";
  }

  // member: fault_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_code: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_code, out);
    out << "\n";
  }

  // member: fault_detail
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_detail: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_detail, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TeleopSessionState & msg, bool use_flow_style = false)
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
  const teleop_msgs::msg::TeleopSessionState & msg,
  std::ostream & out, size_t indentation = 0)
{
  teleop_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use teleop_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const teleop_msgs::msg::TeleopSessionState & msg)
{
  return teleop_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<teleop_msgs::msg::TeleopSessionState>()
{
  return "teleop_msgs::msg::TeleopSessionState";
}

template<>
inline const char * name<teleop_msgs::msg::TeleopSessionState>()
{
  return "teleop_msgs/msg/TeleopSessionState";
}

template<>
struct has_fixed_size<teleop_msgs::msg::TeleopSessionState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<teleop_msgs::msg::TeleopSessionState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<teleop_msgs::msg::TeleopSessionState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_SESSION_STATE__TRAITS_HPP_
