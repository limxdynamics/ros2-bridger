// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hand_msgs:msg/TactileState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hand_msgs/msg/tactile_state.hpp"


#ifndef HAND_MSGS__MSG__DETAIL__TACTILE_STATE__TRAITS_HPP_
#define HAND_MSGS__MSG__DETAIL__TACTILE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hand_msgs/msg/detail/tactile_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace hand_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TactileState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: names
  {
    if (msg.names.size() == 0) {
      out << "names: []";
    } else {
      out << "names: [";
      size_t pending_items = msg.names.size();
      for (auto item : msg.names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: normal_force
  {
    if (msg.normal_force.size() == 0) {
      out << "normal_force: []";
    } else {
      out << "normal_force: [";
      size_t pending_items = msg.normal_force.size();
      for (auto item : msg.normal_force) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tangential_force
  {
    if (msg.tangential_force.size() == 0) {
      out << "tangential_force: []";
    } else {
      out << "tangential_force: [";
      size_t pending_items = msg.tangential_force.size();
      for (auto item : msg.tangential_force) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: direction_angle
  {
    if (msg.direction_angle.size() == 0) {
      out << "direction_angle: []";
    } else {
      out << "direction_angle: [";
      size_t pending_items = msg.direction_angle.size();
      for (auto item : msg.direction_angle) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: approximate_value
  {
    if (msg.approximate_value.size() == 0) {
      out << "approximate_value: []";
    } else {
      out << "approximate_value: [";
      size_t pending_items = msg.approximate_value.size();
      for (auto item : msg.approximate_value) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tactile_state
  {
    if (msg.tactile_state.size() == 0) {
      out << "tactile_state: []";
    } else {
      out << "tactile_state: [";
      size_t pending_items = msg.tactile_state.size();
      for (auto item : msg.tactile_state) {
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
  const TactileState & msg,
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

  // member: names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.names.size() == 0) {
      out << "names: []\n";
    } else {
      out << "names:\n";
      for (auto item : msg.names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: normal_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.normal_force.size() == 0) {
      out << "normal_force: []\n";
    } else {
      out << "normal_force:\n";
      for (auto item : msg.normal_force) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tangential_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tangential_force.size() == 0) {
      out << "tangential_force: []\n";
    } else {
      out << "tangential_force:\n";
      for (auto item : msg.tangential_force) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: direction_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.direction_angle.size() == 0) {
      out << "direction_angle: []\n";
    } else {
      out << "direction_angle:\n";
      for (auto item : msg.direction_angle) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: approximate_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.approximate_value.size() == 0) {
      out << "approximate_value: []\n";
    } else {
      out << "approximate_value:\n";
      for (auto item : msg.approximate_value) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tactile_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tactile_state.size() == 0) {
      out << "tactile_state: []\n";
    } else {
      out << "tactile_state:\n";
      for (auto item : msg.tactile_state) {
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

inline std::string to_yaml(const TactileState & msg, bool use_flow_style = false)
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

}  // namespace hand_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hand_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hand_msgs::msg::TactileState & msg,
  std::ostream & out, size_t indentation = 0)
{
  hand_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hand_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hand_msgs::msg::TactileState & msg)
{
  return hand_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hand_msgs::msg::TactileState>()
{
  return "hand_msgs::msg::TactileState";
}

template<>
inline const char * name<hand_msgs::msg::TactileState>()
{
  return "hand_msgs/msg/TactileState";
}

template<>
struct has_fixed_size<hand_msgs::msg::TactileState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hand_msgs::msg::TactileState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hand_msgs::msg::TactileState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HAND_MSGS__MSG__DETAIL__TACTILE_STATE__TRAITS_HPP_
