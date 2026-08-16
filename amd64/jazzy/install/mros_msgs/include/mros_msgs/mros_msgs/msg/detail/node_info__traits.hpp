// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mros_msgs:msg/NodeInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mros_msgs/msg/node_info.hpp"


#ifndef MROS_MSGS__MSG__DETAIL__NODE_INFO__TRAITS_HPP_
#define MROS_MSGS__MSG__DETAIL__NODE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mros_msgs/msg/detail/node_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_name
  {
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NodeInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mros_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mros_msgs::msg::NodeInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  mros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mros_msgs::msg::NodeInfo & msg)
{
  return mros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mros_msgs::msg::NodeInfo>()
{
  return "mros_msgs::msg::NodeInfo";
}

template<>
inline const char * name<mros_msgs::msg::NodeInfo>()
{
  return "mros_msgs/msg/NodeInfo";
}

template<>
struct has_fixed_size<mros_msgs::msg::NodeInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mros_msgs::msg::NodeInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mros_msgs::msg::NodeInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MROS_MSGS__MSG__DETAIL__NODE_INFO__TRAITS_HPP_
