// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from limx_arm_msgs:srv/motion.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "limx_arm_msgs/srv/motion.hpp"


#ifndef LIMX_ARM_MSGS__SRV__DETAIL__MOTION__TRAITS_HPP_
#define LIMX_ARM_MSGS__SRV__DETAIL__MOTION__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "limx_arm_msgs/srv/detail/motion__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace limx_arm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const motion_Request & msg,
  std::ostream & out)
{
  out << "{";
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

  // member: duration_time
  {
    out << "duration_time: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const motion_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: duration_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration_time: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const motion_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, limx_arm_msgs::srv::motion_Request>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).left_arm_pos,
    std::forward<T>(msg).right_arm_pos,
    std::forward<T>(msg).duration_time);
}

}  // namespace srv

}  // namespace limx_arm_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<limx_arm_msgs::srv::motion_Request>()
{
  return "limx_arm_msgs::srv::motion_Request";
}

template<>
constexpr const char * name<limx_arm_msgs::srv::motion_Request>()
{
  return "limx_arm_msgs/srv/motion_Request";
}

template<>
struct has_fixed_size<limx_arm_msgs::srv::motion_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<limx_arm_msgs::srv::motion_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<limx_arm_msgs::srv::motion_Request>
  : std::true_type {};

template<>
struct MessageTraits<limx_arm_msgs::srv::motion_Request>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "left_arm_pos",
    "right_arm_pos",
    "duration_time",
  };
};

}  // namespace rosidl_generator_traits

namespace limx_arm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const motion_Response & msg,
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
  const motion_Response & msg,
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

inline std::string to_yaml(const motion_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, limx_arm_msgs::srv::motion_Response>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).status);
}

}  // namespace srv

}  // namespace limx_arm_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<limx_arm_msgs::srv::motion_Response>()
{
  return "limx_arm_msgs::srv::motion_Response";
}

template<>
constexpr const char * name<limx_arm_msgs::srv::motion_Response>()
{
  return "limx_arm_msgs/srv/motion_Response";
}

template<>
struct has_fixed_size<limx_arm_msgs::srv::motion_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<limx_arm_msgs::srv::motion_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<limx_arm_msgs::srv::motion_Response>
  : std::true_type {};

template<>
struct MessageTraits<limx_arm_msgs::srv::motion_Response>
{
  static constexpr std::size_t member_count = 1;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "status",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace limx_arm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const motion_Event & msg,
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
  const motion_Event & msg,
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

inline std::string to_yaml(const motion_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, limx_arm_msgs::srv::motion_Event>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).info,
    std::forward<T>(msg).request,
    std::forward<T>(msg).response);
}

}  // namespace srv

}  // namespace limx_arm_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<limx_arm_msgs::srv::motion_Event>()
{
  return "limx_arm_msgs::srv::motion_Event";
}

template<>
constexpr const char * name<limx_arm_msgs::srv::motion_Event>()
{
  return "limx_arm_msgs/srv/motion_Event";
}

template<>
struct has_fixed_size<limx_arm_msgs::srv::motion_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<limx_arm_msgs::srv::motion_Event>
  : std::integral_constant<bool, has_bounded_size<limx_arm_msgs::srv::motion_Request>::value && has_bounded_size<limx_arm_msgs::srv::motion_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<limx_arm_msgs::srv::motion_Event>
  : std::true_type {};

template<>
struct MessageTraits<limx_arm_msgs::srv::motion_Event>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "info",
    "request",
    "response",
  };
};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<limx_arm_msgs::srv::motion>()
{
  return "limx_arm_msgs::srv::motion";
}

template<>
constexpr const char * name<limx_arm_msgs::srv::motion>()
{
  return "limx_arm_msgs/srv/motion";
}

template<>
struct has_fixed_size<limx_arm_msgs::srv::motion>
  : std::integral_constant<
    bool,
    has_fixed_size<limx_arm_msgs::srv::motion_Request>::value &&
    has_fixed_size<limx_arm_msgs::srv::motion_Response>::value
  >
{
};

template<>
struct has_bounded_size<limx_arm_msgs::srv::motion>
  : std::integral_constant<
    bool,
    has_bounded_size<limx_arm_msgs::srv::motion_Request>::value &&
    has_bounded_size<limx_arm_msgs::srv::motion_Response>::value
  >
{
};

template<>
struct is_service<limx_arm_msgs::srv::motion>
  : std::true_type
{
};

template<>
struct is_service_request<limx_arm_msgs::srv::motion_Request>
  : std::true_type
{
};

template<>
struct is_service_response<limx_arm_msgs::srv::motion_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LIMX_ARM_MSGS__SRV__DETAIL__MOTION__TRAITS_HPP_
