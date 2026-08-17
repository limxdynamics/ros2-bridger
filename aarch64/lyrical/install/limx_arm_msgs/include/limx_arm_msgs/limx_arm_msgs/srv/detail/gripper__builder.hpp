// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from limx_arm_msgs:srv/gripper.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "limx_arm_msgs/srv/gripper.hpp"


#ifndef LIMX_ARM_MSGS__SRV__DETAIL__GRIPPER__BUILDER_HPP_
#define LIMX_ARM_MSGS__SRV__DETAIL__GRIPPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "limx_arm_msgs/srv/detail/gripper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace limx_arm_msgs
{

namespace srv
{

namespace builder
{

class Init_gripper_Request_force
{
public:
  explicit Init_gripper_Request_force(::limx_arm_msgs::srv::gripper_Request & msg)
  : msg_(msg)
  {}
  ::limx_arm_msgs::srv::gripper_Request force(::limx_arm_msgs::srv::gripper_Request::_force_type arg)
  {
    msg_.force = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limx_arm_msgs::srv::gripper_Request msg_;
};

class Init_gripper_Request_dis
{
public:
  explicit Init_gripper_Request_dis(::limx_arm_msgs::srv::gripper_Request & msg)
  : msg_(msg)
  {}
  Init_gripper_Request_force dis(::limx_arm_msgs::srv::gripper_Request::_dis_type arg)
  {
    msg_.dis = std::move(arg);
    return Init_gripper_Request_force(msg_);
  }

private:
  ::limx_arm_msgs::srv::gripper_Request msg_;
};

class Init_gripper_Request_initial
{
public:
  Init_gripper_Request_initial()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_gripper_Request_dis initial(::limx_arm_msgs::srv::gripper_Request::_initial_type arg)
  {
    msg_.initial = std::move(arg);
    return Init_gripper_Request_dis(msg_);
  }

private:
  ::limx_arm_msgs::srv::gripper_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::limx_arm_msgs::srv::gripper_Request>()
{
  return limx_arm_msgs::srv::builder::Init_gripper_Request_initial();
}

}  // namespace limx_arm_msgs


namespace limx_arm_msgs
{

namespace srv
{

namespace builder
{

class Init_gripper_Response_status
{
public:
  Init_gripper_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::limx_arm_msgs::srv::gripper_Response status(::limx_arm_msgs::srv::gripper_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limx_arm_msgs::srv::gripper_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::limx_arm_msgs::srv::gripper_Response>()
{
  return limx_arm_msgs::srv::builder::Init_gripper_Response_status();
}

}  // namespace limx_arm_msgs


namespace limx_arm_msgs
{

namespace srv
{

namespace builder
{

class Init_gripper_Event_response
{
public:
  explicit Init_gripper_Event_response(::limx_arm_msgs::srv::gripper_Event & msg)
  : msg_(msg)
  {}
  ::limx_arm_msgs::srv::gripper_Event response(::limx_arm_msgs::srv::gripper_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limx_arm_msgs::srv::gripper_Event msg_;
};

class Init_gripper_Event_request
{
public:
  explicit Init_gripper_Event_request(::limx_arm_msgs::srv::gripper_Event & msg)
  : msg_(msg)
  {}
  Init_gripper_Event_response request(::limx_arm_msgs::srv::gripper_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_gripper_Event_response(msg_);
  }

private:
  ::limx_arm_msgs::srv::gripper_Event msg_;
};

class Init_gripper_Event_info
{
public:
  Init_gripper_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_gripper_Event_request info(::limx_arm_msgs::srv::gripper_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_gripper_Event_request(msg_);
  }

private:
  ::limx_arm_msgs::srv::gripper_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::limx_arm_msgs::srv::gripper_Event>()
{
  return limx_arm_msgs::srv::builder::Init_gripper_Event_info();
}

}  // namespace limx_arm_msgs

#endif  // LIMX_ARM_MSGS__SRV__DETAIL__GRIPPER__BUILDER_HPP_
