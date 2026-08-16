// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mros_msgs:msg/AshmemInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mros_msgs/msg/ashmem_info.hpp"


#ifndef MROS_MSGS__MSG__DETAIL__ASHMEM_INFO__STRUCT_HPP_
#define MROS_MSGS__MSG__DETAIL__ASHMEM_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mros_msgs__msg__AshmemInfo __attribute__((deprecated))
#else
# define DEPRECATED__mros_msgs__msg__AshmemInfo __declspec(deprecated)
#endif

namespace mros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AshmemInfo_
{
  using Type = AshmemInfo_<ContainerAllocator>;

  explicit AshmemInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_id = 0ul;
      this->topic_name = "";
      this->message_type = "";
      this->message_md5sum = "";
      this->message_definition = "";
      this->shm_seed = 0l;
      this->shm_size = 0l;
      this->msg_size = 0l;
    }
  }

  explicit AshmemInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic_name(_alloc),
    message_type(_alloc),
    message_md5sum(_alloc),
    message_definition(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_id = 0ul;
      this->topic_name = "";
      this->message_type = "";
      this->message_md5sum = "";
      this->message_definition = "";
      this->shm_seed = 0l;
      this->shm_size = 0l;
      this->msg_size = 0l;
    }
  }

  // field types and members
  using _topic_id_type =
    uint32_t;
  _topic_id_type topic_id;
  using _topic_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _topic_name_type topic_name;
  using _message_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type_type message_type;
  using _message_md5sum_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_md5sum_type message_md5sum;
  using _message_definition_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_definition_type message_definition;
  using _shm_seed_type =
    int32_t;
  _shm_seed_type shm_seed;
  using _shm_size_type =
    int32_t;
  _shm_size_type shm_size;
  using _msg_size_type =
    int32_t;
  _msg_size_type msg_size;
  using _identity_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _identity_type identity;

  // setters for named parameter idiom
  Type & set__topic_id(
    const uint32_t & _arg)
  {
    this->topic_id = _arg;
    return *this;
  }
  Type & set__topic_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->topic_name = _arg;
    return *this;
  }
  Type & set__message_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message_type = _arg;
    return *this;
  }
  Type & set__message_md5sum(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message_md5sum = _arg;
    return *this;
  }
  Type & set__message_definition(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message_definition = _arg;
    return *this;
  }
  Type & set__shm_seed(
    const int32_t & _arg)
  {
    this->shm_seed = _arg;
    return *this;
  }
  Type & set__shm_size(
    const int32_t & _arg)
  {
    this->shm_size = _arg;
    return *this;
  }
  Type & set__msg_size(
    const int32_t & _arg)
  {
    this->msg_size = _arg;
    return *this;
  }
  Type & set__identity(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->identity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mros_msgs::msg::AshmemInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const mros_msgs::msg::AshmemInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mros_msgs::msg::AshmemInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mros_msgs::msg::AshmemInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mros_msgs::msg::AshmemInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mros_msgs::msg::AshmemInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mros_msgs::msg::AshmemInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mros_msgs::msg::AshmemInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mros_msgs::msg::AshmemInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mros_msgs::msg::AshmemInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mros_msgs__msg__AshmemInfo
    std::shared_ptr<mros_msgs::msg::AshmemInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mros_msgs__msg__AshmemInfo
    std::shared_ptr<mros_msgs::msg::AshmemInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AshmemInfo_ & other) const
  {
    if (this->topic_id != other.topic_id) {
      return false;
    }
    if (this->topic_name != other.topic_name) {
      return false;
    }
    if (this->message_type != other.message_type) {
      return false;
    }
    if (this->message_md5sum != other.message_md5sum) {
      return false;
    }
    if (this->message_definition != other.message_definition) {
      return false;
    }
    if (this->shm_seed != other.shm_seed) {
      return false;
    }
    if (this->shm_size != other.shm_size) {
      return false;
    }
    if (this->msg_size != other.msg_size) {
      return false;
    }
    if (this->identity != other.identity) {
      return false;
    }
    return true;
  }
  bool operator!=(const AshmemInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AshmemInfo_

// alias to use template instance with default allocator
using AshmemInfo =
  mros_msgs::msg::AshmemInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mros_msgs

#endif  // MROS_MSGS__MSG__DETAIL__ASHMEM_INFO__STRUCT_HPP_
