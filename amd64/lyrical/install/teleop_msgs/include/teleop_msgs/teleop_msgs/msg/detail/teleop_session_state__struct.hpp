// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from teleop_msgs:msg/TeleopSessionState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_msgs/msg/teleop_session_state.hpp"


#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_SESSION_STATE__STRUCT_HPP_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_SESSION_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_buffer/buffer.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'limbs'
#include "teleop_msgs/msg/detail/teleop_limb_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__teleop_msgs__msg__TeleopSessionState __attribute__((deprecated))
#else
# define DEPRECATED__teleop_msgs__msg__TeleopSessionState __declspec(deprecated)
#endif

namespace teleop_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TeleopSessionState_
{
  using Type = TeleopSessionState_<ContainerAllocator>;

  explicit TeleopSessionState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->schema_version = 0;
      this->session_state = 0;
      this->mode = "";
      this->reanchor_epoch = 0ul;
      this->retarget_required = false;
      this->fault_code = 0;
      this->fault_detail = "";
    }
  }

  explicit TeleopSessionState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    mode(_alloc),
    fault_detail(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->schema_version = 0;
      this->session_state = 0;
      this->mode = "";
      this->reanchor_epoch = 0ul;
      this->retarget_required = false;
      this->fault_code = 0;
      this->fault_detail = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _schema_version_type =
    uint16_t;
  _schema_version_type schema_version;
  using _session_state_type =
    uint8_t;
  _session_state_type session_state;
  using _mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mode_type mode;
  using _limbs_type =
    std::vector<teleop_msgs::msg::TeleopLimbState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<teleop_msgs::msg::TeleopLimbState_<ContainerAllocator>>>;
  _limbs_type limbs;
  using _reanchor_epoch_type =
    uint32_t;
  _reanchor_epoch_type reanchor_epoch;
  using _retarget_required_type =
    bool;
  _retarget_required_type retarget_required;
  using _fault_code_type =
    uint8_t;
  _fault_code_type fault_code;
  using _fault_detail_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fault_detail_type fault_detail;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__schema_version(
    const uint16_t & _arg)
  {
    this->schema_version = _arg;
    return *this;
  }
  Type & set__session_state(
    const uint8_t & _arg)
  {
    this->session_state = _arg;
    return *this;
  }
  Type & set__mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__limbs(
    const std::vector<teleop_msgs::msg::TeleopLimbState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<teleop_msgs::msg::TeleopLimbState_<ContainerAllocator>>> & _arg)
  {
    this->limbs = _arg;
    return *this;
  }
  Type & set__reanchor_epoch(
    const uint32_t & _arg)
  {
    this->reanchor_epoch = _arg;
    return *this;
  }
  Type & set__retarget_required(
    const bool & _arg)
  {
    this->retarget_required = _arg;
    return *this;
  }
  Type & set__fault_code(
    const uint8_t & _arg)
  {
    this->fault_code = _arg;
    return *this;
  }
  Type & set__fault_detail(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fault_detail = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t SCHEMA_VERSION =
    1u;
  static constexpr uint8_t SESSION_INACTIVE =
    0u;
  static constexpr uint8_t SESSION_ACTIVE =
    1u;
  static constexpr uint8_t SESSION_HOMING =
    2u;
  static constexpr uint8_t SESSION_FAULT =
    3u;
  static constexpr uint8_t FAULT_NONE =
    0u;
  static constexpr uint8_t FAULT_INPUT_TIMEOUT =
    1u;
  static constexpr uint8_t FAULT_TARGET_JUMP =
    2u;
  static constexpr uint8_t FAULT_OUTPUT =
    3u;
  static constexpr uint8_t FAULT_INTERNAL =
    4u;

  // pointer types
  using RawPtr =
    teleop_msgs::msg::TeleopSessionState_<ContainerAllocator> *;
  using ConstRawPtr =
    const teleop_msgs::msg::TeleopSessionState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<teleop_msgs::msg::TeleopSessionState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<teleop_msgs::msg::TeleopSessionState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      teleop_msgs::msg::TeleopSessionState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<teleop_msgs::msg::TeleopSessionState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      teleop_msgs::msg::TeleopSessionState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<teleop_msgs::msg::TeleopSessionState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<teleop_msgs::msg::TeleopSessionState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<teleop_msgs::msg::TeleopSessionState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__teleop_msgs__msg__TeleopSessionState
    std::shared_ptr<teleop_msgs::msg::TeleopSessionState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__teleop_msgs__msg__TeleopSessionState
    std::shared_ptr<teleop_msgs::msg::TeleopSessionState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TeleopSessionState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->schema_version != other.schema_version) {
      return false;
    }
    if (this->session_state != other.session_state) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->limbs != other.limbs) {
      return false;
    }
    if (this->reanchor_epoch != other.reanchor_epoch) {
      return false;
    }
    if (this->retarget_required != other.retarget_required) {
      return false;
    }
    if (this->fault_code != other.fault_code) {
      return false;
    }
    if (this->fault_detail != other.fault_detail) {
      return false;
    }
    return true;
  }
  bool operator!=(const TeleopSessionState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TeleopSessionState_

// alias to use template instance with default allocator
using TeleopSessionState =
  teleop_msgs::msg::TeleopSessionState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TeleopSessionState_<ContainerAllocator>::SCHEMA_VERSION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TeleopSessionState_<ContainerAllocator>::SESSION_INACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TeleopSessionState_<ContainerAllocator>::SESSION_ACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TeleopSessionState_<ContainerAllocator>::SESSION_HOMING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TeleopSessionState_<ContainerAllocator>::SESSION_FAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TeleopSessionState_<ContainerAllocator>::FAULT_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TeleopSessionState_<ContainerAllocator>::FAULT_INPUT_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TeleopSessionState_<ContainerAllocator>::FAULT_TARGET_JUMP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TeleopSessionState_<ContainerAllocator>::FAULT_OUTPUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TeleopSessionState_<ContainerAllocator>::FAULT_INTERNAL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace teleop_msgs

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_SESSION_STATE__STRUCT_HPP_
