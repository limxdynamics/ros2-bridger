// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from upper_body:srv/arm_move.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "upper_body/srv/arm_move.hpp"


#ifndef UPPER_BODY__SRV__DETAIL__ARM_MOVE__TRAITS_HPP_
#define UPPER_BODY__SRV__DETAIL__ARM_MOVE__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "upper_body/srv/detail/arm_move__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
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

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, upper_body::srv::arm_move_Request>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).move_type,
    std::forward<T>(msg).left_arm_joints,
    std::forward<T>(msg).right_arm_joints,
    std::forward<T>(msg).left_arm_pos,
    std::forward<T>(msg).right_arm_pos,
    std::forward<T>(msg).speed);
}

}  // namespace srv

}  // namespace upper_body

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<upper_body::srv::arm_move_Request>()
{
  return "upper_body::srv::arm_move_Request";
}

template<>
constexpr const char * name<upper_body::srv::arm_move_Request>()
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

template<>
struct MessageTraits<upper_body::srv::arm_move_Request>
{
  static constexpr std::size_t member_count = 6;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "move_type",
    "left_arm_joints",
    "right_arm_joints",
    "left_arm_pos",
    "right_arm_pos",
    "speed",
  };
};

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

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, upper_body::srv::arm_move_Response>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).status);
}

}  // namespace srv

}  // namespace upper_body

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<upper_body::srv::arm_move_Response>()
{
  return "upper_body::srv::arm_move_Response";
}

template<>
constexpr const char * name<upper_body::srv::arm_move_Response>()
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

template<>
struct MessageTraits<upper_body::srv::arm_move_Response>
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

namespace upper_body
{

namespace srv
{

inline void to_flow_style_yaml(
  const arm_move_Event & msg,
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
  const arm_move_Event & msg,
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

inline std::string to_yaml(const arm_move_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, upper_body::srv::arm_move_Event>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).info,
    std::forward<T>(msg).request,
    std::forward<T>(msg).response);
}

}  // namespace srv

}  // namespace upper_body

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<upper_body::srv::arm_move_Event>()
{
  return "upper_body::srv::arm_move_Event";
}

template<>
constexpr const char * name<upper_body::srv::arm_move_Event>()
{
  return "upper_body/srv/arm_move_Event";
}

template<>
struct has_fixed_size<upper_body::srv::arm_move_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<upper_body::srv::arm_move_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<upper_body::srv::arm_move_Request>::value && has_bounded_size<upper_body::srv::arm_move_Response>::value> {};

template<>
struct is_message<upper_body::srv::arm_move_Event>
  : std::true_type {};

template<>
struct MessageTraits<upper_body::srv::arm_move_Event>
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
constexpr const char * data_type<upper_body::srv::arm_move>()
{
  return "upper_body::srv::arm_move";
}

template<>
constexpr const char * name<upper_body::srv::arm_move>()
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
