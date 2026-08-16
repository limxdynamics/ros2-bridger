// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from actionlib:action/TestRequest.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB__ACTION__DETAIL__TEST_REQUEST__BUILDER_HPP_
#define ACTIONLIB__ACTION__DETAIL__TEST_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "actionlib/action/detail/test_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace actionlib
{

namespace action
{

namespace builder
{

class Init_TestRequest_Goal_pause_status
{
public:
  explicit Init_TestRequest_Goal_pause_status(::actionlib::action::TestRequest_Goal & msg)
  : msg_(msg)
  {}
  ::actionlib::action::TestRequest_Goal pause_status(::actionlib::action::TestRequest_Goal::_pause_status_type arg)
  {
    msg_.pause_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib::action::TestRequest_Goal msg_;
};

class Init_TestRequest_Goal_delay_terminate
{
public:
  explicit Init_TestRequest_Goal_delay_terminate(::actionlib::action::TestRequest_Goal & msg)
  : msg_(msg)
  {}
  Init_TestRequest_Goal_pause_status delay_terminate(::actionlib::action::TestRequest_Goal::_delay_terminate_type arg)
  {
    msg_.delay_terminate = std::move(arg);
    return Init_TestRequest_Goal_pause_status(msg_);
  }

private:
  ::actionlib::action::TestRequest_Goal msg_;
};

class Init_TestRequest_Goal_delay_accept
{
public:
  explicit Init_TestRequest_Goal_delay_accept(::actionlib::action::TestRequest_Goal & msg)
  : msg_(msg)
  {}
  Init_TestRequest_Goal_delay_terminate delay_accept(::actionlib::action::TestRequest_Goal::_delay_accept_type arg)
  {
    msg_.delay_accept = std::move(arg);
    return Init_TestRequest_Goal_delay_terminate(msg_);
  }

private:
  ::actionlib::action::TestRequest_Goal msg_;
};

class Init_TestRequest_Goal_is_simple_client
{
public:
  explicit Init_TestRequest_Goal_is_simple_client(::actionlib::action::TestRequest_Goal & msg)
  : msg_(msg)
  {}
  Init_TestRequest_Goal_delay_accept is_simple_client(::actionlib::action::TestRequest_Goal::_is_simple_client_type arg)
  {
    msg_.is_simple_client = std::move(arg);
    return Init_TestRequest_Goal_delay_accept(msg_);
  }

private:
  ::actionlib::action::TestRequest_Goal msg_;
};

class Init_TestRequest_Goal_the_result
{
public:
  explicit Init_TestRequest_Goal_the_result(::actionlib::action::TestRequest_Goal & msg)
  : msg_(msg)
  {}
  Init_TestRequest_Goal_is_simple_client the_result(::actionlib::action::TestRequest_Goal::_the_result_type arg)
  {
    msg_.the_result = std::move(arg);
    return Init_TestRequest_Goal_is_simple_client(msg_);
  }

private:
  ::actionlib::action::TestRequest_Goal msg_;
};

class Init_TestRequest_Goal_result_text
{
public:
  explicit Init_TestRequest_Goal_result_text(::actionlib::action::TestRequest_Goal & msg)
  : msg_(msg)
  {}
  Init_TestRequest_Goal_the_result result_text(::actionlib::action::TestRequest_Goal::_result_text_type arg)
  {
    msg_.result_text = std::move(arg);
    return Init_TestRequest_Goal_the_result(msg_);
  }

private:
  ::actionlib::action::TestRequest_Goal msg_;
};

class Init_TestRequest_Goal_ignore_cancel
{
public:
  explicit Init_TestRequest_Goal_ignore_cancel(::actionlib::action::TestRequest_Goal & msg)
  : msg_(msg)
  {}
  Init_TestRequest_Goal_result_text ignore_cancel(::actionlib::action::TestRequest_Goal::_ignore_cancel_type arg)
  {
    msg_.ignore_cancel = std::move(arg);
    return Init_TestRequest_Goal_result_text(msg_);
  }

private:
  ::actionlib::action::TestRequest_Goal msg_;
};

class Init_TestRequest_Goal_terminate_status
{
public:
  Init_TestRequest_Goal_terminate_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestRequest_Goal_ignore_cancel terminate_status(::actionlib::action::TestRequest_Goal::_terminate_status_type arg)
  {
    msg_.terminate_status = std::move(arg);
    return Init_TestRequest_Goal_ignore_cancel(msg_);
  }

private:
  ::actionlib::action::TestRequest_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib::action::TestRequest_Goal>()
{
  return actionlib::action::builder::Init_TestRequest_Goal_terminate_status();
}

}  // namespace actionlib


namespace actionlib
{

namespace action
{

namespace builder
{

class Init_TestRequest_Result_is_simple_server
{
public:
  explicit Init_TestRequest_Result_is_simple_server(::actionlib::action::TestRequest_Result & msg)
  : msg_(msg)
  {}
  ::actionlib::action::TestRequest_Result is_simple_server(::actionlib::action::TestRequest_Result::_is_simple_server_type arg)
  {
    msg_.is_simple_server = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib::action::TestRequest_Result msg_;
};

class Init_TestRequest_Result_the_result
{
public:
  Init_TestRequest_Result_the_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestRequest_Result_is_simple_server the_result(::actionlib::action::TestRequest_Result::_the_result_type arg)
  {
    msg_.the_result = std::move(arg);
    return Init_TestRequest_Result_is_simple_server(msg_);
  }

private:
  ::actionlib::action::TestRequest_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib::action::TestRequest_Result>()
{
  return actionlib::action::builder::Init_TestRequest_Result_the_result();
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
auto build<::actionlib::action::TestRequest_Feedback>()
{
  return ::actionlib::action::TestRequest_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace actionlib


namespace actionlib
{

namespace action
{

namespace builder
{

class Init_TestRequest_SendGoal_Request_goal
{
public:
  explicit Init_TestRequest_SendGoal_Request_goal(::actionlib::action::TestRequest_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::actionlib::action::TestRequest_SendGoal_Request goal(::actionlib::action::TestRequest_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib::action::TestRequest_SendGoal_Request msg_;
};

class Init_TestRequest_SendGoal_Request_goal_id
{
public:
  Init_TestRequest_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestRequest_SendGoal_Request_goal goal_id(::actionlib::action::TestRequest_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TestRequest_SendGoal_Request_goal(msg_);
  }

private:
  ::actionlib::action::TestRequest_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib::action::TestRequest_SendGoal_Request>()
{
  return actionlib::action::builder::Init_TestRequest_SendGoal_Request_goal_id();
}

}  // namespace actionlib


namespace actionlib
{

namespace action
{

namespace builder
{

class Init_TestRequest_SendGoal_Response_stamp
{
public:
  explicit Init_TestRequest_SendGoal_Response_stamp(::actionlib::action::TestRequest_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::actionlib::action::TestRequest_SendGoal_Response stamp(::actionlib::action::TestRequest_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib::action::TestRequest_SendGoal_Response msg_;
};

class Init_TestRequest_SendGoal_Response_accepted
{
public:
  Init_TestRequest_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestRequest_SendGoal_Response_stamp accepted(::actionlib::action::TestRequest_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_TestRequest_SendGoal_Response_stamp(msg_);
  }

private:
  ::actionlib::action::TestRequest_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib::action::TestRequest_SendGoal_Response>()
{
  return actionlib::action::builder::Init_TestRequest_SendGoal_Response_accepted();
}

}  // namespace actionlib


namespace actionlib
{

namespace action
{

namespace builder
{

class Init_TestRequest_GetResult_Request_goal_id
{
public:
  Init_TestRequest_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::actionlib::action::TestRequest_GetResult_Request goal_id(::actionlib::action::TestRequest_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib::action::TestRequest_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib::action::TestRequest_GetResult_Request>()
{
  return actionlib::action::builder::Init_TestRequest_GetResult_Request_goal_id();
}

}  // namespace actionlib


namespace actionlib
{

namespace action
{

namespace builder
{

class Init_TestRequest_GetResult_Response_result
{
public:
  explicit Init_TestRequest_GetResult_Response_result(::actionlib::action::TestRequest_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::actionlib::action::TestRequest_GetResult_Response result(::actionlib::action::TestRequest_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib::action::TestRequest_GetResult_Response msg_;
};

class Init_TestRequest_GetResult_Response_status
{
public:
  Init_TestRequest_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestRequest_GetResult_Response_result status(::actionlib::action::TestRequest_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TestRequest_GetResult_Response_result(msg_);
  }

private:
  ::actionlib::action::TestRequest_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib::action::TestRequest_GetResult_Response>()
{
  return actionlib::action::builder::Init_TestRequest_GetResult_Response_status();
}

}  // namespace actionlib


namespace actionlib
{

namespace action
{

namespace builder
{

class Init_TestRequest_FeedbackMessage_feedback
{
public:
  explicit Init_TestRequest_FeedbackMessage_feedback(::actionlib::action::TestRequest_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::actionlib::action::TestRequest_FeedbackMessage feedback(::actionlib::action::TestRequest_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib::action::TestRequest_FeedbackMessage msg_;
};

class Init_TestRequest_FeedbackMessage_goal_id
{
public:
  Init_TestRequest_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestRequest_FeedbackMessage_feedback goal_id(::actionlib::action::TestRequest_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TestRequest_FeedbackMessage_feedback(msg_);
  }

private:
  ::actionlib::action::TestRequest_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib::action::TestRequest_FeedbackMessage>()
{
  return actionlib::action::builder::Init_TestRequest_FeedbackMessage_goal_id();
}

}  // namespace actionlib

#endif  // ACTIONLIB__ACTION__DETAIL__TEST_REQUEST__BUILDER_HPP_
