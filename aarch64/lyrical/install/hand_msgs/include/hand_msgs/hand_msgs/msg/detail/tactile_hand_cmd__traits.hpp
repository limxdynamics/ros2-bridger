// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hand_msgs:msg/TactileHandCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hand_msgs/msg/tactile_hand_cmd.hpp"


#ifndef HAND_MSGS__MSG__DETAIL__TACTILE_HAND_CMD__TRAITS_HPP_
#define HAND_MSGS__MSG__DETAIL__TACTILE_HAND_CMD__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "hand_msgs/msg/detail/tactile_hand_cmd__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'hand_cmd'
#include "hand_msgs/msg/detail/hand_msg__traits.hpp"
// Member 'hand_tactile_cmd'
#include "hand_msgs/msg/detail/tactile_cmd__traits.hpp"

namespace hand_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TactileHandCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: hand_type
  {
    out << "hand_type: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_type, out);
    out << ", ";
  }

  // member: ctrl_mode
  {
    if (msg.ctrl_mode.size() == 0) {
      out << "ctrl_mode: []";
    } else {
      out << "ctrl_mode: [";
      size_t pending_items = msg.ctrl_mode.size();
      for (auto item : msg.ctrl_mode) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: hand_cmd
  {
    if (msg.hand_cmd.size() == 0) {
      out << "hand_cmd: []";
    } else {
      out << "hand_cmd: [";
      size_t pending_items = msg.hand_cmd.size();
      for (auto item : msg.hand_cmd) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: hand_tactile_cmd
  {
    if (msg.hand_tactile_cmd.size() == 0) {
      out << "hand_tactile_cmd: []";
    } else {
      out << "hand_tactile_cmd: [";
      size_t pending_items = msg.hand_tactile_cmd.size();
      for (auto item : msg.hand_tactile_cmd) {
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
  const TactileHandCmd & msg,
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

  // member: hand_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand_type: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_type, out);
    out << "\n";
  }

  // member: ctrl_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ctrl_mode.size() == 0) {
      out << "ctrl_mode: []\n";
    } else {
      out << "ctrl_mode:\n";
      for (auto item : msg.ctrl_mode) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: hand_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hand_cmd.size() == 0) {
      out << "hand_cmd: []\n";
    } else {
      out << "hand_cmd:\n";
      for (auto item : msg.hand_cmd) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: hand_tactile_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hand_tactile_cmd.size() == 0) {
      out << "hand_tactile_cmd: []\n";
    } else {
      out << "hand_tactile_cmd:\n";
      for (auto item : msg.hand_tactile_cmd) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TactileHandCmd & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, hand_msgs::msg::TactileHandCmd>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).header,
    std::forward<T>(msg).hand_type,
    std::forward<T>(msg).ctrl_mode,
    std::forward<T>(msg).hand_cmd,
    std::forward<T>(msg).hand_tactile_cmd);
}

}  // namespace msg

}  // namespace hand_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<hand_msgs::msg::TactileHandCmd>()
{
  return "hand_msgs::msg::TactileHandCmd";
}

template<>
constexpr const char * name<hand_msgs::msg::TactileHandCmd>()
{
  return "hand_msgs/msg/TactileHandCmd";
}

template<>
struct has_fixed_size<hand_msgs::msg::TactileHandCmd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hand_msgs::msg::TactileHandCmd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hand_msgs::msg::TactileHandCmd>
  : std::true_type {};

template<>
struct MessageTraits<hand_msgs::msg::TactileHandCmd>
{
  static constexpr std::size_t member_count = 5;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "header",
    "hand_type",
    "ctrl_mode",
    "hand_cmd",
    "hand_tactile_cmd",
  };
};

}  // namespace rosidl_generator_traits

#endif  // HAND_MSGS__MSG__DETAIL__TACTILE_HAND_CMD__TRAITS_HPP_
