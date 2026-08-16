// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from std_srvs:srv/GetBoolWithTile.idl
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__DETAIL__GET_BOOL_WITH_TILE__BUILDER_HPP_
#define STD_SRVS__SRV__DETAIL__GET_BOOL_WITH_TILE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "std_srvs/srv/detail/get_bool_with_tile__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace std_srvs
{

namespace srv
{

namespace builder
{

class Init_GetBoolWithTile_Request_title
{
public:
  Init_GetBoolWithTile_Request_title()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::std_srvs::srv::GetBoolWithTile_Request title(::std_srvs::srv::GetBoolWithTile_Request::_title_type arg)
  {
    msg_.title = std::move(arg);
    return std::move(msg_);
  }

private:
  ::std_srvs::srv::GetBoolWithTile_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_srvs::srv::GetBoolWithTile_Request>()
{
  return std_srvs::srv::builder::Init_GetBoolWithTile_Request_title();
}

}  // namespace std_srvs


namespace std_srvs
{

namespace srv
{

namespace builder
{

class Init_GetBoolWithTile_Response_message
{
public:
  explicit Init_GetBoolWithTile_Response_message(::std_srvs::srv::GetBoolWithTile_Response & msg)
  : msg_(msg)
  {}
  ::std_srvs::srv::GetBoolWithTile_Response message(::std_srvs::srv::GetBoolWithTile_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::std_srvs::srv::GetBoolWithTile_Response msg_;
};

class Init_GetBoolWithTile_Response_success
{
public:
  explicit Init_GetBoolWithTile_Response_success(::std_srvs::srv::GetBoolWithTile_Response & msg)
  : msg_(msg)
  {}
  Init_GetBoolWithTile_Response_message success(::std_srvs::srv::GetBoolWithTile_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetBoolWithTile_Response_message(msg_);
  }

private:
  ::std_srvs::srv::GetBoolWithTile_Response msg_;
};

class Init_GetBoolWithTile_Response_data
{
public:
  Init_GetBoolWithTile_Response_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetBoolWithTile_Response_success data(::std_srvs::srv::GetBoolWithTile_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_GetBoolWithTile_Response_success(msg_);
  }

private:
  ::std_srvs::srv::GetBoolWithTile_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_srvs::srv::GetBoolWithTile_Response>()
{
  return std_srvs::srv::builder::Init_GetBoolWithTile_Response_data();
}

}  // namespace std_srvs

#endif  // STD_SRVS__SRV__DETAIL__GET_BOOL_WITH_TILE__BUILDER_HPP_
