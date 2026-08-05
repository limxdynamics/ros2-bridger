// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from limx_arm_msgs:msg/JointSet.idl
// generated code does not contain a copyright notice

#ifndef LIMX_ARM_MSGS__MSG__DETAIL__JOINT_SET__STRUCT_HPP_
#define LIMX_ARM_MSGS__MSG__DETAIL__JOINT_SET__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__limx_arm_msgs__msg__JointSet __attribute__((deprecated))
#else
# define DEPRECATED__limx_arm_msgs__msg__JointSet __declspec(deprecated)
#endif

namespace limx_arm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointSet_
{
  using Type = JointSet_<ContainerAllocator>;

  explicit JointSet_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stamp = 0ll;
      this->deviceid = "";
      this->action = 0l;
      this->mode = 0l;
      std::fill<typename std::array<float, 6>::iterator, float>(this->data.begin(), this->data.end(), 0.0f);
    }
  }

  explicit JointSet_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : deviceid(_alloc),
    data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stamp = 0ll;
      this->deviceid = "";
      this->action = 0l;
      this->mode = 0l;
      std::fill<typename std::array<float, 6>::iterator, float>(this->data.begin(), this->data.end(), 0.0f);
    }
  }

  // field types and members
  using _stamp_type =
    int64_t;
  _stamp_type stamp;
  using _deviceid_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _deviceid_type deviceid;
  using _action_type =
    int32_t;
  _action_type action;
  using _mode_type =
    int32_t;
  _mode_type mode;
  using _data_type =
    std::array<float, 6>;
  _data_type data;

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
  Type & set__action(
    const int32_t & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__mode(
    const int32_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__data(
    const std::array<float, 6> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t ACTION_IDLE =
    0;
  static constexpr int32_t ACTION_START =
    1;
  static constexpr int32_t ACTION_PAUSE =
    2;
  static constexpr int32_t ACTION_RESUME =
    3;
  static constexpr int32_t ACTION_STOP =
    4;
  static constexpr int32_t ACTION_ENABLE_MOTOR =
    5;
  static constexpr int32_t ACTION_SET_ZERO =
    6;
  static constexpr int32_t ACTION_SET_LIMIT_MIN =
    7;
  static constexpr int32_t ACTION_SET_LIMIT_MAX =
    8;
  static constexpr int32_t ACTION_SET_POSITION =
    9;
  static constexpr int32_t ACTION_SET_MODE =
    10;
  static constexpr int32_t ACTION_SET_TOOL_SIZE =
    11;
  static constexpr int32_t ACTION_START_DRAG =
    12;
  static constexpr int32_t ACTION_STOP_DRAG =
    13;
  static constexpr int32_t ACTION_PLAYER_START =
    14;
  static constexpr int32_t ACTION_PLAYER_STOP =
    15;
  static constexpr int32_t ACTION_SET_CARTESIAN_POSITION =
    16;
  static constexpr int32_t MODE_ANGLE =
    1;
  static constexpr int32_t MODE_VELOCITY =
    3;
  static constexpr int32_t MODE_CURRENT =
    4;

  // pointer types
  using RawPtr =
    limx_arm_msgs::msg::JointSet_<ContainerAllocator> *;
  using ConstRawPtr =
    const limx_arm_msgs::msg::JointSet_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<limx_arm_msgs::msg::JointSet_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<limx_arm_msgs::msg::JointSet_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      limx_arm_msgs::msg::JointSet_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<limx_arm_msgs::msg::JointSet_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      limx_arm_msgs::msg::JointSet_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<limx_arm_msgs::msg::JointSet_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<limx_arm_msgs::msg::JointSet_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<limx_arm_msgs::msg::JointSet_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__limx_arm_msgs__msg__JointSet
    std::shared_ptr<limx_arm_msgs::msg::JointSet_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__limx_arm_msgs__msg__JointSet
    std::shared_ptr<limx_arm_msgs::msg::JointSet_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointSet_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->deviceid != other.deviceid) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointSet_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointSet_

// alias to use template instance with default allocator
using JointSet =
  limx_arm_msgs::msg::JointSet_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t JointSet_<ContainerAllocator>::ACTION_IDLE;
template<typename ContainerAllocator>
constexpr int32_t JointSet_<ContainerAllocator>::ACTION_START;
template<typename ContainerAllocator>
constexpr int32_t JointSet_<ContainerAllocator>::ACTION_PAUSE;
template<typename ContainerAllocator>
constexpr int32_t JointSet_<ContainerAllocator>::ACTION_RESUME;
template<typename ContainerAllocator>
constexpr int32_t JointSet_<ContainerAllocator>::ACTION_STOP;
template<typename ContainerAllocator>
constexpr int32_t JointSet_<ContainerAllocator>::ACTION_ENABLE_MOTOR;
template<typename ContainerAllocator>
constexpr int32_t JointSet_<ContainerAllocator>::ACTION_SET_ZERO;
template<typename ContainerAllocator>
constexpr int32_t JointSet_<ContainerAllocator>::ACTION_SET_LIMIT_MIN;
template<typename ContainerAllocator>
constexpr int32_t JointSet_<ContainerAllocator>::ACTION_SET_LIMIT_MAX;
template<typename ContainerAllocator>
constexpr int32_t JointSet_<ContainerAllocator>::ACTION_SET_POSITION;
template<typename ContainerAllocator>
constexpr int32_t JointSet_<ContainerAllocator>::ACTION_SET_MODE;
template<typename ContainerAllocator>
constexpr int32_t JointSet_<ContainerAllocator>::ACTION_SET_TOOL_SIZE;
template<typename ContainerAllocator>
constexpr int32_t JointSet_<ContainerAllocator>::ACTION_START_DRAG;
template<typename ContainerAllocator>
constexpr int32_t JointSet_<ContainerAllocator>::ACTION_STOP_DRAG;
template<typename ContainerAllocator>
constexpr int32_t JointSet_<ContainerAllocator>::ACTION_PLAYER_START;
template<typename ContainerAllocator>
constexpr int32_t JointSet_<ContainerAllocator>::ACTION_PLAYER_STOP;
template<typename ContainerAllocator>
constexpr int32_t JointSet_<ContainerAllocator>::ACTION_SET_CARTESIAN_POSITION;
template<typename ContainerAllocator>
constexpr int32_t JointSet_<ContainerAllocator>::MODE_ANGLE;
template<typename ContainerAllocator>
constexpr int32_t JointSet_<ContainerAllocator>::MODE_VELOCITY;
template<typename ContainerAllocator>
constexpr int32_t JointSet_<ContainerAllocator>::MODE_CURRENT;

}  // namespace msg

}  // namespace limx_arm_msgs

#endif  // LIMX_ARM_MSGS__MSG__DETAIL__JOINT_SET__STRUCT_HPP_
