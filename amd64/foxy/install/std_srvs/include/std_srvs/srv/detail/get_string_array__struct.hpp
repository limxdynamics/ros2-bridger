// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from std_srvs:srv/GetStringArray.idl
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__DETAIL__GET_STRING_ARRAY__STRUCT_HPP_
#define STD_SRVS__SRV__DETAIL__GET_STRING_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__std_srvs__srv__GetStringArray_Request __attribute__((deprecated))
#else
# define DEPRECATED__std_srvs__srv__GetStringArray_Request __declspec(deprecated)
#endif

namespace std_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetStringArray_Request_
{
  using Type = GetStringArray_Request_<ContainerAllocator>;

  explicit GetStringArray_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetStringArray_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    std_srvs::srv::GetStringArray_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const std_srvs::srv::GetStringArray_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<std_srvs::srv::GetStringArray_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<std_srvs::srv::GetStringArray_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      std_srvs::srv::GetStringArray_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<std_srvs::srv::GetStringArray_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      std_srvs::srv::GetStringArray_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<std_srvs::srv::GetStringArray_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<std_srvs::srv::GetStringArray_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<std_srvs::srv::GetStringArray_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__std_srvs__srv__GetStringArray_Request
    std::shared_ptr<std_srvs::srv::GetStringArray_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__std_srvs__srv__GetStringArray_Request
    std::shared_ptr<std_srvs::srv::GetStringArray_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetStringArray_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetStringArray_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetStringArray_Request_

// alias to use template instance with default allocator
using GetStringArray_Request =
  std_srvs::srv::GetStringArray_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace std_srvs


#ifndef _WIN32
# define DEPRECATED__std_srvs__srv__GetStringArray_Response __attribute__((deprecated))
#else
# define DEPRECATED__std_srvs__srv__GetStringArray_Response __declspec(deprecated)
#endif

namespace std_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetStringArray_Response_
{
  using Type = GetStringArray_Response_<ContainerAllocator>;

  explicit GetStringArray_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit GetStringArray_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _data_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _data_type data;
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
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
    std_srvs::srv::GetStringArray_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const std_srvs::srv::GetStringArray_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<std_srvs::srv::GetStringArray_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<std_srvs::srv::GetStringArray_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      std_srvs::srv::GetStringArray_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<std_srvs::srv::GetStringArray_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      std_srvs::srv::GetStringArray_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<std_srvs::srv::GetStringArray_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<std_srvs::srv::GetStringArray_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<std_srvs::srv::GetStringArray_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__std_srvs__srv__GetStringArray_Response
    std::shared_ptr<std_srvs::srv::GetStringArray_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__std_srvs__srv__GetStringArray_Response
    std::shared_ptr<std_srvs::srv::GetStringArray_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetStringArray_Response_ & other) const
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
  bool operator!=(const GetStringArray_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetStringArray_Response_

// alias to use template instance with default allocator
using GetStringArray_Response =
  std_srvs::srv::GetStringArray_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace std_srvs

namespace std_srvs
{

namespace srv
{

struct GetStringArray
{
  using Request = std_srvs::srv::GetStringArray_Request;
  using Response = std_srvs::srv::GetStringArray_Response;
};

}  // namespace srv

}  // namespace std_srvs

#endif  // STD_SRVS__SRV__DETAIL__GET_STRING_ARRAY__STRUCT_HPP_
