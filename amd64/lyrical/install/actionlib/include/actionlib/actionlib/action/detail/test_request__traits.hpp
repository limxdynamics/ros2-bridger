// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from actionlib:action/TestRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "actionlib/action/test_request.hpp"


#ifndef ACTIONLIB__ACTION__DETAIL__TEST_REQUEST__TRAITS_HPP_
#define ACTIONLIB__ACTION__DETAIL__TEST_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "actionlib/action/detail/test_request__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'delay_accept'
// Member 'delay_terminate'
// Member 'pause_status'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace actionlib
{

namespace action
{

inline void to_flow_style_yaml(
  const TestRequest_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: terminate_status
  {
    out << "terminate_status: ";
    rosidl_generator_traits::value_to_yaml(msg.terminate_status, out);
    out << ", ";
  }

  // member: ignore_cancel
  {
    out << "ignore_cancel: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore_cancel, out);
    out << ", ";
  }

  // member: result_text
  {
    out << "result_text: ";
    rosidl_generator_traits::value_to_yaml(msg.result_text, out);
    out << ", ";
  }

  // member: the_result
  {
    out << "the_result: ";
    rosidl_generator_traits::value_to_yaml(msg.the_result, out);
    out << ", ";
  }

  // member: is_simple_client
  {
    out << "is_simple_client: ";
    rosidl_generator_traits::value_to_yaml(msg.is_simple_client, out);
    out << ", ";
  }

  // member: delay_accept
  {
    out << "delay_accept: ";
    to_flow_style_yaml(msg.delay_accept, out);
    out << ", ";
  }

  // member: delay_terminate
  {
    out << "delay_terminate: ";
    to_flow_style_yaml(msg.delay_terminate, out);
    out << ", ";
  }

  // member: pause_status
  {
    out << "pause_status: ";
    to_flow_style_yaml(msg.pause_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestRequest_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: terminate_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "terminate_status: ";
    rosidl_generator_traits::value_to_yaml(msg.terminate_status, out);
    out << "\n";
  }

  // member: ignore_cancel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ignore_cancel: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore_cancel, out);
    out << "\n";
  }

  // member: result_text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_text: ";
    rosidl_generator_traits::value_to_yaml(msg.result_text, out);
    out << "\n";
  }

  // member: the_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "the_result: ";
    rosidl_generator_traits::value_to_yaml(msg.the_result, out);
    out << "\n";
  }

  // member: is_simple_client
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_simple_client: ";
    rosidl_generator_traits::value_to_yaml(msg.is_simple_client, out);
    out << "\n";
  }

  // member: delay_accept
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delay_accept:\n";
    to_block_style_yaml(msg.delay_accept, out, indentation + 2);
  }

  // member: delay_terminate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delay_terminate:\n";
    to_block_style_yaml(msg.delay_terminate, out, indentation + 2);
  }

  // member: pause_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pause_status:\n";
    to_block_style_yaml(msg.pause_status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestRequest_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, actionlib::action::TestRequest_Goal>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).terminate_status,
    std::forward<T>(msg).ignore_cancel,
    std::forward<T>(msg).result_text,
    std::forward<T>(msg).the_result,
    std::forward<T>(msg).is_simple_client,
    std::forward<T>(msg).delay_accept,
    std::forward<T>(msg).delay_terminate,
    std::forward<T>(msg).pause_status);
}

}  // namespace action

}  // namespace actionlib

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<actionlib::action::TestRequest_Goal>()
{
  return "actionlib::action::TestRequest_Goal";
}

template<>
constexpr const char * name<actionlib::action::TestRequest_Goal>()
{
  return "actionlib/action/TestRequest_Goal";
}

template<>
struct has_fixed_size<actionlib::action::TestRequest_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<actionlib::action::TestRequest_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<actionlib::action::TestRequest_Goal>
  : std::true_type {};

template<>
struct MessageTraits<actionlib::action::TestRequest_Goal>
{
  static constexpr std::size_t member_count = 8;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "terminate_status",
    "ignore_cancel",
    "result_text",
    "the_result",
    "is_simple_client",
    "delay_accept",
    "delay_terminate",
    "pause_status",
  };
};

}  // namespace rosidl_generator_traits

