// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_msgs:msg/JointCmdNew.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "controller_msgs/msg/joint_cmd_new.hpp"


#ifndef CONTROLLER_MSGS__MSG__DETAIL__JOINT_CMD_NEW__BUILDER_HPP_
#define CONTROLLER_MSGS__MSG__DETAIL__JOINT_CMD_NEW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controller_msgs/msg/detail/joint_cmd_new__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace controller_msgs
{

namespace msg
{

namespace builder
{

class Init_JointCmdNew_parallel_solve_required
{
public:
  explicit Init_JointCmdNew_parallel_solve_required(::controller_msgs::msg::JointCmdNew & msg)
  : msg_(msg)
  {}
  ::controller_msgs::msg::JointCmdNew parallel_solve_required(::controller_msgs::msg::JointCmdNew::_parallel_solve_required_type arg)
  {
    msg_.parallel_solve_required = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_msgs::msg::JointCmdNew msg_;
};

class Init_JointCmdNew_na
{
public:
  explicit Init_JointCmdNew_na(::controller_msgs::msg::JointCmdNew & msg)
  : msg_(msg)
  {}
  Init_JointCmdNew_parallel_solve_required na(::controller_msgs::msg::JointCmdNew::_na_type arg)
  {
    msg_.na = std::move(arg);
    return Init_JointCmdNew_parallel_solve_required(msg_);
  }

private:
  ::controller_msgs::msg::JointCmdNew msg_;
};

class Init_JointCmdNew_mode
{
public:
  explicit Init_JointCmdNew_mode(::controller_msgs::msg::JointCmdNew & msg)
  : msg_(msg)
  {}
  Init_JointCmdNew_na mode(::controller_msgs::msg::JointCmdNew::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_JointCmdNew_na(msg_);
  }

private:
  ::controller_msgs::msg::JointCmdNew msg_;
};

class Init_JointCmdNew_kd
{
public:
  explicit Init_JointCmdNew_kd(::controller_msgs::msg::JointCmdNew & msg)
  : msg_(msg)
  {}
  Init_JointCmdNew_mode kd(::controller_msgs::msg::JointCmdNew::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_JointCmdNew_mode(msg_);
  }

private:
  ::controller_msgs::msg::JointCmdNew msg_;
};

class Init_JointCmdNew_kp
{
public:
  explicit Init_JointCmdNew_kp(::controller_msgs::msg::JointCmdNew & msg)
  : msg_(msg)
  {}
  Init_JointCmdNew_kd kp(::controller_msgs::msg::JointCmdNew::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_JointCmdNew_kd(msg_);
  }

private:
  ::controller_msgs::msg::JointCmdNew msg_;
};

class Init_JointCmdNew_tau
{
public:
  explicit Init_JointCmdNew_tau(::controller_msgs::msg::JointCmdNew & msg)
  : msg_(msg)
  {}
  Init_JointCmdNew_kp tau(::controller_msgs::msg::JointCmdNew::_tau_type arg)
  {
    msg_.tau = std::move(arg);
    return Init_JointCmdNew_kp(msg_);
  }

private:
  ::controller_msgs::msg::JointCmdNew msg_;
};

class Init_JointCmdNew_v
{
public:
  explicit Init_JointCmdNew_v(::controller_msgs::msg::JointCmdNew & msg)
  : msg_(msg)
  {}
  Init_JointCmdNew_tau v(::controller_msgs::msg::JointCmdNew::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_JointCmdNew_tau(msg_);
  }

private:
  ::controller_msgs::msg::JointCmdNew msg_;
};

class Init_JointCmdNew_q
{
public:
  explicit Init_JointCmdNew_q(::controller_msgs::msg::JointCmdNew & msg)
  : msg_(msg)
  {}
  Init_JointCmdNew_v q(::controller_msgs::msg::JointCmdNew::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_JointCmdNew_v(msg_);
  }

private:
  ::controller_msgs::msg::JointCmdNew msg_;
};

class Init_JointCmdNew_names
{
public:
  explicit Init_JointCmdNew_names(::controller_msgs::msg::JointCmdNew & msg)
  : msg_(msg)
  {}
  Init_JointCmdNew_q names(::controller_msgs::msg::JointCmdNew::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_JointCmdNew_q(msg_);
  }

private:
  ::controller_msgs::msg::JointCmdNew msg_;
};

class Init_JointCmdNew_header
{
public:
  Init_JointCmdNew_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointCmdNew_names header(::controller_msgs::msg::JointCmdNew::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointCmdNew_names(msg_);
  }

private:
  ::controller_msgs::msg::JointCmdNew msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_msgs::msg::JointCmdNew>()
{
  return controller_msgs::msg::builder::Init_JointCmdNew_header();
}

}  // namespace controller_msgs

#endif  // CONTROLLER_MSGS__MSG__DETAIL__JOINT_CMD_NEW__BUILDER_HPP_
