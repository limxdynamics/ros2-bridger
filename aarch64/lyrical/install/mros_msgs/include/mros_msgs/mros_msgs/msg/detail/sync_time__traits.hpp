// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mros_msgs:msg/SyncTime.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mros_msgs/msg/sync_time.hpp"


#ifndef MROS_MSGS__MSG__DETAIL__SYNC_TIME__TRAITS_HPP_
#define MROS_MSGS__MSG__DETAIL__SYNC_TIME__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "mros_msgs/msg/detail/sync_time__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SyncTime & msg,
  std::ostream & out)
{
  out << "{";
  // member: tick
  {
    out << "tick: ";
    rosidl_generator_traits::value_to_yaml(msg.tick, out);
    out << ", ";
  }

  // member: data
  {
    out << "data: ";
    to_flow_style_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SyncTime & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tick
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tick: ";
    rosidl_generator_traits::value_to_yaml(msg.tick, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data:\n";
    to_block_style_yaml(msg.data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SyncTime & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, mros_msgs::msg::SyncTime>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).tick,
    std::forward<T>(msg).data);
}

}  // namespace msg

}  // namespace mros_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<mros_msgs::msg::SyncTime>()
{
  return "mros_msgs::msg::SyncTime";
}

template<>
constexpr const char * name<mros_msgs::msg::SyncTime>()
{
  return "mros_msgs/msg/SyncTime";
}

template<>
struct has_fixed_size<mros_msgs::msg::SyncTime>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<mros_msgs::msg::SyncTime>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<mros_msgs::msg::SyncTime>
  : std::true_type {};

template<>
struct MessageTraits<mros_msgs::msg::SyncTime>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "tick",
    "data",
  };
};

}  // namespace rosidl_generator_traits

#endif  // MROS_MSGS__MSG__DETAIL__SYNC_TIME__TRAITS_HPP_
