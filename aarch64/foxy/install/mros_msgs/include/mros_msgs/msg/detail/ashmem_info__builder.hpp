// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mros_msgs:msg/AshmemInfo.idl
// generated code does not contain a copyright notice

#ifndef MROS_MSGS__MSG__DETAIL__ASHMEM_INFO__BUILDER_HPP_
#define MROS_MSGS__MSG__DETAIL__ASHMEM_INFO__BUILDER_HPP_

#include "mros_msgs/msg/detail/ashmem_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mros_msgs
{

namespace msg
{

namespace builder
{

class Init_AshmemInfo_identity
{
public:
  explicit Init_AshmemInfo_identity(::mros_msgs::msg::AshmemInfo & msg)
  : msg_(msg)
  {}
  ::mros_msgs::msg::AshmemInfo identity(::mros_msgs::msg::AshmemInfo::_identity_type arg)
  {
    msg_.identity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mros_msgs::msg::AshmemInfo msg_;
};

class Init_AshmemInfo_msg_size
{
public:
  explicit Init_AshmemInfo_msg_size(::mros_msgs::msg::AshmemInfo & msg)
  : msg_(msg)
  {}
  Init_AshmemInfo_identity msg_size(::mros_msgs::msg::AshmemInfo::_msg_size_type arg)
  {
    msg_.msg_size = std::move(arg);
    return Init_AshmemInfo_identity(msg_);
  }

private:
  ::mros_msgs::msg::AshmemInfo msg_;
};

class Init_AshmemInfo_shm_size
{
public:
  explicit Init_AshmemInfo_shm_size(::mros_msgs::msg::AshmemInfo & msg)
  : msg_(msg)
  {}
  Init_AshmemInfo_msg_size shm_size(::mros_msgs::msg::AshmemInfo::_shm_size_type arg)
  {
    msg_.shm_size = std::move(arg);
    return Init_AshmemInfo_msg_size(msg_);
  }

private:
  ::mros_msgs::msg::AshmemInfo msg_;
};

class Init_AshmemInfo_shm_seed
{
public:
  explicit Init_AshmemInfo_shm_seed(::mros_msgs::msg::AshmemInfo & msg)
  : msg_(msg)
  {}
  Init_AshmemInfo_shm_size shm_seed(::mros_msgs::msg::AshmemInfo::_shm_seed_type arg)
  {
    msg_.shm_seed = std::move(arg);
    return Init_AshmemInfo_shm_size(msg_);
  }

private:
  ::mros_msgs::msg::AshmemInfo msg_;
};

class Init_AshmemInfo_message_definition
{
public:
  explicit Init_AshmemInfo_message_definition(::mros_msgs::msg::AshmemInfo & msg)
  : msg_(msg)
  {}
  Init_AshmemInfo_shm_seed message_definition(::mros_msgs::msg::AshmemInfo::_message_definition_type arg)
  {
    msg_.message_definition = std::move(arg);
    return Init_AshmemInfo_shm_seed(msg_);
  }

private:
  ::mros_msgs::msg::AshmemInfo msg_;
};

class Init_AshmemInfo_message_md5sum
{
public:
  explicit Init_AshmemInfo_message_md5sum(::mros_msgs::msg::AshmemInfo & msg)
  : msg_(msg)
  {}
  Init_AshmemInfo_message_definition message_md5sum(::mros_msgs::msg::AshmemInfo::_message_md5sum_type arg)
  {
    msg_.message_md5sum = std::move(arg);
    return Init_AshmemInfo_message_definition(msg_);
  }

private:
  ::mros_msgs::msg::AshmemInfo msg_;
};

class Init_AshmemInfo_message_type
{
public:
  explicit Init_AshmemInfo_message_type(::mros_msgs::msg::AshmemInfo & msg)
  : msg_(msg)
  {}
  Init_AshmemInfo_message_md5sum message_type(::mros_msgs::msg::AshmemInfo::_message_type_type arg)
  {
    msg_.message_type = std::move(arg);
    return Init_AshmemInfo_message_md5sum(msg_);
  }

private:
  ::mros_msgs::msg::AshmemInfo msg_;
};

class Init_AshmemInfo_topic_name
{
public:
  explicit Init_AshmemInfo_topic_name(::mros_msgs::msg::AshmemInfo & msg)
  : msg_(msg)
  {}
  Init_AshmemInfo_message_type topic_name(::mros_msgs::msg::AshmemInfo::_topic_name_type arg)
  {
    msg_.topic_name = std::move(arg);
    return Init_AshmemInfo_message_type(msg_);
  }

private:
  ::mros_msgs::msg::AshmemInfo msg_;
};

class Init_AshmemInfo_topic_id
{
public:
  Init_AshmemInfo_topic_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AshmemInfo_topic_name topic_id(::mros_msgs::msg::AshmemInfo::_topic_id_type arg)
  {
    msg_.topic_id = std::move(arg);
    return Init_AshmemInfo_topic_name(msg_);
  }

private:
  ::mros_msgs::msg::AshmemInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mros_msgs::msg::AshmemInfo>()
{
  return mros_msgs::msg::builder::Init_AshmemInfo_topic_id();
}

}  // namespace mros_msgs

#endif  // MROS_MSGS__MSG__DETAIL__ASHMEM_INFO__BUILDER_HPP_
