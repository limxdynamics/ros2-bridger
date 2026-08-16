// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from limx_arm_msgs:srv/DA_motion.idl
// generated code does not contain a copyright notice

#ifndef LIMX_ARM_MSGS__SRV__DETAIL__DA_MOTION__TRAITS_HPP_
#define LIMX_ARM_MSGS__SRV__DETAIL__DA_MOTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "limx_arm_msgs/srv/detail/da_motion__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace limx_arm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const DA_motion_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: functionName
  {
    out << "functionName: ";
    rosidl_generator_traits::value_to_yaml(msg.functionName, out);
    out << ", ";
  }

  // member: left_arm_pos
  {
    if (msg.left_arm_pos.size() == 0) {
      out << "left_arm_pos: []";
    } else {
      out << "left_arm_pos: [";
      size_t pending_items = msg.left_arm_pos.size();
      for (auto item : msg.left_arm_pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_arm_pos
  {
    if (msg.right_arm_pos.size() == 0) {
      out << "right_arm_pos: []";
    } else {
      out << "right_arm_pos: [";
      size_t pending_items = msg.right_arm_pos.size();
      for (auto item : msg.right_arm_pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: left_arm_joints
  {
    if (msg.left_arm_joints.size() == 0) {
      out << "left_arm_joints: []";
    } else {
      out << "left_arm_joints: [";
      size_t pending_items = msg.left_arm_joints.size();
      for (auto item : msg.left_arm_joints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_arm_joints
  {
    if (msg.right_arm_joints.size() == 0) {
      out << "right_arm_joints: []";
    } else {
      out << "right_arm_joints: [";
      size_t pending_items = msg.right_arm_joints.size();
      for (auto item : msg.right_arm_joints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: headPos
  {
    if (msg.headPos.size() == 0) {
      out << "headPos: []";
    } else {
      out << "headPos: [";
      size_t pending_items = msg.headPos.size();
      for (auto item : msg.headPos) {
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
  const DA_motion_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: functionName
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "functionName: ";
    rosidl_generator_traits::value_to_yaml(msg.functionName, out);
    out << "\n";
  }

  // member: left_arm_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_arm_pos.size() == 0) {
      out << "left_arm_pos: []\n";
    } else {
      out << "left_arm_pos:\n";
      for (auto item : msg.left_arm_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: right_arm_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_arm_pos.size() == 0) {
      out << "right_arm_pos: []\n";
    } else {
      out << "right_arm_pos:\n";
      for (auto item : msg.right_arm_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: left_arm_joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_arm_joints.size() == 0) {
      out << "left_arm_joints: []\n";
    } else {
      out << "left_arm_joints:\n";
      for (auto item : msg.left_arm_joints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: right_arm_joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_arm_joints.size() == 0) {
      out << "right_arm_joints: []\n";
    } else {
      out << "right_arm_joints:\n";
      for (auto item : msg.right_arm_joints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: headPos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.headPos.size() == 0) {
      out << "headPos: []\n";
    } else {
      out << "headPos:\n";
      for (auto item : msg.headPos) {
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

inline std::string to_yaml(const DA_motion_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace limx_arm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use limx_arm_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const limx_arm_msgs::srv::DA_motion_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  limx_arm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use limx_arm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const limx_arm_msgs::srv::DA_motion_Request & msg)
{
  return limx_arm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<limx_arm_msgs::srv::DA_motion_Request>()
{
  return "limx_arm_msgs::srv::DA_motion_Request";
}

template<>
inline const char * name<limx_arm_msgs::srv::DA_motion_Request>()
{
  return "limx_arm_msgs/srv/DA_motion_Request";
}

template<>
struct has_fixed_size<limx_arm_msgs::srv::DA_motion_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<limx_arm_msgs::srv::DA_motion_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<limx_arm_msgs::srv::DA_motion_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace limx_arm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const DA_motion_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DA_motion_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DA_motion_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace limx_arm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use limx_arm_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const limx_arm_msgs::srv::DA_motion_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  limx_arm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use limx_arm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const limx_arm_msgs::srv::DA_motion_Response & msg)
{
  return limx_arm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<limx_arm_msgs::srv::DA_motion_Response>()
{
  return "limx_arm_msgs::srv::DA_motion_Response";
}

template<>
inline const char * name<limx_arm_msgs::srv::DA_motion_Response>()
{
  return "limx_arm_msgs/srv/DA_motion_Response";
}

template<>
struct has_fixed_size<limx_arm_msgs::srv::DA_motion_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<limx_arm_msgs::srv::DA_motion_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<limx_arm_msgs::srv::DA_motion_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<limx_arm_msgs::srv::DA_motion>()
{
  return "limx_arm_msgs::srv::DA_motion";
}

template<>
inline const char * name<limx_arm_msgs::srv::DA_motion>()
{
  return "limx_arm_msgs/srv/DA_motion";
}

template<>
struct has_fixed_size<limx_arm_msgs::srv::DA_motion>
  : std::integral_constant<
    bool,
    has_fixed_size<limx_arm_msgs::srv::DA_motion_Request>::value &&
    has_fixed_size<limx_arm_msgs::srv::DA_motion_Response>::value
  >
{
};

template<>
struct has_bounded_size<limx_arm_msgs::srv::DA_motion>
  : std::integral_constant<
    bool,
    has_bounded_size<limx_arm_msgs::srv::DA_motion_Request>::value &&
    has_bounded_size<limx_arm_msgs::srv::DA_motion_Response>::value
  >
{
};

template<>
struct is_service<limx_arm_msgs::srv::DA_motion>
  : std::true_type
{
};

template<>
struct is_service_request<limx_arm_msgs::srv::DA_motion_Request>
  : std::true_type
{
};

template<>
struct is_service_response<limx_arm_msgs::srv::DA_motion_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LIMX_ARM_MSGS__SRV__DETAIL__DA_MOTION__TRAITS_HPP_
