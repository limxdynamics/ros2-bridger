// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mros_msgs:msg/NodeInfo.idl
// generated code does not contain a copyright notice

#ifndef MROS_MSGS__MSG__DETAIL__NODE_INFO__STRUCT_HPP_
#define MROS_MSGS__MSG__DETAIL__NODE_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mros_msgs__msg__NodeInfo __attribute__((deprecated))
#else
# define DEPRECATED__mros_msgs__msg__NodeInfo __declspec(deprecated)
#endif

namespace mros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeInfo_
{
  using Type = NodeInfo_<ContainerAllocator>;

  explicit NodeInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_name = "";
    }
  }

  explicit NodeInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_name = "";
    }
  }

  // field types and members
  using _node_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _node_name_type node_name;

  // setters for named parameter idiom
  Type & set__node_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->node_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mros_msgs::msg::NodeInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const mros_msgs::msg::NodeInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mros_msgs::msg::NodeInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mros_msgs::msg::NodeInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mros_msgs::msg::NodeInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mros_msgs::msg::NodeInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mros_msgs::msg::NodeInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mros_msgs::msg::NodeInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mros_msgs::msg::NodeInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mros_msgs::msg::NodeInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mros_msgs__msg__NodeInfo
    std::shared_ptr<mros_msgs::msg::NodeInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mros_msgs__msg__NodeInfo
    std::shared_ptr<mros_msgs::msg::NodeInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeInfo_ & other) const
  {
    if (this->node_name != other.node_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeInfo_

// alias to use template instance with default allocator
using NodeInfo =
  mros_msgs::msg::NodeInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mros_msgs

#endif  // MROS_MSGS__MSG__DETAIL__NODE_INFO__STRUCT_HPP_
