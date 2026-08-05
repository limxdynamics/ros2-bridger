// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hand_msgs:msg/TactileCmd.idl
// generated code does not contain a copyright notice

#ifndef HAND_MSGS__MSG__DETAIL__TACTILE_CMD__STRUCT_HPP_
#define HAND_MSGS__MSG__DETAIL__TACTILE_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hand_msgs__msg__TactileCmd __attribute__((deprecated))
#else
# define DEPRECATED__hand_msgs__msg__TactileCmd __declspec(deprecated)
#endif

namespace hand_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TactileCmd_
{
  using Type = TactileCmd_<ContainerAllocator>;

  explicit TactileCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit TactileCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _names_type names;
  using _tactile_switch_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _tactile_switch_type tactile_switch;
  using _channel_reset_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _channel_reset_type channel_reset;
  using _calibration_trigger_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _calibration_trigger_type calibration_trigger;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->names = _arg;
    return *this;
  }
  Type & set__tactile_switch(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->tactile_switch = _arg;
    return *this;
  }
  Type & set__channel_reset(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->channel_reset = _arg;
    return *this;
  }
  Type & set__calibration_trigger(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->calibration_trigger = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hand_msgs::msg::TactileCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const hand_msgs::msg::TactileCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hand_msgs::msg::TactileCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hand_msgs::msg::TactileCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hand_msgs::msg::TactileCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hand_msgs::msg::TactileCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hand_msgs::msg::TactileCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hand_msgs::msg::TactileCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hand_msgs::msg::TactileCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hand_msgs::msg::TactileCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hand_msgs__msg__TactileCmd
    std::shared_ptr<hand_msgs::msg::TactileCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hand_msgs__msg__TactileCmd
    std::shared_ptr<hand_msgs::msg::TactileCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TactileCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->names != other.names) {
      return false;
    }
    if (this->tactile_switch != other.tactile_switch) {
      return false;
    }
    if (this->channel_reset != other.channel_reset) {
      return false;
    }
    if (this->calibration_trigger != other.calibration_trigger) {
      return false;
    }
    return true;
  }
  bool operator!=(const TactileCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TactileCmd_

// alias to use template instance with default allocator
using TactileCmd =
  hand_msgs::msg::TactileCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hand_msgs

#endif  // HAND_MSGS__MSG__DETAIL__TACTILE_CMD__STRUCT_HPP_
