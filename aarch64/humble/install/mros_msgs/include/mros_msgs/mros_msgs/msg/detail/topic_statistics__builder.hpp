// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mros_msgs:msg/TopicStatistics.idl
// generated code does not contain a copyright notice

#ifndef MROS_MSGS__MSG__DETAIL__TOPIC_STATISTICS__BUILDER_HPP_
#define MROS_MSGS__MSG__DETAIL__TOPIC_STATISTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mros_msgs/msg/detail/topic_statistics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mros_msgs
{

namespace msg
{

namespace builder
{

class Init_TopicStatistics_publishers
{
public:
  explicit Init_TopicStatistics_publishers(::mros_msgs::msg::TopicStatistics & msg)
  : msg_(msg)
  {}
  ::mros_msgs::msg::TopicStatistics publishers(::mros_msgs::msg::TopicStatistics::_publishers_type arg)
  {
    msg_.publishers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mros_msgs::msg::TopicStatistics msg_;
};

class Init_TopicStatistics_subscribers
{
public:
  explicit Init_TopicStatistics_subscribers(::mros_msgs::msg::TopicStatistics & msg)
  : msg_(msg)
  {}
  Init_TopicStatistics_publishers subscribers(::mros_msgs::msg::TopicStatistics::_subscribers_type arg)
  {
    msg_.subscribers = std::move(arg);
    return Init_TopicStatistics_publishers(msg_);
  }

private:
  ::mros_msgs::msg::TopicStatistics msg_;
};

class Init_TopicStatistics_node
{
public:
  Init_TopicStatistics_node()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TopicStatistics_subscribers node(::mros_msgs::msg::TopicStatistics::_node_type arg)
  {
    msg_.node = std::move(arg);
    return Init_TopicStatistics_subscribers(msg_);
  }

private:
  ::mros_msgs::msg::TopicStatistics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mros_msgs::msg::TopicStatistics>()
{
  return mros_msgs::msg::builder::Init_TopicStatistics_node();
}

}  // namespace mros_msgs

#endif  // MROS_MSGS__MSG__DETAIL__TOPIC_STATISTICS__BUILDER_HPP_
