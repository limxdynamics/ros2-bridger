// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mros_msgs:msg/Log.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mros_msgs/msg/log.hpp"


#ifndef MROS_MSGS__MSG__DETAIL__LOG__TRAITS_HPP_
#define MROS_MSGS__MSG__DETAIL__LOG__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "mros_msgs/msg/detail/log__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Log & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: level
  {
    out << "level: ";
    rosidl_generator_traits::character_value_to_yaml(msg.level, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: msg
  {
    out << "msg: ";
    rosidl_generator_traits::value_to_yaml(msg.msg, out);
    out << ", ";
  }

  // member: file
  {
    out << "file: ";
    rosidl_generator_traits::value_to_yaml(msg.file, out);
    out << ", ";
  }

  // member: function
  {
    out << "function: ";
    rosidl_generator_traits::value_to_yaml(msg.function, out);
    out << ", ";
  }

  // member: line
  {
    out << "line: ";
    rosidl_generator_traits::value_to_yaml(msg.line, out);
    out << ", ";
  }

  // member: topics
  {
    if (msg.topics.size() == 0) {
      out << "topics: []";
    } else {
      out << "topics: [";
      size_t pending_items = msg.topics.size();
      for (auto item : msg.topics) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pid
  {
    out << "pid: ";
    rosidl_generator_traits::value_to_yaml(msg.pid, out);
    out << ", ";
  }

  // member: tid
  {
    out << "tid: ";
    rosidl_generator_traits::value_to_yaml(msg.tid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Log & msg,
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

  // member: level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level: ";
    rosidl_generator_traits::character_value_to_yaml(msg.level, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg: ";
    rosidl_generator_traits::value_to_yaml(msg.msg, out);
    out << "\n";
  }

  // member: file
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file: ";
    rosidl_generator_traits::value_to_yaml(msg.file, out);
    out << "\n";
  }

  // member: function
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "function: ";
    rosidl_generator_traits::value_to_yaml(msg.function, out);
    out << "\n";
  }

  // member: line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "line: ";
    rosidl_generator_traits::value_to_yaml(msg.line, out);
    out << "\n";
  }

  // member: topics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.topics.size() == 0) {
      out << "topics: []\n";
    } else {
      out << "topics:\n";
      for (auto item : msg.topics) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid: ";
    rosidl_generator_traits::value_to_yaml(msg.pid, out);
    out << "\n";
  }

  // member: tid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tid: ";
    rosidl_generator_traits::value_to_yaml(msg.tid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Log & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, mros_msgs::msg::Log>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).header,
    std::forward<T>(msg).level,
    std::forward<T>(msg).name,
    std::forward<T>(msg).msg,
    std::forward<T>(msg).file,
    std::forward<T>(msg).function,
    std::forward<T>(msg).line,
    std::forward<T>(msg).topics,
    std::forward<T>(msg).pid,
    std::forward<T>(msg).tid);
}

}  // namespace msg

}  // namespace mros_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<mros_msgs::msg::Log>()
{
  return "mros_msgs::msg::Log";
}

template<>
constexpr const char * name<mros_msgs::msg::Log>()
{
  return "mros_msgs/msg/Log";
}

template<>
struct has_fixed_size<mros_msgs::msg::Log>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mros_msgs::msg::Log>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mros_msgs::msg::Log>
  : std::true_type {};

template<>
struct MessageTraits<mros_msgs::msg::Log>
{
  static constexpr std::size_t member_count = 10;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "header",
    "level",
    "name",
    "msg",
    "file",
    "function",
    "line",
    "topics",
    "pid",
    "tid",
  };
};

}  // namespace rosidl_generator_traits

#endif  // MROS_MSGS__MSG__DETAIL__LOG__TRAITS_HPP_
