// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from upper_body:srv/moveJ.idl
// generated code does not contain a copyright notice

#ifndef UPPER_BODY__SRV__DETAIL__MOVE_J__TRAITS_HPP_
#define UPPER_BODY__SRV__DETAIL__MOVE_J__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "upper_body/srv/detail/move_j__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace upper_body
{

namespace srv
{

inline void to_flow_style_yaml(
  const moveJ_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: joints
  {
    if (msg.joints.size() == 0) {
      out << "joints: []";
    } else {
      out << "joints: [";
      size_t pending_items = msg.joints.size();
      for (auto item : msg.joints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const moveJ_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joints.size() == 0) {
      out << "joints: []\n";
    } else {
      out << "joints:\n";
      for (auto item : msg.joints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveJ_Request & msg, bool use_flow_style = false)
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

}  // namespace upper_body

namespace rosidl_generator_traits
{

[[deprecated("use upper_body::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const upper_body::srv::moveJ_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  upper_body::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use upper_body::srv::to_yaml() instead")]]
inline std::string to_yaml(const upper_body::srv::moveJ_Request & msg)
{
  return upper_body::srv::to_yaml(msg);
}

template<>
inline const char * data_type<upper_body::srv::moveJ_Request>()
{
  return "upper_body::srv::moveJ_Request";
}

template<>
inline const char * name<upper_body::srv::moveJ_Request>()
{
  return "upper_body/srv/moveJ_Request";
}

template<>
struct has_fixed_size<upper_body::srv::moveJ_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<upper_body::srv::moveJ_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<upper_body::srv::moveJ_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace upper_body
{

namespace srv
{

inline void to_flow_style_yaml(
  const moveJ_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const moveJ_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveJ_Response & msg, bool use_flow_style = false)
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

}  // namespace upper_body

namespace rosidl_generator_traits
{

[[deprecated("use upper_body::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const upper_body::srv::moveJ_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  upper_body::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use upper_body::srv::to_yaml() instead")]]
inline std::string to_yaml(const upper_body::srv::moveJ_Response & msg)
{
  return upper_body::srv::to_yaml(msg);
}

template<>
inline const char * data_type<upper_body::srv::moveJ_Response>()
{
  return "upper_body::srv::moveJ_Response";
}

template<>
inline const char * name<upper_body::srv::moveJ_Response>()
{
  return "upper_body/srv/moveJ_Response";
}

template<>
struct has_fixed_size<upper_body::srv::moveJ_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<upper_body::srv::moveJ_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<upper_body::srv::moveJ_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<upper_body::srv::moveJ>()
{
  return "upper_body::srv::moveJ";
}

template<>
inline const char * name<upper_body::srv::moveJ>()
{
  return "upper_body/srv/moveJ";
}

template<>
struct has_fixed_size<upper_body::srv::moveJ>
  : std::integral_constant<
    bool,
    has_fixed_size<upper_body::srv::moveJ_Request>::value &&
    has_fixed_size<upper_body::srv::moveJ_Response>::value
  >
{
};

template<>
struct has_bounded_size<upper_body::srv::moveJ>
  : std::integral_constant<
    bool,
    has_bounded_size<upper_body::srv::moveJ_Request>::value &&
    has_bounded_size<upper_body::srv::moveJ_Response>::value
  >
{
};

template<>
struct is_service<upper_body::srv::moveJ>
  : std::true_type
{
};

template<>
struct is_service_request<upper_body::srv::moveJ_Request>
  : std::true_type
{
};

template<>
struct is_service_response<upper_body::srv::moveJ_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UPPER_BODY__SRV__DETAIL__MOVE_J__TRAITS_HPP_
