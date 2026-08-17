// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from limx_arm_msgs:msg/JointStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "limx_arm_msgs/msg/joint_status.hpp"


#ifndef LIMX_ARM_MSGS__MSG__DETAIL__JOINT_STATUS__TRAITS_HPP_
#define LIMX_ARM_MSGS__MSG__DETAIL__JOINT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "limx_arm_msgs/msg/detail/joint_status__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace limx_arm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: deviceid
  {
    out << "deviceid: ";
    rosidl_generator_traits::value_to_yaml(msg.deviceid, out);
    out << ", ";
  }

  // member: run_time
  {
    out << "run_time: ";
    rosidl_generator_traits::value_to_yaml(msg.run_time, out);
    out << ", ";
  }

  // member: enable
  {
    if (msg.enable.size() == 0) {
      out << "enable: []";
    } else {
      out << "enable: [";
      size_t pending_items = msg.enable.size();
      for (auto item : msg.enable) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: error
  {
    if (msg.error.size() == 0) {
      out << "error: []";
    } else {
      out << "error: [";
      size_t pending_items = msg.error.size();
      for (auto item : msg.error) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: zero
  {
    if (msg.zero.size() == 0) {
      out << "zero: []";
    } else {
      out << "zero: [";
      size_t pending_items = msg.zero.size();
      for (auto item : msg.zero) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: limit_min
  {
    if (msg.limit_min.size() == 0) {
      out << "limit_min: []";
    } else {
      out << "limit_min: [";
      size_t pending_items = msg.limit_min.size();
      for (auto item : msg.limit_min) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: limit_max
  {
    if (msg.limit_max.size() == 0) {
      out << "limit_max: []";
    } else {
      out << "limit_max: [";
      size_t pending_items = msg.limit_max.size();
      for (auto item : msg.limit_max) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tool_size
  {
    if (msg.tool_size.size() == 0) {
      out << "tool_size: []";
    } else {
      out << "tool_size: [";
      size_t pending_items = msg.tool_size.size();
      for (auto item : msg.tool_size) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: play_state
  {
    out << "play_state: ";
    rosidl_generator_traits::value_to_yaml(msg.play_state, out);
    out << ", ";
  }

  // member: log_path
  {
    out << "log_path: ";
    rosidl_generator_traits::value_to_yaml(msg.log_path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.stamp, out);
    out << "\n";
  }

  // member: deviceid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deviceid: ";
    rosidl_generator_traits::value_to_yaml(msg.deviceid, out);
    out << "\n";
  }

  // member: run_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "run_time: ";
    rosidl_generator_traits::value_to_yaml(msg.run_time, out);
    out << "\n";
  }

  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.enable.size() == 0) {
      out << "enable: []\n";
    } else {
      out << "enable:\n";
      for (auto item : msg.enable) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.error.size() == 0) {
      out << "error: []\n";
    } else {
      out << "error:\n";
      for (auto item : msg.error) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: zero
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.zero.size() == 0) {
      out << "zero: []\n";
    } else {
      out << "zero:\n";
      for (auto item : msg.zero) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: limit_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.limit_min.size() == 0) {
      out << "limit_min: []\n";
    } else {
      out << "limit_min:\n";
      for (auto item : msg.limit_min) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: limit_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.limit_max.size() == 0) {
      out << "limit_max: []\n";
    } else {
      out << "limit_max:\n";
      for (auto item : msg.limit_max) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tool_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tool_size.size() == 0) {
      out << "tool_size: []\n";
    } else {
      out << "tool_size:\n";
      for (auto item : msg.tool_size) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: play_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "play_state: ";
    rosidl_generator_traits::value_to_yaml(msg.play_state, out);
    out << "\n";
  }

  // member: log_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "log_path: ";
    rosidl_generator_traits::value_to_yaml(msg.log_path, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, limx_arm_msgs::msg::JointStatus>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).stamp,
    std::forward<T>(msg).deviceid,
    std::forward<T>(msg).run_time,
    std::forward<T>(msg).enable,
    std::forward<T>(msg).error,
    std::forward<T>(msg).zero,
    std::forward<T>(msg).limit_min,
    std::forward<T>(msg).limit_max,
    std::forward<T>(msg).tool_size,
    std::forward<T>(msg).mode,
    std::forward<T>(msg).state,
    std::forward<T>(msg).play_state,
    std::forward<T>(msg).log_path);
}

}  // namespace msg

}  // namespace limx_arm_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<limx_arm_msgs::msg::JointStatus>()
{
  return "limx_arm_msgs::msg::JointStatus";
}

template<>
constexpr const char * name<limx_arm_msgs::msg::JointStatus>()
{
  return "limx_arm_msgs/msg/JointStatus";
}

template<>
struct has_fixed_size<limx_arm_msgs::msg::JointStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<limx_arm_msgs::msg::JointStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<limx_arm_msgs::msg::JointStatus>
  : std::true_type {};

template<>
struct MessageTraits<limx_arm_msgs::msg::JointStatus>
{
  static constexpr std::size_t member_count = 13;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "stamp",
    "deviceid",
    "run_time",
    "enable",
    "error",
    "zero",
    "limit_min",
    "limit_max",
    "tool_size",
    "mode",
    "state",
    "play_state",
    "log_path",
  };
};

}  // namespace rosidl_generator_traits

#endif  // LIMX_ARM_MSGS__MSG__DETAIL__JOINT_STATUS__TRAITS_HPP_
