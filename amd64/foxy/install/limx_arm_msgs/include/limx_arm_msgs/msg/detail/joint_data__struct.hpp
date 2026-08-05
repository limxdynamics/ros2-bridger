// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from limx_arm_msgs:msg/JointData.idl
// generated code does not contain a copyright notice

#ifndef LIMX_ARM_MSGS__MSG__DETAIL__JOINT_DATA__STRUCT_HPP_
#define LIMX_ARM_MSGS__MSG__DETAIL__JOINT_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__limx_arm_msgs__msg__JointData __attribute__((deprecated))
#else
# define DEPRECATED__limx_arm_msgs__msg__JointData __declspec(deprecated)
#endif

namespace limx_arm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointData_
{
  using Type = JointData_<ContainerAllocator>;

  explicit JointData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stamp = 0ll;
      this->deviceid = "";
      std::fill<typename std::array<float, 6>::iterator, float>(this->angle.begin(), this->angle.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->velocity.begin(), this->velocity.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->current.begin(), this->current.end(), 0.0f);
    }
  }

  explicit JointData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : deviceid(_alloc),
    angle(_alloc),
    velocity(_alloc),
    current(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stamp = 0ll;
      this->deviceid = "";
      std::fill<typename std::array<float, 6>::iterator, float>(this->angle.begin(), this->angle.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->velocity.begin(), this->velocity.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->current.begin(), this->current.end(), 0.0f);
    }
  }

  // field types and members
  using _stamp_type =
    int64_t;
  _stamp_type stamp;
  using _deviceid_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _deviceid_type deviceid;
  using _angle_type =
    std::array<float, 6>;
  _angle_type angle;
  using _velocity_type =
    std::array<float, 6>;
  _velocity_type velocity;
  using _current_type =
    std::array<float, 6>;
  _current_type current;

  // setters for named parameter idiom
  Type & set__stamp(
    const int64_t & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__deviceid(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->deviceid = _arg;
    return *this;
  }
  Type & set__angle(
    const std::array<float, 6> & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::array<float, 6> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__current(
    const std::array<float, 6> & _arg)
  {
    this->current = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    limx_arm_msgs::msg::JointData_<ContainerAllocator> *;
  using ConstRawPtr =
    const limx_arm_msgs::msg::JointData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<limx_arm_msgs::msg::JointData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<limx_arm_msgs::msg::JointData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      limx_arm_msgs::msg::JointData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<limx_arm_msgs::msg::JointData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      limx_arm_msgs::msg::JointData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<limx_arm_msgs::msg::JointData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<limx_arm_msgs::msg::JointData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<limx_arm_msgs::msg::JointData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__limx_arm_msgs__msg__JointData
    std::shared_ptr<limx_arm_msgs::msg::JointData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__limx_arm_msgs__msg__JointData
    std::shared_ptr<limx_arm_msgs::msg::JointData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointData_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->deviceid != other.deviceid) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointData_

// alias to use template instance with default allocator
using JointData =
  limx_arm_msgs::msg::JointData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace limx_arm_msgs

#endif  // LIMX_ARM_MSGS__MSG__DETAIL__JOINT_DATA__STRUCT_HPP_
