// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mros_msgs:msg/SyncTime.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mros_msgs/msg/sync_time.hpp"


#ifndef MROS_MSGS__MSG__DETAIL__SYNC_TIME__STRUCT_HPP_
#define MROS_MSGS__MSG__DETAIL__SYNC_TIME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mros_msgs__msg__SyncTime __attribute__((deprecated))
#else
# define DEPRECATED__mros_msgs__msg__SyncTime __declspec(deprecated)
#endif

namespace mros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SyncTime_
{
  using Type = SyncTime_<ContainerAllocator>;

  explicit SyncTime_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tick = 0ul;
    }
  }

  explicit SyncTime_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tick = 0ul;
    }
  }

  // field types and members
  using _tick_type =
    uint32_t;
  _tick_type tick;
  using _data_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__tick(
    const uint32_t & _arg)
  {
    this->tick = _arg;
    return *this;
  }
  Type & set__data(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mros_msgs::msg::SyncTime_<ContainerAllocator> *;
  using ConstRawPtr =
    const mros_msgs::msg::SyncTime_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mros_msgs::msg::SyncTime_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mros_msgs::msg::SyncTime_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mros_msgs::msg::SyncTime_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mros_msgs::msg::SyncTime_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mros_msgs::msg::SyncTime_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mros_msgs::msg::SyncTime_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mros_msgs::msg::SyncTime_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mros_msgs::msg::SyncTime_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mros_msgs__msg__SyncTime
    std::shared_ptr<mros_msgs::msg::SyncTime_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mros_msgs__msg__SyncTime
    std::shared_ptr<mros_msgs::msg::SyncTime_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SyncTime_ & other) const
  {
    if (this->tick != other.tick) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SyncTime_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SyncTime_

// alias to use template instance with default allocator
using SyncTime =
  mros_msgs::msg::SyncTime_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mros_msgs

#endif  // MROS_MSGS__MSG__DETAIL__SYNC_TIME__STRUCT_HPP_
