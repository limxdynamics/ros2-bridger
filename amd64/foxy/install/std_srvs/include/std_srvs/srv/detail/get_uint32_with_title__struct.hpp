// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from std_srvs:srv/GetUint32WithTitle.idl
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__DETAIL__GET_UINT32_WITH_TITLE__STRUCT_HPP_
#define STD_SRVS__SRV__DETAIL__GET_UINT32_WITH_TITLE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__std_srvs__srv__GetUint32WithTitle_Request __attribute__((deprecated))
#else
# define DEPRECATED__std_srvs__srv__GetUint32WithTitle_Request __declspec(deprecated)
#endif

namespace std_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetUint32WithTitle_Request_
{
  using Type = GetUint32WithTitle_Request_<ContainerAllocator>;

  explicit GetUint32WithTitle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->title = "";
    }
  }

  explicit GetUint32WithTitle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : title(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->title = "";
    }
  }

  // field types and members
  using _title_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _title_type title;

  // setters for named parameter idiom
  Type & set__title(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->title = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    std_srvs::srv::GetUint32WithTitle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const std_srvs::srv::GetUint32WithTitle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<std_srvs::srv::GetUint32WithTitle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<std_srvs::srv::GetUint32WithTitle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      std_srvs::srv::GetUint32WithTitle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<std_srvs::srv::GetUint32WithTitle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      std_srvs::srv::GetUint32WithTitle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<std_srvs::srv::GetUint32WithTitle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<std_srvs::srv::GetUint32WithTitle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<std_srvs::srv::GetUint32WithTitle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__std_srvs__srv__GetUint32WithTitle_Request
    std::shared_ptr<std_srvs::srv::GetUint32WithTitle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__std_srvs__srv__GetUint32WithTitle_Request
    std::shared_ptr<std_srvs::srv::GetUint32WithTitle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetUint32WithTitle_Request_ & other) const
  {
    if (this->title != other.title) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetUint32WithTitle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetUint32WithTitle_Request_

// alias to use template instance with default allocator
using GetUint32WithTitle_Request =
  std_srvs::srv::GetUint32WithTitle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace std_srvs


#ifndef _WIN32
# define DEPRECATED__std_srvs__srv__GetUint32WithTitle_Response __attribute__((deprecated))
#else
# define DEPRECATED__std_srvs__srv__GetUint32WithTitle_Response __declspec(deprecated)
#endif

namespace std_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetUint32WithTitle_Response_
{
  using Type = GetUint32WithTitle_Response_<ContainerAllocator>;

  explicit GetUint32WithTitle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0ul;
      this->success = false;
      this->message = "";
    }
  }

  explicit GetUint32WithTitle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0ul;
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _data_type =
    uint32_t;
  _data_type data;
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__data(
    const uint32_t & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    std_srvs::srv::GetUint32WithTitle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const std_srvs::srv::GetUint32WithTitle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<std_srvs::srv::GetUint32WithTitle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<std_srvs::srv::GetUint32WithTitle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      std_srvs::srv::GetUint32WithTitle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<std_srvs::srv::GetUint32WithTitle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      std_srvs::srv::GetUint32WithTitle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<std_srvs::srv::GetUint32WithTitle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<std_srvs::srv::GetUint32WithTitle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<std_srvs::srv::GetUint32WithTitle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__std_srvs__srv__GetUint32WithTitle_Response
    std::shared_ptr<std_srvs::srv::GetUint32WithTitle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__std_srvs__srv__GetUint32WithTitle_Response
    std::shared_ptr<std_srvs::srv::GetUint32WithTitle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetUint32WithTitle_Response_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetUint32WithTitle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetUint32WithTitle_Response_

// alias to use template instance with default allocator
using GetUint32WithTitle_Response =
  std_srvs::srv::GetUint32WithTitle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace std_srvs

namespace std_srvs
{

namespace srv
{

struct GetUint32WithTitle
{
  using Request = std_srvs::srv::GetUint32WithTitle_Request;
  using Response = std_srvs::srv::GetUint32WithTitle_Response;
};

}  // namespace srv

}  // namespace std_srvs

#endif  // STD_SRVS__SRV__DETAIL__GET_UINT32_WITH_TITLE__STRUCT_HPP_
