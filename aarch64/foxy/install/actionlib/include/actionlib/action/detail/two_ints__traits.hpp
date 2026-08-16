// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from actionlib:action/TwoInts.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB__ACTION__DETAIL__TWO_INTS__TRAITS_HPP_
#define ACTIONLIB__ACTION__DETAIL__TWO_INTS__TRAITS_HPP_

#include "actionlib/action/detail/two_ints__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<actionlib::action::TwoInts_Goal>()
{
  return "actionlib::action::TwoInts_Goal";
}

template<>
inline const char * name<actionlib::action::TwoInts_Goal>()
{
  return "actionlib/action/TwoInts_Goal";
}

template<>
struct has_fixed_size<actionlib::action::TwoInts_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<actionlib::action::TwoInts_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<actionlib::action::TwoInts_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<actionlib::action::TwoInts_Result>()
{
  return "actionlib::action::TwoInts_Result";
}

template<>
inline const char * name<actionlib::action::TwoInts_Result>()
{
  return "actionlib/action/TwoInts_Result";
}

template<>
struct has_fixed_size<actionlib::action::TwoInts_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<actionlib::action::TwoInts_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<actionlib::action::TwoInts_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<actionlib::action::TwoInts_Feedback>()
{
  return "actionlib::action::TwoInts_Feedback";
}

template<>
inline const char * name<actionlib::action::TwoInts_Feedback>()
{
  return "actionlib/action/TwoInts_Feedback";
}

template<>
struct has_fixed_size<actionlib::action::TwoInts_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<actionlib::action::TwoInts_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<actionlib::action::TwoInts_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "actionlib/action/detail/two_ints__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<actionlib::action::TwoInts_SendGoal_Request>()
{
  return "actionlib::action::TwoInts_SendGoal_Request";
}

template<>
inline const char * name<actionlib::action::TwoInts_SendGoal_Request>()
{
  return "actionlib/action/TwoInts_SendGoal_Request";
}

template<>
struct has_fixed_size<actionlib::action::TwoInts_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<actionlib::action::TwoInts_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<actionlib::action::TwoInts_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<actionlib::action::TwoInts_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<actionlib::action::TwoInts_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<actionlib::action::TwoInts_SendGoal_Response>()
{
  return "actionlib::action::TwoInts_SendGoal_Response";
}

template<>
inline const char * name<actionlib::action::TwoInts_SendGoal_Response>()
{
  return "actionlib/action/TwoInts_SendGoal_Response";
}

template<>
struct has_fixed_size<actionlib::action::TwoInts_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<actionlib::action::TwoInts_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<actionlib::action::TwoInts_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<actionlib::action::TwoInts_SendGoal>()
{
  return "actionlib::action::TwoInts_SendGoal";
}

template<>
inline const char * name<actionlib::action::TwoInts_SendGoal>()
{
  return "actionlib/action/TwoInts_SendGoal";
}

template<>
struct has_fixed_size<actionlib::action::TwoInts_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<actionlib::action::TwoInts_SendGoal_Request>::value &&
    has_fixed_size<actionlib::action::TwoInts_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<actionlib::action::TwoInts_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<actionlib::action::TwoInts_SendGoal_Request>::value &&
    has_bounded_size<actionlib::action::TwoInts_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<actionlib::action::TwoInts_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<actionlib::action::TwoInts_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<actionlib::action::TwoInts_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<actionlib::action::TwoInts_GetResult_Request>()
{
  return "actionlib::action::TwoInts_GetResult_Request";
}

template<>
inline const char * name<actionlib::action::TwoInts_GetResult_Request>()
{
  return "actionlib/action/TwoInts_GetResult_Request";
}

template<>
struct has_fixed_size<actionlib::action::TwoInts_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<actionlib::action::TwoInts_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<actionlib::action::TwoInts_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "actionlib/action/detail/two_ints__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<actionlib::action::TwoInts_GetResult_Response>()
{
  return "actionlib::action::TwoInts_GetResult_Response";
}

template<>
inline const char * name<actionlib::action::TwoInts_GetResult_Response>()
{
  return "actionlib/action/TwoInts_GetResult_Response";
}

template<>
struct has_fixed_size<actionlib::action::TwoInts_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<actionlib::action::TwoInts_Result>::value> {};

template<>
struct has_bounded_size<actionlib::action::TwoInts_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<actionlib::action::TwoInts_Result>::value> {};

template<>
struct is_message<actionlib::action::TwoInts_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<actionlib::action::TwoInts_GetResult>()
{
  return "actionlib::action::TwoInts_GetResult";
}

template<>
inline const char * name<actionlib::action::TwoInts_GetResult>()
{
  return "actionlib/action/TwoInts_GetResult";
}

template<>
struct has_fixed_size<actionlib::action::TwoInts_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<actionlib::action::TwoInts_GetResult_Request>::value &&
    has_fixed_size<actionlib::action::TwoInts_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<actionlib::action::TwoInts_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<actionlib::action::TwoInts_GetResult_Request>::value &&
    has_bounded_size<actionlib::action::TwoInts_GetResult_Response>::value
  >
{
};

template<>
struct is_service<actionlib::action::TwoInts_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<actionlib::action::TwoInts_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<actionlib::action::TwoInts_GetResult_Response>
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
// #include "actionlib/action/detail/two_ints__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<actionlib::action::TwoInts_FeedbackMessage>()
{
  return "actionlib::action::TwoInts_FeedbackMessage";
}

template<>
inline const char * name<actionlib::action::TwoInts_FeedbackMessage>()
{
  return "actionlib/action/TwoInts_FeedbackMessage";
}

template<>
struct has_fixed_size<actionlib::action::TwoInts_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<actionlib::action::TwoInts_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<actionlib::action::TwoInts_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<actionlib::action::TwoInts_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<actionlib::action::TwoInts_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<actionlib::action::TwoInts>
  : std::true_type
{
};

template<>
struct is_action_goal<actionlib::action::TwoInts_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<actionlib::action::TwoInts_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<actionlib::action::TwoInts_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ACTIONLIB__ACTION__DETAIL__TWO_INTS__TRAITS_HPP_
