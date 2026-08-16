// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from std_msgs:msg/TimeArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "std_msgs/msg/time_array.hpp"


#ifndef STD_MSGS__MSG__DETAIL__TIME_ARRAY__BUILDER_HPP_
#define STD_MSGS__MSG__DETAIL__TIME_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "std_msgs/msg/detail/time_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace std_msgs
{

namespace msg
{

namespace builder
{

class Init_TimeArray_data
{
public:
  explicit Init_TimeArray_data(::std_msgs::msg::TimeArray & msg)
  : msg_(msg)
  {}
  ::std_msgs::msg::TimeArray data(::std_msgs::msg::TimeArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::std_msgs::msg::TimeArray msg_;
};

class Init_TimeArray_header
{
public:
  Init_TimeArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimeArray_data header(::std_msgs::msg::TimeArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TimeArray_data(msg_);
  }

private:
  ::std_msgs::msg::TimeArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_msgs::msg::TimeArray>()
{
  return std_msgs::msg::builder::Init_TimeArray_header();
}

}  // namespace std_msgs

#endif  // STD_MSGS__MSG__DETAIL__TIME_ARRAY__BUILDER_HPP_
