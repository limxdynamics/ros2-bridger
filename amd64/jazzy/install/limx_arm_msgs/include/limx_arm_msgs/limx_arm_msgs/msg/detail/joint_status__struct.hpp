// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from limx_arm_msgs:msg/JointStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "limx_arm_msgs/msg/joint_status.hpp"


#ifndef LIMX_ARM_MSGS__MSG__DETAIL__JOINT_STATUS__STRUCT_HPP_
#define LIMX_ARM_MSGS__MSG__DETAIL__JOINT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__limx_arm_msgs__msg__JointStatus __attribute__((deprecated))
#else
# define DEPRECATED__limx_arm_msgs__msg__JointStatus __declspec(deprecated)
#endif

namespace limx_arm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointStatus_
{
  using Type = JointStatus_<ContainerAllocator>;

  explicit JointStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stamp = 0ll;
      this->deviceid = "";
      this->run_time = 0ll;
      std::fill<typename std::array<int32_t, 6>::iterator, int32_t>(this->enable.begin(), this->enable.end(), 0l);
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 6>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->error.begin(), this->error.end(), "");
      std::fill<typename std::array<float, 6>::iterator, float>(this->zero.begin(), this->zero.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->limit_min.begin(), this->limit_min.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->limit_max.begin(), this->limit_max.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->tool_size.begin(), this->tool_size.end(), 0.0f);
      this->mode = 0l;
      this->state = 0l;
      this->play_state = 0l;
      this->log_path = "";
    }
  }

  explicit JointStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : deviceid(_alloc),
    enable(_alloc),
    error(_alloc),
    zero(_alloc),
    limit_min(_alloc),
    limit_max(_alloc),
    tool_size(_alloc),
    log_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stamp = 0ll;
      this->deviceid = "";
      this->run_time = 0ll;
      std::fill<typename std::array<int32_t, 6>::iterator, int32_t>(this->enable.begin(), this->enable.end(), 0l);
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 6>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->error.begin(), this->error.end(), "");
      std::fill<typename std::array<float, 6>::iterator, float>(this->zero.begin(), this->zero.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->limit_min.begin(), this->limit_min.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->limit_max.begin(), this->limit_max.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->tool_size.begin(), this->tool_size.end(), 0.0f);
      this->mode = 0l;
      this->state = 0l;
      this->play_state = 0l;
      this->log_path = "";
    }
  }

  // field types and members
  using _stamp_type =
    int64_t;
  _stamp_type stamp;
  using _deviceid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _deviceid_type deviceid;
  using _run_time_type =
    int64_t;
  _run_time_type run_time;
  using _enable_type =
    std::array<int32_t, 6>;
  _enable_type enable;
  using _error_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 6>;
  _error_type error;
  using _zero_type =
    std::array<float, 6>;
  _zero_type zero;
  using _limit_min_type =
    std::array<float, 6>;
  _limit_min_type limit_min;
  using _limit_max_type =
    std::array<float, 6>;
  _limit_max_type limit_max;
  using _tool_size_type =
    std::array<float, 3>;
  _tool_size_type tool_size;
  using _mode_type =
    int32_t;
  _mode_type mode;
  using _state_type =
    int32_t;
  _state_type state;
  using _play_state_type =
    int32_t;
  _play_state_type play_state;
  using _log_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _log_path_type log_path;

  // setters for named parameter idiom
  Type & set__stamp(
    const int64_t & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__deviceid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->deviceid = _arg;
    return *this;
  }
  Type & set__run_time(
    const int64_t & _arg)
  {
    this->run_time = _arg;
    return *this;
  }
  Type & set__enable(
    const std::array<int32_t, 6> & _arg)
  {
    this->enable = _arg;
    return *this;
  }
  Type & set__error(
    const std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 6> & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__zero(
    const std::array<float, 6> & _arg)
  {
    this->zero = _arg;
    return *this;
  }
  Type & set__limit_min(
    const std::array<float, 6> & _arg)
  {
    this->limit_min = _arg;
    return *this;
  }
  Type & set__limit_max(
    const std::array<float, 6> & _arg)
  {
    this->limit_max = _arg;
    return *this;
  }
  Type & set__tool_size(
    const std::array<float, 3> & _arg)
  {
    this->tool_size = _arg;
    return *this;
  }
  Type & set__mode(
    const int32_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__state(
    const int32_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__play_state(
    const int32_t & _arg)
  {
    this->play_state = _arg;
    return *this;
  }
  Type & set__log_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->log_path = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t MODE_ANGLE =
    1;
  static constexpr int32_t MODE_VELOCITY =
    3;
  static constexpr int32_t MODE_CURRENT =
    4;
  static constexpr int32_t STATE_IDLE =
    1;
  static constexpr int32_t STATE_STARTED =
    2;
  static constexpr int32_t STATE_PAUSED =
    3;
  static constexpr int32_t STATE_RESUMED =
    4;
  static constexpr int32_t STATE_STOPED =
    5;
  static constexpr int32_t STATE_SHUTDOWN =
    6;
  static constexpr int32_t PLAY_STATE_IDLE =
    0;
  static constexpr int32_t PLAY_STATE_STARTED =
    1;
  static constexpr int32_t PLAY_STATE_FAILED =
    2;
  static constexpr int32_t PLAY_STATE_FINISHED =
    3;

  // pointer types
  using RawPtr =
    limx_arm_msgs::msg::JointStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const limx_arm_msgs::msg::JointStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<limx_arm_msgs::msg::JointStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<limx_arm_msgs::msg::JointStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      limx_arm_msgs::msg::JointStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<limx_arm_msgs::msg::JointStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      limx_arm_msgs::msg::JointStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<limx_arm_msgs::msg::JointStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<limx_arm_msgs::msg::JointStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<limx_arm_msgs::msg::JointStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__limx_arm_msgs__msg__JointStatus
    std::shared_ptr<limx_arm_msgs::msg::JointStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__limx_arm_msgs__msg__JointStatus
    std::shared_ptr<limx_arm_msgs::msg::JointStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointStatus_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->deviceid != other.deviceid) {
      return false;
    }
    if (this->run_time != other.run_time) {
      return false;
    }
    if (this->enable != other.enable) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->zero != other.zero) {
      return false;
    }
    if (this->limit_min != other.limit_min) {
      return false;
    }
    if (this->limit_max != other.limit_max) {
      return false;
    }
    if (this->tool_size != other.tool_size) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->play_state != other.play_state) {
      return false;
    }
    if (this->log_path != other.log_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointStatus_

// alias to use template instance with default allocator
using JointStatus =
  limx_arm_msgs::msg::JointStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t JointStatus_<ContainerAllocator>::MODE_ANGLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t JointStatus_<ContainerAllocator>::MODE_VELOCITY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t JointStatus_<ContainerAllocator>::MODE_CURRENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t JointStatus_<ContainerAllocator>::STATE_IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t JointStatus_<ContainerAllocator>::STATE_STARTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t JointStatus_<ContainerAllocator>::STATE_PAUSED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t JointStatus_<ContainerAllocator>::STATE_RESUMED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t JointStatus_<ContainerAllocator>::STATE_STOPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t JointStatus_<ContainerAllocator>::STATE_SHUTDOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t JointStatus_<ContainerAllocator>::PLAY_STATE_IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t JointStatus_<ContainerAllocator>::PLAY_STATE_STARTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t JointStatus_<ContainerAllocator>::PLAY_STATE_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t JointStatus_<ContainerAllocator>::PLAY_STATE_FINISHED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace limx_arm_msgs

#endif  // LIMX_ARM_MSGS__MSG__DETAIL__JOINT_STATUS__STRUCT_HPP_
