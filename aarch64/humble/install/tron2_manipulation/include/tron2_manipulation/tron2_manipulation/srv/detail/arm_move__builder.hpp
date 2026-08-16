// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tron2_manipulation:srv/arm_move.idl
// generated code does not contain a copyright notice

#ifndef TRON2_MANIPULATION__SRV__DETAIL__ARM_MOVE__BUILDER_HPP_
#define TRON2_MANIPULATION__SRV__DETAIL__ARM_MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tron2_manipulation/srv/detail/arm_move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tron2_manipulation
{

namespace srv
{

namespace builder
{

class Init_arm_move_Request_speed
{
public:
  explicit Init_arm_move_Request_speed(::tron2_manipulation::srv::arm_move_Request & msg)
  : msg_(msg)
  {}
  ::tron2_manipulation::srv::arm_move_Request speed(::tron2_manipulation::srv::arm_move_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tron2_manipulation::srv::arm_move_Request msg_;
};

class Init_arm_move_Request_right_arm_pos
{
public:
  explicit Init_arm_move_Request_right_arm_pos(::tron2_manipulation::srv::arm_move_Request & msg)
  : msg_(msg)
  {}
  Init_arm_move_Request_speed right_arm_pos(::tron2_manipulation::srv::arm_move_Request::_right_arm_pos_type arg)
  {
    msg_.right_arm_pos = std::move(arg);
    return Init_arm_move_Request_speed(msg_);
  }

private:
  ::tron2_manipulation::srv::arm_move_Request msg_;
};

class Init_arm_move_Request_left_arm_pos
{
public:
  Init_arm_move_Request_left_arm_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_arm_move_Request_right_arm_pos left_arm_pos(::tron2_manipulation::srv::arm_move_Request::_left_arm_pos_type arg)
  {
    msg_.left_arm_pos = std::move(arg);
    return Init_arm_move_Request_right_arm_pos(msg_);
  }

private:
  ::tron2_manipulation::srv::arm_move_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tron2_manipulation::srv::arm_move_Request>()
{
  return tron2_manipulation::srv::builder::Init_arm_move_Request_left_arm_pos();
}

}  // namespace tron2_manipulation


namespace tron2_manipulation
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
  ::tron2_manipulation::srv::arm_move_Response status(::tron2_manipulation::srv::arm_move_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tron2_manipulation::srv::arm_move_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tron2_manipulation::srv::arm_move_Response>()
{
  return tron2_manipulation::srv::builder::Init_arm_move_Response_status();
}

}  // namespace tron2_manipulation

#endif  // TRON2_MANIPULATION__SRV__DETAIL__ARM_MOVE__BUILDER_HPP_
