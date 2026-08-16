// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from teleop_msgs:msg/TeleopSessionState.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_SESSION_STATE__BUILDER_HPP_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_SESSION_STATE__BUILDER_HPP_

#include "teleop_msgs/msg/detail/teleop_session_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace teleop_msgs
{

namespace msg
{

namespace builder
{

class Init_TeleopSessionState_fault_detail
{
public:
  explicit Init_TeleopSessionState_fault_detail(::teleop_msgs::msg::TeleopSessionState & msg)
  : msg_(msg)
  {}
  ::teleop_msgs::msg::TeleopSessionState fault_detail(::teleop_msgs::msg::TeleopSessionState::_fault_detail_type arg)
  {
    msg_.fault_detail = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopSessionState msg_;
};

class Init_TeleopSessionState_fault_code
{
public:
  explicit Init_TeleopSessionState_fault_code(::teleop_msgs::msg::TeleopSessionState & msg)
  : msg_(msg)
  {}
  Init_TeleopSessionState_fault_detail fault_code(::teleop_msgs::msg::TeleopSessionState::_fault_code_type arg)
  {
    msg_.fault_code = std::move(arg);
    return Init_TeleopSessionState_fault_detail(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopSessionState msg_;
};

class Init_TeleopSessionState_retarget_required
{
public:
  explicit Init_TeleopSessionState_retarget_required(::teleop_msgs::msg::TeleopSessionState & msg)
  : msg_(msg)
  {}
  Init_TeleopSessionState_fault_code retarget_required(::teleop_msgs::msg::TeleopSessionState::_retarget_required_type arg)
  {
    msg_.retarget_required = std::move(arg);
    return Init_TeleopSessionState_fault_code(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopSessionState msg_;
};

class Init_TeleopSessionState_reanchor_epoch
{
public:
  explicit Init_TeleopSessionState_reanchor_epoch(::teleop_msgs::msg::TeleopSessionState & msg)
  : msg_(msg)
  {}
  Init_TeleopSessionState_retarget_required reanchor_epoch(::teleop_msgs::msg::TeleopSessionState::_reanchor_epoch_type arg)
  {
    msg_.reanchor_epoch = std::move(arg);
    return Init_TeleopSessionState_retarget_required(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopSessionState msg_;
};

class Init_TeleopSessionState_limbs
{
public:
  explicit Init_TeleopSessionState_limbs(::teleop_msgs::msg::TeleopSessionState & msg)
  : msg_(msg)
  {}
  Init_TeleopSessionState_reanchor_epoch limbs(::teleop_msgs::msg::TeleopSessionState::_limbs_type arg)
  {
    msg_.limbs = std::move(arg);
    return Init_TeleopSessionState_reanchor_epoch(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopSessionState msg_;
};

class Init_TeleopSessionState_mode
{
public:
  explicit Init_TeleopSessionState_mode(::teleop_msgs::msg::TeleopSessionState & msg)
  : msg_(msg)
  {}
  Init_TeleopSessionState_limbs mode(::teleop_msgs::msg::TeleopSessionState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_TeleopSessionState_limbs(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopSessionState msg_;
};

class Init_TeleopSessionState_session_state
{
public:
  explicit Init_TeleopSessionState_session_state(::teleop_msgs::msg::TeleopSessionState & msg)
  : msg_(msg)
  {}
  Init_TeleopSessionState_mode session_state(::teleop_msgs::msg::TeleopSessionState::_session_state_type arg)
  {
    msg_.session_state = std::move(arg);
    return Init_TeleopSessionState_mode(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopSessionState msg_;
};

class Init_TeleopSessionState_schema_version
{
public:
  explicit Init_TeleopSessionState_schema_version(::teleop_msgs::msg::TeleopSessionState & msg)
  : msg_(msg)
  {}
  Init_TeleopSessionState_session_state schema_version(::teleop_msgs::msg::TeleopSessionState::_schema_version_type arg)
  {
    msg_.schema_version = std::move(arg);
    return Init_TeleopSessionState_session_state(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopSessionState msg_;
};

class Init_TeleopSessionState_header
{
public:
  Init_TeleopSessionState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TeleopSessionState_schema_version header(::teleop_msgs::msg::TeleopSessionState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TeleopSessionState_schema_version(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopSessionState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_msgs::msg::TeleopSessionState>()
{
  return teleop_msgs::msg::builder::Init_TeleopSessionState_header();
}

}  // namespace teleop_msgs

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_SESSION_STATE__BUILDER_HPP_
