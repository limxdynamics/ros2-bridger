// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from teleop_msgs:msg/KeyPoint.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__KEY_POINT__BUILDER_HPP_
#define TELEOP_MSGS__MSG__DETAIL__KEY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "teleop_msgs/msg/detail/key_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace teleop_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyPoint_pose
{
public:
  explicit Init_KeyPoint_pose(::teleop_msgs::msg::KeyPoint & msg)
  : msg_(msg)
  {}
  ::teleop_msgs::msg::KeyPoint pose(::teleop_msgs::msg::KeyPoint::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_msgs::msg::KeyPoint msg_;
};

class Init_KeyPoint_name
{
public:
  Init_KeyPoint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyPoint_pose name(::teleop_msgs::msg::KeyPoint::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_KeyPoint_pose(msg_);
  }

private:
  ::teleop_msgs::msg::KeyPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_msgs::msg::KeyPoint>()
{
  return teleop_msgs::msg::builder::Init_KeyPoint_name();
}

}  // namespace teleop_msgs

#endif  // TELEOP_MSGS__MSG__DETAIL__KEY_POINT__BUILDER_HPP_
