// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from limx_arm_msgs:srv/motion.idl
// generated code does not contain a copyright notice

#ifndef LIMX_ARM_MSGS__SRV__DETAIL__MOTION__STRUCT_HPP_
#define LIMX_ARM_MSGS__SRV__DETAIL__MOTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__limx_arm_msgs__srv__motion_Request __attribute__((deprecated))
#else
# define DEPRECATED__limx_arm_msgs__srv__motion_Request __declspec(deprecated)
#endif

namespace limx_arm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct motion_Request_
{
  using Type = motion_Request_<ContainerAllocator>;

  explicit motion_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 7>::iterator, float>(this->left_arm_pos.begin(), this->left_arm_pos.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->right_arm_pos.begin(), this->right_arm_pos.end(), 0.0f);
      this->duration_time = 0.0f;
    }
  }

  explicit motion_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left_arm_pos(_alloc),
    right_arm_pos(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 7>::iterator, float>(this->left_arm_pos.begin(), this->left_arm_pos.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->right_arm_pos.begin(), this->right_arm_pos.end(), 0.0f);
      this->duration_time = 0.0f;
    }
  }

  // field types and members
  using _left_arm_pos_type =
    std::array<float, 7>;
  _left_arm_pos_type left_arm_pos;
  using _right_arm_pos_type =
    std::array<float, 7>;
  _right_arm_pos_type right_arm_pos;
  using _duration_time_type =
    float;
  _duration_time_type duration_time;

  // setters for named parameter idiom
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
  Type & set__duration_time(
    const float & _arg)
  {
    this->duration_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    limx_arm_msgs::srv::motion_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const limx_arm_msgs::srv::motion_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<limx_arm_msgs::srv::motion_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<limx_arm_msgs::srv::motion_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      limx_arm_msgs::srv::motion_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<limx_arm_msgs::srv::motion_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      limx_arm_msgs::srv::motion_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<limx_arm_msgs::srv::motion_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<limx_arm_msgs::srv::motion_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<limx_arm_msgs::srv::motion_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__limx_arm_msgs__srv__motion_Request
    std::shared_ptr<limx_arm_msgs::srv::motion_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__limx_arm_msgs__srv__motion_Request
    std::shared_ptr<limx_arm_msgs::srv::motion_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const motion_Request_ & other) const
  {
    if (this->left_arm_pos != other.left_arm_pos) {
      return false;
    }
    if (this->right_arm_pos != other.right_arm_pos) {
      return false;
    }
    if (this->duration_time != other.duration_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const motion_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct motion_Request_

// alias to use template instance with default allocator
using motion_Request =
  limx_arm_msgs::srv::motion_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace limx_arm_msgs


#ifndef _WIN32
# define DEPRECATED__limx_arm_msgs__srv__motion_Response __attribute__((deprecated))
#else
# define DEPRECATED__limx_arm_msgs__srv__motion_Response __declspec(deprecated)
#endif

namespace limx_arm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct motion_Response_
{
  using Type = motion_Response_<ContainerAllocator>;

  explicit motion_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0l;
    }
  }

  explicit motion_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0l;
    }
  }

  // field types and members
  using _status_type =
    int32_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const int32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    limx_arm_msgs::srv::motion_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const limx_arm_msgs::srv::motion_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<limx_arm_msgs::srv::motion_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<limx_arm_msgs::srv::motion_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      limx_arm_msgs::srv::motion_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<limx_arm_msgs::srv::motion_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      limx_arm_msgs::srv::motion_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<limx_arm_msgs::srv::motion_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<limx_arm_msgs::srv::motion_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<limx_arm_msgs::srv::motion_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__limx_arm_msgs__srv__motion_Response
    std::shared_ptr<limx_arm_msgs::srv::motion_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__limx_arm_msgs__srv__motion_Response
    std::shared_ptr<limx_arm_msgs::srv::motion_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const motion_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const motion_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct motion_Response_

// alias to use template instance with default allocator
using motion_Response =
  limx_arm_msgs::srv::motion_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace limx_arm_msgs

namespace limx_arm_msgs
{

namespace srv
{

struct motion
{
  using Request = limx_arm_msgs::srv::motion_Request;
  using Response = limx_arm_msgs::srv::motion_Response;
};

}  // namespace srv

}  // namespace limx_arm_msgs

#endif  // LIMX_ARM_MSGS__SRV__DETAIL__MOTION__STRUCT_HPP_
