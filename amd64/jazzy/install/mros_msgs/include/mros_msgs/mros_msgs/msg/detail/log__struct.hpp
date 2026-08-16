// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mros_msgs:msg/Log.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mros_msgs/msg/log.hpp"


#ifndef MROS_MSGS__MSG__DETAIL__LOG__STRUCT_HPP_
#define MROS_MSGS__MSG__DETAIL__LOG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mros_msgs__msg__Log __attribute__((deprecated))
#else
# define DEPRECATED__mros_msgs__msg__Log __declspec(deprecated)
#endif

namespace mros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Log_
{
  using Type = Log_<ContainerAllocator>;

  explicit Log_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = 0;
      this->name = "";
      this->msg = "";
      this->file = "";
      this->function = "";
      this->line = 0ul;
      this->pid = 0ull;
      this->tid = 0ull;
    }
  }

  explicit Log_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    name(_alloc),
    msg(_alloc),
    file(_alloc),
    function(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = 0;
      this->name = "";
      this->msg = "";
      this->file = "";
      this->function = "";
      this->line = 0ul;
      this->pid = 0ull;
      this->tid = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _level_type =
    unsigned char;
  _level_type level;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _msg_type msg;
  using _file_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _file_type file;
  using _function_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _function_type function;
  using _line_type =
    uint32_t;
  _line_type line;
  using _topics_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _topics_type topics;
  using _pid_type =
    uint64_t;
  _pid_type pid;
  using _tid_type =
    uint64_t;
  _tid_type tid;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__level(
    const unsigned char & _arg)
  {
    this->level = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->msg = _arg;
    return *this;
  }
  Type & set__file(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->file = _arg;
    return *this;
  }
  Type & set__function(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->function = _arg;
    return *this;
  }
  Type & set__line(
    const uint32_t & _arg)
  {
    this->line = _arg;
    return *this;
  }
  Type & set__topics(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->topics = _arg;
    return *this;
  }
  Type & set__pid(
    const uint64_t & _arg)
  {
    this->pid = _arg;
    return *this;
  }
  Type & set__tid(
    const uint64_t & _arg)
  {
    this->tid = _arg;
    return *this;
  }

  // constant declarations
  static constexpr unsigned char DEBUG =
    1;
  static constexpr unsigned char INFO =
    2;
  static constexpr unsigned char WARN =
    4;
  // guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
  static constexpr unsigned char ERROR =
    8;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif
  static constexpr unsigned char FATAL =
    16;

  // pointer types
  using RawPtr =
    mros_msgs::msg::Log_<ContainerAllocator> *;
  using ConstRawPtr =
    const mros_msgs::msg::Log_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mros_msgs::msg::Log_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mros_msgs::msg::Log_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mros_msgs::msg::Log_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mros_msgs::msg::Log_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mros_msgs::msg::Log_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mros_msgs::msg::Log_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mros_msgs::msg::Log_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mros_msgs::msg::Log_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mros_msgs__msg__Log
    std::shared_ptr<mros_msgs::msg::Log_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mros_msgs__msg__Log
    std::shared_ptr<mros_msgs::msg::Log_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Log_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->level != other.level) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    if (this->file != other.file) {
      return false;
    }
    if (this->function != other.function) {
      return false;
    }
    if (this->line != other.line) {
      return false;
    }
    if (this->topics != other.topics) {
      return false;
    }
    if (this->pid != other.pid) {
      return false;
    }
    if (this->tid != other.tid) {
      return false;
    }
    return true;
  }
  bool operator!=(const Log_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Log_

// alias to use template instance with default allocator
using Log =
  mros_msgs::msg::Log_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr unsigned char Log_<ContainerAllocator>::DEBUG;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr unsigned char Log_<ContainerAllocator>::INFO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr unsigned char Log_<ContainerAllocator>::WARN;
#endif  // __cplusplus < 201703L
// guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr unsigned char Log_<ContainerAllocator>::ERROR;
#endif  // __cplusplus < 201703L
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr unsigned char Log_<ContainerAllocator>::FATAL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mros_msgs

#endif  // MROS_MSGS__MSG__DETAIL__LOG__STRUCT_HPP_
