// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from std_srvs:srv/SetFloat32ArrayWithTitle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "std_srvs/srv/set_float32_array_with_title.hpp"


#ifndef STD_SRVS__SRV__DETAIL__SET_FLOAT32_ARRAY_WITH_TITLE__TRAITS_HPP_
#define STD_SRVS__SRV__DETAIL__SET_FLOAT32_ARRAY_WITH_TITLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "std_srvs/srv/detail/set_float32_array_with_title__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace std_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetFloat32ArrayWithTitle_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: title
  {
    out << "title: ";
    rosidl_generator_traits::value_to_yaml(msg.title, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
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
  const SetFloat32ArrayWithTitle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: title
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "title: ";
    rosidl_generator_traits::value_to_yaml(msg.title, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
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

inline std::string to_yaml(const SetFloat32ArrayWithTitle_Request & msg, bool use_flow_style = false)
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

}  // namespace std_srvs

namespace rosidl_generator_traits
{

[[deprecated("use std_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const std_srvs::srv::SetFloat32ArrayWithTitle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  std_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use std_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const std_srvs::srv::SetFloat32ArrayWithTitle_Request & msg)
{
  return std_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<std_srvs::srv::SetFloat32ArrayWithTitle_Request>()
{
  return "std_srvs::srv::SetFloat32ArrayWithTitle_Request";
}

template<>
inline const char * name<std_srvs::srv::SetFloat32ArrayWithTitle_Request>()
{
  return "std_srvs/srv/SetFloat32ArrayWithTitle_Request";
}

template<>
struct has_fixed_size<std_srvs::srv::SetFloat32ArrayWithTitle_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<std_srvs::srv::SetFloat32ArrayWithTitle_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<std_srvs::srv::SetFloat32ArrayWithTitle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace std_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetFloat32ArrayWithTitle_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetFloat32ArrayWithTitle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetFloat32ArrayWithTitle_Response & msg, bool use_flow_style = false)
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

}  // namespace std_srvs

namespace rosidl_generator_traits
{

[[deprecated("use std_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const std_srvs::srv::SetFloat32ArrayWithTitle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  std_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use std_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const std_srvs::srv::SetFloat32ArrayWithTitle_Response & msg)
{
  return std_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<std_srvs::srv::SetFloat32ArrayWithTitle_Response>()
{
  return "std_srvs::srv::SetFloat32ArrayWithTitle_Response";
}

template<>
inline const char * name<std_srvs::srv::SetFloat32ArrayWithTitle_Response>()
{
  return "std_srvs/srv/SetFloat32ArrayWithTitle_Response";
}

template<>
struct has_fixed_size<std_srvs::srv::SetFloat32ArrayWithTitle_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<std_srvs::srv::SetFloat32ArrayWithTitle_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<std_srvs::srv::SetFloat32ArrayWithTitle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace std_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetFloat32ArrayWithTitle_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const SetFloat32ArrayWithTitle_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetFloat32ArrayWithTitle_Event & msg, bool use_flow_style = false)
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

}  // namespace std_srvs

namespace rosidl_generator_traits
{

[[deprecated("use std_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const std_srvs::srv::SetFloat32ArrayWithTitle_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  std_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use std_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const std_srvs::srv::SetFloat32ArrayWithTitle_Event & msg)
{
  return std_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<std_srvs::srv::SetFloat32ArrayWithTitle_Event>()
{
  return "std_srvs::srv::SetFloat32ArrayWithTitle_Event";
}

template<>
inline const char * name<std_srvs::srv::SetFloat32ArrayWithTitle_Event>()
{
  return "std_srvs/srv/SetFloat32ArrayWithTitle_Event";
}

template<>
struct has_fixed_size<std_srvs::srv::SetFloat32ArrayWithTitle_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<std_srvs::srv::SetFloat32ArrayWithTitle_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<std_srvs::srv::SetFloat32ArrayWithTitle_Request>::value && has_bounded_size<std_srvs::srv::SetFloat32ArrayWithTitle_Response>::value> {};

template<>
struct is_message<std_srvs::srv::SetFloat32ArrayWithTitle_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_srvs::srv::SetFloat32ArrayWithTitle>()
{
  return "std_srvs::srv::SetFloat32ArrayWithTitle";
}

template<>
inline const char * name<std_srvs::srv::SetFloat32ArrayWithTitle>()
{
  return "std_srvs/srv/SetFloat32ArrayWithTitle";
}

template<>
struct has_fixed_size<std_srvs::srv::SetFloat32ArrayWithTitle>
  : std::integral_constant<
    bool,
    has_fixed_size<std_srvs::srv::SetFloat32ArrayWithTitle_Request>::value &&
    has_fixed_size<std_srvs::srv::SetFloat32ArrayWithTitle_Response>::value
  >
{
};

template<>
struct has_bounded_size<std_srvs::srv::SetFloat32ArrayWithTitle>
  : std::integral_constant<
    bool,
    has_bounded_size<std_srvs::srv::SetFloat32ArrayWithTitle_Request>::value &&
    has_bounded_size<std_srvs::srv::SetFloat32ArrayWithTitle_Response>::value
  >
{
};

template<>
struct is_service<std_srvs::srv::SetFloat32ArrayWithTitle>
  : std::true_type
{
};

template<>
struct is_service_request<std_srvs::srv::SetFloat32ArrayWithTitle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<std_srvs::srv::SetFloat32ArrayWithTitle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // STD_SRVS__SRV__DETAIL__SET_FLOAT32_ARRAY_WITH_TITLE__TRAITS_HPP_
