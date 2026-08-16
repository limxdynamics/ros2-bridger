// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mros_msgs:msg/Log.idl
// generated code does not contain a copyright notice

#ifndef MROS_MSGS__MSG__DETAIL__LOG__BUILDER_HPP_
#define MROS_MSGS__MSG__DETAIL__LOG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mros_msgs/msg/detail/log__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mros_msgs
{

namespace msg
{

namespace builder
{

class Init_Log_tid
{
public:
  explicit Init_Log_tid(::mros_msgs::msg::Log & msg)
  : msg_(msg)
  {}
  ::mros_msgs::msg::Log tid(::mros_msgs::msg::Log::_tid_type arg)
  {
    msg_.tid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mros_msgs::msg::Log msg_;
};

class Init_Log_pid
{
public:
  explicit Init_Log_pid(::mros_msgs::msg::Log & msg)
  : msg_(msg)
  {}
  Init_Log_tid pid(::mros_msgs::msg::Log::_pid_type arg)
  {
    msg_.pid = std::move(arg);
    return Init_Log_tid(msg_);
  }

private:
  ::mros_msgs::msg::Log msg_;
};

class Init_Log_topics
{
public:
  explicit Init_Log_topics(::mros_msgs::msg::Log & msg)
  : msg_(msg)
  {}
  Init_Log_pid topics(::mros_msgs::msg::Log::_topics_type arg)
  {
    msg_.topics = std::move(arg);
    return Init_Log_pid(msg_);
  }

private:
  ::mros_msgs::msg::Log msg_;
};

class Init_Log_line
{
public:
  explicit Init_Log_line(::mros_msgs::msg::Log & msg)
  : msg_(msg)
  {}
  Init_Log_topics line(::mros_msgs::msg::Log::_line_type arg)
  {
    msg_.line = std::move(arg);
    return Init_Log_topics(msg_);
  }

private:
  ::mros_msgs::msg::Log msg_;
};

class Init_Log_function
{
public:
  explicit Init_Log_function(::mros_msgs::msg::Log & msg)
  : msg_(msg)
  {}
  Init_Log_line function(::mros_msgs::msg::Log::_function_type arg)
  {
    msg_.function = std::move(arg);
    return Init_Log_line(msg_);
  }

private:
  ::mros_msgs::msg::Log msg_;
};

class Init_Log_file
{
public:
  explicit Init_Log_file(::mros_msgs::msg::Log & msg)
  : msg_(msg)
  {}
  Init_Log_function file(::mros_msgs::msg::Log::_file_type arg)
  {
    msg_.file = std::move(arg);
    return Init_Log_function(msg_);
  }

private:
  ::mros_msgs::msg::Log msg_;
};

class Init_Log_msg
{
public:
  explicit Init_Log_msg(::mros_msgs::msg::Log & msg)
  : msg_(msg)
  {}
  Init_Log_file msg(::mros_msgs::msg::Log::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_Log_file(msg_);
  }

private:
  ::mros_msgs::msg::Log msg_;
};

class Init_Log_name
{
public:
  explicit Init_Log_name(::mros_msgs::msg::Log & msg)
  : msg_(msg)
  {}
  Init_Log_msg name(::mros_msgs::msg::Log::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Log_msg(msg_);
  }

private:
  ::mros_msgs::msg::Log msg_;
};

class Init_Log_level
{
public:
  explicit Init_Log_level(::mros_msgs::msg::Log & msg)
  : msg_(msg)
  {}
  Init_Log_name level(::mros_msgs::msg::Log::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_Log_name(msg_);
  }

private:
  ::mros_msgs::msg::Log msg_;
};

class Init_Log_header
{
public:
  Init_Log_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Log_level header(::mros_msgs::msg::Log::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Log_level(msg_);
  }

private:
  ::mros_msgs::msg::Log msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mros_msgs::msg::Log>()
{
  return mros_msgs::msg::builder::Init_Log_header();
}

}  // namespace mros_msgs

#endif  // MROS_MSGS__MSG__DETAIL__LOG__BUILDER_HPP_
