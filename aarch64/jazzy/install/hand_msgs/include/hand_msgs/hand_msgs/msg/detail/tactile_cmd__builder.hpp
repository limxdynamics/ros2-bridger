// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hand_msgs:msg/TactileCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hand_msgs/msg/tactile_cmd.hpp"


#ifndef HAND_MSGS__MSG__DETAIL__TACTILE_CMD__BUILDER_HPP_
#define HAND_MSGS__MSG__DETAIL__TACTILE_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hand_msgs/msg/detail/tactile_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hand_msgs
{

namespace msg
{

namespace builder
{

class Init_TactileCmd_calibration_trigger
{
public:
  explicit Init_TactileCmd_calibration_trigger(::hand_msgs::msg::TactileCmd & msg)
  : msg_(msg)
  {}
  ::hand_msgs::msg::TactileCmd calibration_trigger(::hand_msgs::msg::TactileCmd::_calibration_trigger_type arg)
  {
    msg_.calibration_trigger = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hand_msgs::msg::TactileCmd msg_;
};

class Init_TactileCmd_channel_reset
{
public:
  explicit Init_TactileCmd_channel_reset(::hand_msgs::msg::TactileCmd & msg)
  : msg_(msg)
  {}
  Init_TactileCmd_calibration_trigger channel_reset(::hand_msgs::msg::TactileCmd::_channel_reset_type arg)
  {
    msg_.channel_reset = std::move(arg);
    return Init_TactileCmd_calibration_trigger(msg_);
  }

private:
  ::hand_msgs::msg::TactileCmd msg_;
};

class Init_TactileCmd_tactile_switch
{
public:
  explicit Init_TactileCmd_tactile_switch(::hand_msgs::msg::TactileCmd & msg)
  : msg_(msg)
  {}
  Init_TactileCmd_channel_reset tactile_switch(::hand_msgs::msg::TactileCmd::_tactile_switch_type arg)
  {
    msg_.tactile_switch = std::move(arg);
    return Init_TactileCmd_channel_reset(msg_);
  }

private:
  ::hand_msgs::msg::TactileCmd msg_;
};

class Init_TactileCmd_names
{
public:
  explicit Init_TactileCmd_names(::hand_msgs::msg::TactileCmd & msg)
  : msg_(msg)
  {}
  Init_TactileCmd_tactile_switch names(::hand_msgs::msg::TactileCmd::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_TactileCmd_tactile_switch(msg_);
  }

private:
  ::hand_msgs::msg::TactileCmd msg_;
};

class Init_TactileCmd_header
{
public:
  Init_TactileCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TactileCmd_names header(::hand_msgs::msg::TactileCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TactileCmd_names(msg_);
  }

private:
  ::hand_msgs::msg::TactileCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hand_msgs::msg::TactileCmd>()
{
  return hand_msgs::msg::builder::Init_TactileCmd_header();
}

}  // namespace hand_msgs

#endif  // HAND_MSGS__MSG__DETAIL__TACTILE_CMD__BUILDER_HPP_
