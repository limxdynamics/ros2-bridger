// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from std_msgs:msg/Duration.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__DURATION__STRUCT_HPP_
#define STD_MSGS__MSG__DETAIL__DURATION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'data'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__std_msgs__msg__Duration __attribute__((deprecated))
#else
# define DEPRECATED__std_msgs__msg__Duration __declspec(deprecated)
#endif

namespace std_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Duration_
{
  using Type = Duration_<ContainerAllocator>;

  explicit Duration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_init)
  {
    (void)_init;
  }

  explicit Duration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _data_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    std_msgs::msg::Duration_<ContainerAllocator> *;
  using ConstRawPtr =
    const std_msgs::msg::Duration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<std_msgs::msg::Duration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<std_msgs::msg::Duration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      std_msgs::msg::Duration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<std_msgs::msg::Duration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      std_msgs::msg::Duration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<std_msgs::msg::Duration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<std_msgs::msg::Duration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<std_msgs::msg::Duration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__std_msgs__msg__Duration
    std::shared_ptr<std_msgs::msg::Duration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__std_msgs__msg__Duration
    std::shared_ptr<std_msgs::msg::Duration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Duration_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Duration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Duration_

// alias to use template instance with default allocator
using Duration =
  std_msgs::msg::Duration_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace std_msgs

#endif  // STD_MSGS__MSG__DETAIL__DURATION__STRUCT_HPP_
