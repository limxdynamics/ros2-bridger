// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from limx_arm_msgs:msg/ServoCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "limx_arm_msgs/msg/servo_cmd.hpp"


#ifndef LIMX_ARM_MSGS__MSG__DETAIL__SERVO_CMD__STRUCT_HPP_
#define LIMX_ARM_MSGS__MSG__DETAIL__SERVO_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__limx_arm_msgs__msg__ServoCmd __attribute__((deprecated))
#else
# define DEPRECATED__limx_arm_msgs__msg__ServoCmd __declspec(deprecated)
#endif

namespace limx_arm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServoCmd_
{
  using Type = ServoCmd_<ContainerAllocator>;

  explicit ServoCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->functionName = "";
      std::fill<typename std::array<float, 7>::iterator, float>(this->left_arm_pos.begin(), this->left_arm_pos.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->right_arm_pos.begin(), this->right_arm_pos.end(), 0.0f);
    }
  }

  explicit ServoCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : functionName(_alloc),
    left_arm_pos(_alloc),
    right_arm_pos(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->functionName = "";
      std::fill<typename std::array<float, 7>::iterator, float>(this->left_arm_pos.begin(), this->left_arm_pos.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->right_arm_pos.begin(), this->right_arm_pos.end(), 0.0f);
    }
  }

  // field types and members
  using _functionName_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _functionName_type functionName;
  using _left_arm_pos_type =
    std::array<float, 7>;
  _left_arm_pos_type left_arm_pos;
  using _right_arm_pos_type =
    std::array<float, 7>;
  _right_arm_pos_type right_arm_pos;

  // setters for named parameter idiom
  Type & set__functionName(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->functionName = _arg;
    return *this;
  }
  Type & set__left_arm_pos(
    const std::array<float, 7> & _arg)
  {
    this->left_arm_pos = _arg;
    return *this;
  }
  Type & set__right_arm_pos(
    const std::array<float, 7> & _arg)
  {
    this->right_arm_pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    limx_arm_msgs::msg::ServoCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const limx_arm_msgs::msg::ServoCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<limx_arm_msgs::msg::ServoCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<limx_arm_msgs::msg::ServoCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      limx_arm_msgs::msg::ServoCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<limx_arm_msgs::msg::ServoCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      limx_arm_msgs::msg::ServoCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<limx_arm_msgs::msg::ServoCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<limx_arm_msgs::msg::ServoCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<limx_arm_msgs::msg::ServoCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__limx_arm_msgs__msg__ServoCmd
    std::shared_ptr<limx_arm_msgs::msg::ServoCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__limx_arm_msgs__msg__ServoCmd
    std::shared_ptr<limx_arm_msgs::msg::ServoCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoCmd_ & other) const
  {
    if (this->functionName != other.functionName) {
      return false;
    }
    if (this->left_arm_pos != other.left_arm_pos) {
      return false;
    }
    if (this->right_arm_pos != other.right_arm_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoCmd_

// alias to use template instance with default allocator
using ServoCmd =
  limx_arm_msgs::msg::ServoCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace limx_arm_msgs

#endif  // LIMX_ARM_MSGS__MSG__DETAIL__SERVO_CMD__STRUCT_HPP_
