// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from std_srvs:srv/GetFloat64Array.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "std_srvs/srv/get_float64_array.hpp"


#ifndef STD_SRVS__SRV__DETAIL__GET_FLOAT64_ARRAY__TRAITS_HPP_
#define STD_SRVS__SRV__DETAIL__GET_FLOAT64_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "std_srvs/srv/detail/get_float64_array__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace std_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetFloat64Array_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetFloat64Array_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetFloat64Array_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, std_srvs::srv::GetFloat64Array_Request>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).structure_needs_at_least_one_member);
}

}  // namespace srv

}  // namespace std_srvs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<std_srvs::srv::GetFloat64Array_Request>()
{
  return "std_srvs::srv::GetFloat64Array_Request";
}

template<>
constexpr const char * name<std_srvs::srv::GetFloat64Array_Request>()
{
  return "std_srvs/srv/GetFloat64Array_Request";
}

template<>
struct has_fixed_size<std_srvs::srv::GetFloat64Array_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<std_srvs::srv::GetFloat64Array_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<std_srvs::srv::GetFloat64Array_Request>
  : std::true_type {};

template<>
struct MessageTraits<std_srvs::srv::GetFloat64Array_Request>
{
  static constexpr std::size_t member_count = 1;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "structure_needs_at_least_one_member",
  };
};

}  // namespace rosidl_generator_traits

namespace std_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetFloat64Array_Response & msg,
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
  const GetFloat64Array_Response & msg,
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

inline std::string to_yaml(const GetFloat64Array_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, std_srvs::srv::GetFloat64Array_Response>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).success,
    std::forward<T>(msg).message,
    std::forward<T>(msg).data);
}

}  // namespace srv

}  // namespace std_srvs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<std_srvs::srv::GetFloat64Array_Response>()
{
  return "std_srvs::srv::GetFloat64Array_Response";
}

template<>
constexpr const char * name<std_srvs::srv::GetFloat64Array_Response>()
{
  return "std_srvs/srv/GetFloat64Array_Response";
}

template<>
struct has_fixed_size<std_srvs::srv::GetFloat64Array_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<std_srvs::srv::GetFloat64Array_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<std_srvs::srv::GetFloat64Array_Response>
  : std::true_type {};

template<>
struct MessageTraits<std_srvs::srv::GetFloat64Array_Response>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "success",
    "message",
    "data",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace std_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetFloat64Array_Event & msg,
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
  const GetFloat64Array_Event & msg,
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

inline std::string to_yaml(const GetFloat64Array_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, std_srvs::srv::GetFloat64Array_Event>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).info,
    std::forward<T>(msg).request,
    std::forward<T>(msg).response);
}

}  // namespace srv

}  // namespace std_srvs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<std_srvs::srv::GetFloat64Array_Event>()
{
  return "std_srvs::srv::GetFloat64Array_Event";
}

template<>
constexpr const char * name<std_srvs::srv::GetFloat64Array_Event>()
{
  return "std_srvs/srv/GetFloat64Array_Event";
}

template<>
struct has_fixed_size<std_srvs::srv::GetFloat64Array_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<std_srvs::srv::GetFloat64Array_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<std_srvs::srv::GetFloat64Array_Request>::value && has_bounded_size<std_srvs::srv::GetFloat64Array_Response>::value> {};

template<>
struct is_message<std_srvs::srv::GetFloat64Array_Event>
  : std::true_type {};

template<>
struct MessageTraits<std_srvs::srv::GetFloat64Array_Event>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "info",
    "request",
    "response",
  };
};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<std_srvs::srv::GetFloat64Array>()
{
  return "std_srvs::srv::GetFloat64Array";
}

template<>
constexpr const char * name<std_srvs::srv::GetFloat64Array>()
{
  return "std_srvs/srv/GetFloat64Array";
}

template<>
struct has_fixed_size<std_srvs::srv::GetFloat64Array>
  : std::integral_constant<
    bool,
    has_fixed_size<std_srvs::srv::GetFloat64Array_Request>::value &&
    has_fixed_size<std_srvs::srv::GetFloat64Array_Response>::value
  >
{
};

template<>
struct has_bounded_size<std_srvs::srv::GetFloat64Array>
  : std::integral_constant<
    bool,
    has_bounded_size<std_srvs::srv::GetFloat64Array_Request>::value &&
    has_bounded_size<std_srvs::srv::GetFloat64Array_Response>::value
  >
{
};

template<>
struct is_service<std_srvs::srv::GetFloat64Array>
  : std::true_type
{
};

template<>
struct is_service_request<std_srvs::srv::GetFloat64Array_Request>
  : std::true_type
{
};

template<>
struct is_service_response<std_srvs::srv::GetFloat64Array_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // STD_SRVS__SRV__DETAIL__GET_FLOAT64_ARRAY__TRAITS_HPP_
