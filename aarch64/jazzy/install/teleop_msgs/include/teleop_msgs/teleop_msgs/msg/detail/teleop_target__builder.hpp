// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from teleop_msgs:msg/TeleopTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_msgs/msg/teleop_target.hpp"


#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_TARGET__BUILDER_HPP_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "teleop_msgs/msg/detail/teleop_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace teleop_msgs
{

namespace msg
{

namespace builder
{

class Init_TeleopTarget_source_stamp
{
public:
  explicit Init_TeleopTarget_source_stamp(::teleop_msgs::msg::TeleopTarget & msg)
  : msg_(msg)
  {}
  ::teleop_msgs::msg::TeleopTarget source_stamp(::teleop_msgs::msg::TeleopTarget::_source_stamp_type arg)
  {
    msg_.source_stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopTarget msg_;
};

class Init_TeleopTarget_validity
{
public:
  explicit Init_TeleopTarget_validity(::teleop_msgs::msg::TeleopTarget & msg)
  : msg_(msg)
  {}
  Init_TeleopTarget_source_stamp validity(::teleop_msgs::msg::TeleopTarget::_validity_type arg)
  {
    msg_.validity = std::move(arg);
    return Init_TeleopTarget_source_stamp(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopTarget msg_;
};

class Init_TeleopTarget_pose
{
public:
  explicit Init_TeleopTarget_pose(::teleop_msgs::msg::TeleopTarget & msg)
  : msg_(msg)
  {}
  Init_TeleopTarget_validity pose(::teleop_msgs::msg::TeleopTarget::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_TeleopTarget_validity(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopTarget msg_;
};

class Init_TeleopTarget_name
{
public:
  Init_TeleopTarget_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TeleopTarget_pose name(::teleop_msgs::msg::TeleopTarget::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_TeleopTarget_pose(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopTarget msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_msgs::msg::TeleopTarget>()
{
  return teleop_msgs::msg::builder::Init_TeleopTarget_name();
}

}  // namespace teleop_msgs

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_TARGET__BUILDER_HPP_
