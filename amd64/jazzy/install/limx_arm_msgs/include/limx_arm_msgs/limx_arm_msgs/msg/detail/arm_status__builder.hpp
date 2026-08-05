// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from limx_arm_msgs:msg/arm_status.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "limx_arm_msgs/msg/arm_status.hpp"


#ifndef LIMX_ARM_MSGS__MSG__DETAIL__ARM_STATUS__BUILDER_HPP_
#define LIMX_ARM_MSGS__MSG__DETAIL__ARM_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "limx_arm_msgs/msg/detail/arm_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace limx_arm_msgs
{

namespace msg
{

namespace builder
{

class Init_arm_status_ik_statu
{
public:
  explicit Init_arm_status_ik_statu(::limx_arm_msgs::msg::arm_status & msg)
  : msg_(msg)
  {}
  ::limx_arm_msgs::msg::arm_status ik_statu(::limx_arm_msgs::msg::arm_status::_ik_statu_type arg)
  {
    msg_.ik_statu = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limx_arm_msgs::msg::arm_status msg_;
};

class Init_arm_status_right_endEffector
{
public:
  explicit Init_arm_status_right_endEffector(::limx_arm_msgs::msg::arm_status & msg)
  : msg_(msg)
  {}
  Init_arm_status_ik_statu right_endEffector(::limx_arm_msgs::msg::arm_status::_right_endEffector_type arg)
  {
    msg_.right_endEffector = std::move(arg);
    return Init_arm_status_ik_statu(msg_);
  }

private:
  ::limx_arm_msgs::msg::arm_status msg_;
};

class Init_arm_status_left_endEffector
{
public:
  explicit Init_arm_status_left_endEffector(::limx_arm_msgs::msg::arm_status & msg)
  : msg_(msg)
  {}
  Init_arm_status_right_endEffector left_endEffector(::limx_arm_msgs::msg::arm_status::_left_endEffector_type arg)
  {
    msg_.left_endEffector = std::move(arg);
    return Init_arm_status_right_endEffector(msg_);
  }

private:
  ::limx_arm_msgs::msg::arm_status msg_;
};

class Init_arm_status_right_joints
{
public:
  explicit Init_arm_status_right_joints(::limx_arm_msgs::msg::arm_status & msg)
  : msg_(msg)
  {}
  Init_arm_status_left_endEffector right_joints(::limx_arm_msgs::msg::arm_status::_right_joints_type arg)
  {
    msg_.right_joints = std::move(arg);
    return Init_arm_status_left_endEffector(msg_);
  }

private:
  ::limx_arm_msgs::msg::arm_status msg_;
};

class Init_arm_status_left_joints
{
public:
  Init_arm_status_left_joints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_arm_status_right_joints left_joints(::limx_arm_msgs::msg::arm_status::_left_joints_type arg)
  {
    msg_.left_joints = std::move(arg);
    return Init_arm_status_right_joints(msg_);
  }

private:
  ::limx_arm_msgs::msg::arm_status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::limx_arm_msgs::msg::arm_status>()
{
  return limx_arm_msgs::msg::builder::Init_arm_status_left_joints();
}

}  // namespace limx_arm_msgs

#endif  // LIMX_ARM_MSGS__MSG__DETAIL__ARM_STATUS__BUILDER_HPP_
