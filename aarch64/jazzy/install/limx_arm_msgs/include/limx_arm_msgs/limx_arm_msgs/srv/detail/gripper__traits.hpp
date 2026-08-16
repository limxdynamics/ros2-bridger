// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from limx_arm_msgs:srv/gripper.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "limx_arm_msgs/srv/gripper.hpp"


#ifndef LIMX_ARM_MSGS__SRV__DETAIL__GRIPPER__TRAITS_HPP_
#define LIMX_ARM_MSGS__SRV__DETAIL__GRIPPER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "limx_arm_msgs/srv/detail/gripper__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace limx_arm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const gripper_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: initial
  {
    out << "initial: ";
    rosidl_generator_traits::value_to_yaml(msg.initial, out);
    out << ", ";
  }

  // member: dis
  {
    out << "dis: ";
    rosidl_generator_traits::value_to_yaml(msg.dis, out);
    out << ", ";
  }

  // member: force
  {
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const gripper_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: initial
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial: ";
    rosidl_generator_traits::value_to_yaml(msg.initial, out);
    out << "\n";
  }

  // member: dis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dis: ";
    rosidl_generator_traits::value_to_yaml(msg.dis, out);
    out << "\n";
  }

  // member: force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const gripper_Request & msg, bool use_flow_style = false)
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
  const limx_arm_msgs::srv::gripper_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  limx_arm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use limx_arm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const limx_arm_msgs::srv::gripper_Request & msg)
{
  return limx_arm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<limx_arm_msgs::srv::gripper_Request>()
{
  return "limx_arm_msgs::srv::gripper_Request";
}

template<>
inline const char * name<limx_arm_msgs::srv::gripper_Request>()
{
  return "limx_arm_msgs/srv/gripper_Request";
}

template<>
struct has_fixed_size<limx_arm_msgs::srv::gripper_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<limx_arm_msgs::srv::gripper_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<limx_arm_msgs::srv::gripper_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace limx_arm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const gripper_Response & msg,
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
  const gripper_Response & msg,
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

inline std::string to_yaml(const gripper_Response & msg, bool use_flow_style = false)
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
  const limx_arm_msgs::srv::gripper_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  limx_arm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use limx_arm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const limx_arm_msgs::srv::gripper_Response & msg)
{
  return limx_arm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<limx_arm_msgs::srv::gripper_Response>()
{
  return "limx_arm_msgs::srv::gripper_Response";
}

template<>
inline const char * name<limx_arm_msgs::srv::gripper_Response>()
{
  return "limx_arm_msgs/srv/gripper_Response";
}

template<>
struct has_fixed_size<limx_arm_msgs::srv::gripper_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<limx_arm_msgs::srv::gripper_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<limx_arm_msgs::srv::gripper_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace limx_arm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const gripper_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
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
  const gripper_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const gripper_Event & msg, bool use_flow_style = false)
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
  const limx_arm_msgs::srv::gripper_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  limx_arm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use limx_arm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const limx_arm_msgs::srv::gripper_Event & msg)
{
  return limx_arm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<limx_arm_msgs::srv::gripper_Event>()
{
  return "limx_arm_msgs::srv::gripper_Event";
}

template<>
inline const char * name<limx_arm_msgs::srv::gripper_Event>()
{
  return "limx_arm_msgs/srv/gripper_Event";
}

template<>
struct has_fixed_size<limx_arm_msgs::srv::gripper_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<limx_arm_msgs::srv::gripper_Event>
  : std::integral_constant<bool, has_bounded_size<limx_arm_msgs::srv::gripper_Request>::value && has_bounded_size<limx_arm_msgs::srv::gripper_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<limx_arm_msgs::srv::gripper_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<limx_arm_msgs::srv::gripper>()
{
  return "limx_arm_msgs::srv::gripper";
}

template<>
inline const char * name<limx_arm_msgs::srv::gripper>()
{
  return "limx_arm_msgs/srv/gripper";
}

template<>
struct has_fixed_size<limx_arm_msgs::srv::gripper>
  : std::integral_constant<
    bool,
    has_fixed_size<limx_arm_msgs::srv::gripper_Request>::value &&
    has_fixed_size<limx_arm_msgs::srv::gripper_Response>::value
  >
{
};

template<>
struct has_bounded_size<limx_arm_msgs::srv::gripper>
  : std::integral_constant<
    bool,
    has_bounded_size<limx_arm_msgs::srv::gripper_Request>::value &&
    has_bounded_size<limx_arm_msgs::srv::gripper_Response>::value
  >
{
};

template<>
struct is_service<limx_arm_msgs::srv::gripper>
  : std::true_type
{
};

template<>
struct is_service_request<limx_arm_msgs::srv::gripper_Request>
  : std::true_type
{
};

template<>
struct is_service_response<limx_arm_msgs::srv::gripper_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LIMX_ARM_MSGS__SRV__DETAIL__GRIPPER__TRAITS_HPP_
