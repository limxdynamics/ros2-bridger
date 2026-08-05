// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hand_msgs:msg/TactileHandState.idl
// generated code does not contain a copyright notice

#ifndef HAND_MSGS__MSG__DETAIL__TACTILE_HAND_STATE__BUILDER_HPP_
#define HAND_MSGS__MSG__DETAIL__TACTILE_HAND_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hand_msgs/msg/detail/tactile_hand_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hand_msgs
{

namespace msg
{

namespace builder
{

class Init_TactileHandState_hand_tactile_state
{
public:
  explicit Init_TactileHandState_hand_tactile_state(::hand_msgs::msg::TactileHandState & msg)
  : msg_(msg)
  {}
  ::hand_msgs::msg::TactileHandState hand_tactile_state(::hand_msgs::msg::TactileHandState::_hand_tactile_state_type arg)
  {
    msg_.hand_tactile_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hand_msgs::msg::TactileHandState msg_;
};

class Init_TactileHandState_hand_state
{
public:
  explicit Init_TactileHandState_hand_state(::hand_msgs::msg::TactileHandState & msg)
  : msg_(msg)
  {}
  Init_TactileHandState_hand_tactile_state hand_state(::hand_msgs::msg::TactileHandState::_hand_state_type arg)
  {
    msg_.hand_state = std::move(arg);
    return Init_TactileHandState_hand_tactile_state(msg_);
  }

private:
  ::hand_msgs::msg::TactileHandState msg_;
};

class Init_TactileHandState_ctrl_mode
{
public:
  explicit Init_TactileHandState_ctrl_mode(::hand_msgs::msg::TactileHandState & msg)
  : msg_(msg)
  {}
  Init_TactileHandState_hand_state ctrl_mode(::hand_msgs::msg::TactileHandState::_ctrl_mode_type arg)
  {
    msg_.ctrl_mode = std::move(arg);
    return Init_TactileHandState_hand_state(msg_);
  }

private:
  ::hand_msgs::msg::TactileHandState msg_;
};

class Init_TactileHandState_hand_type
{
public:
  explicit Init_TactileHandState_hand_type(::hand_msgs::msg::TactileHandState & msg)
  : msg_(msg)
  {}
  Init_TactileHandState_ctrl_mode hand_type(::hand_msgs::msg::TactileHandState::_hand_type_type arg)
  {
    msg_.hand_type = std::move(arg);
    return Init_TactileHandState_ctrl_mode(msg_);
  }

private:
  ::hand_msgs::msg::TactileHandState msg_;
};

class Init_TactileHandState_header
{
public:
  Init_TactileHandState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TactileHandState_hand_type header(::hand_msgs::msg::TactileHandState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TactileHandState_hand_type(msg_);
  }

private:
  ::hand_msgs::msg::TactileHandState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hand_msgs::msg::TactileHandState>()
{
  return hand_msgs::msg::builder::Init_TactileHandState_header();
}

}  // namespace hand_msgs

#endif  // HAND_MSGS__MSG__DETAIL__TACTILE_HAND_STATE__BUILDER_HPP_
