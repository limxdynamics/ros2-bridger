// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from std_msgs:msg/Time.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "std_msgs/msg/time.hpp"


#ifndef STD_MSGS__MSG__DETAIL__TIME__BUILDER_HPP_
#define STD_MSGS__MSG__DETAIL__TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "std_msgs/msg/detail/time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace std_msgs
{

namespace msg
{

namespace builder
{

class Init_Time_data
{
public:
  Init_Time_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::std_msgs::msg::Time data(::std_msgs::msg::Time::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::std_msgs::msg::Time msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_msgs::msg::Time>()
{
  return std_msgs::msg::builder::Init_Time_data();
}

}  // namespace std_msgs

#endif  // STD_MSGS__MSG__DETAIL__TIME__BUILDER_HPP_
