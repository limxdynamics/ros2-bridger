// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from limx_arm_msgs:msg/ServoCmd.idl
// generated code does not contain a copyright notice

#ifndef LIMX_ARM_MSGS__MSG__DETAIL__SERVO_CMD__BUILDER_HPP_
#define LIMX_ARM_MSGS__MSG__DETAIL__SERVO_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "limx_arm_msgs/msg/detail/servo_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace limx_arm_msgs
{

namespace msg
{

namespace builder
{

class Init_ServoCmd_right_arm_pos
{
public:
  explicit Init_ServoCmd_right_arm_pos(::limx_arm_msgs::msg::ServoCmd & msg)
  : msg_(msg)
  {}
  ::limx_arm_msgs::msg::ServoCmd right_arm_pos(::limx_arm_msgs::msg::ServoCmd::_right_arm_pos_type arg)
  {
    msg_.right_arm_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limx_arm_msgs::msg::ServoCmd msg_;
};

class Init_ServoCmd_left_arm_pos
{
public:
  explicit Init_ServoCmd_left_arm_pos(::limx_arm_msgs::msg::ServoCmd & msg)
  : msg_(msg)
  {}
  Init_ServoCmd_right_arm_pos left_arm_pos(::limx_arm_msgs::msg::ServoCmd::_left_arm_pos_type arg)
  {
    msg_.left_arm_pos = std::move(arg);
    return Init_ServoCmd_right_arm_pos(msg_);
  }

private:
  ::limx_arm_msgs::msg::ServoCmd msg_;
};

class Init_ServoCmd_functionName
{
public:
  Init_ServoCmd_functionName()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoCmd_left_arm_pos functionName(::limx_arm_msgs::msg::ServoCmd::_functionName_type arg)
  {
    msg_.functionName = std::move(arg);
    return Init_ServoCmd_left_arm_pos(msg_);
  }

private:
  ::limx_arm_msgs::msg::ServoCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::limx_arm_msgs::msg::ServoCmd>()
{
  return limx_arm_msgs::msg::builder::Init_ServoCmd_functionName();
}

}  // namespace limx_arm_msgs

#endif  // LIMX_ARM_MSGS__MSG__DETAIL__SERVO_CMD__BUILDER_HPP_
