// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from std_srvs:srv/GetFloat32Array.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "std_srvs/srv/get_float32_array.hpp"


#ifndef STD_SRVS__SRV__DETAIL__GET_FLOAT32_ARRAY__BUILDER_HPP_
#define STD_SRVS__SRV__DETAIL__GET_FLOAT32_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "std_srvs/srv/detail/get_float32_array__struct.hpp"
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
auto build<::std_srvs::srv::GetFloat32Array_Request>()
{
  return ::std_srvs::srv::GetFloat32Array_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace std_srvs


namespace std_srvs
{

namespace srv
{

namespace builder
{

class Init_GetFloat32Array_Response_data
{
public:
  explicit Init_GetFloat32Array_Response_data(::std_srvs::srv::GetFloat32Array_Response & msg)
  : msg_(msg)
  {}
  ::std_srvs::srv::GetFloat32Array_Response data(::std_srvs::srv::GetFloat32Array_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::std_srvs::srv::GetFloat32Array_Response msg_;
};

class Init_GetFloat32Array_Response_message
{
public:
  explicit Init_GetFloat32Array_Response_message(::std_srvs::srv::GetFloat32Array_Response & msg)
  : msg_(msg)
  {}
  Init_GetFloat32Array_Response_data message(::std_srvs::srv::GetFloat32Array_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_GetFloat32Array_Response_data(msg_);
  }

private:
  ::std_srvs::srv::GetFloat32Array_Response msg_;
};

class Init_GetFloat32Array_Response_success
{
public:
  Init_GetFloat32Array_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetFloat32Array_Response_message success(::std_srvs::srv::GetFloat32Array_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetFloat32Array_Response_message(msg_);
  }

private:
  ::std_srvs::srv::GetFloat32Array_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_srvs::srv::GetFloat32Array_Response>()
{
  return std_srvs::srv::builder::Init_GetFloat32Array_Response_success();
}

}  // namespace std_srvs


namespace std_srvs
{

namespace srv
{

namespace builder
{

class Init_GetFloat32Array_Event_response
{
public:
  explicit Init_GetFloat32Array_Event_response(::std_srvs::srv::GetFloat32Array_Event & msg)
  : msg_(msg)
  {}
  ::std_srvs::srv::GetFloat32Array_Event response(::std_srvs::srv::GetFloat32Array_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::std_srvs::srv::GetFloat32Array_Event msg_;
};

class Init_GetFloat32Array_Event_request
{
public:
  explicit Init_GetFloat32Array_Event_request(::std_srvs::srv::GetFloat32Array_Event & msg)
  : msg_(msg)
  {}
  Init_GetFloat32Array_Event_response request(::std_srvs::srv::GetFloat32Array_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetFloat32Array_Event_response(msg_);
  }

private:
  ::std_srvs::srv::GetFloat32Array_Event msg_;
};

class Init_GetFloat32Array_Event_info
{
public:
  Init_GetFloat32Array_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetFloat32Array_Event_request info(::std_srvs::srv::GetFloat32Array_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetFloat32Array_Event_request(msg_);
  }

private:
  ::std_srvs::srv::GetFloat32Array_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_srvs::srv::GetFloat32Array_Event>()
{
  return std_srvs::srv::builder::Init_GetFloat32Array_Event_info();
}

}  // namespace std_srvs

#endif  // STD_SRVS__SRV__DETAIL__GET_FLOAT32_ARRAY__BUILDER_HPP_
