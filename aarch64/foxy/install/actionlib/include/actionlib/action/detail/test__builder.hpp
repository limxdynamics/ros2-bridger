// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from actionlib:action/Test.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB__ACTION__DETAIL__TEST__BUILDER_HPP_
#define ACTIONLIB__ACTION__DETAIL__TEST__BUILDER_HPP_

#include "actionlib/action/detail/test__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace actionlib
{

namespace action
{

namespace builder
{

class Init_Test_Goal_goal
{
public:
  Init_Test_Goal_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::actionlib::action::Test_Goal goal(::actionlib::action::Test_Goal::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib::action::Test_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib::action::Test_Goal>()
{
  return actionlib::action::builder::Init_Test_Goal_goal();
}

}  // namespace actionlib


namespace actionlib
{

namespace action
{

namespace builder
{

class Init_Test_Result_result
{
public:
  Init_Test_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::actionlib::action::Test_Result result(::actionlib::action::Test_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib::action::Test_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib::action::Test_Result>()
{
  return actionlib::action::builder::Init_Test_Result_result();
}

}  // namespace actionlib


namespace actionlib
{

namespace action
{

namespace builder
{

class Init_Test_Feedback_feedback
{
public:
  Init_Test_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::actionlib::action::Test_Feedback feedback(::actionlib::action::Test_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib::action::Test_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib::action::Test_Feedback>()
{
  return actionlib::action::builder::Init_Test_Feedback_feedback();
}

}  // namespace actionlib


namespace actionlib
{

namespace action
{

namespace builder
{

class Init_Test_SendGoal_Request_goal
{
public:
  explicit Init_Test_SendGoal_Request_goal(::actionlib::action::Test_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::actionlib::action::Test_SendGoal_Request goal(::actionlib::action::Test_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib::action::Test_SendGoal_Request msg_;
};

class Init_Test_SendGoal_Request_goal_id
{
public:
  Init_Test_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Test_SendGoal_Request_goal goal_id(::actionlib::action::Test_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Test_SendGoal_Request_goal(msg_);
  }

private:
  ::actionlib::action::Test_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib::action::Test_SendGoal_Request>()
{
  return actionlib::action::builder::Init_Test_SendGoal_Request_goal_id();
}

}  // namespace actionlib


namespace actionlib
{

namespace action
{

namespace builder
{

class Init_Test_SendGoal_Response_stamp
{
public:
  explicit Init_Test_SendGoal_Response_stamp(::actionlib::action::Test_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::actionlib::action::Test_SendGoal_Response stamp(::actionlib::action::Test_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib::action::Test_SendGoal_Response msg_;
};

class Init_Test_SendGoal_Response_accepted
{
public:
  Init_Test_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Test_SendGoal_Response_stamp accepted(::actionlib::action::Test_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Test_SendGoal_Response_stamp(msg_);
  }

private:
  ::actionlib::action::Test_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib::action::Test_SendGoal_Response>()
{
  return actionlib::action::builder::Init_Test_SendGoal_Response_accepted();
}

}  // namespace actionlib


namespace actionlib
{

namespace action
{

namespace builder
{

class Init_Test_GetResult_Request_goal_id
{
public:
  Init_Test_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::actionlib::action::Test_GetResult_Request goal_id(::actionlib::action::Test_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib::action::Test_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib::action::Test_GetResult_Request>()
{
  return actionlib::action::builder::Init_Test_GetResult_Request_goal_id();
}

}  // namespace actionlib


namespace actionlib
{

namespace action
{

namespace builder
{

class Init_Test_GetResult_Response_result
{
public:
  explicit Init_Test_GetResult_Response_result(::actionlib::action::Test_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::actionlib::action::Test_GetResult_Response result(::actionlib::action::Test_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib::action::Test_GetResult_Response msg_;
};

class Init_Test_GetResult_Response_status
{
public:
  Init_Test_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Test_GetResult_Response_result status(::actionlib::action::Test_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Test_GetResult_Response_result(msg_);
  }

private:
  ::actionlib::action::Test_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib::action::Test_GetResult_Response>()
{
  return actionlib::action::builder::Init_Test_GetResult_Response_status();
}

}  // namespace actionlib


namespace actionlib
{

namespace action
{

namespace builder
{

class Init_Test_FeedbackMessage_feedback
{
public:
  explicit Init_Test_FeedbackMessage_feedback(::actionlib::action::Test_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::actionlib::action::Test_FeedbackMessage feedback(::actionlib::action::Test_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib::action::Test_FeedbackMessage msg_;
};

class Init_Test_FeedbackMessage_goal_id
{
public:
  Init_Test_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Test_FeedbackMessage_feedback goal_id(::actionlib::action::Test_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Test_FeedbackMessage_feedback(msg_);
  }

private:
  ::actionlib::action::Test_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib::action::Test_FeedbackMessage>()
{
  return actionlib::action::builder::Init_Test_FeedbackMessage_goal_id();
}

}  // namespace actionlib

#endif  // ACTIONLIB__ACTION__DETAIL__TEST__BUILDER_HPP_
