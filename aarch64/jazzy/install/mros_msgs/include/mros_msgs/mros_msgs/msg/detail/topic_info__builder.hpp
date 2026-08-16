// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mros_msgs:msg/TopicInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mros_msgs/msg/topic_info.hpp"


#ifndef MROS_MSGS__MSG__DETAIL__TOPIC_INFO__BUILDER_HPP_
#define MROS_MSGS__MSG__DETAIL__TOPIC_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mros_msgs/msg/detail/topic_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mros_msgs
{

namespace msg
{

namespace builder
{

class Init_TopicInfo_enabled
{
public:
  explicit Init_TopicInfo_enabled(::mros_msgs::msg::TopicInfo & msg)
  : msg_(msg)
  {}
  ::mros_msgs::msg::TopicInfo enabled(::mros_msgs::msg::TopicInfo::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mros_msgs::msg::TopicInfo msg_;
};

class Init_TopicInfo_queue_size
{
public:
  explicit Init_TopicInfo_queue_size(::mros_msgs::msg::TopicInfo & msg)
  : msg_(msg)
  {}
  Init_TopicInfo_enabled queue_size(::mros_msgs::msg::TopicInfo::_queue_size_type arg)
  {
    msg_.queue_size = std::move(arg);
    return Init_TopicInfo_enabled(msg_);
  }

private:
  ::mros_msgs::msg::TopicInfo msg_;
};

class Init_TopicInfo_reliable
{
public:
  explicit Init_TopicInfo_reliable(::mros_msgs::msg::TopicInfo & msg)
  : msg_(msg)
  {}
  Init_TopicInfo_queue_size reliable(::mros_msgs::msg::TopicInfo::_reliable_type arg)
  {
    msg_.reliable = std::move(arg);
    return Init_TopicInfo_queue_size(msg_);
  }

private:
  ::mros_msgs::msg::TopicInfo msg_;
};

class Init_TopicInfo_latch
{
public:
  explicit Init_TopicInfo_latch(::mros_msgs::msg::TopicInfo & msg)
  : msg_(msg)
  {}
  Init_TopicInfo_reliable latch(::mros_msgs::msg::TopicInfo::_latch_type arg)
  {
    msg_.latch = std::move(arg);
    return Init_TopicInfo_reliable(msg_);
  }

private:
  ::mros_msgs::msg::TopicInfo msg_;
};

class Init_TopicInfo_definition
{
public:
  explicit Init_TopicInfo_definition(::mros_msgs::msg::TopicInfo & msg)
  : msg_(msg)
  {}
  Init_TopicInfo_latch definition(::mros_msgs::msg::TopicInfo::_definition_type arg)
  {
    msg_.definition = std::move(arg);
    return Init_TopicInfo_latch(msg_);
  }

private:
  ::mros_msgs::msg::TopicInfo msg_;
};

class Init_TopicInfo_node
{
public:
  explicit Init_TopicInfo_node(::mros_msgs::msg::TopicInfo & msg)
  : msg_(msg)
  {}
  Init_TopicInfo_definition node(::mros_msgs::msg::TopicInfo::_node_type arg)
  {
    msg_.node = std::move(arg);
    return Init_TopicInfo_definition(msg_);
  }

private:
  ::mros_msgs::msg::TopicInfo msg_;
};

class Init_TopicInfo_negotiated
{
public:
  explicit Init_TopicInfo_negotiated(::mros_msgs::msg::TopicInfo & msg)
  : msg_(msg)
  {}
  Init_TopicInfo_node negotiated(::mros_msgs::msg::TopicInfo::_negotiated_type arg)
  {
    msg_.negotiated = std::move(arg);
    return Init_TopicInfo_node(msg_);
  }

private:
  ::mros_msgs::msg::TopicInfo msg_;
};

class Init_TopicInfo_buffer_size
{
public:
  explicit Init_TopicInfo_buffer_size(::mros_msgs::msg::TopicInfo & msg)
  : msg_(msg)
  {}
  Init_TopicInfo_negotiated buffer_size(::mros_msgs::msg::TopicInfo::_buffer_size_type arg)
  {
    msg_.buffer_size = std::move(arg);
    return Init_TopicInfo_negotiated(msg_);
  }

private:
  ::mros_msgs::msg::TopicInfo msg_;
};

class Init_TopicInfo_md5sum
{
public:
  explicit Init_TopicInfo_md5sum(::mros_msgs::msg::TopicInfo & msg)
  : msg_(msg)
  {}
  Init_TopicInfo_buffer_size md5sum(::mros_msgs::msg::TopicInfo::_md5sum_type arg)
  {
    msg_.md5sum = std::move(arg);
    return Init_TopicInfo_buffer_size(msg_);
  }

private:
  ::mros_msgs::msg::TopicInfo msg_;
};

class Init_TopicInfo_message_type
{
public:
  explicit Init_TopicInfo_message_type(::mros_msgs::msg::TopicInfo & msg)
  : msg_(msg)
  {}
  Init_TopicInfo_md5sum message_type(::mros_msgs::msg::TopicInfo::_message_type_type arg)
  {
    msg_.message_type = std::move(arg);
    return Init_TopicInfo_md5sum(msg_);
  }

private:
  ::mros_msgs::msg::TopicInfo msg_;
};

class Init_TopicInfo_topic_name
{
public:
  explicit Init_TopicInfo_topic_name(::mros_msgs::msg::TopicInfo & msg)
  : msg_(msg)
  {}
  Init_TopicInfo_message_type topic_name(::mros_msgs::msg::TopicInfo::_topic_name_type arg)
  {
    msg_.topic_name = std::move(arg);
    return Init_TopicInfo_message_type(msg_);
  }

private:
  ::mros_msgs::msg::TopicInfo msg_;
};

class Init_TopicInfo_topic_id
{
public:
  Init_TopicInfo_topic_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TopicInfo_topic_name topic_id(::mros_msgs::msg::TopicInfo::_topic_id_type arg)
  {
    msg_.topic_id = std::move(arg);
    return Init_TopicInfo_topic_name(msg_);
  }

private:
  ::mros_msgs::msg::TopicInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mros_msgs::msg::TopicInfo>()
{
  return mros_msgs::msg::builder::Init_TopicInfo_topic_id();
}

}  // namespace mros_msgs

#endif  // MROS_MSGS__MSG__DETAIL__TOPIC_INFO__BUILDER_HPP_
