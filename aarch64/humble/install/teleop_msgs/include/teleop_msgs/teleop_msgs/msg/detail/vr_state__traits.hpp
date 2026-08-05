// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from teleop_msgs:msg/VRState.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__VR_STATE__TRAITS_HPP_
#define TELEOP_MSGS__MSG__DETAIL__VR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "teleop_msgs/msg/detail/vr_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace teleop_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VRState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: eyePose
  {
    if (msg.eyePose.size() == 0) {
      out << "eyePose: []";
    } else {
      out << "eyePose: [";
      size_t pending_items = msg.eyePose.size();
      for (auto item : msg.eyePose) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: l
  {
    if (msg.l.size() == 0) {
      out << "l: []";
    } else {
      out << "l: [";
      size_t pending_items = msg.l.size();
      for (auto item : msg.l) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: r
  {
    if (msg.r.size() == 0) {
      out << "r: []";
    } else {
      out << "r: [";
      size_t pending_items = msg.r.size();
      for (auto item : msg.r) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: leftJS
  {
    if (msg.leftJS.size() == 0) {
      out << "leftJS: []";
    } else {
      out << "leftJS: [";
      size_t pending_items = msg.leftJS.size();
      for (auto item : msg.leftJS) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: leftTrig
  {
    out << "leftTrig: ";
    rosidl_generator_traits::value_to_yaml(msg.leftTrig, out);
    out << ", ";
  }

  // member: leftGrip
  {
    out << "leftGrip: ";
    rosidl_generator_traits::value_to_yaml(msg.leftGrip, out);
    out << ", ";
  }

  // member: LThU
  {
    out << "LThU: ";
    rosidl_generator_traits::value_to_yaml(msg.LThU, out);
    out << ", ";
  }

  // member: LTr
  {
    out << "LTr: ";
    rosidl_generator_traits::value_to_yaml(msg.LTr, out);
    out << ", ";
  }

  // member: LG
  {
    out << "LG: ";
    rosidl_generator_traits::value_to_yaml(msg.LG, out);
    out << ", ";
  }

  // member: X
  {
    out << "X: ";
    rosidl_generator_traits::value_to_yaml(msg.X, out);
    out << ", ";
  }

  // member: Y
  {
    out << "Y: ";
    rosidl_generator_traits::value_to_yaml(msg.Y, out);
    out << ", ";
  }

  // member: rightJS
  {
    if (msg.rightJS.size() == 0) {
      out << "rightJS: []";
    } else {
      out << "rightJS: [";
      size_t pending_items = msg.rightJS.size();
      for (auto item : msg.rightJS) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rightTrig
  {
    out << "rightTrig: ";
    rosidl_generator_traits::value_to_yaml(msg.rightTrig, out);
    out << ", ";
  }

  // member: rightGrip
  {
    out << "rightGrip: ";
    rosidl_generator_traits::value_to_yaml(msg.rightGrip, out);
    out << ", ";
  }

  // member: RThU
  {
    out << "RThU: ";
    rosidl_generator_traits::value_to_yaml(msg.RThU, out);
    out << ", ";
  }

  // member: RTr
  {
    out << "RTr: ";
    rosidl_generator_traits::value_to_yaml(msg.RTr, out);
    out << ", ";
  }

  // member: RG
  {
    out << "RG: ";
    rosidl_generator_traits::value_to_yaml(msg.RG, out);
    out << ", ";
  }

  // member: A
  {
    out << "A: ";
    rosidl_generator_traits::value_to_yaml(msg.A, out);
    out << ", ";
  }

  // member: B
  {
    out << "B: ";
    rosidl_generator_traits::value_to_yaml(msg.B, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VRState & msg,
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

  // member: eyePose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.eyePose.size() == 0) {
      out << "eyePose: []\n";
    } else {
      out << "eyePose:\n";
      for (auto item : msg.eyePose) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.l.size() == 0) {
      out << "l: []\n";
    } else {
      out << "l:\n";
      for (auto item : msg.l) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.r.size() == 0) {
      out << "r: []\n";
    } else {
      out << "r:\n";
      for (auto item : msg.r) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: leftJS
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.leftJS.size() == 0) {
      out << "leftJS: []\n";
    } else {
      out << "leftJS:\n";
      for (auto item : msg.leftJS) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: leftTrig
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leftTrig: ";
    rosidl_generator_traits::value_to_yaml(msg.leftTrig, out);
    out << "\n";
  }

  // member: leftGrip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leftGrip: ";
    rosidl_generator_traits::value_to_yaml(msg.leftGrip, out);
    out << "\n";
  }

  // member: LThU
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "LThU: ";
    rosidl_generator_traits::value_to_yaml(msg.LThU, out);
    out << "\n";
  }

  // member: LTr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "LTr: ";
    rosidl_generator_traits::value_to_yaml(msg.LTr, out);
    out << "\n";
  }

  // member: LG
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "LG: ";
    rosidl_generator_traits::value_to_yaml(msg.LG, out);
    out << "\n";
  }

  // member: X
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "X: ";
    rosidl_generator_traits::value_to_yaml(msg.X, out);
    out << "\n";
  }

  // member: Y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "Y: ";
    rosidl_generator_traits::value_to_yaml(msg.Y, out);
    out << "\n";
  }

  // member: rightJS
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rightJS.size() == 0) {
      out << "rightJS: []\n";
    } else {
      out << "rightJS:\n";
      for (auto item : msg.rightJS) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rightTrig
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rightTrig: ";
    rosidl_generator_traits::value_to_yaml(msg.rightTrig, out);
    out << "\n";
  }

  // member: rightGrip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rightGrip: ";
    rosidl_generator_traits::value_to_yaml(msg.rightGrip, out);
    out << "\n";
  }

  // member: RThU
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "RThU: ";
    rosidl_generator_traits::value_to_yaml(msg.RThU, out);
    out << "\n";
  }

  // member: RTr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "RTr: ";
    rosidl_generator_traits::value_to_yaml(msg.RTr, out);
    out << "\n";
  }

  // member: RG
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "RG: ";
    rosidl_generator_traits::value_to_yaml(msg.RG, out);
    out << "\n";
  }

  // member: A
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "A: ";
    rosidl_generator_traits::value_to_yaml(msg.A, out);
    out << "\n";
  }

  // member: B
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "B: ";
    rosidl_generator_traits::value_to_yaml(msg.B, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VRState & msg, bool use_flow_style = false)
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
  const teleop_msgs::msg::VRState & msg,
  std::ostream & out, size_t indentation = 0)
{
  teleop_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use teleop_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const teleop_msgs::msg::VRState & msg)
{
  return teleop_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<teleop_msgs::msg::VRState>()
{
  return "teleop_msgs::msg::VRState";
}

template<>
inline const char * name<teleop_msgs::msg::VRState>()
{
  return "teleop_msgs/msg/VRState";
}

template<>
struct has_fixed_size<teleop_msgs::msg::VRState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<teleop_msgs::msg::VRState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<teleop_msgs::msg::VRState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TELEOP_MSGS__MSG__DETAIL__VR_STATE__TRAITS_HPP_
