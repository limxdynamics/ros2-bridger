// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from std_srvs:srv/SetUint32ArrayWithTitle.idl
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__DETAIL__SET_UINT32_ARRAY_WITH_TITLE__BUILDER_HPP_
#define STD_SRVS__SRV__DETAIL__SET_UINT32_ARRAY_WITH_TITLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "std_srvs/srv/detail/set_uint32_array_with_title__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace std_srvs
{

namespace srv
{

namespace builder
{

class Init_SetUint32ArrayWithTitle_Request_data
{
public:
  explicit Init_SetUint32ArrayWithTitle_Request_data(::std_srvs::srv::SetUint32ArrayWithTitle_Request & msg)
  : msg_(msg)
  {}
  ::std_srvs::srv::SetUint32ArrayWithTitle_Request data(::std_srvs::srv::SetUint32ArrayWithTitle_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::std_srvs::srv::SetUint32ArrayWithTitle_Request msg_;
};

class Init_SetUint32ArrayWithTitle_Request_title
{
public:
  Init_SetUint32ArrayWithTitle_Request_title()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetUint32ArrayWithTitle_Request_data title(::std_srvs::srv::SetUint32ArrayWithTitle_Request::_title_type arg)
  {
    msg_.title = std::move(arg);
    return Init_SetUint32ArrayWithTitle_Request_data(msg_);
  }

private:
  ::std_srvs::srv::SetUint32ArrayWithTitle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_srvs::srv::SetUint32ArrayWithTitle_Request>()
{
  return std_srvs::srv::builder::Init_SetUint32ArrayWithTitle_Request_title();
}

}  // namespace std_srvs


namespace std_srvs
{

namespace srv
{

namespace builder
{

class Init_SetUint32ArrayWithTitle_Response_message
{
public:
  explicit Init_SetUint32ArrayWithTitle_Response_message(::std_srvs::srv::SetUint32ArrayWithTitle_Response & msg)
  : msg_(msg)
  {}
  ::std_srvs::srv::SetUint32ArrayWithTitle_Response message(::std_srvs::srv::SetUint32ArrayWithTitle_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::std_srvs::srv::SetUint32ArrayWithTitle_Response msg_;
};

class Init_SetUint32ArrayWithTitle_Response_success
{
public:
  Init_SetUint32ArrayWithTitle_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetUint32ArrayWithTitle_Response_message success(::std_srvs::srv::SetUint32ArrayWithTitle_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetUint32ArrayWithTitle_Response_message(msg_);
  }

private:
  ::std_srvs::srv::SetUint32ArrayWithTitle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_srvs::srv::SetUint32ArrayWithTitle_Response>()
{
  return std_srvs::srv::builder::Init_SetUint32ArrayWithTitle_Response_success();
}

}  // namespace std_srvs

#endif  // STD_SRVS__SRV__DETAIL__SET_UINT32_ARRAY_WITH_TITLE__BUILDER_HPP_
