// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from upper_body:srv/arm_move.idl
// generated code does not contain a copyright notice

#ifndef UPPER_BODY__SRV__DETAIL__ARM_MOVE__STRUCT_HPP_
#define UPPER_BODY__SRV__DETAIL__ARM_MOVE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__upper_body__srv__arm_move_Request __attribute__((deprecated))
#else
# define DEPRECATED__upper_body__srv__arm_move_Request __declspec(deprecated)
#endif

namespace upper_body
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct arm_move_Request_
{
  using Type = arm_move_Request_<ContainerAllocator>;

  explicit arm_move_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->move_type = "";
      std::fill<typename std::array<float, 7>::iterator, float>(this->left_arm_pos.begin(), this->left_arm_pos.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->right_arm_pos.begin(), this->right_arm_pos.end(), 0.0f);
      this->speed = 0.0f;
    }
  }

  explicit arm_move_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : move_type(_alloc),
    left_arm_pos(_alloc),
    right_arm_pos(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->move_type = "";
      std::fill<typename std::array<float, 7>::iterator, float>(this->left_arm_pos.begin(), this->left_arm_pos.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->right_arm_pos.begin(), this->right_arm_pos.end(), 0.0f);
      this->speed = 0.0f;
    }
  }

  // field types and members
  using _move_type_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _move_type_type move_type;
  using _left_arm_joints_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _left_arm_joints_type left_arm_joints;
  using _right_arm_joints_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _right_arm_joints_type right_arm_joints;
  using _left_arm_pos_type =
    std::array<float, 7>;
  _left_arm_pos_type left_arm_pos;
  using _right_arm_pos_type =
    std::array<float, 7>;
  _right_arm_pos_type right_arm_pos;
  using _speed_type =
    float;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__move_type(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->move_type = _arg;
    return *this;
  }
  Type & set__left_arm_joints(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->left_arm_joints = _arg;
    return *this;
  }
  Type & set__right_arm_joints(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->right_arm_joints = _arg;
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
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    upper_body::srv::arm_move_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const upper_body::srv::arm_move_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<upper_body::srv::arm_move_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<upper_body::srv::arm_move_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      upper_body::srv::arm_move_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<upper_body::srv::arm_move_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      upper_body::srv::arm_move_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<upper_body::srv::arm_move_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<upper_body::srv::arm_move_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<upper_body::srv::arm_move_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__upper_body__srv__arm_move_Request
    std::shared_ptr<upper_body::srv::arm_move_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__upper_body__srv__arm_move_Request
    std::shared_ptr<upper_body::srv::arm_move_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const arm_move_Request_ & other) const
  {
    if (this->move_type != other.move_type) {
      return false;
    }
    if (this->left_arm_joints != other.left_arm_joints) {
      return false;
    }
    if (this->right_arm_joints != other.right_arm_joints) {
      return false;
    }
    if (this->left_arm_pos != other.left_arm_pos) {
      return false;
    }
    if (this->right_arm_pos != other.right_arm_pos) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const arm_move_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct arm_move_Request_

// alias to use template instance with default allocator
using arm_move_Request =
  upper_body::srv::arm_move_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace upper_body


#ifndef _WIN32
# define DEPRECATED__upper_body__srv__arm_move_Response __attribute__((deprecated))
#else
# define DEPRECATED__upper_body__srv__arm_move_Response __declspec(deprecated)
#endif

namespace upper_body
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct arm_move_Response_
{
  using Type = arm_move_Response_<ContainerAllocator>;

  explicit arm_move_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0l;
    }
  }

  explicit arm_move_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    upper_body::srv::arm_move_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const upper_body::srv::arm_move_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<upper_body::srv::arm_move_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<upper_body::srv::arm_move_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      upper_body::srv::arm_move_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<upper_body::srv::arm_move_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      upper_body::srv::arm_move_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<upper_body::srv::arm_move_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<upper_body::srv::arm_move_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<upper_body::srv::arm_move_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__upper_body__srv__arm_move_Response
    std::shared_ptr<upper_body::srv::arm_move_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__upper_body__srv__arm_move_Response
    std::shared_ptr<upper_body::srv::arm_move_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const arm_move_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const arm_move_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct arm_move_Response_

// alias to use template instance with default allocator
using arm_move_Response =
  upper_body::srv::arm_move_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace upper_body

namespace upper_body
{

namespace srv
{

struct arm_move
{
  using Request = upper_body::srv::arm_move_Request;
  using Response = upper_body::srv::arm_move_Response;
};

}  // namespace srv

}  // namespace upper_body

#endif  // UPPER_BODY__SRV__DETAIL__ARM_MOVE__STRUCT_HPP_
