// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from teleop_msgs:msg/TeleopMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_msgs/msg/teleop_msg.hpp"


#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_MSG__BUILDER_HPP_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "teleop_msgs/msg/detail/teleop_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace teleop_msgs
{

namespace msg
{

namespace builder
{

class Init_TeleopMsg_joint_cmd
{
public:
  explicit Init_TeleopMsg_joint_cmd(::teleop_msgs::msg::TeleopMsg & msg)
  : msg_(msg)
  {}
  ::teleop_msgs::msg::TeleopMsg joint_cmd(::teleop_msgs::msg::TeleopMsg::_joint_cmd_type arg)
  {
    msg_.joint_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopMsg msg_;
};

class Init_TeleopMsg_anchors
{
public:
  explicit Init_TeleopMsg_anchors(::teleop_msgs::msg::TeleopMsg & msg)
  : msg_(msg)
  {}
  Init_TeleopMsg_joint_cmd anchors(::teleop_msgs::msg::TeleopMsg::_anchors_type arg)
  {
    msg_.anchors = std::move(arg);
    return Init_TeleopMsg_joint_cmd(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopMsg msg_;
};

class Init_TeleopMsg_world
{
public:
  explicit Init_TeleopMsg_world(::teleop_msgs::msg::TeleopMsg & msg)
  : msg_(msg)
  {}
  Init_TeleopMsg_anchors world(::teleop_msgs::msg::TeleopMsg::_world_type arg)
  {
    msg_.world = std::move(arg);
    return Init_TeleopMsg_anchors(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopMsg msg_;
};

class Init_TeleopMsg_header
{
public:
  Init_TeleopMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TeleopMsg_world header(::teleop_msgs::msg::TeleopMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TeleopMsg_world(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_msgs::msg::TeleopMsg>()
{
  return teleop_msgs::msg::builder::Init_TeleopMsg_header();
}

}  // namespace teleop_msgs

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_MSG__BUILDER_HPP_
