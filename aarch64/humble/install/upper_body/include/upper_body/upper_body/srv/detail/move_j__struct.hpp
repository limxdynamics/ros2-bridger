// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from upper_body:srv/moveJ.idl
// generated code does not contain a copyright notice

#ifndef UPPER_BODY__SRV__DETAIL__MOVE_J__STRUCT_HPP_
#define UPPER_BODY__SRV__DETAIL__MOVE_J__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__upper_body__srv__moveJ_Request __attribute__((deprecated))
#else
# define DEPRECATED__upper_body__srv__moveJ_Request __declspec(deprecated)
#endif

namespace upper_body
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct moveJ_Request_
{
  using Type = moveJ_Request_<ContainerAllocator>;

  explicit moveJ_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
    }
  }

  explicit moveJ_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
    }
  }

  // field types and members
  using _joints_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _joints_type joints;
  using _speed_type =
    float;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__joints(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->joints = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    upper_body::srv::moveJ_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const upper_body::srv::moveJ_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<upper_body::srv::moveJ_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<upper_body::srv::moveJ_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      upper_body::srv::moveJ_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<upper_body::srv::moveJ_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      upper_body::srv::moveJ_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<upper_body::srv::moveJ_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<upper_body::srv::moveJ_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<upper_body::srv::moveJ_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__upper_body__srv__moveJ_Request
    std::shared_ptr<upper_body::srv::moveJ_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__upper_body__srv__moveJ_Request
    std::shared_ptr<upper_body::srv::moveJ_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const moveJ_Request_ & other) const
  {
    if (this->joints != other.joints) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const moveJ_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct moveJ_Request_

// alias to use template instance with default allocator
using moveJ_Request =
  upper_body::srv::moveJ_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace upper_body


#ifndef _WIN32
# define DEPRECATED__upper_body__srv__moveJ_Response __attribute__((deprecated))
#else
# define DEPRECATED__upper_body__srv__moveJ_Response __declspec(deprecated)
#endif

namespace upper_body
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct moveJ_Response_
{
  using Type = moveJ_Response_<ContainerAllocator>;

  explicit moveJ_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0l;
    }
  }

  explicit moveJ_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    upper_body::srv::moveJ_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const upper_body::srv::moveJ_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<upper_body::srv::moveJ_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<upper_body::srv::moveJ_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      upper_body::srv::moveJ_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<upper_body::srv::moveJ_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      upper_body::srv::moveJ_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<upper_body::srv::moveJ_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<upper_body::srv::moveJ_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<upper_body::srv::moveJ_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__upper_body__srv__moveJ_Response
    std::shared_ptr<upper_body::srv::moveJ_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__upper_body__srv__moveJ_Response
    std::shared_ptr<upper_body::srv::moveJ_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const moveJ_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const moveJ_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct moveJ_Response_

// alias to use template instance with default allocator
using moveJ_Response =
  upper_body::srv::moveJ_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace upper_body

namespace upper_body
{

namespace srv
{

struct moveJ
{
  using Request = upper_body::srv::moveJ_Request;
  using Response = upper_body::srv::moveJ_Response;
};

}  // namespace srv

}  // namespace upper_body

#endif  // UPPER_BODY__SRV__DETAIL__MOVE_J__STRUCT_HPP_
