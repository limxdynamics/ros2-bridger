// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from teleop_msgs:msg/VRState.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__VR_STATE__BUILDER_HPP_
#define TELEOP_MSGS__MSG__DETAIL__VR_STATE__BUILDER_HPP_

#include "teleop_msgs/msg/detail/vr_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace teleop_msgs
{

namespace msg
{

namespace builder
{

class Init_VRState_B
{
public:
  explicit Init_VRState_B(::teleop_msgs::msg::VRState & msg)
  : msg_(msg)
  {}
  ::teleop_msgs::msg::VRState B(::teleop_msgs::msg::VRState::_B_type arg)
  {
    msg_.B = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_msgs::msg::VRState msg_;
};

class Init_VRState_A
{
public:
  explicit Init_VRState_A(::teleop_msgs::msg::VRState & msg)
  : msg_(msg)
  {}
  Init_VRState_B A(::teleop_msgs::msg::VRState::_A_type arg)
  {
    msg_.A = std::move(arg);
    return Init_VRState_B(msg_);
  }

private:
  ::teleop_msgs::msg::VRState msg_;
};

class Init_VRState_RG
{
public:
  explicit Init_VRState_RG(::teleop_msgs::msg::VRState & msg)
  : msg_(msg)
  {}
  Init_VRState_A RG(::teleop_msgs::msg::VRState::_RG_type arg)
  {
    msg_.RG = std::move(arg);
    return Init_VRState_A(msg_);
  }

private:
  ::teleop_msgs::msg::VRState msg_;
};

class Init_VRState_RTr
{
public:
  explicit Init_VRState_RTr(::teleop_msgs::msg::VRState & msg)
  : msg_(msg)
  {}
  Init_VRState_RG RTr(::teleop_msgs::msg::VRState::_RTr_type arg)
  {
    msg_.RTr = std::move(arg);
    return Init_VRState_RG(msg_);
  }

private:
  ::teleop_msgs::msg::VRState msg_;
};

class Init_VRState_RThU
{
public:
  explicit Init_VRState_RThU(::teleop_msgs::msg::VRState & msg)
  : msg_(msg)
  {}
  Init_VRState_RTr RThU(::teleop_msgs::msg::VRState::_RThU_type arg)
  {
    msg_.RThU = std::move(arg);
    return Init_VRState_RTr(msg_);
  }

private:
  ::teleop_msgs::msg::VRState msg_;
};

class Init_VRState_rightGrip
{
public:
  explicit Init_VRState_rightGrip(::teleop_msgs::msg::VRState & msg)
  : msg_(msg)
  {}
  Init_VRState_RThU rightGrip(::teleop_msgs::msg::VRState::_rightGrip_type arg)
  {
    msg_.rightGrip = std::move(arg);
    return Init_VRState_RThU(msg_);
  }

private:
  ::teleop_msgs::msg::VRState msg_;
};

class Init_VRState_rightTrig
{
public:
  explicit Init_VRState_rightTrig(::teleop_msgs::msg::VRState & msg)
  : msg_(msg)
  {}
  Init_VRState_rightGrip rightTrig(::teleop_msgs::msg::VRState::_rightTrig_type arg)
  {
    msg_.rightTrig = std::move(arg);
    return Init_VRState_rightGrip(msg_);
  }

private:
  ::teleop_msgs::msg::VRState msg_;
};

class Init_VRState_rightJS
{
public:
  explicit Init_VRState_rightJS(::teleop_msgs::msg::VRState & msg)
  : msg_(msg)
  {}
  Init_VRState_rightTrig rightJS(::teleop_msgs::msg::VRState::_rightJS_type arg)
  {
    msg_.rightJS = std::move(arg);
    return Init_VRState_rightTrig(msg_);
  }

private:
  ::teleop_msgs::msg::VRState msg_;
};

class Init_VRState_Y
{
public:
  explicit Init_VRState_Y(::teleop_msgs::msg::VRState & msg)
  : msg_(msg)
  {}
  Init_VRState_rightJS Y(::teleop_msgs::msg::VRState::_Y_type arg)
  {
    msg_.Y = std::move(arg);
    return Init_VRState_rightJS(msg_);
  }

private:
  ::teleop_msgs::msg::VRState msg_;
};

class Init_VRState_X
{
public:
  explicit Init_VRState_X(::teleop_msgs::msg::VRState & msg)
  : msg_(msg)
  {}
  Init_VRState_Y X(::teleop_msgs::msg::VRState::_X_type arg)
  {
    msg_.X = std::move(arg);
    return Init_VRState_Y(msg_);
  }

private:
  ::teleop_msgs::msg::VRState msg_;
};

class Init_VRState_LG
{
public:
  explicit Init_VRState_LG(::teleop_msgs::msg::VRState & msg)
  : msg_(msg)
  {}
  Init_VRState_X LG(::teleop_msgs::msg::VRState::_LG_type arg)
  {
    msg_.LG = std::move(arg);
    return Init_VRState_X(msg_);
  }

private:
  ::teleop_msgs::msg::VRState msg_;
};

class Init_VRState_LTr
{
public:
  explicit Init_VRState_LTr(::teleop_msgs::msg::VRState & msg)
  : msg_(msg)
  {}
  Init_VRState_LG LTr(::teleop_msgs::msg::VRState::_LTr_type arg)
  {
    msg_.LTr = std::move(arg);
    return Init_VRState_LG(msg_);
  }

private:
  ::teleop_msgs::msg::VRState msg_;
};

class Init_VRState_LThU
{
public:
  explicit Init_VRState_LThU(::teleop_msgs::msg::VRState & msg)
  : msg_(msg)
  {}
  Init_VRState_LTr LThU(::teleop_msgs::msg::VRState::_LThU_type arg)
  {
    msg_.LThU = std::move(arg);
    return Init_VRState_LTr(msg_);
  }

private:
  ::teleop_msgs::msg::VRState msg_;
};

class Init_VRState_leftGrip
{
public:
  explicit Init_VRState_leftGrip(::teleop_msgs::msg::VRState & msg)
  : msg_(msg)
  {}
  Init_VRState_LThU leftGrip(::teleop_msgs::msg::VRState::_leftGrip_type arg)
  {
    msg_.leftGrip = std::move(arg);
    return Init_VRState_LThU(msg_);
  }

private:
  ::teleop_msgs::msg::VRState msg_;
};

class Init_VRState_leftTrig
{
public:
  explicit Init_VRState_leftTrig(::teleop_msgs::msg::VRState & msg)
  : msg_(msg)
  {}
  Init_VRState_leftGrip leftTrig(::teleop_msgs::msg::VRState::_leftTrig_type arg)
  {
    msg_.leftTrig = std::move(arg);
    return Init_VRState_leftGrip(msg_);
  }

private:
  ::teleop_msgs::msg::VRState msg_;
};

class Init_VRState_leftJS
{
public:
  explicit Init_VRState_leftJS(::teleop_msgs::msg::VRState & msg)
  : msg_(msg)
  {}
  Init_VRState_leftTrig leftJS(::teleop_msgs::msg::VRState::_leftJS_type arg)
  {
    msg_.leftJS = std::move(arg);
    return Init_VRState_leftTrig(msg_);
  }

private:
  ::teleop_msgs::msg::VRState msg_;
};

class Init_VRState_r
{
public:
  explicit Init_VRState_r(::teleop_msgs::msg::VRState & msg)
  : msg_(msg)
  {}
  Init_VRState_leftJS r(::teleop_msgs::msg::VRState::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_VRState_leftJS(msg_);
  }

private:
  ::teleop_msgs::msg::VRState msg_;
};

class Init_VRState_l
{
public:
  explicit Init_VRState_l(::teleop_msgs::msg::VRState & msg)
  : msg_(msg)
  {}
  Init_VRState_r l(::teleop_msgs::msg::VRState::_l_type arg)
  {
    msg_.l = std::move(arg);
    return Init_VRState_r(msg_);
  }

private:
  ::teleop_msgs::msg::VRState msg_;
};

class Init_VRState_eyePose
{
public:
  explicit Init_VRState_eyePose(::teleop_msgs::msg::VRState & msg)
  : msg_(msg)
  {}
  Init_VRState_l eyePose(::teleop_msgs::msg::VRState::_eyePose_type arg)
  {
    msg_.eyePose = std::move(arg);
    return Init_VRState_l(msg_);
  }

private:
  ::teleop_msgs::msg::VRState msg_;
};

class Init_VRState_header
{
public:
  Init_VRState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VRState_eyePose header(::teleop_msgs::msg::VRState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VRState_eyePose(msg_);
  }

private:
  ::teleop_msgs::msg::VRState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_msgs::msg::VRState>()
{
  return teleop_msgs::msg::builder::Init_VRState_header();
}

}  // namespace teleop_msgs

#endif  // TELEOP_MSGS__MSG__DETAIL__VR_STATE__BUILDER_HPP_