namespace actionlib
{

namespace action
{

inline void to_flow_style_yaml(
  const TestRequest_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: the_result
  {
    out << "the_result: ";
    rosidl_generator_traits::value_to_yaml(msg.the_result, out);
    out << ", ";
  }

  // member: is_simple_server
  {
    out << "is_simple_server: ";
    rosidl_generator_traits::value_to_yaml(msg.is_simple_server, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestRequest_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: the_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "the_result: ";
    rosidl_generator_traits::value_to_yaml(msg.the_result, out);
    out << "\n";
  }

  // member: is_simple_server
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_simple_server: ";
    rosidl_generator_traits::value_to_yaml(msg.is_simple_server, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestRequest_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, actionlib::action::TestRequest_Result>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).the_result,
    std::forward<T>(msg).is_simple_server);
}

}  // namespace action

}  // namespace actionlib

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<actionlib::action::TestRequest_Result>()
{
  return "actionlib::action::TestRequest_Result";
}

template<>
constexpr const char * name<actionlib::action::TestRequest_Result>()
{
  return "actionlib/action/TestRequest_Result";
}

template<>
struct has_fixed_size<actionlib::action::TestRequest_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<actionlib::action::TestRequest_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<actionlib::action::TestRequest_Result>
  : std::true_type {};

template<>
struct MessageTraits<actionlib::action::TestRequest_Result>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "the_result",
    "is_simple_server",
  };
};

}  // namespace rosidl_generator_traits

namespace actionlib
{

namespace action
{

inline void to_flow_style_yaml(
  const TestRequest_Feedback & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestRequest_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestRequest_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, actionlib::action::TestRequest_Feedback>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).structure_needs_at_least_one_member);
}

}  // namespace action

}  // namespace actionlib

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<actionlib::action::TestRequest_Feedback>()
{
  return "actionlib::action::TestRequest_Feedback";
}

template<>
constexpr const char * name<actionlib::action::TestRequest_Feedback>()
{
  return "actionlib/action/TestRequest_Feedback";
}

template<>
struct has_fixed_size<actionlib::action::TestRequest_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<actionlib::action::TestRequest_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<actionlib::action::TestRequest_Feedback>
  : std::true_type {};

template<>
struct MessageTraits<actionlib::action::TestRequest_Feedback>
{
  static constexpr std::size_t member_count = 1;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "structure_needs_at_least_one_member",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "actionlib/action/detail/test_request__traits.hpp"

namespace actionlib
{

namespace action
{

inline void to_flow_style_yaml(
  const TestRequest_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestRequest_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestRequest_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, actionlib::action::TestRequest_SendGoal_Request>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).goal_id,
    std::forward<T>(msg).goal);
}

}  // namespace action

}  // namespace actionlib

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<actionlib::action::TestRequest_SendGoal_Request>()
{
  return "actionlib::action::TestRequest_SendGoal_Request";
}

template<>
constexpr const char * name<actionlib::action::TestRequest_SendGoal_Request>()
{
  return "actionlib/action/TestRequest_SendGoal_Request";
}

template<>
struct has_fixed_size<actionlib::action::TestRequest_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<actionlib::action::TestRequest_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<actionlib::action::TestRequest_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<actionlib::action::TestRequest_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<actionlib::action::TestRequest_SendGoal_Request>
  : std::true_type {};

template<>
struct MessageTraits<actionlib::action::TestRequest_SendGoal_Request>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "goal_id",
    "goal",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace actionlib
{

namespace action
{

inline void to_flow_style_yaml(
  const TestRequest_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestRequest_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestRequest_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, actionlib::action::TestRequest_SendGoal_Response>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).accepted,
    std::forward<T>(msg).stamp);
}

}  // namespace action

}  // namespace actionlib

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<actionlib::action::TestRequest_SendGoal_Response>()
{
  return "actionlib::action::TestRequest_SendGoal_Response";
}

