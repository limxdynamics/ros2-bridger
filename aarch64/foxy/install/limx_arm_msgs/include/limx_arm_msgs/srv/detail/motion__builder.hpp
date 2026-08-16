// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from limx_arm_msgs:srv/motion.idl
// generated code does not contain a copyright notice

#ifndef LIMX_ARM_MSGS__SRV__DETAIL__MOTION__BUILDER_HPP_
#define LIMX_ARM_MSGS__SRV__DETAIL__MOTION__BUILDER_HPP_

#include "limx_arm_msgs/srv/detail/motion__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace limx_arm_msgs
{

namespace srv
{

namespace builder
{

class Init_motion_Request_duration_time
{
public:
  explicit Init_motion_Request_duration_time(::limx_arm_msgs::srv::motion_Request & msg)
  : msg_(msg)
  {}
  ::limx_arm_msgs::srv::motion_Request duration_time(::limx_arm_msgs::srv::motion_Request::_duration_time_type arg)
  {
    msg_.duration_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limx_arm_msgs::srv::motion_Request msg_;
};

class Init_motion_Request_right_arm_pos
{
public:
  explicit Init_motion_Request_right_arm_pos(::limx_arm_msgs::srv::motion_Request & msg)
  : msg_(msg)
  {}
  Init_motion_Request_duration_time right_arm_pos(::limx_arm_msgs::srv::motion_Request::_right_arm_pos_type arg)
  {
    msg_.right_arm_pos = std::move(arg);
    return Init_motion_Request_duration_time(msg_);
  }

private:
  ::limx_arm_msgs::srv::motion_Request msg_;
};

class Init_motion_Request_left_arm_pos
{
public:
  Init_motion_Request_left_arm_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_motion_Request_right_arm_pos left_arm_pos(::limx_arm_msgs::srv::motion_Request::_left_arm_pos_type arg)
  {
    msg_.left_arm_pos = std::move(arg);
    return Init_motion_Request_right_arm_pos(msg_);
  }

private:
  ::limx_arm_msgs::srv::motion_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::limx_arm_msgs::srv::motion_Request>()
{
  return limx_arm_msgs::srv::builder::Init_motion_Request_left_arm_pos();
}

}  // namespace limx_arm_msgs


namespace limx_arm_msgs
{

namespace srv
{

namespace builder
{

class Init_motion_Response_status
{
public:
  Init_motion_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::limx_arm_msgs::srv::motion_Response status(::limx_arm_msgs::srv::motion_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limx_arm_msgs::srv::motion_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::limx_arm_msgs::srv::motion_Response>()
{
  return limx_arm_msgs::srv::builder::Init_motion_Response_status();
}

}  // namespace limx_arm_msgs

#endif  // LIMX_ARM_MSGS__SRV__DETAIL__MOTION__BUILDER_HPP_
