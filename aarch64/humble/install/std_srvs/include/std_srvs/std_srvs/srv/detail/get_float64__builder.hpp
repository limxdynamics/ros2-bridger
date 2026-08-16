// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from std_srvs:srv/GetFloat64.idl
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__DETAIL__GET_FLOAT64__BUILDER_HPP_
#define STD_SRVS__SRV__DETAIL__GET_FLOAT64__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "std_srvs/srv/detail/get_float64__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace std_srvs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_srvs::srv::GetFloat64_Request>()
{
  return ::std_srvs::srv::GetFloat64_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace std_srvs


namespace std_srvs
{

namespace srv
{

namespace builder
{

class Init_GetFloat64_Response_data
{
public:
  explicit Init_GetFloat64_Response_data(::std_srvs::srv::GetFloat64_Response & msg)
  : msg_(msg)
  {}
  ::std_srvs::srv::GetFloat64_Response data(::std_srvs::srv::GetFloat64_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::std_srvs::srv::GetFloat64_Response msg_;
};

class Init_GetFloat64_Response_message
{
public:
  explicit Init_GetFloat64_Response_message(::std_srvs::srv::GetFloat64_Response & msg)
  : msg_(msg)
  {}
  Init_GetFloat64_Response_data message(::std_srvs::srv::GetFloat64_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_GetFloat64_Response_data(msg_);
  }

private:
  ::std_srvs::srv::GetFloat64_Response msg_;
};

class Init_GetFloat64_Response_success
{
public:
  Init_GetFloat64_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetFloat64_Response_message success(::std_srvs::srv::GetFloat64_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetFloat64_Response_message(msg_);
  }

private:
  ::std_srvs::srv::GetFloat64_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_srvs::srv::GetFloat64_Response>()
{
  return std_srvs::srv::builder::Init_GetFloat64_Response_success();
}

}  // namespace std_srvs

#endif  // STD_SRVS__SRV__DETAIL__GET_FLOAT64__BUILDER_HPP_
