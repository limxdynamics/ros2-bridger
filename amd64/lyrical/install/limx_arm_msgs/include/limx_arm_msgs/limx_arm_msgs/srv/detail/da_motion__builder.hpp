// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from limx_arm_msgs:srv/DA_motion.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "limx_arm_msgs/srv/da_motion.hpp"


#ifndef LIMX_ARM_MSGS__SRV__DETAIL__DA_MOTION__BUILDER_HPP_
#define LIMX_ARM_MSGS__SRV__DETAIL__DA_MOTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "limx_arm_msgs/srv/detail/da_motion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace limx_arm_msgs
{

namespace srv
{

namespace builder
{

class Init_DA_motion_Request_headPos
{
public:
  explicit Init_DA_motion_Request_headPos(::limx_arm_msgs::srv::DA_motion_Request & msg)
  : msg_(msg)
  {}
  ::limx_arm_msgs::srv::DA_motion_Request headPos(::limx_arm_msgs::srv::DA_motion_Request::_headPos_type arg)
  {
    msg_.headPos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limx_arm_msgs::srv::DA_motion_Request msg_;
};

class Init_DA_motion_Request_right_arm_joints
{
public:
  explicit Init_DA_motion_Request_right_arm_joints(::limx_arm_msgs::srv::DA_motion_Request & msg)
  : msg_(msg)
  {}
  Init_DA_motion_Request_headPos right_arm_joints(::limx_arm_msgs::srv::DA_motion_Request::_right_arm_joints_type arg)
  {
    msg_.right_arm_joints = std::move(arg);
    return Init_DA_motion_Request_headPos(msg_);
  }

private:
  ::limx_arm_msgs::srv::DA_motion_Request msg_;
};

class Init_DA_motion_Request_left_arm_joints
{
public:
  explicit Init_DA_motion_Request_left_arm_joints(::limx_arm_msgs::srv::DA_motion_Request & msg)
  : msg_(msg)
  {}
  Init_DA_motion_Request_right_arm_joints left_arm_joints(::limx_arm_msgs::srv::DA_motion_Request::_left_arm_joints_type arg)
  {
    msg_.left_arm_joints = std::move(arg);
    return Init_DA_motion_Request_right_arm_joints(msg_);
  }

private:
  ::limx_arm_msgs::srv::DA_motion_Request msg_;
};

class Init_DA_motion_Request_speed
{
public:
  explicit Init_DA_motion_Request_speed(::limx_arm_msgs::srv::DA_motion_Request & msg)
  : msg_(msg)
  {}
  Init_DA_motion_Request_left_arm_joints speed(::limx_arm_msgs::srv::DA_motion_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_DA_motion_Request_left_arm_joints(msg_);
  }

private:
  ::limx_arm_msgs::srv::DA_motion_Request msg_;
};

class Init_DA_motion_Request_right_arm_pos
{
public:
  explicit Init_DA_motion_Request_right_arm_pos(::limx_arm_msgs::srv::DA_motion_Request & msg)
  : msg_(msg)
  {}
  Init_DA_motion_Request_speed right_arm_pos(::limx_arm_msgs::srv::DA_motion_Request::_right_arm_pos_type arg)
  {
    msg_.right_arm_pos = std::move(arg);
    return Init_DA_motion_Request_speed(msg_);
  }

private:
  ::limx_arm_msgs::srv::DA_motion_Request msg_;
};

class Init_DA_motion_Request_left_arm_pos
{
public:
  explicit Init_DA_motion_Request_left_arm_pos(::limx_arm_msgs::srv::DA_motion_Request & msg)
  : msg_(msg)
  {}
  Init_DA_motion_Request_right_arm_pos left_arm_pos(::limx_arm_msgs::srv::DA_motion_Request::_left_arm_pos_type arg)
  {
    msg_.left_arm_pos = std::move(arg);
    return Init_DA_motion_Request_right_arm_pos(msg_);
  }

private:
  ::limx_arm_msgs::srv::DA_motion_Request msg_;
};

class Init_DA_motion_Request_functionName
{
public:
  Init_DA_motion_Request_functionName()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DA_motion_Request_left_arm_pos functionName(::limx_arm_msgs::srv::DA_motion_Request::_functionName_type arg)
  {
    msg_.functionName = std::move(arg);
    return Init_DA_motion_Request_left_arm_pos(msg_);
  }

private:
  ::limx_arm_msgs::srv::DA_motion_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::limx_arm_msgs::srv::DA_motion_Request>()
{
  return limx_arm_msgs::srv::builder::Init_DA_motion_Request_functionName();
}

}  // namespace limx_arm_msgs


namespace limx_arm_msgs
{

namespace srv
{

namespace builder
{

class Init_DA_motion_Response_status
{
public:
  Init_DA_motion_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::limx_arm_msgs::srv::DA_motion_Response status(::limx_arm_msgs::srv::DA_motion_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limx_arm_msgs::srv::DA_motion_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::limx_arm_msgs::srv::DA_motion_Response>()
{
  return limx_arm_msgs::srv::builder::Init_DA_motion_Response_status();
}

}  // namespace limx_arm_msgs


namespace limx_arm_msgs
{

namespace srv
{

namespace builder
{

class Init_DA_motion_Event_response
{
public:
  explicit Init_DA_motion_Event_response(::limx_arm_msgs::srv::DA_motion_Event & msg)
  : msg_(msg)
  {}
  ::limx_arm_msgs::srv::DA_motion_Event response(::limx_arm_msgs::srv::DA_motion_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limx_arm_msgs::srv::DA_motion_Event msg_;
};

class Init_DA_motion_Event_request
{
public:
  explicit Init_DA_motion_Event_request(::limx_arm_msgs::srv::DA_motion_Event & msg)
  : msg_(msg)
  {}
  Init_DA_motion_Event_response request(::limx_arm_msgs::srv::DA_motion_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DA_motion_Event_response(msg_);
  }

private:
  ::limx_arm_msgs::srv::DA_motion_Event msg_;
};

class Init_DA_motion_Event_info
{
public:
  Init_DA_motion_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DA_motion_Event_request info(::limx_arm_msgs::srv::DA_motion_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DA_motion_Event_request(msg_);
  }

private:
  ::limx_arm_msgs::srv::DA_motion_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::limx_arm_msgs::srv::DA_motion_Event>()
{
  return limx_arm_msgs::srv::builder::Init_DA_motion_Event_info();
}

}  // namespace limx_arm_msgs

#endif  // LIMX_ARM_MSGS__SRV__DETAIL__DA_MOTION__BUILDER_HPP_
