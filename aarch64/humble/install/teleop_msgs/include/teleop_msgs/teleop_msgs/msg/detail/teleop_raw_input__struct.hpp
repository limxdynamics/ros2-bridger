// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from teleop_msgs:msg/TeleopRawInput.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_RAW_INPUT__STRUCT_HPP_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_RAW_INPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__teleop_msgs__msg__TeleopRawInput __attribute__((deprecated))
#else
# define DEPRECATED__teleop_msgs__msg__TeleopRawInput __declspec(deprecated)
#endif

namespace teleop_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TeleopRawInput_
{
  using Type = TeleopRawInput_<ContainerAllocator>;

  explicit TeleopRawInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_trigger = 0.0f;
      this->right_trigger = 0.0f;
      this->left_grip = 0.0f;
      this->right_grip = 0.0f;
      std::fill<typename std::array<float, 2>::iterator, float>(this->left_stick.begin(), this->left_stick.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->right_stick.begin(), this->right_stick.end(), 0.0f);
      this->buttons = 0ul;
      this->buttons_valid = 0ul;
    }
  }

  explicit TeleopRawInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left_stick(_alloc),
    right_stick(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_trigger = 0.0f;
      this->right_trigger = 0.0f;
      this->left_grip = 0.0f;
      this->right_grip = 0.0f;
      std::fill<typename std::array<float, 2>::iterator, float>(this->left_stick.begin(), this->left_stick.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->right_stick.begin(), this->right_stick.end(), 0.0f);
      this->buttons = 0ul;
      this->buttons_valid = 0ul;
    }
  }

  // field types and members
  using _left_trigger_type =
    float;
  _left_trigger_type left_trigger;
  using _right_trigger_type =
    float;
  _right_trigger_type right_trigger;
  using _left_grip_type =
    float;
  _left_grip_type left_grip;
  using _right_grip_type =
    float;
  _right_grip_type right_grip;
  using _left_stick_type =
    std::array<float, 2>;
  _left_stick_type left_stick;
  using _right_stick_type =
    std::array<float, 2>;
  _right_stick_type right_stick;
  using _buttons_type =
    uint32_t;
  _buttons_type buttons;
  using _buttons_valid_type =
    uint32_t;
  _buttons_valid_type buttons_valid;

  // setters for named parameter idiom
  Type & set__left_trigger(
    const float & _arg)
  {
    this->left_trigger = _arg;
    return *this;
  }
  Type & set__right_trigger(
    const float & _arg)
  {
    this->right_trigger = _arg;
    return *this;
  }
  Type & set__left_grip(
    const float & _arg)
  {
    this->left_grip = _arg;
    return *this;
  }
  Type & set__right_grip(
    const float & _arg)
  {
    this->right_grip = _arg;
    return *this;
  }
  Type & set__left_stick(
    const std::array<float, 2> & _arg)
  {
    this->left_stick = _arg;
    return *this;
  }
  Type & set__right_stick(
    const std::array<float, 2> & _arg)
  {
    this->right_stick = _arg;
    return *this;
  }
  Type & set__buttons(
    const uint32_t & _arg)
  {
    this->buttons = _arg;
    return *this;
  }
  Type & set__buttons_valid(
    const uint32_t & _arg)
  {
    this->buttons_valid = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t BTN_LEFT_X =
    1u;
  static constexpr uint32_t BTN_LEFT_Y =
    2u;
  static constexpr uint32_t BTN_RIGHT_A =
    4u;
  static constexpr uint32_t BTN_RIGHT_B =
    8u;
  static constexpr uint32_t BTN_LEFT_STICK =
    16u;
  static constexpr uint32_t BTN_RIGHT_STICK =
    32u;
  static constexpr uint32_t BTN_LEFT_GRIP =
    64u;
  static constexpr uint32_t BTN_RIGHT_GRIP =
    128u;
  static constexpr uint32_t BTN_LEFT_TRIGGER =
    256u;
  static constexpr uint32_t BTN_RIGHT_TRIGGER =
    512u;
  static constexpr uint32_t BTN_LEFT_THUMBREST =
    1024u;
  static constexpr uint32_t BTN_RIGHT_THUMBREST =
    2048u;

  // pointer types
  using RawPtr =
    teleop_msgs::msg::TeleopRawInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const teleop_msgs::msg::TeleopRawInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<teleop_msgs::msg::TeleopRawInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<teleop_msgs::msg::TeleopRawInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      teleop_msgs::msg::TeleopRawInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<teleop_msgs::msg::TeleopRawInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      teleop_msgs::msg::TeleopRawInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<teleop_msgs::msg::TeleopRawInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<teleop_msgs::msg::TeleopRawInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<teleop_msgs::msg::TeleopRawInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__teleop_msgs__msg__TeleopRawInput
    std::shared_ptr<teleop_msgs::msg::TeleopRawInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__teleop_msgs__msg__TeleopRawInput
    std::shared_ptr<teleop_msgs::msg::TeleopRawInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TeleopRawInput_ & other) const
  {
    if (this->left_trigger != other.left_trigger) {
      return false;
    }
    if (this->right_trigger != other.right_trigger) {
      return false;
    }
    if (this->left_grip != other.left_grip) {
      return false;
    }
    if (this->right_grip != other.right_grip) {
      return false;
    }
    if (this->left_stick != other.left_stick) {
      return false;
    }
    if (this->right_stick != other.right_stick) {
      return false;
    }
    if (this->buttons != other.buttons) {
      return false;
    }
    if (this->buttons_valid != other.buttons_valid) {
      return false;
    }
    return true;
  }
  bool operator!=(const TeleopRawInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TeleopRawInput_

// alias to use template instance with default allocator
using TeleopRawInput =
  teleop_msgs::msg::TeleopRawInput_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TeleopRawInput_<ContainerAllocator>::BTN_LEFT_X;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TeleopRawInput_<ContainerAllocator>::BTN_LEFT_Y;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TeleopRawInput_<ContainerAllocator>::BTN_RIGHT_A;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TeleopRawInput_<ContainerAllocator>::BTN_RIGHT_B;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TeleopRawInput_<ContainerAllocator>::BTN_LEFT_STICK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TeleopRawInput_<ContainerAllocator>::BTN_RIGHT_STICK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TeleopRawInput_<ContainerAllocator>::BTN_LEFT_GRIP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TeleopRawInput_<ContainerAllocator>::BTN_RIGHT_GRIP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TeleopRawInput_<ContainerAllocator>::BTN_LEFT_TRIGGER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TeleopRawInput_<ContainerAllocator>::BTN_RIGHT_TRIGGER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TeleopRawInput_<ContainerAllocator>::BTN_LEFT_THUMBREST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TeleopRawInput_<ContainerAllocator>::BTN_RIGHT_THUMBREST;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace teleop_msgs

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_RAW_INPUT__STRUCT_HPP_