template<>
constexpr const char * name<actionlib::action::TestRequest_SendGoal_Response>()
{
  return "actionlib/action/TestRequest_SendGoal_Response";
}

template<>
struct has_fixed_size<actionlib::action::TestRequest_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<actionlib::action::TestRequest_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<actionlib::action::TestRequest_SendGoal_Response>
  : std::true_type {};

template<>
struct MessageTraits<actionlib::action::TestRequest_SendGoal_Response>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "accepted",
    "stamp",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace actionlib
{

namespace action
{

inline void to_flow_style_yaml(
  const TestRequest_SendGoal_Event & msg,
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
  const TestRequest_SendGoal_Event & msg,
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

inline std::string to_yaml(const TestRequest_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, actionlib::action::TestRequest_SendGoal_Event>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).info,
    std::forward<T>(msg).request,
    std::forward<T>(msg).response);
}

}  // namespace action

}  // namespace actionlib

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<actionlib::action::TestRequest_SendGoal_Event>()
{
  return "actionlib::action::TestRequest_SendGoal_Event";
}

template<>
constexpr const char * name<actionlib::action::TestRequest_SendGoal_Event>()
{
  return "actionlib/action/TestRequest_SendGoal_Event";
}

template<>
struct has_fixed_size<actionlib::action::TestRequest_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<actionlib::action::TestRequest_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<actionlib::action::TestRequest_SendGoal_Request>::value && has_bounded_size<actionlib::action::TestRequest_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<actionlib::action::TestRequest_SendGoal_Event>
  : std::true_type {};

template<>
struct MessageTraits<actionlib::action::TestRequest_SendGoal_Event>
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
constexpr const char * data_type<actionlib::action::TestRequest_SendGoal>()
{
  return "actionlib::action::TestRequest_SendGoal";
}

template<>
constexpr const char * name<actionlib::action::TestRequest_SendGoal>()
{
  return "actionlib/action/TestRequest_SendGoal";
}

template<>
struct has_fixed_size<actionlib::action::TestRequest_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<actionlib::action::TestRequest_SendGoal_Request>::value &&
    has_fixed_size<actionlib::action::TestRequest_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<actionlib::action::TestRequest_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<actionlib::action::TestRequest_SendGoal_Request>::value &&
    has_bounded_size<actionlib::action::TestRequest_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<actionlib::action::TestRequest_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<actionlib::action::TestRequest_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<actionlib::action::TestRequest_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace actionlib
{

namespace action
{

inline void to_flow_style_yaml(
  const TestRequest_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestRequest_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestRequest_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, actionlib::action::TestRequest_GetResult_Request>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).goal_id);
}

}  // namespace action

}  // namespace actionlib

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<actionlib::action::TestRequest_GetResult_Request>()
{
  return "actionlib::action::TestRequest_GetResult_Request";
}

template<>
constexpr const char * name<actionlib::action::TestRequest_GetResult_Request>()
{
  return "actionlib/action/TestRequest_GetResult_Request";
}

template<>
struct has_fixed_size<actionlib::action::TestRequest_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<actionlib::action::TestRequest_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<actionlib::action::TestRequest_GetResult_Request>
  : std::true_type {};

template<>
struct MessageTraits<actionlib::action::TestRequest_GetResult_Request>
{
  static constexpr std::size_t member_count = 1;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "goal_id",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "actionlib/action/detail/test_request__traits.hpp"

namespace actionlib
{

namespace action
{

inline void to_flow_style_yaml(
  const TestRequest_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestRequest_GetResult_Response & msg,
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

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestRequest_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, actionlib::action::TestRequest_GetResult_Response>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).status,
    std::forward<T>(msg).result);
}

}  // namespace action

}  // namespace actionlib

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<actionlib::action::TestRequest_GetResult_Response>()
{
  return "actionlib::action::TestRequest_GetResult_Response";
}

template<>
constexpr const char * name<actionlib::action::TestRequest_GetResult_Response>()
{
  return "actionlib/action/TestRequest_GetResult_Response";
}

