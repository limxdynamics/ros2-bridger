// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from limx_arm_msgs:msg/JointData.idl
// generated code does not contain a copyright notice

#ifndef LIMX_ARM_MSGS__MSG__DETAIL__JOINT_DATA__BUILDER_HPP_
#define LIMX_ARM_MSGS__MSG__DETAIL__JOINT_DATA__BUILDER_HPP_

#include "limx_arm_msgs/msg/detail/joint_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace limx_arm_msgs
{

namespace msg
{

namespace builder
{

class Init_JointData_current
{
public:
  explicit Init_JointData_current(::limx_arm_msgs::msg::JointData & msg)
  : msg_(msg)
  {}
  ::limx_arm_msgs::msg::JointData current(::limx_arm_msgs::msg::JointData::_current_type arg)
  {
    msg_.current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limx_arm_msgs::msg::JointData msg_;
};

class Init_JointData_velocity
{
public:
  explicit Init_JointData_velocity(::limx_arm_msgs::msg::JointData & msg)
  : msg_(msg)
  {}
  Init_JointData_current velocity(::limx_arm_msgs::msg::JointData::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_JointData_current(msg_);
  }

private:
  ::limx_arm_msgs::msg::JointData msg_;
};

class Init_JointData_angle
{
public:
  explicit Init_JointData_angle(::limx_arm_msgs::msg::JointData & msg)
  : msg_(msg)
  {}
  Init_JointData_velocity angle(::limx_arm_msgs::msg::JointData::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_JointData_velocity(msg_);
  }

private:
  ::limx_arm_msgs::msg::JointData msg_;
};

class Init_JointData_deviceid
{
public:
  explicit Init_JointData_deviceid(::limx_arm_msgs::msg::JointData & msg)
  : msg_(msg)
  {}
  Init_JointData_angle deviceid(::limx_arm_msgs::msg::JointData::_deviceid_type arg)
  {
    msg_.deviceid = std::move(arg);
    return Init_JointData_angle(msg_);
  }

private:
  ::limx_arm_msgs::msg::JointData msg_;
};

class Init_JointData_stamp
{
public:
  Init_JointData_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointData_deviceid stamp(::limx_arm_msgs::msg::JointData::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_JointData_deviceid(msg_);
  }

private:
  ::limx_arm_msgs::msg::JointData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::limx_arm_msgs::msg::JointData>()
{
  return limx_arm_msgs::msg::builder::Init_JointData_stamp();
}

}  // namespace limx_arm_msgs

#endif  // LIMX_ARM_MSGS__MSG__DETAIL__JOINT_DATA__BUILDER_HPP_
