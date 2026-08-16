// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mros_msgs:srv/GetDiscoveryInfo.idl
// generated code does not contain a copyright notice

#ifndef MROS_MSGS__SRV__DETAIL__GET_DISCOVERY_INFO__STRUCT_HPP_
#define MROS_MSGS__SRV__DETAIL__GET_DISCOVERY_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mros_msgs__srv__GetDiscoveryInfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__mros_msgs__srv__GetDiscoveryInfo_Request __declspec(deprecated)
#endif

namespace mros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDiscoveryInfo_Request_
{
  using Type = GetDiscoveryInfo_Request_<ContainerAllocator>;

  explicit GetDiscoveryInfo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetDiscoveryInfo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    mros_msgs::srv::GetDiscoveryInfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mros_msgs::srv::GetDiscoveryInfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mros_msgs::srv::GetDiscoveryInfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mros_msgs::srv::GetDiscoveryInfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mros_msgs::srv::GetDiscoveryInfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mros_msgs::srv::GetDiscoveryInfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mros_msgs::srv::GetDiscoveryInfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mros_msgs::srv::GetDiscoveryInfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mros_msgs::srv::GetDiscoveryInfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mros_msgs::srv::GetDiscoveryInfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mros_msgs__srv__GetDiscoveryInfo_Request
    std::shared_ptr<mros_msgs::srv::GetDiscoveryInfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mros_msgs__srv__GetDiscoveryInfo_Request
    std::shared_ptr<mros_msgs::srv::GetDiscoveryInfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDiscoveryInfo_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDiscoveryInfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDiscoveryInfo_Request_

// alias to use template instance with default allocator
using GetDiscoveryInfo_Request =
  mros_msgs::srv::GetDiscoveryInfo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mros_msgs


// Include directives for member types
// Member 'nodes'
#include "mros_msgs/msg/detail/node_info__struct.hpp"
// Member 'subscribers'
// Member 'publishers'
// Member 'services'
#include "mros_msgs/msg/detail/topic_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mros_msgs__srv__GetDiscoveryInfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__mros_msgs__srv__GetDiscoveryInfo_Response __declspec(deprecated)
#endif

namespace mros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDiscoveryInfo_Response_
{
  using Type = GetDiscoveryInfo_Response_<ContainerAllocator>;

  explicit GetDiscoveryInfo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetDiscoveryInfo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _nodes_type =
    std::vector<mros_msgs::msg::NodeInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mros_msgs::msg::NodeInfo_<ContainerAllocator>>>;
  _nodes_type nodes;
  using _subscribers_type =
    std::vector<mros_msgs::msg::TopicInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mros_msgs::msg::TopicInfo_<ContainerAllocator>>>;
  _subscribers_type subscribers;
  using _publishers_type =
    std::vector<mros_msgs::msg::TopicInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mros_msgs::msg::TopicInfo_<ContainerAllocator>>>;
  _publishers_type publishers;
  using _services_type =
    std::vector<mros_msgs::msg::TopicInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mros_msgs::msg::TopicInfo_<ContainerAllocator>>>;
  _services_type services;

  // setters for named parameter idiom
  Type & set__nodes(
    const std::vector<mros_msgs::msg::NodeInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mros_msgs::msg::NodeInfo_<ContainerAllocator>>> & _arg)
  {
    this->nodes = _arg;
    return *this;
  }
  Type & set__subscribers(
    const std::vector<mros_msgs::msg::TopicInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mros_msgs::msg::TopicInfo_<ContainerAllocator>>> & _arg)
  {
    this->subscribers = _arg;
    return *this;
  }
  Type & set__publishers(
    const std::vector<mros_msgs::msg::TopicInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mros_msgs::msg::TopicInfo_<ContainerAllocator>>> & _arg)
  {
    this->publishers = _arg;
    return *this;
  }
  Type & set__services(
    const std::vector<mros_msgs::msg::TopicInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mros_msgs::msg::TopicInfo_<ContainerAllocator>>> & _arg)
  {
    this->services = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mros_msgs::srv::GetDiscoveryInfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mros_msgs::srv::GetDiscoveryInfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mros_msgs::srv::GetDiscoveryInfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mros_msgs::srv::GetDiscoveryInfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mros_msgs::srv::GetDiscoveryInfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mros_msgs::srv::GetDiscoveryInfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mros_msgs::srv::GetDiscoveryInfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mros_msgs::srv::GetDiscoveryInfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mros_msgs::srv::GetDiscoveryInfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mros_msgs::srv::GetDiscoveryInfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mros_msgs__srv__GetDiscoveryInfo_Response
    std::shared_ptr<mros_msgs::srv::GetDiscoveryInfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mros_msgs__srv__GetDiscoveryInfo_Response
    std::shared_ptr<mros_msgs::srv::GetDiscoveryInfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDiscoveryInfo_Response_ & other) const
  {
    if (this->nodes != other.nodes) {
      return false;
    }
    if (this->subscribers != other.subscribers) {
      return false;
    }
    if (this->publishers != other.publishers) {
      return false;
    }
    if (this->services != other.services) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDiscoveryInfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDiscoveryInfo_Response_

// alias to use template instance with default allocator
using GetDiscoveryInfo_Response =
  mros_msgs::srv::GetDiscoveryInfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mros_msgs

namespace mros_msgs
{

namespace srv
{

struct GetDiscoveryInfo
{
  using Request = mros_msgs::srv::GetDiscoveryInfo_Request;
  using Response = mros_msgs::srv::GetDiscoveryInfo_Response;
};

}  // namespace srv

}  // namespace mros_msgs

#endif  // MROS_MSGS__SRV__DETAIL__GET_DISCOVERY_INFO__STRUCT_HPP_