template<>
struct has_fixed_size<actionlib::action::TestRequest_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<actionlib::action::TestRequest_Result>::value> {};

template<>
struct has_bounded_size<actionlib::action::TestRequest_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<actionlib::action::TestRequest_Result>::value> {};

template<>
struct is_message<actionlib::action::TestRequest_GetResult_Response>
  : std::true_type {};

template<>
struct MessageTraits<actionlib::action::TestRequest_GetResult_Response>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "status",
    "result",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace actionlib
{

namespace action
{

inline void to_flow_style_yaml(
  const TestRequest_GetResult_Event & msg,
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
  const TestRequest_GetResult_Event & msg,
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

inline std::string to_yaml(const TestRequest_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, actionlib::action::TestRequest_GetResult_Event>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).info,
    std::forward<T>(msg).request,
    std::forward<T>(msg).response);
}

}  // namespace action

}  // namespace actionlib

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<actionlib::action::TestRequest_GetResult_Event>()
{
  return "actionlib::action::TestRequest_GetResult_Event";
}

template<>
constexpr const char * name<actionlib::action::TestRequest_GetResult_Event>()
{
  return "actionlib/action/TestRequest_GetResult_Event";
}

template<>
struct has_fixed_size<actionlib::action::TestRequest_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<actionlib::action::TestRequest_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<actionlib::action::TestRequest_GetResult_Request>::value && has_bounded_size<actionlib::action::TestRequest_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<actionlib::action::TestRequest_GetResult_Event>
  : std::true_type {};

template<>
struct MessageTraits<actionlib::action::TestRequest_GetResult_Event>
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
constexpr const char * data_type<actionlib::action::TestRequest_GetResult>()
{
  return "actionlib::action::TestRequest_GetResult";
}

template<>
constexpr const char * name<actionlib::action::TestRequest_GetResult>()
{
  return "actionlib/action/TestRequest_GetResult";
}

template<>
struct has_fixed_size<actionlib::action::TestRequest_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<actionlib::action::TestRequest_GetResult_Request>::value &&
    has_fixed_size<actionlib::action::TestRequest_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<actionlib::action::TestRequest_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<actionlib::action::TestRequest_GetResult_Request>::value &&
    has_bounded_size<actionlib::action::TestRequest_GetResult_Response>::value
  >
{
};

template<>
struct is_service<actionlib::action::TestRequest_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<actionlib::action::TestRequest_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<actionlib::action::TestRequest_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "actionlib/action/detail/test_request__traits.hpp"

namespace actionlib
{

namespace action
{

inline void to_flow_style_yaml(
  const TestRequest_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestRequest_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestRequest_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, actionlib::action::TestRequest_FeedbackMessage>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).goal_id,
    std::forward<T>(msg).feedback);
}

}  // namespace action

}  // namespace actionlib

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<actionlib::action::TestRequest_FeedbackMessage>()
{
  return "actionlib::action::TestRequest_FeedbackMessage";
}

template<>
constexpr const char * name<actionlib::action::TestRequest_FeedbackMessage>()
{
  return "actionlib/action/TestRequest_FeedbackMessage";
}

template<>
struct has_fixed_size<actionlib::action::TestRequest_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<actionlib::action::TestRequest_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<actionlib::action::TestRequest_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<actionlib::action::TestRequest_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<actionlib::action::TestRequest_FeedbackMessage>
  : std::true_type {};

template<>
struct MessageTraits<actionlib::action::TestRequest_FeedbackMessage>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "goal_id",
    "feedback",
  };
};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<actionlib::action::TestRequest>()
{
  return "actionlib::action::TestRequest";
}

template<>
constexpr const char * name<actionlib::action::TestRequest>()
{
  return "actionlib/action/TestRequest";
}

template<>
struct is_action<actionlib::action::TestRequest>
  : std::true_type
{
};

template<>
struct is_action_goal<actionlib::action::TestRequest_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<actionlib::action::TestRequest_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<actionlib::action::TestRequest_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ACTIONLIB__ACTION__DETAIL__TEST_REQUEST__TRAITS_HPP_
