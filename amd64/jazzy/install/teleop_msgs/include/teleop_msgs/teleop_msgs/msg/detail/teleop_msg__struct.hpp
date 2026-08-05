// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from teleop_msgs:msg/TeleopMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_msgs/msg/teleop_msg.hpp"


#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_MSG__STRUCT_HPP_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_MSG__STRUCT_HPP_

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
// Member 'world'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'anchors'
#include "teleop_msgs/msg/detail/key_point__struct.hpp"
// Member 'joint_cmd'
#include "controller_msgs/msg/detail/joint_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__teleop_msgs__msg__TeleopMsg __attribute__((deprecated))
#else
# define DEPRECATED__teleop_msgs__msg__TeleopMsg __declspec(deprecated)
#endif

namespace teleop_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TeleopMsg_
{
  using Type = TeleopMsg_<ContainerAllocator>;

  explicit TeleopMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    world(_init),
    joint_cmd(_init)
  {
    (void)_init;
  }

  explicit TeleopMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    world(_alloc, _init),
    joint_cmd(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _world_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _world_type world;
  using _anchors_type =
    std::vector<teleop_msgs::msg::KeyPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<teleop_msgs::msg::KeyPoint_<ContainerAllocator>>>;
  _anchors_type anchors;
  using _joint_cmd_type =
    controller_msgs::msg::JointCmd_<ContainerAllocator>;
  _joint_cmd_type joint_cmd;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__world(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->world = _arg;
    return *this;
  }
  Type & set__anchors(
    const std::vector<teleop_msgs::msg::KeyPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<teleop_msgs::msg::KeyPoint_<ContainerAllocator>>> & _arg)
  {
    this->anchors = _arg;
    return *this;
  }
  Type & set__joint_cmd(
    const controller_msgs::msg::JointCmd_<ContainerAllocator> & _arg)
  {
    this->joint_cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    teleop_msgs::msg::TeleopMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const teleop_msgs::msg::TeleopMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<teleop_msgs::msg::TeleopMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<teleop_msgs::msg::TeleopMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      teleop_msgs::msg::TeleopMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<teleop_msgs::msg::TeleopMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      teleop_msgs::msg::TeleopMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<teleop_msgs::msg::TeleopMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<teleop_msgs::msg::TeleopMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<teleop_msgs::msg::TeleopMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__teleop_msgs__msg__TeleopMsg
    std::shared_ptr<teleop_msgs::msg::TeleopMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__teleop_msgs__msg__TeleopMsg
    std::shared_ptr<teleop_msgs::msg::TeleopMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TeleopMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->world != other.world) {
      return false;
    }
    if (this->anchors != other.anchors) {
      return false;
    }
    if (this->joint_cmd != other.joint_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const TeleopMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TeleopMsg_

// alias to use template instance with default allocator
using TeleopMsg =
  teleop_msgs::msg::TeleopMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace teleop_msgs

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_MSG__STRUCT_HPP_
