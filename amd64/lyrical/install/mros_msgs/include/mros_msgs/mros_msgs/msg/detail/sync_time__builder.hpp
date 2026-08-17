// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mros_msgs:msg/SyncTime.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mros_msgs/msg/sync_time.hpp"


#ifndef MROS_MSGS__MSG__DETAIL__SYNC_TIME__BUILDER_HPP_
#define MROS_MSGS__MSG__DETAIL__SYNC_TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mros_msgs/msg/detail/sync_time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mros_msgs
{

namespace msg
{

namespace builder
{

class Init_SyncTime_data
{
public:
  explicit Init_SyncTime_data(::mros_msgs::msg::SyncTime & msg)
  : msg_(msg)
  {}
  ::mros_msgs::msg::SyncTime data(::mros_msgs::msg::SyncTime::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mros_msgs::msg::SyncTime msg_;
};

class Init_SyncTime_tick
{
public:
  Init_SyncTime_tick()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SyncTime_data tick(::mros_msgs::msg::SyncTime::_tick_type arg)
  {
    msg_.tick = std::move(arg);
    return Init_SyncTime_data(msg_);
  }

private:
  ::mros_msgs::msg::SyncTime msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mros_msgs::msg::SyncTime>()
{
  return mros_msgs::msg::builder::Init_SyncTime_tick();
}

}  // namespace mros_msgs

#endif  // MROS_MSGS__MSG__DETAIL__SYNC_TIME__BUILDER_HPP_
