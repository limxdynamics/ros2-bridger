// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from teleop_msgs:msg/TeleopRawInput.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_msgs/msg/teleop_raw_input.hpp"


#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_RAW_INPUT__BUILDER_HPP_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_RAW_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "teleop_msgs/msg/detail/teleop_raw_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace teleop_msgs
{

namespace msg
{

namespace builder
{

class Init_TeleopRawInput_buttons_valid
{
public:
  explicit Init_TeleopRawInput_buttons_valid(::teleop_msgs::msg::TeleopRawInput & msg)
  : msg_(msg)
  {}
  ::teleop_msgs::msg::TeleopRawInput buttons_valid(::teleop_msgs::msg::TeleopRawInput::_buttons_valid_type arg)
  {
    msg_.buttons_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopRawInput msg_;
};

class Init_TeleopRawInput_buttons
{
public:
  explicit Init_TeleopRawInput_buttons(::teleop_msgs::msg::TeleopRawInput & msg)
  : msg_(msg)
  {}
  Init_TeleopRawInput_buttons_valid buttons(::teleop_msgs::msg::TeleopRawInput::_buttons_type arg)
  {
    msg_.buttons = std::move(arg);
    return Init_TeleopRawInput_buttons_valid(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopRawInput msg_;
};

class Init_TeleopRawInput_right_stick
{
public:
  explicit Init_TeleopRawInput_right_stick(::teleop_msgs::msg::TeleopRawInput & msg)
  : msg_(msg)
  {}
  Init_TeleopRawInput_buttons right_stick(::teleop_msgs::msg::TeleopRawInput::_right_stick_type arg)
  {
    msg_.right_stick = std::move(arg);
    return Init_TeleopRawInput_buttons(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopRawInput msg_;
};

class Init_TeleopRawInput_left_stick
{
public:
  explicit Init_TeleopRawInput_left_stick(::teleop_msgs::msg::TeleopRawInput & msg)
  : msg_(msg)
  {}
  Init_TeleopRawInput_right_stick left_stick(::teleop_msgs::msg::TeleopRawInput::_left_stick_type arg)
  {
    msg_.left_stick = std::move(arg);
    return Init_TeleopRawInput_right_stick(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopRawInput msg_;
};

class Init_TeleopRawInput_right_grip
{
public:
  explicit Init_TeleopRawInput_right_grip(::teleop_msgs::msg::TeleopRawInput & msg)
  : msg_(msg)
  {}
  Init_TeleopRawInput_left_stick right_grip(::teleop_msgs::msg::TeleopRawInput::_right_grip_type arg)
  {
    msg_.right_grip = std::move(arg);
    return Init_TeleopRawInput_left_stick(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopRawInput msg_;
};

class Init_TeleopRawInput_left_grip
{
public:
  explicit Init_TeleopRawInput_left_grip(::teleop_msgs::msg::TeleopRawInput & msg)
  : msg_(msg)
  {}
  Init_TeleopRawInput_right_grip left_grip(::teleop_msgs::msg::TeleopRawInput::_left_grip_type arg)
  {
    msg_.left_grip = std::move(arg);
    return Init_TeleopRawInput_right_grip(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopRawInput msg_;
};

class Init_TeleopRawInput_right_trigger
{
public:
  explicit Init_TeleopRawInput_right_trigger(::teleop_msgs::msg::TeleopRawInput & msg)
  : msg_(msg)
  {}
  Init_TeleopRawInput_left_grip right_trigger(::teleop_msgs::msg::TeleopRawInput::_right_trigger_type arg)
  {
    msg_.right_trigger = std::move(arg);
    return Init_TeleopRawInput_left_grip(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopRawInput msg_;
};

class Init_TeleopRawInput_left_trigger
{
public:
  Init_TeleopRawInput_left_trigger()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TeleopRawInput_right_trigger left_trigger(::teleop_msgs::msg::TeleopRawInput::_left_trigger_type arg)
  {
    msg_.left_trigger = std::move(arg);
    return Init_TeleopRawInput_right_trigger(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopRawInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_msgs::msg::TeleopRawInput>()
{
  return teleop_msgs::msg::builder::Init_TeleopRawInput_left_trigger();
}

}  // namespace teleop_msgs

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_RAW_INPUT__BUILDER_HPP_
