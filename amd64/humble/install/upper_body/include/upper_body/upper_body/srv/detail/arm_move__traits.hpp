// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from upper_body:srv/arm_move.idl
// generated code does not contain a copyright notice

#ifndef UPPER_BODY__SRV__DETAIL__ARM_MOVE__TRAITS_HPP_
#define UPPER_BODY__SRV__DETAIL__ARM_MOVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "upper_body/srv/detail/arm_move__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace upper_body
{

namespace srv
{

inline void to_flow_style_yaml(
  const arm_move_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: move_type
  {
    out << "move_type: ";
    rosidl_generator_traits::value_to_yaml(msg.move_type, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const arm_move_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: move_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_type: ";
    rosidl_generator_traits::value_to_yaml(msg.move_type, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const arm_move_Request & msg, bool use_flow_style = false)
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

}  // namespace upper_body

namespace rosidl_generator_traits
{

[[deprecated("use upper_body::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const upper_body::srv::arm_move_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  upper_body::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use upper_body::srv::to_yaml() instead")]]
inline std::string to_yaml(const upper_body::srv::arm_move_Request & msg)
{
  return upper_body::srv::to_yaml(msg);
}

template<>
inline const char * data_type<upper_body::srv::arm_move_Request>()
{
  return "upper_body::srv::arm_move_Request";
}

template<>
inline const char * name<upper_body::srv::arm_move_Request>()
{
  return "upper_body/srv/arm_move_Request";
}

template<>
struct has_fixed_size<upper_body::srv::arm_move_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<upper_body::srv::arm_move_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<upper_body::srv::arm_move_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace upper_body
{

namespace srv
{

inline void to_flow_style_yaml(
  const arm_move_Response & msg,
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
  const arm_move_Response & msg,
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

inline std::string to_yaml(const arm_move_Response & msg, bool use_flow_style = false)
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

}  // namespace upper_body

namespace rosidl_generator_traits
{

[[deprecated("use upper_body::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const upper_body::srv::arm_move_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  upper_body::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use upper_body::srv::to_yaml() instead")]]
inline std::string to_yaml(const upper_body::srv::arm_move_Response & msg)
{
  return upper_body::srv::to_yaml(msg);
}

template<>
inline const char * data_type<upper_body::srv::arm_move_Response>()
{
  return "upper_body::srv::arm_move_Response";
}

template<>
inline const char * name<upper_body::srv::arm_move_Response>()
{
  return "upper_body/srv/arm_move_Response";
}

template<>
struct has_fixed_size<upper_body::srv::arm_move_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<upper_body::srv::arm_move_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<upper_body::srv::arm_move_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<upper_body::srv::arm_move>()
{
  return "upper_body::srv::arm_move";
}

template<>
inline const char * name<upper_body::srv::arm_move>()
{
  return "upper_body/srv/arm_move";
}

template<>
struct has_fixed_size<upper_body::srv::arm_move>
  : std::integral_constant<
    bool,
    has_fixed_size<upper_body::srv::arm_move_Request>::value &&
    has_fixed_size<upper_body::srv::arm_move_Response>::value
  >
{
};

template<>
struct has_bounded_size<upper_body::srv::arm_move>
  : std::integral_constant<
    bool,
    has_bounded_size<upper_body::srv::arm_move_Request>::value &&
    has_bounded_size<upper_body::srv::arm_move_Response>::value
  >
{
};

template<>
struct is_service<upper_body::srv::arm_move>
  : std::true_type
{
};

template<>
struct is_service_request<upper_body::srv::arm_move_Request>
  : std::true_type
{
};

template<>
struct is_service_response<upper_body::srv::arm_move_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UPPER_BODY__SRV__DETAIL__ARM_MOVE__TRAITS_HPP_
