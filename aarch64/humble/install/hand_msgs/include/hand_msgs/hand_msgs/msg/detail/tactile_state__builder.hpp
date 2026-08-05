// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hand_msgs:msg/TactileState.idl
// generated code does not contain a copyright notice

#ifndef HAND_MSGS__MSG__DETAIL__TACTILE_STATE__BUILDER_HPP_
#define HAND_MSGS__MSG__DETAIL__TACTILE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hand_msgs/msg/detail/tactile_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hand_msgs
{

namespace msg
{

namespace builder
{

class Init_TactileState_tactile_state
{
public:
  explicit Init_TactileState_tactile_state(::hand_msgs::msg::TactileState & msg)
  : msg_(msg)
  {}
  ::hand_msgs::msg::TactileState tactile_state(::hand_msgs::msg::TactileState::_tactile_state_type arg)
  {
    msg_.tactile_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hand_msgs::msg::TactileState msg_;
};

class Init_TactileState_approximate_value
{
public:
  explicit Init_TactileState_approximate_value(::hand_msgs::msg::TactileState & msg)
  : msg_(msg)
  {}
  Init_TactileState_tactile_state approximate_value(::hand_msgs::msg::TactileState::_approximate_value_type arg)
  {
    msg_.approximate_value = std::move(arg);
    return Init_TactileState_tactile_state(msg_);
  }

private:
  ::hand_msgs::msg::TactileState msg_;
};

class Init_TactileState_direction_angle
{
public:
  explicit Init_TactileState_direction_angle(::hand_msgs::msg::TactileState & msg)
  : msg_(msg)
  {}
  Init_TactileState_approximate_value direction_angle(::hand_msgs::msg::TactileState::_direction_angle_type arg)
  {
    msg_.direction_angle = std::move(arg);
    return Init_TactileState_approximate_value(msg_);
  }

private:
  ::hand_msgs::msg::TactileState msg_;
};

class Init_TactileState_tangential_force
{
public:
  explicit Init_TactileState_tangential_force(::hand_msgs::msg::TactileState & msg)
  : msg_(msg)
  {}
  Init_TactileState_direction_angle tangential_force(::hand_msgs::msg::TactileState::_tangential_force_type arg)
  {
    msg_.tangential_force = std::move(arg);
    return Init_TactileState_direction_angle(msg_);
  }

private:
  ::hand_msgs::msg::TactileState msg_;
};

class Init_TactileState_normal_force
{
public:
  explicit Init_TactileState_normal_force(::hand_msgs::msg::TactileState & msg)
  : msg_(msg)
  {}
  Init_TactileState_tangential_force normal_force(::hand_msgs::msg::TactileState::_normal_force_type arg)
  {
    msg_.normal_force = std::move(arg);
    return Init_TactileState_tangential_force(msg_);
  }

private:
  ::hand_msgs::msg::TactileState msg_;
};

class Init_TactileState_names
{
public:
  explicit Init_TactileState_names(::hand_msgs::msg::TactileState & msg)
  : msg_(msg)
  {}
  Init_TactileState_normal_force names(::hand_msgs::msg::TactileState::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_TactileState_normal_force(msg_);
  }

private:
  ::hand_msgs::msg::TactileState msg_;
};

class Init_TactileState_header
{
public:
  Init_TactileState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TactileState_names header(::hand_msgs::msg::TactileState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TactileState_names(msg_);
  }

private:
  ::hand_msgs::msg::TactileState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hand_msgs::msg::TactileState>()
{
  return hand_msgs::msg::builder::Init_TactileState_header();
}

}  // namespace hand_msgs

#endif  // HAND_MSGS__MSG__DETAIL__TACTILE_STATE__BUILDER_HPP_
