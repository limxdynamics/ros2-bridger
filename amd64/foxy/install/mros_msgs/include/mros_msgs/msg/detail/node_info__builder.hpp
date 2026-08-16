// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mros_msgs:msg/NodeInfo.idl
// generated code does not contain a copyright notice

#ifndef MROS_MSGS__MSG__DETAIL__NODE_INFO__BUILDER_HPP_
#define MROS_MSGS__MSG__DETAIL__NODE_INFO__BUILDER_HPP_

#include "mros_msgs/msg/detail/node_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mros_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeInfo_node_name
{
public:
  Init_NodeInfo_node_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mros_msgs::msg::NodeInfo node_name(::mros_msgs::msg::NodeInfo::_node_name_type arg)
  {
    msg_.node_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mros_msgs::msg::NodeInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mros_msgs::msg::NodeInfo>()
{
  return mros_msgs::msg::builder::Init_NodeInfo_node_name();
}

}  // namespace mros_msgs

#endif  // MROS_MSGS__MSG__DETAIL__NODE_INFO__BUILDER_HPP_
