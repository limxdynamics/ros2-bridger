// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hand_msgs:msg/TactileCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hand_msgs/msg/tactile_cmd.hpp"


#ifndef HAND_MSGS__MSG__DETAIL__TACTILE_CMD__TRAITS_HPP_
#define HAND_MSGS__MSG__DETAIL__TACTILE_CMD__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "hand_msgs/msg/detail/tactile_cmd__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace hand_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TactileCmd & msg,
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

  // member: tactile_switch
  {
    if (msg.tactile_switch.size() == 0) {
      out << "tactile_switch: []";
    } else {
      out << "tactile_switch: [";
      size_t pending_items = msg.tactile_switch.size();
      for (auto item : msg.tactile_switch) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: channel_reset
  {
    if (msg.channel_reset.size() == 0) {
      out << "channel_reset: []";
    } else {
      out << "channel_reset: [";
      size_t pending_items = msg.channel_reset.size();
      for (auto item : msg.channel_reset) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: calibration_trigger
  {
    if (msg.calibration_trigger.size() == 0) {
      out << "calibration_trigger: []";
    } else {
      out << "calibration_trigger: [";
      size_t pending_items = msg.calibration_trigger.size();
      for (auto item : msg.calibration_trigger) {
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
  const TactileCmd & msg,
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

  // member: tactile_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tactile_switch.size() == 0) {
      out << "tactile_switch: []\n";
    } else {
      out << "tactile_switch:\n";
      for (auto item : msg.tactile_switch) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: channel_reset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.channel_reset.size() == 0) {
      out << "channel_reset: []\n";
    } else {
      out << "channel_reset:\n";
      for (auto item : msg.channel_reset) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: calibration_trigger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.calibration_trigger.size() == 0) {
      out << "calibration_trigger: []\n";
    } else {
      out << "calibration_trigger:\n";
      for (auto item : msg.calibration_trigger) {
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

inline std::string to_yaml(const TactileCmd & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, hand_msgs::msg::TactileCmd>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).header,
    std::forward<T>(msg).names,
    std::forward<T>(msg).tactile_switch,
    std::forward<T>(msg).channel_reset,
    std::forward<T>(msg).calibration_trigger);
}

}  // namespace msg

}  // namespace hand_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<hand_msgs::msg::TactileCmd>()
{
  return "hand_msgs::msg::TactileCmd";
}

template<>
constexpr const char * name<hand_msgs::msg::TactileCmd>()
{
  return "hand_msgs/msg/TactileCmd";
}

template<>
struct has_fixed_size<hand_msgs::msg::TactileCmd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hand_msgs::msg::TactileCmd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hand_msgs::msg::TactileCmd>
  : std::true_type {};

template<>
struct MessageTraits<hand_msgs::msg::TactileCmd>
{
  static constexpr std::size_t member_count = 5;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "header",
    "names",
    "tactile_switch",
    "channel_reset",
    "calibration_trigger",
  };
};

}  // namespace rosidl_generator_traits

#endif  // HAND_MSGS__MSG__DETAIL__TACTILE_CMD__TRAITS_HPP_
