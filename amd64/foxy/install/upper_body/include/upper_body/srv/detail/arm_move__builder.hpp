// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from upper_body:srv/arm_move.idl
// generated code does not contain a copyright notice

#ifndef UPPER_BODY__SRV__DETAIL__ARM_MOVE__BUILDER_HPP_
#define UPPER_BODY__SRV__DETAIL__ARM_MOVE__BUILDER_HPP_

#include "upper_body/srv/detail/arm_move__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace upper_body
{

namespace srv
{

namespace builder
{

class Init_arm_move_Request_speed
{
public:
  explicit Init_arm_move_Request_speed(::upper_body::srv::arm_move_Request & msg)
  : msg_(msg)
  {}
  ::upper_body::srv::arm_move_Request speed(::upper_body::srv::arm_move_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::upper_body::srv::arm_move_Request msg_;
};

class Init_arm_move_Request_right_arm_pos
{
public:
  explicit Init_arm_move_Request_right_arm_pos(::upper_body::srv::arm_move_Request & msg)
  : msg_(msg)
  {}
  Init_arm_move_Request_speed right_arm_pos(::upper_body::srv::arm_move_Request::_right_arm_pos_type arg)
  {
    msg_.right_arm_pos = std::move(arg);
    return Init_arm_move_Request_speed(msg_);
  }

private:
  ::upper_body::srv::arm_move_Request msg_;
};

class Init_arm_move_Request_left_arm_pos
{
public:
  explicit Init_arm_move_Request_left_arm_pos(::upper_body::srv::arm_move_Request & msg)
  : msg_(msg)
  {}
  Init_arm_move_Request_right_arm_pos left_arm_pos(::upper_body::srv::arm_move_Request::_left_arm_pos_type arg)
  {
    msg_.left_arm_pos = std::move(arg);
    return Init_arm_move_Request_right_arm_pos(msg_);
  }

private:
  ::upper_body::srv::arm_move_Request msg_;
};

class Init_arm_move_Request_right_arm_joints
{
public:
  explicit Init_arm_move_Request_right_arm_joints(::upper_body::srv::arm_move_Request & msg)
  : msg_(msg)
  {}
  Init_arm_move_Request_left_arm_pos right_arm_joints(::upper_body::srv::arm_move_Request::_right_arm_joints_type arg)
  {
    msg_.right_arm_joints = std::move(arg);
    return Init_arm_move_Request_left_arm_pos(msg_);
  }

private:
  ::upper_body::srv::arm_move_Request msg_;
};

class Init_arm_move_Request_left_arm_joints
{
public:
  explicit Init_arm_move_Request_left_arm_joints(::upper_body::srv::arm_move_Request & msg)
  : msg_(msg)
  {}
  Init_arm_move_Request_right_arm_joints left_arm_joints(::upper_body::srv::arm_move_Request::_left_arm_joints_type arg)
  {
    msg_.left_arm_joints = std::move(arg);
    return Init_arm_move_Request_right_arm_joints(msg_);
  }

private:
  ::upper_body::srv::arm_move_Request msg_;
};

class Init_arm_move_Request_move_type
{
public:
  Init_arm_move_Request_move_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_arm_move_Request_left_arm_joints move_type(::upper_body::srv::arm_move_Request::_move_type_type arg)
  {
    msg_.move_type = std::move(arg);
    return Init_arm_move_Request_left_arm_joints(msg_);
  }

private:
  ::upper_body::srv::arm_move_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::upper_body::srv::arm_move_Request>()
{
  return upper_body::srv::builder::Init_arm_move_Request_move_type();
}

}  // namespace upper_body


namespace upper_body
{

namespace srv
{

namespace builder
{

class Init_arm_move_Response_status
{
public:
  Init_arm_move_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::upper_body::srv::arm_move_Response status(::upper_body::srv::arm_move_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::upper_body::srv::arm_move_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::upper_body::srv::arm_move_Response>()
{
  return upper_body::srv::builder::Init_arm_move_Response_status();
}

}  // namespace upper_body

#endif  // UPPER_BODY__SRV__DETAIL__ARM_MOVE__BUILDER_HPP_
