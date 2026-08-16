// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mros_msgs:msg/TopicStatistics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mros_msgs/msg/topic_statistics.hpp"


#ifndef MROS_MSGS__MSG__DETAIL__TOPIC_STATISTICS__STRUCT_HPP_
#define MROS_MSGS__MSG__DETAIL__TOPIC_STATISTICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'subscribers'
// Member 'publishers'
#include "mros_msgs/msg/detail/topic_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mros_msgs__msg__TopicStatistics __attribute__((deprecated))
#else
# define DEPRECATED__mros_msgs__msg__TopicStatistics __declspec(deprecated)
#endif

namespace mros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TopicStatistics_
{
  using Type = TopicStatistics_<ContainerAllocator>;

  explicit TopicStatistics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node = "";
    }
  }

  explicit TopicStatistics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node = "";
    }
  }

  // field types and members
  using _node_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_type node;
  using _subscribers_type =
    std::vector<mros_msgs::msg::TopicInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mros_msgs::msg::TopicInfo_<ContainerAllocator>>>;
  _subscribers_type subscribers;
  using _publishers_type =
    std::vector<mros_msgs::msg::TopicInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mros_msgs::msg::TopicInfo_<ContainerAllocator>>>;
  _publishers_type publishers;

  // setters for named parameter idiom
  Type & set__node(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node = _arg;
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

  // constant declarations

  // pointer types
  using RawPtr =
    mros_msgs::msg::TopicStatistics_<ContainerAllocator> *;
  using ConstRawPtr =
    const mros_msgs::msg::TopicStatistics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mros_msgs::msg::TopicStatistics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mros_msgs::msg::TopicStatistics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mros_msgs::msg::TopicStatistics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mros_msgs::msg::TopicStatistics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mros_msgs::msg::TopicStatistics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mros_msgs::msg::TopicStatistics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mros_msgs::msg::TopicStatistics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mros_msgs::msg::TopicStatistics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mros_msgs__msg__TopicStatistics
    std::shared_ptr<mros_msgs::msg::TopicStatistics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mros_msgs__msg__TopicStatistics
    std::shared_ptr<mros_msgs::msg::TopicStatistics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TopicStatistics_ & other) const
  {
    if (this->node != other.node) {
      return false;
    }
    if (this->subscribers != other.subscribers) {
      return false;
    }
    if (this->publishers != other.publishers) {
      return false;
    }
    return true;
  }
  bool operator!=(const TopicStatistics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TopicStatistics_

// alias to use template instance with default allocator
using TopicStatistics =
  mros_msgs::msg::TopicStatistics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mros_msgs

#endif  // MROS_MSGS__MSG__DETAIL__TOPIC_STATISTICS__STRUCT_HPP_
