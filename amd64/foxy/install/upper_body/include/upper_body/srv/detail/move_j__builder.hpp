// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from upper_body:srv/moveJ.idl
// generated code does not contain a copyright notice

#ifndef UPPER_BODY__SRV__DETAIL__MOVE_J__BUILDER_HPP_
#define UPPER_BODY__SRV__DETAIL__MOVE_J__BUILDER_HPP_

#include "upper_body/srv/detail/move_j__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace upper_body
{

namespace srv
{

namespace builder
{

class Init_moveJ_Request_speed
{
public:
  explicit Init_moveJ_Request_speed(::upper_body::srv::moveJ_Request & msg)
  : msg_(msg)
  {}
  ::upper_body::srv::moveJ_Request speed(::upper_body::srv::moveJ_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::upper_body::srv::moveJ_Request msg_;
};

class Init_moveJ_Request_joints
{
public:
  Init_moveJ_Request_joints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_moveJ_Request_speed joints(::upper_body::srv::moveJ_Request::_joints_type arg)
  {
    msg_.joints = std::move(arg);
    return Init_moveJ_Request_speed(msg_);
  }

private:
  ::upper_body::srv::moveJ_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::upper_body::srv::moveJ_Request>()
{
  return upper_body::srv::builder::Init_moveJ_Request_joints();
}

}  // namespace upper_body


namespace upper_body
{

namespace srv
{

namespace builder
{

class Init_moveJ_Response_status
{
public:
  Init_moveJ_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::upper_body::srv::moveJ_Response status(::upper_body::srv::moveJ_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::upper_body::srv::moveJ_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::upper_body::srv::moveJ_Response>()
{
  return upper_body::srv::builder::Init_moveJ_Response_status();
}

}  // namespace upper_body

#endif  // UPPER_BODY__SRV__DETAIL__MOVE_J__BUILDER_HPP_
