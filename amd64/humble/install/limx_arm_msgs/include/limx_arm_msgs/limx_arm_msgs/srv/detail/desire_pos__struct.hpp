// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from limx_arm_msgs:srv/desire_pos.idl
// generated code does not contain a copyright notice

#ifndef LIMX_ARM_MSGS__SRV__DETAIL__DESIRE_POS__STRUCT_HPP_
#define LIMX_ARM_MSGS__SRV__DETAIL__DESIRE_POS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__limx_arm_msgs__srv__desire_pos_Request __attribute__((deprecated))
#else
# define DEPRECATED__limx_arm_msgs__srv__desire_pos_Request __declspec(deprecated)
#endif

namespace limx_arm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct desire_pos_Request_
{
  using Type = desire_pos_Request_<ContainerAllocator>;

  explicit desire_pos_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->taskNum = 0l;
      std::fill<typename std::array<float, 6>::iterator, float>(this->desire_pos.begin(), this->desire_pos.end(), 0.0f);
      this->co_control = false;
    }
  }

  explicit desire_pos_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : desire_pos(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->taskNum = 0l;
      std::fill<typename std::array<float, 6>::iterator, float>(this->desire_pos.begin(), this->desire_pos.end(), 0.0f);
      this->co_control = false;
    }
  }

  // field types and members
  using _taskNum_type =
    int32_t;
  _taskNum_type taskNum;
  using _desire_pos_type =
    std::array<float, 6>;
  _desire_pos_type desire_pos;
  using _co_control_type =
    bool;
  _co_control_type co_control;

  // setters for named parameter idiom
  Type & set__taskNum(
    const int32_t & _arg)
  {
    this->taskNum = _arg;
    return *this;
  }
  Type & set__desire_pos(
    const std::array<float, 6> & _arg)
  {
    this->desire_pos = _arg;
    return *this;
  }
  Type & set__co_control(
    const bool & _arg)
  {
    this->co_control = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    limx_arm_msgs::srv::desire_pos_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const limx_arm_msgs::srv::desire_pos_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<limx_arm_msgs::srv::desire_pos_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<limx_arm_msgs::srv::desire_pos_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      limx_arm_msgs::srv::desire_pos_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<limx_arm_msgs::srv::desire_pos_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      limx_arm_msgs::srv::desire_pos_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<limx_arm_msgs::srv::desire_pos_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<limx_arm_msgs::srv::desire_pos_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<limx_arm_msgs::srv::desire_pos_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__limx_arm_msgs__srv__desire_pos_Request
    std::shared_ptr<limx_arm_msgs::srv::desire_pos_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__limx_arm_msgs__srv__desire_pos_Request
    std::shared_ptr<limx_arm_msgs::srv::desire_pos_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const desire_pos_Request_ & other) const
  {
    if (this->taskNum != other.taskNum) {
      return false;
    }
    if (this->desire_pos != other.desire_pos) {
      return false;
    }
    if (this->co_control != other.co_control) {
      return false;
    }
    return true;
  }
  bool operator!=(const desire_pos_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct desire_pos_Request_

// alias to use template instance with default allocator
using desire_pos_Request =
  limx_arm_msgs::srv::desire_pos_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace limx_arm_msgs


#ifndef _WIN32
# define DEPRECATED__limx_arm_msgs__srv__desire_pos_Response __attribute__((deprecated))
#else
# define DEPRECATED__limx_arm_msgs__srv__desire_pos_Response __declspec(deprecated)
#endif

namespace limx_arm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct desire_pos_Response_
{
  using Type = desire_pos_Response_<ContainerAllocator>;

  explicit desire_pos_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit desire_pos_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  // field types and members
  using _status_type =
    bool;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    limx_arm_msgs::srv::desire_pos_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const limx_arm_msgs::srv::desire_pos_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<limx_arm_msgs::srv::desire_pos_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<limx_arm_msgs::srv::desire_pos_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      limx_arm_msgs::srv::desire_pos_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<limx_arm_msgs::srv::desire_pos_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      limx_arm_msgs::srv::desire_pos_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<limx_arm_msgs::srv::desire_pos_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<limx_arm_msgs::srv::desire_pos_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<limx_arm_msgs::srv::desire_pos_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__limx_arm_msgs__srv__desire_pos_Response
    std::shared_ptr<limx_arm_msgs::srv::desire_pos_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__limx_arm_msgs__srv__desire_pos_Response
    std::shared_ptr<limx_arm_msgs::srv::desire_pos_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const desire_pos_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const desire_pos_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct desire_pos_Response_

// alias to use template instance with default allocator
using desire_pos_Response =
  limx_arm_msgs::srv::desire_pos_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace limx_arm_msgs

namespace limx_arm_msgs
{

namespace srv
{

struct desire_pos
{
  using Request = limx_arm_msgs::srv::desire_pos_Request;
  using Response = limx_arm_msgs::srv::desire_pos_Response;
};

}  // namespace srv

}  // namespace limx_arm_msgs

#endif  // LIMX_ARM_MSGS__SRV__DETAIL__DESIRE_POS__STRUCT_HPP_
