// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from controller_msgs:msg/JointCmdLimx.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "controller_msgs/msg/joint_cmd_limx.hpp"


#ifndef CONTROLLER_MSGS__MSG__DETAIL__JOINT_CMD_LIMX__STRUCT_HPP_
#define CONTROLLER_MSGS__MSG__DETAIL__JOINT_CMD_LIMX__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__controller_msgs__msg__JointCmdLimx __attribute__((deprecated))
#else
# define DEPRECATED__controller_msgs__msg__JointCmdLimx __declspec(deprecated)
#endif

namespace controller_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointCmdLimx_
{
  using Type = JointCmdLimx_<ContainerAllocator>;

  explicit JointCmdLimx_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->na = 0ul;
    }
  }

  explicit JointCmdLimx_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->na = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _names_type names;
  using _q_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _q_type q;
  using _v_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _v_type v;
  using _tau_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _tau_type tau;
  using _kp_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _kp_type kp;
  using _kd_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _kd_type kd;
  using _mode_type =
    rosidl::Buffer<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _mode_type mode;
  using _na_type =
    uint32_t;
  _na_type na;
  using _parallel_solver_mode_type =
    rosidl::Buffer<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _parallel_solver_mode_type parallel_solver_mode;

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
  Type & set__q(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__v(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->v = _arg;
    return *this;
  }
  Type & set__tau(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->tau = _arg;
    return *this;
  }
  Type & set__kp(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__kd(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->kd = _arg;
    return *this;
  }
  Type & set__mode(
    const rosidl::Buffer<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__na(
    const uint32_t & _arg)
  {
    this->na = _arg;
    return *this;
  }
  Type & set__parallel_solver_mode(
    const rosidl::Buffer<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->parallel_solver_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_msgs::msg::JointCmdLimx_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_msgs::msg::JointCmdLimx_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_msgs::msg::JointCmdLimx_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_msgs::msg::JointCmdLimx_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_msgs::msg::JointCmdLimx_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_msgs::msg::JointCmdLimx_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_msgs::msg::JointCmdLimx_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_msgs::msg::JointCmdLimx_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_msgs::msg::JointCmdLimx_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_msgs::msg::JointCmdLimx_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_msgs__msg__JointCmdLimx
    std::shared_ptr<controller_msgs::msg::JointCmdLimx_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_msgs__msg__JointCmdLimx
    std::shared_ptr<controller_msgs::msg::JointCmdLimx_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointCmdLimx_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->names != other.names) {
      return false;
    }
    if (this->q != other.q) {
      return false;
    }
    if (this->v != other.v) {
      return false;
    }
    if (this->tau != other.tau) {
      return false;
    }
    if (this->kp != other.kp) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->na != other.na) {
      return false;
    }
    if (this->parallel_solver_mode != other.parallel_solver_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointCmdLimx_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointCmdLimx_

// alias to use template instance with default allocator
using JointCmdLimx =
  controller_msgs::msg::JointCmdLimx_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace controller_msgs

#endif  // CONTROLLER_MSGS__MSG__DETAIL__JOINT_CMD_LIMX__STRUCT_HPP_
