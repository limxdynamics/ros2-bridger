// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from teleop_msgs:msg/TeleopTarget.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_TARGET__STRUCT_HPP_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_TARGET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'source_stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__teleop_msgs__msg__TeleopTarget __attribute__((deprecated))
#else
# define DEPRECATED__teleop_msgs__msg__TeleopTarget __declspec(deprecated)
#endif

namespace teleop_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TeleopTarget_
{
  using Type = TeleopTarget_<ContainerAllocator>;

  explicit TeleopTarget_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    source_stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->validity = 0;
    }
  }

  explicit TeleopTarget_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    pose(_alloc, _init),
    source_stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->validity = 0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _validity_type =
    uint8_t;
  _validity_type validity;
  using _source_stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _source_stamp_type source_stamp;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__validity(
    const uint8_t & _arg)
  {
    this->validity = _arg;
    return *this;
  }
  Type & set__source_stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->source_stamp = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t VALIDITY_INVALID =
    0u;
  static constexpr uint8_t VALIDITY_VALID =
    1u;
  static constexpr uint8_t VALIDITY_STALE =
    2u;
  static constexpr uint8_t VALIDITY_EXTRAPOLATED =
    3u;

  // pointer types
  using RawPtr =
    teleop_msgs::msg::TeleopTarget_<ContainerAllocator> *;
  using ConstRawPtr =
    const teleop_msgs::msg::TeleopTarget_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<teleop_msgs::msg::TeleopTarget_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<teleop_msgs::msg::TeleopTarget_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      teleop_msgs::msg::TeleopTarget_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<teleop_msgs::msg::TeleopTarget_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      teleop_msgs::msg::TeleopTarget_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<teleop_msgs::msg::TeleopTarget_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<teleop_msgs::msg::TeleopTarget_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<teleop_msgs::msg::TeleopTarget_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__teleop_msgs__msg__TeleopTarget
    std::shared_ptr<teleop_msgs::msg::TeleopTarget_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__teleop_msgs__msg__TeleopTarget
    std::shared_ptr<teleop_msgs::msg::TeleopTarget_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TeleopTarget_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->validity != other.validity) {
      return false;
    }
    if (this->source_stamp != other.source_stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const TeleopTarget_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TeleopTarget_

// alias to use template instance with default allocator
using TeleopTarget =
  teleop_msgs::msg::TeleopTarget_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TeleopTarget_<ContainerAllocator>::VALIDITY_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TeleopTarget_<ContainerAllocator>::VALIDITY_VALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TeleopTarget_<ContainerAllocator>::VALIDITY_STALE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TeleopTarget_<ContainerAllocator>::VALIDITY_EXTRAPOLATED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace teleop_msgs

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_TARGET__STRUCT_HPP_
