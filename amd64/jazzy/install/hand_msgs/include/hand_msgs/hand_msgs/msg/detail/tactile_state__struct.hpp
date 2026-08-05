// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hand_msgs:msg/TactileState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hand_msgs/msg/tactile_state.hpp"


#ifndef HAND_MSGS__MSG__DETAIL__TACTILE_STATE__STRUCT_HPP_
#define HAND_MSGS__MSG__DETAIL__TACTILE_STATE__STRUCT_HPP_

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
# define DEPRECATED__hand_msgs__msg__TactileState __attribute__((deprecated))
#else
# define DEPRECATED__hand_msgs__msg__TactileState __declspec(deprecated)
#endif

namespace hand_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TactileState_
{
  using Type = TactileState_<ContainerAllocator>;

  explicit TactileState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit TactileState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  using _normal_force_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _normal_force_type normal_force;
  using _tangential_force_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _tangential_force_type tangential_force;
  using _direction_angle_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _direction_angle_type direction_angle;
  using _approximate_value_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _approximate_value_type approximate_value;
  using _tactile_state_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _tactile_state_type tactile_state;

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
  Type & set__normal_force(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->normal_force = _arg;
    return *this;
  }
  Type & set__tangential_force(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->tangential_force = _arg;
    return *this;
  }
  Type & set__direction_angle(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->direction_angle = _arg;
    return *this;
  }
  Type & set__approximate_value(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->approximate_value = _arg;
    return *this;
  }
  Type & set__tactile_state(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->tactile_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hand_msgs::msg::TactileState_<ContainerAllocator> *;
  using ConstRawPtr =
    const hand_msgs::msg::TactileState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hand_msgs::msg::TactileState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hand_msgs::msg::TactileState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hand_msgs::msg::TactileState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hand_msgs::msg::TactileState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hand_msgs::msg::TactileState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hand_msgs::msg::TactileState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hand_msgs::msg::TactileState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hand_msgs::msg::TactileState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hand_msgs__msg__TactileState
    std::shared_ptr<hand_msgs::msg::TactileState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hand_msgs__msg__TactileState
    std::shared_ptr<hand_msgs::msg::TactileState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TactileState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->names != other.names) {
      return false;
    }
    if (this->normal_force != other.normal_force) {
      return false;
    }
    if (this->tangential_force != other.tangential_force) {
      return false;
    }
    if (this->direction_angle != other.direction_angle) {
      return false;
    }
    if (this->approximate_value != other.approximate_value) {
      return false;
    }
    if (this->tactile_state != other.tactile_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const TactileState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TactileState_

// alias to use template instance with default allocator
using TactileState =
  hand_msgs::msg::TactileState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hand_msgs

#endif  // HAND_MSGS__MSG__DETAIL__TACTILE_STATE__STRUCT_HPP_
