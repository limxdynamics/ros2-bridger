// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mros_msgs:msg/TopicStatistics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mros_msgs/msg/topic_statistics.hpp"


#ifndef MROS_MSGS__MSG__DETAIL__TOPIC_STATISTICS__TRAITS_HPP_
#define MROS_MSGS__MSG__DETAIL__TOPIC_STATISTICS__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "mros_msgs/msg/detail/topic_statistics__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'subscribers'
// Member 'publishers'
#include "mros_msgs/msg/detail/topic_info__traits.hpp"

namespace mros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TopicStatistics & msg,
  std::ostream & out)
{
  out << "{";
  // member: node
  {
    out << "node: ";
    rosidl_generator_traits::value_to_yaml(msg.node, out);
    out << ", ";
  }

  // member: subscribers
  {
    if (msg.subscribers.size() == 0) {
      out << "subscribers: []";
    } else {
      out << "subscribers: [";
      size_t pending_items = msg.subscribers.size();
      for (auto item : msg.subscribers) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: publishers
  {
    if (msg.publishers.size() == 0) {
      out << "publishers: []";
    } else {
      out << "publishers: [";
      size_t pending_items = msg.publishers.size();
      for (auto item : msg.publishers) {
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
  const TopicStatistics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node: ";
    rosidl_generator_traits::value_to_yaml(msg.node, out);
    out << "\n";
  }

  // member: subscribers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.subscribers.size() == 0) {
      out << "subscribers: []\n";
    } else {
      out << "subscribers:\n";
      for (auto item : msg.subscribers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: publishers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.publishers.size() == 0) {
      out << "publishers: []\n";
    } else {
      out << "publishers:\n";
      for (auto item : msg.publishers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TopicStatistics & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, mros_msgs::msg::TopicStatistics>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).node,
    std::forward<T>(msg).subscribers,
    std::forward<T>(msg).publishers);
}

}  // namespace msg

}  // namespace mros_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<mros_msgs::msg::TopicStatistics>()
{
  return "mros_msgs::msg::TopicStatistics";
}

template<>
constexpr const char * name<mros_msgs::msg::TopicStatistics>()
{
  return "mros_msgs/msg/TopicStatistics";
}

template<>
struct has_fixed_size<mros_msgs::msg::TopicStatistics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mros_msgs::msg::TopicStatistics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mros_msgs::msg::TopicStatistics>
  : std::true_type {};

template<>
struct MessageTraits<mros_msgs::msg::TopicStatistics>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "node",
    "subscribers",
    "publishers",
  };
};

}  // namespace rosidl_generator_traits

#endif  // MROS_MSGS__MSG__DETAIL__TOPIC_STATISTICS__TRAITS_HPP_
