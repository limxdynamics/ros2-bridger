// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from std_msgs:msg/DurationArray.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__DURATION_ARRAY__BUILDER_HPP_
#define STD_MSGS__MSG__DETAIL__DURATION_ARRAY__BUILDER_HPP_

#include "std_msgs/msg/detail/duration_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace std_msgs
{

namespace msg
{

namespace builder
{

class Init_DurationArray_data
{
public:
  explicit Init_DurationArray_data(::std_msgs::msg::DurationArray & msg)
  : msg_(msg)
  {}
  ::std_msgs::msg::DurationArray data(::std_msgs::msg::DurationArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::std_msgs::msg::DurationArray msg_;
};

class Init_DurationArray_header
{
public:
  Init_DurationArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DurationArray_data header(::std_msgs::msg::DurationArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DurationArray_data(msg_);
  }

private:
  ::std_msgs::msg::DurationArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_msgs::msg::DurationArray>()
{
  return std_msgs::msg::builder::Init_DurationArray_header();
}

}  // namespace std_msgs

#endif  // STD_MSGS__MSG__DETAIL__DURATION_ARRAY__BUILDER_HPP_
