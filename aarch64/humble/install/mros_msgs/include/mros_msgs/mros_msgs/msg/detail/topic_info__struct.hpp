// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mros_msgs:msg/TopicInfo.idl
// generated code does not contain a copyright notice

#ifndef MROS_MSGS__MSG__DETAIL__TOPIC_INFO__STRUCT_HPP_
#define MROS_MSGS__MSG__DETAIL__TOPIC_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mros_msgs__msg__TopicInfo __attribute__((deprecated))
#else
# define DEPRECATED__mros_msgs__msg__TopicInfo __declspec(deprecated)
#endif

namespace mros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TopicInfo_
{
  using Type = TopicInfo_<ContainerAllocator>;

  explicit TopicInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_id = 0ul;
      this->topic_name = "";
      this->message_type = "";
      this->md5sum = "";
      this->buffer_size = 0l;
      this->negotiated = false;
      this->node = "";
      this->definition = "";
      this->latch = false;
      this->reliable = false;
      this->queue_size = 0l;
      this->enabled = 0l;
    }
  }

  explicit TopicInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic_name(_alloc),
    message_type(_alloc),
    md5sum(_alloc),
    node(_alloc),
    definition(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_id = 0ul;
      this->topic_name = "";
      this->message_type = "";
      this->md5sum = "";
      this->buffer_size = 0l;
      this->negotiated = false;
      this->node = "";
      this->definition = "";
      this->latch = false;
      this->reliable = false;
      this->queue_size = 0l;
      this->enabled = 0l;
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
  using _md5sum_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _md5sum_type md5sum;
  using _buffer_size_type =
    int32_t;
  _buffer_size_type buffer_size;
  using _negotiated_type =
    bool;
  _negotiated_type negotiated;
  using _node_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_type node;
  using _definition_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _definition_type definition;
  using _latch_type =
    bool;
  _latch_type latch;
  using _reliable_type =
    bool;
  _reliable_type reliable;
  using _queue_size_type =
    int32_t;
  _queue_size_type queue_size;
  using _enabled_type =
    int32_t;
  _enabled_type enabled;

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
  Type & set__md5sum(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->md5sum = _arg;
    return *this;
  }
  Type & set__buffer_size(
    const int32_t & _arg)
  {
    this->buffer_size = _arg;
    return *this;
  }
  Type & set__negotiated(
    const bool & _arg)
  {
    this->negotiated = _arg;
    return *this;
  }
  Type & set__node(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node = _arg;
    return *this;
  }
  Type & set__definition(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->definition = _arg;
    return *this;
  }
  Type & set__latch(
    const bool & _arg)
  {
    this->latch = _arg;
    return *this;
  }
  Type & set__reliable(
    const bool & _arg)
  {
    this->reliable = _arg;
    return *this;
  }
  Type & set__queue_size(
    const int32_t & _arg)
  {
    this->queue_size = _arg;
    return *this;
  }
  Type & set__enabled(
    const int32_t & _arg)
  {
    this->enabled = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t ID_PUBLISHER =
    0u;
  static constexpr uint32_t ID_SUBSCRIBER =
    1u;
  static constexpr uint32_t ID_SERVICE_SERVER =
    2u;
  static constexpr uint32_t ID_SERVICE_CLIENT =
    4u;
  static constexpr uint32_t ID_MROSTOPIC_REQUEST =
    6u;
  static constexpr uint32_t ID_REMOVE_PUBLISHER =
    7u;
  static constexpr uint32_t ID_REMOVE_SUBSCRIBER =
    8u;
  static constexpr uint32_t ID_REMOVE_SERVICE_SERVER =
    9u;
  static constexpr uint32_t ID_REMOVE_SERVICE_CLIENT =
    11u;
  static constexpr uint32_t ID_MROSSERVICE_REQUEST =
    13u;
  static constexpr uint32_t ID_LOG =
    14u;
  static constexpr uint32_t ID_TIME =
    15u;
  static constexpr uint32_t ID_NEGOTIATED =
    16u;
  static constexpr uint32_t ID_SESSION_ID =
    17u;
  static constexpr uint32_t ID_ASHMEM_INFO =
    18u;
  static constexpr uint32_t ID_DIAG =
    19u;

  // pointer types
  using RawPtr =
    mros_msgs::msg::TopicInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const mros_msgs::msg::TopicInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mros_msgs::msg::TopicInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mros_msgs::msg::TopicInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mros_msgs::msg::TopicInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mros_msgs::msg::TopicInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mros_msgs::msg::TopicInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mros_msgs::msg::TopicInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mros_msgs::msg::TopicInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mros_msgs::msg::TopicInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mros_msgs__msg__TopicInfo
    std::shared_ptr<mros_msgs::msg::TopicInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mros_msgs__msg__TopicInfo
    std::shared_ptr<mros_msgs::msg::TopicInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TopicInfo_ & other) const
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
    if (this->md5sum != other.md5sum) {
      return false;
    }
    if (this->buffer_size != other.buffer_size) {
      return false;
    }
    if (this->negotiated != other.negotiated) {
      return false;
    }
    if (this->node != other.node) {
      return false;
    }
    if (this->definition != other.definition) {
      return false;
    }
    if (this->latch != other.latch) {
      return false;
    }
    if (this->reliable != other.reliable) {
      return false;
    }
    if (this->queue_size != other.queue_size) {
      return false;
    }
    if (this->enabled != other.enabled) {
      return false;
    }
    return true;
  }
  bool operator!=(const TopicInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TopicInfo_

// alias to use template instance with default allocator
using TopicInfo =
  mros_msgs::msg::TopicInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TopicInfo_<ContainerAllocator>::ID_PUBLISHER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TopicInfo_<ContainerAllocator>::ID_SUBSCRIBER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TopicInfo_<ContainerAllocator>::ID_SERVICE_SERVER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TopicInfo_<ContainerAllocator>::ID_SERVICE_CLIENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TopicInfo_<ContainerAllocator>::ID_MROSTOPIC_REQUEST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TopicInfo_<ContainerAllocator>::ID_REMOVE_PUBLISHER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TopicInfo_<ContainerAllocator>::ID_REMOVE_SUBSCRIBER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TopicInfo_<ContainerAllocator>::ID_REMOVE_SERVICE_SERVER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TopicInfo_<ContainerAllocator>::ID_REMOVE_SERVICE_CLIENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TopicInfo_<ContainerAllocator>::ID_MROSSERVICE_REQUEST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TopicInfo_<ContainerAllocator>::ID_LOG;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TopicInfo_<ContainerAllocator>::ID_TIME;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TopicInfo_<ContainerAllocator>::ID_NEGOTIATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TopicInfo_<ContainerAllocator>::ID_SESSION_ID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TopicInfo_<ContainerAllocator>::ID_ASHMEM_INFO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TopicInfo_<ContainerAllocator>::ID_DIAG;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mros_msgs

#endif  // MROS_MSGS__MSG__DETAIL__TOPIC_INFO__STRUCT_HPP_
