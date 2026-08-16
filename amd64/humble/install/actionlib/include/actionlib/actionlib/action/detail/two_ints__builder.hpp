// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from actionlib:action/TwoInts.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB__ACTION__DETAIL__TWO_INTS__BUILDER_HPP_
#define ACTIONLIB__ACTION__DETAIL__TWO_INTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "actionlib/action/detail/two_ints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace actionlib
{

namespace action
{

namespace builder
{

class Init_TwoInts_Goal_b
{
public:
  explicit Init_TwoInts_Goal_b(::actionlib::action::TwoInts_Goal & msg)
  : msg_(msg)
  {}
  ::actionlib::action::TwoInts_Goal b(::actionlib::action::TwoInts_Goal::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib::action::TwoInts_Goal msg_;
};

class Init_TwoInts_Goal_a
{
public:
  Init_TwoInts_Goal_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwoInts_Goal_b a(::actionlib::action::TwoInts_Goal::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_TwoInts_Goal_b(msg_);
  }

private:
  ::actionlib::action::TwoInts_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib::action::TwoInts_Goal>()
{
  return actionlib::action::builder::Init_TwoInts_Goal_a();
}

}  // namespace actionlib


namespace actionlib
{

namespace action
{

namespace builder
{

class Init_TwoInts_Result_sum
{
public:
  Init_TwoInts_Result_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::actionlib::action::TwoInts_Result sum(::actionlib::action::TwoInts_Result::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib::action::TwoInts_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib::action::TwoInts_Result>()
{
  return actionlib::action::builder::Init_TwoInts_Result_sum();
}

}  // namespace actionlib


namespace actionlib
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib::action::TwoInts_Feedback>()
{
  return ::actionlib::action::TwoInts_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace actionlib


namespace actionlib
{

namespace action
{

namespace builder
{

class Init_TwoInts_SendGoal_Request_goal
{
public:
  explicit Init_TwoInts_SendGoal_Request_goal(::actionlib::action::TwoInts_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::actionlib::action::TwoInts_SendGoal_Request goal(::actionlib::action::TwoInts_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib::action::TwoInts_SendGoal_Request msg_;
};

class Init_TwoInts_SendGoal_Request_goal_id
{
public:
  Init_TwoInts_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwoInts_SendGoal_Request_goal goal_id(::actionlib::action::TwoInts_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TwoInts_SendGoal_Request_goal(msg_);
  }

private:
  ::actionlib::action::TwoInts_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib::action::TwoInts_SendGoal_Request>()
{
  return actionlib::action::builder::Init_TwoInts_SendGoal_Request_goal_id();
}

}  // namespace actionlib


namespace actionlib
{

namespace action
{

namespace builder
{

class Init_TwoInts_SendGoal_Response_stamp
{
public:
  explicit Init_TwoInts_SendGoal_Response_stamp(::actionlib::action::TwoInts_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::actionlib::action::TwoInts_SendGoal_Response stamp(::actionlib::action::TwoInts_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib::action::TwoInts_SendGoal_Response msg_;
};

class Init_TwoInts_SendGoal_Response_accepted
{
public:
  Init_TwoInts_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwoInts_SendGoal_Response_stamp accepted(::actionlib::action::TwoInts_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_TwoInts_SendGoal_Response_stamp(msg_);
  }

private:
  ::actionlib::action::TwoInts_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib::action::TwoInts_SendGoal_Response>()
{
  return actionlib::action::builder::Init_TwoInts_SendGoal_Response_accepted();
}

}  // namespace actionlib


namespace actionlib
{

namespace action
{

namespace builder
{

class Init_TwoInts_GetResult_Request_goal_id
{
public:
  Init_TwoInts_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::actionlib::action::TwoInts_GetResult_Request goal_id(::actionlib::action::TwoInts_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib::action::TwoInts_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib::action::TwoInts_GetResult_Request>()
{
  return actionlib::action::builder::Init_TwoInts_GetResult_Request_goal_id();
}

}  // namespace actionlib


namespace actionlib
{

namespace action
{

namespace builder
{

class Init_TwoInts_GetResult_Response_result
{
public:
  explicit Init_TwoInts_GetResult_Response_result(::actionlib::action::TwoInts_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::actionlib::action::TwoInts_GetResult_Response result(::actionlib::action::TwoInts_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib::action::TwoInts_GetResult_Response msg_;
};

class Init_TwoInts_GetResult_Response_status
{
public:
  Init_TwoInts_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwoInts_GetResult_Response_result status(::actionlib::action::TwoInts_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TwoInts_GetResult_Response_result(msg_);
  }

private:
  ::actionlib::action::TwoInts_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib::action::TwoInts_GetResult_Response>()
{
  return actionlib::action::builder::Init_TwoInts_GetResult_Response_status();
}

}  // namespace actionlib


namespace actionlib
{

namespace action
{

namespace builder
{

class Init_TwoInts_FeedbackMessage_feedback
{
public:
  explicit Init_TwoInts_FeedbackMessage_feedback(::actionlib::action::TwoInts_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::actionlib::action::TwoInts_FeedbackMessage feedback(::actionlib::action::TwoInts_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib::action::TwoInts_FeedbackMessage msg_;
};

class Init_TwoInts_FeedbackMessage_goal_id
{
public:
  Init_TwoInts_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwoInts_FeedbackMessage_feedback goal_id(::actionlib::action::TwoInts_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TwoInts_FeedbackMessage_feedback(msg_);
  }

private:
  ::actionlib::action::TwoInts_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib::action::TwoInts_FeedbackMessage>()
{
  return actionlib::action::builder::Init_TwoInts_FeedbackMessage_goal_id();
}

}  // namespace actionlib

#endif  // ACTIONLIB__ACTION__DETAIL__TWO_INTS__BUILDER_HPP_
