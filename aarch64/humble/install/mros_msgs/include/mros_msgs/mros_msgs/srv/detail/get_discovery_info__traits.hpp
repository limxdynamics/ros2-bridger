// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mros_msgs:srv/GetDiscoveryInfo.idl
// generated code does not contain a copyright notice

#ifndef MROS_MSGS__SRV__DETAIL__GET_DISCOVERY_INFO__TRAITS_HPP_
#define MROS_MSGS__SRV__DETAIL__GET_DISCOVERY_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mros_msgs/srv/detail/get_discovery_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetDiscoveryInfo_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetDiscoveryInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetDiscoveryInfo_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mros_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mros_msgs::srv::GetDiscoveryInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mros_msgs::srv::GetDiscoveryInfo_Request & msg)
{
  return mros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mros_msgs::srv::GetDiscoveryInfo_Request>()
{
  return "mros_msgs::srv::GetDiscoveryInfo_Request";
}

template<>
inline const char * name<mros_msgs::srv::GetDiscoveryInfo_Request>()
{
  return "mros_msgs/srv/GetDiscoveryInfo_Request";
}

template<>
struct has_fixed_size<mros_msgs::srv::GetDiscoveryInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mros_msgs::srv::GetDiscoveryInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mros_msgs::srv::GetDiscoveryInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'nodes'
#include "mros_msgs/msg/detail/node_info__traits.hpp"
// Member 'subscribers'
// Member 'publishers'
// Member 'services'
#include "mros_msgs/msg/detail/topic_info__traits.hpp"

namespace mros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetDiscoveryInfo_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: nodes
  {
    if (msg.nodes.size() == 0) {
      out << "nodes: []";
    } else {
      out << "nodes: [";
      size_t pending_items = msg.nodes.size();
      for (auto item : msg.nodes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
    out << ", ";
  }

  // member: services
  {
    if (msg.services.size() == 0) {
      out << "services: []";
    } else {
      out << "services: [";
      size_t pending_items = msg.services.size();
      for (auto item : msg.services) {
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
  const GetDiscoveryInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: nodes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nodes.size() == 0) {
      out << "nodes: []\n";
    } else {
      out << "nodes:\n";
      for (auto item : msg.nodes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

  // member: services
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.services.size() == 0) {
      out << "services: []\n";
    } else {
      out << "services:\n";
      for (auto item : msg.services) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetDiscoveryInfo_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mros_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mros_msgs::srv::GetDiscoveryInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mros_msgs::srv::GetDiscoveryInfo_Response & msg)
{
  return mros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mros_msgs::srv::GetDiscoveryInfo_Response>()
{
  return "mros_msgs::srv::GetDiscoveryInfo_Response";
}

template<>
inline const char * name<mros_msgs::srv::GetDiscoveryInfo_Response>()
{
  return "mros_msgs/srv/GetDiscoveryInfo_Response";
}

template<>
struct has_fixed_size<mros_msgs::srv::GetDiscoveryInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mros_msgs::srv::GetDiscoveryInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mros_msgs::srv::GetDiscoveryInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mros_msgs::srv::GetDiscoveryInfo>()
{
  return "mros_msgs::srv::GetDiscoveryInfo";
}

template<>
inline const char * name<mros_msgs::srv::GetDiscoveryInfo>()
{
  return "mros_msgs/srv/GetDiscoveryInfo";
}

template<>
struct has_fixed_size<mros_msgs::srv::GetDiscoveryInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<mros_msgs::srv::GetDiscoveryInfo_Request>::value &&
    has_fixed_size<mros_msgs::srv::GetDiscoveryInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<mros_msgs::srv::GetDiscoveryInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<mros_msgs::srv::GetDiscoveryInfo_Request>::value &&
    has_bounded_size<mros_msgs::srv::GetDiscoveryInfo_Response>::value
  >
{
};

template<>
struct is_service<mros_msgs::srv::GetDiscoveryInfo>
  : std::true_type
{
};

template<>
struct is_service_request<mros_msgs::srv::GetDiscoveryInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mros_msgs::srv::GetDiscoveryInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MROS_MSGS__SRV__DETAIL__GET_DISCOVERY_INFO__TRAITS_HPP_
