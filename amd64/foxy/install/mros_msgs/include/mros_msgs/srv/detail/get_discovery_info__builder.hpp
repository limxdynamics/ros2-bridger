// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mros_msgs:srv/GetDiscoveryInfo.idl
// generated code does not contain a copyright notice

#ifndef MROS_MSGS__SRV__DETAIL__GET_DISCOVERY_INFO__BUILDER_HPP_
#define MROS_MSGS__SRV__DETAIL__GET_DISCOVERY_INFO__BUILDER_HPP_

#include "mros_msgs/srv/detail/get_discovery_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mros_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mros_msgs::srv::GetDiscoveryInfo_Request>()
{
  return ::mros_msgs::srv::GetDiscoveryInfo_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mros_msgs


namespace mros_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDiscoveryInfo_Response_services
{
public:
  explicit Init_GetDiscoveryInfo_Response_services(::mros_msgs::srv::GetDiscoveryInfo_Response & msg)
  : msg_(msg)
  {}
  ::mros_msgs::srv::GetDiscoveryInfo_Response services(::mros_msgs::srv::GetDiscoveryInfo_Response::_services_type arg)
  {
    msg_.services = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mros_msgs::srv::GetDiscoveryInfo_Response msg_;
};

class Init_GetDiscoveryInfo_Response_publishers
{
public:
  explicit Init_GetDiscoveryInfo_Response_publishers(::mros_msgs::srv::GetDiscoveryInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetDiscoveryInfo_Response_services publishers(::mros_msgs::srv::GetDiscoveryInfo_Response::_publishers_type arg)
  {
    msg_.publishers = std::move(arg);
    return Init_GetDiscoveryInfo_Response_services(msg_);
  }

private:
  ::mros_msgs::srv::GetDiscoveryInfo_Response msg_;
};

class Init_GetDiscoveryInfo_Response_subscribers
{
public:
  explicit Init_GetDiscoveryInfo_Response_subscribers(::mros_msgs::srv::GetDiscoveryInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetDiscoveryInfo_Response_publishers subscribers(::mros_msgs::srv::GetDiscoveryInfo_Response::_subscribers_type arg)
  {
    msg_.subscribers = std::move(arg);
    return Init_GetDiscoveryInfo_Response_publishers(msg_);
  }

private:
  ::mros_msgs::srv::GetDiscoveryInfo_Response msg_;
};

class Init_GetDiscoveryInfo_Response_nodes
{
public:
  Init_GetDiscoveryInfo_Response_nodes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDiscoveryInfo_Response_subscribers nodes(::mros_msgs::srv::GetDiscoveryInfo_Response::_nodes_type arg)
  {
    msg_.nodes = std::move(arg);
    return Init_GetDiscoveryInfo_Response_subscribers(msg_);
  }

private:
  ::mros_msgs::srv::GetDiscoveryInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mros_msgs::srv::GetDiscoveryInfo_Response>()
{
  return mros_msgs::srv::builder::Init_GetDiscoveryInfo_Response_nodes();
}

}  // namespace mros_msgs

#endif  // MROS_MSGS__SRV__DETAIL__GET_DISCOVERY_INFO__BUILDER_HPP_
