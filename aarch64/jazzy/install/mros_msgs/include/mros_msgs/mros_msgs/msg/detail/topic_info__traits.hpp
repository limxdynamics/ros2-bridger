// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mros_msgs:msg/TopicInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mros_msgs/msg/topic_info.hpp"


#ifndef MROS_MSGS__MSG__DETAIL__TOPIC_INFO__TRAITS_HPP_
#define MROS_MSGS__MSG__DETAIL__TOPIC_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mros_msgs/msg/detail/topic_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TopicInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: topic_id
  {
    out << "topic_id: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_id, out);
    out << ", ";
  }

  // member: topic_name
  {
    out << "topic_name: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_name, out);
    out << ", ";
  }

  // member: message_type
  {
    out << "message_type: ";
    rosidl_generator_traits::value_to_yaml(msg.message_type, out);
    out << ", ";
  }

  // member: md5sum
  {
    out << "md5sum: ";
    rosidl_generator_traits::value_to_yaml(msg.md5sum, out);
    out << ", ";
  }

  // member: buffer_size
  {
    out << "buffer_size: ";
    rosidl_generator_traits::value_to_yaml(msg.buffer_size, out);
    out << ", ";
  }

  // member: negotiated
  {
    out << "negotiated: ";
    rosidl_generator_traits::value_to_yaml(msg.negotiated, out);
    out << ", ";
  }

  // member: node
  {
    out << "node: ";
    rosidl_generator_traits::value_to_yaml(msg.node, out);
    out << ", ";
  }

  // member: definition
  {
    out << "definition: ";
    rosidl_generator_traits::value_to_yaml(msg.definition, out);
    out << ", ";
  }

  // member: latch
  {
    out << "latch: ";
    rosidl_generator_traits::value_to_yaml(msg.latch, out);
    out << ", ";
  }

  // member: reliable
  {
    out << "reliable: ";
    rosidl_generator_traits::value_to_yaml(msg.reliable, out);
    out << ", ";
  }

  // member: queue_size
  {
    out << "queue_size: ";
    rosidl_generator_traits::value_to_yaml(msg.queue_size, out);
    out << ", ";
  }

  // member: enabled
  {
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TopicInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: topic_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic_id: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_id, out);
    out << "\n";
  }

  // member: topic_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic_name: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_name, out);
    out << "\n";
  }

  // member: message_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_type: ";
    rosidl_generator_traits::value_to_yaml(msg.message_type, out);
    out << "\n";
  }

  // member: md5sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "md5sum: ";
    rosidl_generator_traits::value_to_yaml(msg.md5sum, out);
    out << "\n";
  }

  // member: buffer_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "buffer_size: ";
    rosidl_generator_traits::value_to_yaml(msg.buffer_size, out);
    out << "\n";
  }

  // member: negotiated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "negotiated: ";
    rosidl_generator_traits::value_to_yaml(msg.negotiated, out);
    out << "\n";
  }

  // member: node
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node: ";
    rosidl_generator_traits::value_to_yaml(msg.node, out);
    out << "\n";
  }

  // member: definition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "definition: ";
    rosidl_generator_traits::value_to_yaml(msg.definition, out);
    out << "\n";
  }

  // member: latch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latch: ";
    rosidl_generator_traits::value_to_yaml(msg.latch, out);
    out << "\n";
  }

  // member: reliable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reliable: ";
    rosidl_generator_traits::value_to_yaml(msg.reliable, out);
    out << "\n";
  }

  // member: queue_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "queue_size: ";
    rosidl_generator_traits::value_to_yaml(msg.queue_size, out);
    out << "\n";
  }

  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TopicInfo & msg, bool use_flow_style = false)
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
  const mros_msgs::msg::TopicInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  mros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mros_msgs::msg::TopicInfo & msg)
{
  return mros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mros_msgs::msg::TopicInfo>()
{
  return "mros_msgs::msg::TopicInfo";
}

template<>
inline const char * name<mros_msgs::msg::TopicInfo>()
{
  return "mros_msgs/msg/TopicInfo";
}

template<>
struct has_fixed_size<mros_msgs::msg::TopicInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mros_msgs::msg::TopicInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mros_msgs::msg::TopicInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MROS_MSGS__MSG__DETAIL__TOPIC_INFO__TRAITS_HPP_
