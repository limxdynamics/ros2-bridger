// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mros_msgs:msg/AshmemInfo.idl
// generated code does not contain a copyright notice

#ifndef MROS_MSGS__MSG__DETAIL__ASHMEM_INFO__TRAITS_HPP_
#define MROS_MSGS__MSG__DETAIL__ASHMEM_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mros_msgs/msg/detail/ashmem_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AshmemInfo & msg,
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

  // member: message_md5sum
  {
    out << "message_md5sum: ";
    rosidl_generator_traits::value_to_yaml(msg.message_md5sum, out);
    out << ", ";
  }

  // member: message_definition
  {
    out << "message_definition: ";
    rosidl_generator_traits::value_to_yaml(msg.message_definition, out);
    out << ", ";
  }

  // member: shm_seed
  {
    out << "shm_seed: ";
    rosidl_generator_traits::value_to_yaml(msg.shm_seed, out);
    out << ", ";
  }

  // member: shm_size
  {
    out << "shm_size: ";
    rosidl_generator_traits::value_to_yaml(msg.shm_size, out);
    out << ", ";
  }

  // member: msg_size
  {
    out << "msg_size: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_size, out);
    out << ", ";
  }

  // member: identity
  {
    if (msg.identity.size() == 0) {
      out << "identity: []";
    } else {
      out << "identity: [";
      size_t pending_items = msg.identity.size();
      for (auto item : msg.identity) {
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
  const AshmemInfo & msg,
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

  // member: message_md5sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_md5sum: ";
    rosidl_generator_traits::value_to_yaml(msg.message_md5sum, out);
    out << "\n";
  }

  // member: message_definition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_definition: ";
    rosidl_generator_traits::value_to_yaml(msg.message_definition, out);
    out << "\n";
  }

  // member: shm_seed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shm_seed: ";
    rosidl_generator_traits::value_to_yaml(msg.shm_seed, out);
    out << "\n";
  }

  // member: shm_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shm_size: ";
    rosidl_generator_traits::value_to_yaml(msg.shm_size, out);
    out << "\n";
  }

  // member: msg_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_size: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_size, out);
    out << "\n";
  }

  // member: identity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.identity.size() == 0) {
      out << "identity: []\n";
    } else {
      out << "identity:\n";
      for (auto item : msg.identity) {
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

inline std::string to_yaml(const AshmemInfo & msg, bool use_flow_style = false)
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
  const mros_msgs::msg::AshmemInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  mros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mros_msgs::msg::AshmemInfo & msg)
{
  return mros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mros_msgs::msg::AshmemInfo>()
{
  return "mros_msgs::msg::AshmemInfo";
}

template<>
inline const char * name<mros_msgs::msg::AshmemInfo>()
{
  return "mros_msgs/msg/AshmemInfo";
}

template<>
struct has_fixed_size<mros_msgs::msg::AshmemInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mros_msgs::msg::AshmemInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mros_msgs::msg::AshmemInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MROS_MSGS__MSG__DETAIL__ASHMEM_INFO__TRAITS_HPP_
