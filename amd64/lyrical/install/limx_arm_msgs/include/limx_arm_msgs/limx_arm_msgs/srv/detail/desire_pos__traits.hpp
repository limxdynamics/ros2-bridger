// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from limx_arm_msgs:srv/desire_pos.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "limx_arm_msgs/srv/desire_pos.hpp"


#ifndef LIMX_ARM_MSGS__SRV__DETAIL__DESIRE_POS__TRAITS_HPP_
#define LIMX_ARM_MSGS__SRV__DETAIL__DESIRE_POS__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "limx_arm_msgs/srv/detail/desire_pos__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace limx_arm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const desire_pos_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: taskNum
  {
    out << "taskNum: ";
    rosidl_generator_traits::value_to_yaml(msg.taskNum, out);
    out << ", ";
  }

  // member: desire_pos
  {
    if (msg.desire_pos.size() == 0) {
      out << "desire_pos: []";
    } else {
      out << "desire_pos: [";
      size_t pending_items = msg.desire_pos.size();
      for (auto item : msg.desire_pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: co_control
  {
    out << "co_control: ";
    rosidl_generator_traits::value_to_yaml(msg.co_control, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const desire_pos_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: taskNum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "taskNum: ";
    rosidl_generator_traits::value_to_yaml(msg.taskNum, out);
    out << "\n";
  }

  // member: desire_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.desire_pos.size() == 0) {
      out << "desire_pos: []\n";
    } else {
      out << "desire_pos:\n";
      for (auto item : msg.desire_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: co_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "co_control: ";
    rosidl_generator_traits::value_to_yaml(msg.co_control, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const desire_pos_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, limx_arm_msgs::srv::desire_pos_Request>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).taskNum,
    std::forward<T>(msg).desire_pos,
    std::forward<T>(msg).co_control);
}

}  // namespace srv

}  // namespace limx_arm_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<limx_arm_msgs::srv::desire_pos_Request>()
{
  return "limx_arm_msgs::srv::desire_pos_Request";
}

template<>
constexpr const char * name<limx_arm_msgs::srv::desire_pos_Request>()
{
  return "limx_arm_msgs/srv/desire_pos_Request";
}

template<>
struct has_fixed_size<limx_arm_msgs::srv::desire_pos_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<limx_arm_msgs::srv::desire_pos_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<limx_arm_msgs::srv::desire_pos_Request>
  : std::true_type {};

template<>
struct MessageTraits<limx_arm_msgs::srv::desire_pos_Request>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "taskNum",
    "desire_pos",
    "co_control",
  };
};

}  // namespace rosidl_generator_traits

namespace limx_arm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const desire_pos_Response & msg,
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
  const desire_pos_Response & msg,
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

inline std::string to_yaml(const desire_pos_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, limx_arm_msgs::srv::desire_pos_Response>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).status);
}

}  // namespace srv

}  // namespace limx_arm_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<limx_arm_msgs::srv::desire_pos_Response>()
{
  return "limx_arm_msgs::srv::desire_pos_Response";
}

template<>
constexpr const char * name<limx_arm_msgs::srv::desire_pos_Response>()
{
  return "limx_arm_msgs/srv/desire_pos_Response";
}

template<>
struct has_fixed_size<limx_arm_msgs::srv::desire_pos_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<limx_arm_msgs::srv::desire_pos_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<limx_arm_msgs::srv::desire_pos_Response>
  : std::true_type {};

template<>
struct MessageTraits<limx_arm_msgs::srv::desire_pos_Response>
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
  const desire_pos_Event & msg,
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
  const desire_pos_Event & msg,
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

inline std::string to_yaml(const desire_pos_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, limx_arm_msgs::srv::desire_pos_Event>, int> = 0>
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
constexpr const char * data_type<limx_arm_msgs::srv::desire_pos_Event>()
{
  return "limx_arm_msgs::srv::desire_pos_Event";
}

template<>
constexpr const char * name<limx_arm_msgs::srv::desire_pos_Event>()
{
  return "limx_arm_msgs/srv/desire_pos_Event";
}

template<>
struct has_fixed_size<limx_arm_msgs::srv::desire_pos_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<limx_arm_msgs::srv::desire_pos_Event>
  : std::integral_constant<bool, has_bounded_size<limx_arm_msgs::srv::desire_pos_Request>::value && has_bounded_size<limx_arm_msgs::srv::desire_pos_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<limx_arm_msgs::srv::desire_pos_Event>
  : std::true_type {};

template<>
struct MessageTraits<limx_arm_msgs::srv::desire_pos_Event>
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
constexpr const char * data_type<limx_arm_msgs::srv::desire_pos>()
{
  return "limx_arm_msgs::srv::desire_pos";
}

template<>
constexpr const char * name<limx_arm_msgs::srv::desire_pos>()
{
  return "limx_arm_msgs/srv/desire_pos";
}

template<>
struct has_fixed_size<limx_arm_msgs::srv::desire_pos>
  : std::integral_constant<
    bool,
    has_fixed_size<limx_arm_msgs::srv::desire_pos_Request>::value &&
    has_fixed_size<limx_arm_msgs::srv::desire_pos_Response>::value
  >
{
};

template<>
struct has_bounded_size<limx_arm_msgs::srv::desire_pos>
  : std::integral_constant<
    bool,
    has_bounded_size<limx_arm_msgs::srv::desire_pos_Request>::value &&
    has_bounded_size<limx_arm_msgs::srv::desire_pos_Response>::value
  >
{
};

template<>
struct is_service<limx_arm_msgs::srv::desire_pos>
  : std::true_type
{
};

template<>
struct is_service_request<limx_arm_msgs::srv::desire_pos_Request>
  : std::true_type
{
};

template<>
struct is_service_response<limx_arm_msgs::srv::desire_pos_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LIMX_ARM_MSGS__SRV__DETAIL__DESIRE_POS__TRAITS_HPP_
