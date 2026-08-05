// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from limx_arm_msgs:msg/JointSet.idl
// generated code does not contain a copyright notice

#ifndef LIMX_ARM_MSGS__MSG__DETAIL__JOINT_SET__BUILDER_HPP_
#define LIMX_ARM_MSGS__MSG__DETAIL__JOINT_SET__BUILDER_HPP_

#include "limx_arm_msgs/msg/detail/joint_set__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace limx_arm_msgs
{

namespace msg
{

namespace builder
{

class Init_JointSet_data
{
public:
  explicit Init_JointSet_data(::limx_arm_msgs::msg::JointSet & msg)
  : msg_(msg)
  {}
  ::limx_arm_msgs::msg::JointSet data(::limx_arm_msgs::msg::JointSet::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limx_arm_msgs::msg::JointSet msg_;
};

class Init_JointSet_mode
{
public:
  explicit Init_JointSet_mode(::limx_arm_msgs::msg::JointSet & msg)
  : msg_(msg)
  {}
  Init_JointSet_data mode(::limx_arm_msgs::msg::JointSet::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_JointSet_data(msg_);
  }

private:
  ::limx_arm_msgs::msg::JointSet msg_;
};

class Init_JointSet_action
{
public:
  explicit Init_JointSet_action(::limx_arm_msgs::msg::JointSet & msg)
  : msg_(msg)
  {}
  Init_JointSet_mode action(::limx_arm_msgs::msg::JointSet::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_JointSet_mode(msg_);
  }

private:
  ::limx_arm_msgs::msg::JointSet msg_;
};

class Init_JointSet_deviceid
{
public:
  explicit Init_JointSet_deviceid(::limx_arm_msgs::msg::JointSet & msg)
  : msg_(msg)
  {}
  Init_JointSet_action deviceid(::limx_arm_msgs::msg::JointSet::_deviceid_type arg)
  {
    msg_.deviceid = std::move(arg);
    return Init_JointSet_action(msg_);
  }

private:
  ::limx_arm_msgs::msg::JointSet msg_;
};

class Init_JointSet_stamp
{
public:
  Init_JointSet_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointSet_deviceid stamp(::limx_arm_msgs::msg::JointSet::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_JointSet_deviceid(msg_);
  }

private:
  ::limx_arm_msgs::msg::JointSet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::limx_arm_msgs::msg::JointSet>()
{
  return limx_arm_msgs::msg::builder::Init_JointSet_stamp();
}

}  // namespace limx_arm_msgs

#endif  // LIMX_ARM_MSGS__MSG__DETAIL__JOINT_SET__BUILDER_HPP_
