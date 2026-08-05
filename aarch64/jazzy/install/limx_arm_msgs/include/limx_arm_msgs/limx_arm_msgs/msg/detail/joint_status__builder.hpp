// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from limx_arm_msgs:msg/JointStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "limx_arm_msgs/msg/joint_status.hpp"


#ifndef LIMX_ARM_MSGS__MSG__DETAIL__JOINT_STATUS__BUILDER_HPP_
#define LIMX_ARM_MSGS__MSG__DETAIL__JOINT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "limx_arm_msgs/msg/detail/joint_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace limx_arm_msgs
{

namespace msg
{

namespace builder
{

class Init_JointStatus_log_path
{
public:
  explicit Init_JointStatus_log_path(::limx_arm_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  ::limx_arm_msgs::msg::JointStatus log_path(::limx_arm_msgs::msg::JointStatus::_log_path_type arg)
  {
    msg_.log_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limx_arm_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_play_state
{
public:
  explicit Init_JointStatus_play_state(::limx_arm_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_log_path play_state(::limx_arm_msgs::msg::JointStatus::_play_state_type arg)
  {
    msg_.play_state = std::move(arg);
    return Init_JointStatus_log_path(msg_);
  }

private:
  ::limx_arm_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_state
{
public:
  explicit Init_JointStatus_state(::limx_arm_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_play_state state(::limx_arm_msgs::msg::JointStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_JointStatus_play_state(msg_);
  }

private:
  ::limx_arm_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_mode
{
public:
  explicit Init_JointStatus_mode(::limx_arm_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_state mode(::limx_arm_msgs::msg::JointStatus::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_JointStatus_state(msg_);
  }

private:
  ::limx_arm_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_tool_size
{
public:
  explicit Init_JointStatus_tool_size(::limx_arm_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_mode tool_size(::limx_arm_msgs::msg::JointStatus::_tool_size_type arg)
  {
    msg_.tool_size = std::move(arg);
    return Init_JointStatus_mode(msg_);
  }

private:
  ::limx_arm_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_limit_max
{
public:
  explicit Init_JointStatus_limit_max(::limx_arm_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_tool_size limit_max(::limx_arm_msgs::msg::JointStatus::_limit_max_type arg)
  {
    msg_.limit_max = std::move(arg);
    return Init_JointStatus_tool_size(msg_);
  }

private:
  ::limx_arm_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_limit_min
{
public:
  explicit Init_JointStatus_limit_min(::limx_arm_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_limit_max limit_min(::limx_arm_msgs::msg::JointStatus::_limit_min_type arg)
  {
    msg_.limit_min = std::move(arg);
    return Init_JointStatus_limit_max(msg_);
  }

private:
  ::limx_arm_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_zero
{
public:
  explicit Init_JointStatus_zero(::limx_arm_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_limit_min zero(::limx_arm_msgs::msg::JointStatus::_zero_type arg)
  {
    msg_.zero = std::move(arg);
    return Init_JointStatus_limit_min(msg_);
  }

private:
  ::limx_arm_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_error
{
public:
  explicit Init_JointStatus_error(::limx_arm_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_zero error(::limx_arm_msgs::msg::JointStatus::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_JointStatus_zero(msg_);
  }

private:
  ::limx_arm_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_enable
{
public:
  explicit Init_JointStatus_enable(::limx_arm_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_error enable(::limx_arm_msgs::msg::JointStatus::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_JointStatus_error(msg_);
  }

private:
  ::limx_arm_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_run_time
{
public:
  explicit Init_JointStatus_run_time(::limx_arm_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_enable run_time(::limx_arm_msgs::msg::JointStatus::_run_time_type arg)
  {
    msg_.run_time = std::move(arg);
    return Init_JointStatus_enable(msg_);
  }

private:
  ::limx_arm_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_deviceid
{
public:
  explicit Init_JointStatus_deviceid(::limx_arm_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_run_time deviceid(::limx_arm_msgs::msg::JointStatus::_deviceid_type arg)
  {
    msg_.deviceid = std::move(arg);
    return Init_JointStatus_run_time(msg_);
  }

private:
  ::limx_arm_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_stamp
{
public:
  Init_JointStatus_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointStatus_deviceid stamp(::limx_arm_msgs::msg::JointStatus::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_JointStatus_deviceid(msg_);
  }

private:
  ::limx_arm_msgs::msg::JointStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::limx_arm_msgs::msg::JointStatus>()
{
  return limx_arm_msgs::msg::builder::Init_JointStatus_stamp();
}

}  // namespace limx_arm_msgs

#endif  // LIMX_ARM_MSGS__MSG__DETAIL__JOINT_STATUS__BUILDER_HPP_
