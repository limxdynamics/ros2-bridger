// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from limx_arm_msgs:srv/desire_pos.idl
// generated code does not contain a copyright notice

#ifndef LIMX_ARM_MSGS__SRV__DETAIL__DESIRE_POS__BUILDER_HPP_
#define LIMX_ARM_MSGS__SRV__DETAIL__DESIRE_POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "limx_arm_msgs/srv/detail/desire_pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace limx_arm_msgs
{

namespace srv
{

namespace builder
{

class Init_desire_pos_Request_co_control
{
public:
  explicit Init_desire_pos_Request_co_control(::limx_arm_msgs::srv::desire_pos_Request & msg)
  : msg_(msg)
  {}
  ::limx_arm_msgs::srv::desire_pos_Request co_control(::limx_arm_msgs::srv::desire_pos_Request::_co_control_type arg)
  {
    msg_.co_control = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limx_arm_msgs::srv::desire_pos_Request msg_;
};

class Init_desire_pos_Request_desire_pos
{
public:
  explicit Init_desire_pos_Request_desire_pos(::limx_arm_msgs::srv::desire_pos_Request & msg)
  : msg_(msg)
  {}
  Init_desire_pos_Request_co_control desire_pos(::limx_arm_msgs::srv::desire_pos_Request::_desire_pos_type arg)
  {
    msg_.desire_pos = std::move(arg);
    return Init_desire_pos_Request_co_control(msg_);
  }

private:
  ::limx_arm_msgs::srv::desire_pos_Request msg_;
};

class Init_desire_pos_Request_taskNum
{
public:
  Init_desire_pos_Request_taskNum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_desire_pos_Request_desire_pos taskNum(::limx_arm_msgs::srv::desire_pos_Request::_taskNum_type arg)
  {
    msg_.taskNum = std::move(arg);
    return Init_desire_pos_Request_desire_pos(msg_);
  }

private:
  ::limx_arm_msgs::srv::desire_pos_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::limx_arm_msgs::srv::desire_pos_Request>()
{
  return limx_arm_msgs::srv::builder::Init_desire_pos_Request_taskNum();
}

}  // namespace limx_arm_msgs


namespace limx_arm_msgs
{

namespace srv
{

namespace builder
{

class Init_desire_pos_Response_status
{
public:
  Init_desire_pos_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::limx_arm_msgs::srv::desire_pos_Response status(::limx_arm_msgs::srv::desire_pos_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limx_arm_msgs::srv::desire_pos_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::limx_arm_msgs::srv::desire_pos_Response>()
{
  return limx_arm_msgs::srv::builder::Init_desire_pos_Response_status();
}

}  // namespace limx_arm_msgs

#endif  // LIMX_ARM_MSGS__SRV__DETAIL__DESIRE_POS__BUILDER_HPP_
