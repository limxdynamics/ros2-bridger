// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_msgs:msg/JointCmdLimx.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "controller_msgs/msg/joint_cmd_limx.hpp"


#ifndef CONTROLLER_MSGS__MSG__DETAIL__JOINT_CMD_LIMX__BUILDER_HPP_
#define CONTROLLER_MSGS__MSG__DETAIL__JOINT_CMD_LIMX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controller_msgs/msg/detail/joint_cmd_limx__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace controller_msgs
{

namespace msg
{

namespace builder
{

class Init_JointCmdLimx_parallel_solver_mode
{
public:
  explicit Init_JointCmdLimx_parallel_solver_mode(::controller_msgs::msg::JointCmdLimx & msg)
  : msg_(msg)
  {}
  ::controller_msgs::msg::JointCmdLimx parallel_solver_mode(::controller_msgs::msg::JointCmdLimx::_parallel_solver_mode_type arg)
  {
    msg_.parallel_solver_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_msgs::msg::JointCmdLimx msg_;
};

class Init_JointCmdLimx_na
{
public:
  explicit Init_JointCmdLimx_na(::controller_msgs::msg::JointCmdLimx & msg)
  : msg_(msg)
  {}
  Init_JointCmdLimx_parallel_solver_mode na(::controller_msgs::msg::JointCmdLimx::_na_type arg)
  {
    msg_.na = std::move(arg);
    return Init_JointCmdLimx_parallel_solver_mode(msg_);
  }

private:
  ::controller_msgs::msg::JointCmdLimx msg_;
};

class Init_JointCmdLimx_mode
{
public:
  explicit Init_JointCmdLimx_mode(::controller_msgs::msg::JointCmdLimx & msg)
  : msg_(msg)
  {}
  Init_JointCmdLimx_na mode(::controller_msgs::msg::JointCmdLimx::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_JointCmdLimx_na(msg_);
  }

private:
  ::controller_msgs::msg::JointCmdLimx msg_;
};

class Init_JointCmdLimx_kd
{
public:
  explicit Init_JointCmdLimx_kd(::controller_msgs::msg::JointCmdLimx & msg)
  : msg_(msg)
  {}
  Init_JointCmdLimx_mode kd(::controller_msgs::msg::JointCmdLimx::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_JointCmdLimx_mode(msg_);
  }

private:
  ::controller_msgs::msg::JointCmdLimx msg_;
};

class Init_JointCmdLimx_kp
{
public:
  explicit Init_JointCmdLimx_kp(::controller_msgs::msg::JointCmdLimx & msg)
  : msg_(msg)
  {}
  Init_JointCmdLimx_kd kp(::controller_msgs::msg::JointCmdLimx::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_JointCmdLimx_kd(msg_);
  }

private:
  ::controller_msgs::msg::JointCmdLimx msg_;
};

class Init_JointCmdLimx_tau
{
public:
  explicit Init_JointCmdLimx_tau(::controller_msgs::msg::JointCmdLimx & msg)
  : msg_(msg)
  {}
  Init_JointCmdLimx_kp tau(::controller_msgs::msg::JointCmdLimx::_tau_type arg)
  {
    msg_.tau = std::move(arg);
    return Init_JointCmdLimx_kp(msg_);
  }

private:
  ::controller_msgs::msg::JointCmdLimx msg_;
};

class Init_JointCmdLimx_v
{
public:
  explicit Init_JointCmdLimx_v(::controller_msgs::msg::JointCmdLimx & msg)
  : msg_(msg)
  {}
  Init_JointCmdLimx_tau v(::controller_msgs::msg::JointCmdLimx::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_JointCmdLimx_tau(msg_);
  }

private:
  ::controller_msgs::msg::JointCmdLimx msg_;
};

class Init_JointCmdLimx_q
{
public:
  explicit Init_JointCmdLimx_q(::controller_msgs::msg::JointCmdLimx & msg)
  : msg_(msg)
  {}
  Init_JointCmdLimx_v q(::controller_msgs::msg::JointCmdLimx::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_JointCmdLimx_v(msg_);
  }

private:
  ::controller_msgs::msg::JointCmdLimx msg_;
};

class Init_JointCmdLimx_names
{
public:
  explicit Init_JointCmdLimx_names(::controller_msgs::msg::JointCmdLimx & msg)
  : msg_(msg)
  {}
  Init_JointCmdLimx_q names(::controller_msgs::msg::JointCmdLimx::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_JointCmdLimx_q(msg_);
  }

private:
  ::controller_msgs::msg::JointCmdLimx msg_;
};

class Init_JointCmdLimx_header
{
public:
  Init_JointCmdLimx_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointCmdLimx_names header(::controller_msgs::msg::JointCmdLimx::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointCmdLimx_names(msg_);
  }

private:
  ::controller_msgs::msg::JointCmdLimx msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_msgs::msg::JointCmdLimx>()
{
  return controller_msgs::msg::builder::Init_JointCmdLimx_header();
}

}  // namespace controller_msgs

#endif  // CONTROLLER_MSGS__MSG__DETAIL__JOINT_CMD_LIMX__BUILDER_HPP_
