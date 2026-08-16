// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from teleop_msgs:msg/TeleopLimbState.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_LIMB_STATE__BUILDER_HPP_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_LIMB_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "teleop_msgs/msg/detail/teleop_limb_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace teleop_msgs
{

namespace msg
{

namespace builder
{

class Init_TeleopLimbState_ee_gesture_index
{
public:
  explicit Init_TeleopLimbState_ee_gesture_index(::teleop_msgs::msg::TeleopLimbState & msg)
  : msg_(msg)
  {}
  ::teleop_msgs::msg::TeleopLimbState ee_gesture_index(::teleop_msgs::msg::TeleopLimbState::_ee_gesture_index_type arg)
  {
    msg_.ee_gesture_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopLimbState msg_;
};

class Init_TeleopLimbState_ee_closure_enabled
{
public:
  explicit Init_TeleopLimbState_ee_closure_enabled(::teleop_msgs::msg::TeleopLimbState & msg)
  : msg_(msg)
  {}
  Init_TeleopLimbState_ee_gesture_index ee_closure_enabled(::teleop_msgs::msg::TeleopLimbState::_ee_closure_enabled_type arg)
  {
    msg_.ee_closure_enabled = std::move(arg);
    return Init_TeleopLimbState_ee_gesture_index(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopLimbState msg_;
};

class Init_TeleopLimbState_following
{
public:
  explicit Init_TeleopLimbState_following(::teleop_msgs::msg::TeleopLimbState & msg)
  : msg_(msg)
  {}
  Init_TeleopLimbState_ee_closure_enabled following(::teleop_msgs::msg::TeleopLimbState::_following_type arg)
  {
    msg_.following = std::move(arg);
    return Init_TeleopLimbState_ee_closure_enabled(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopLimbState msg_;
};

class Init_TeleopLimbState_name
{
public:
  Init_TeleopLimbState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TeleopLimbState_following name(::teleop_msgs::msg::TeleopLimbState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_TeleopLimbState_following(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopLimbState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_msgs::msg::TeleopLimbState>()
{
  return teleop_msgs::msg::builder::Init_TeleopLimbState_name();
}

}  // namespace teleop_msgs

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_LIMB_STATE__BUILDER_HPP_
