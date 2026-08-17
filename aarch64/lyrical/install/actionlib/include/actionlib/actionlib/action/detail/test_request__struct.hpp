// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from actionlib:action/TestRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "actionlib/action/test_request.hpp"


#ifndef ACTIONLIB__ACTION__DETAIL__TEST_REQUEST__STRUCT_HPP_
#define ACTIONLIB__ACTION__DETAIL__TEST_REQUEST__STRUCT_HPP_

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
// Member 'delay_accept'
// Member 'delay_terminate'
// Member 'pause_status'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__actionlib__action__TestRequest_Goal __attribute__((deprecated))
#else
# define DEPRECATED__actionlib__action__TestRequest_Goal __declspec(deprecated)
#endif

namespace actionlib
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TestRequest_Goal_
{
  using Type = TestRequest_Goal_<ContainerAllocator>;

  explicit TestRequest_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : delay_accept(_init),
    delay_terminate(_init),
    pause_status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->terminate_status = 0l;
      this->ignore_cancel = false;
      this->result_text = "";
      this->the_result = 0l;
      this->is_simple_client = false;
    }
  }

  explicit TestRequest_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result_text(_alloc),
    delay_accept(_alloc, _init),
    delay_terminate(_alloc, _init),
    pause_status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->terminate_status = 0l;
      this->ignore_cancel = false;
      this->result_text = "";
      this->the_result = 0l;
      this->is_simple_client = false;
    }
  }

  // field types and members
  using _terminate_status_type =
    int32_t;
  _terminate_status_type terminate_status;
  using _ignore_cancel_type =
    bool;
  _ignore_cancel_type ignore_cancel;
  using _result_text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_text_type result_text;
  using _the_result_type =
    int32_t;
  _the_result_type the_result;
  using _is_simple_client_type =
    bool;
  _is_simple_client_type is_simple_client;
  using _delay_accept_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _delay_accept_type delay_accept;
  using _delay_terminate_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _delay_terminate_type delay_terminate;
  using _pause_status_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _pause_status_type pause_status;

  // setters for named parameter idiom
  Type & set__terminate_status(
    const int32_t & _arg)
  {
    this->terminate_status = _arg;
    return *this;
  }
  Type & set__ignore_cancel(
    const bool & _arg)
  {
    this->ignore_cancel = _arg;
    return *this;
  }
  Type & set__result_text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result_text = _arg;
    return *this;
  }
  Type & set__the_result(
    const int32_t & _arg)
  {
    this->the_result = _arg;
    return *this;
  }
  Type & set__is_simple_client(
    const bool & _arg)
  {
    this->is_simple_client = _arg;
    return *this;
  }
  Type & set__delay_accept(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->delay_accept = _arg;
    return *this;
  }
  Type & set__delay_terminate(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->delay_terminate = _arg;
    return *this;
  }
  Type & set__pause_status(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->pause_status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t TERMINATE_SUCCESS =
    0;
  static constexpr int32_t TERMINATE_ABORTED =
    1;
  static constexpr int32_t TERMINATE_REJECTED =
    2;
  static constexpr int32_t TERMINATE_LOSE =
    3;
  static constexpr int32_t TERMINATE_DROP =
    4;
  static constexpr int32_t TERMINATE_EXCEPTION =
    5;

  // pointer types
  using RawPtr =
    actionlib::action::TestRequest_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const actionlib::action::TestRequest_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<actionlib::action::TestRequest_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<actionlib::action::TestRequest_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      actionlib::action::TestRequest_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<actionlib::action::TestRequest_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      actionlib::action::TestRequest_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<actionlib::action::TestRequest_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<actionlib::action::TestRequest_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<actionlib::action::TestRequest_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__actionlib__action__TestRequest_Goal
    std::shared_ptr<actionlib::action::TestRequest_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__actionlib__action__TestRequest_Goal
    std::shared_ptr<actionlib::action::TestRequest_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestRequest_Goal_ & other) const
  {
    if (this->terminate_status != other.terminate_status) {
      return false;
    }
    if (this->ignore_cancel != other.ignore_cancel) {
      return false;
    }
    if (this->result_text != other.result_text) {
      return false;
    }
    if (this->the_result != other.the_result) {
      return false;
    }
    if (this->is_simple_client != other.is_simple_client) {
      return false;
    }
    if (this->delay_accept != other.delay_accept) {
      return false;
    }
    if (this->delay_terminate != other.delay_terminate) {
      return false;
    }
    if (this->pause_status != other.pause_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestRequest_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestRequest_Goal_

// alias to use template instance with default allocator
using TestRequest_Goal =
  actionlib::action::TestRequest_Goal_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t TestRequest_Goal_<ContainerAllocator>::TERMINATE_SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t TestRequest_Goal_<ContainerAllocator>::TERMINATE_ABORTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t TestRequest_Goal_<ContainerAllocator>::TERMINATE_REJECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t TestRequest_Goal_<ContainerAllocator>::TERMINATE_LOSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t TestRequest_Goal_<ContainerAllocator>::TERMINATE_DROP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t TestRequest_Goal_<ContainerAllocator>::TERMINATE_EXCEPTION;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace actionlib


#ifndef _WIN32
# define DEPRECATED__actionlib__action__TestRequest_Result __attribute__((deprecated))
#else
# define DEPRECATED__actionlib__action__TestRequest_Result __declspec(deprecated)
#endif

namespace actionlib
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TestRequest_Result_
{
  using Type = TestRequest_Result_<ContainerAllocator>;

  explicit TestRequest_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->the_result = 0l;
      this->is_simple_server = false;
    }
  }

  explicit TestRequest_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->the_result = 0l;
      this->is_simple_server = false;
    }
  }

  // field types and members
  using _the_result_type =
    int32_t;
  _the_result_type the_result;
  using _is_simple_server_type =
    bool;
  _is_simple_server_type is_simple_server;

  // setters for named parameter idiom
  Type & set__the_result(
    const int32_t & _arg)
  {
    this->the_result = _arg;
    return *this;
  }
  Type & set__is_simple_server(
    const bool & _arg)
  {
    this->is_simple_server = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    actionlib::action::TestRequest_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const actionlib::action::TestRequest_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<actionlib::action::TestRequest_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<actionlib::action::TestRequest_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      actionlib::action::TestRequest_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<actionlib::action::TestRequest_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      actionlib::action::TestRequest_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<actionlib::action::TestRequest_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<actionlib::action::TestRequest_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<actionlib::action::TestRequest_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__actionlib__action__TestRequest_Result
    std::shared_ptr<actionlib::action::TestRequest_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__actionlib__action__TestRequest_Result
    std::shared_ptr<actionlib::action::TestRequest_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestRequest_Result_ & other) const
  {
    if (this->the_result != other.the_result) {
      return false;
    }
    if (this->is_simple_server != other.is_simple_server) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestRequest_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestRequest_Result_

// alias to use template instance with default allocator
using TestRequest_Result =
  actionlib::action::TestRequest_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace actionlib


#ifndef _WIN32
# define DEPRECATED__actionlib__action__TestRequest_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__actionlib__action__TestRequest_Feedback __declspec(deprecated)
#endif

namespace actionlib
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TestRequest_Feedback_
{
  using Type = TestRequest_Feedback_<ContainerAllocator>;

  explicit TestRequest_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit TestRequest_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    actionlib::action::TestRequest_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const actionlib::action::TestRequest_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<actionlib::action::TestRequest_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<actionlib::action::TestRequest_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      actionlib::action::TestRequest_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<actionlib::action::TestRequest_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      actionlib::action::TestRequest_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<actionlib::action::TestRequest_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<actionlib::action::TestRequest_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<actionlib::action::TestRequest_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__actionlib__action__TestRequest_Feedback
    std::shared_ptr<actionlib::action::TestRequest_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__actionlib__action__TestRequest_Feedback
    std::shared_ptr<actionlib::action::TestRequest_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestRequest_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestRequest_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestRequest_Feedback_

// alias to use template instance with default allocator
using TestRequest_Feedback =
  actionlib::action::TestRequest_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace actionlib


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "actionlib/action/detail/test_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__actionlib__action__TestRequest_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__actionlib__action__TestRequest_SendGoal_Request __declspec(deprecated)
#endif

namespace actionlib
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TestRequest_SendGoal_Request_
{
  using Type = TestRequest_SendGoal_Request_<ContainerAllocator>;

  explicit TestRequest_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit TestRequest_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    actionlib::action::TestRequest_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const actionlib::action::TestRequest_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    actionlib::action::TestRequest_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const actionlib::action::TestRequest_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<actionlib::action::TestRequest_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<actionlib::action::TestRequest_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      actionlib::action::TestRequest_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<actionlib::action::TestRequest_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      actionlib::action::TestRequest_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<actionlib::action::TestRequest_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<actionlib::action::TestRequest_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<actionlib::action::TestRequest_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__actionlib__action__TestRequest_SendGoal_Request
    std::shared_ptr<actionlib::action::TestRequest_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__actionlib__action__TestRequest_SendGoal_Request
    std::shared_ptr<actionlib::action::TestRequest_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestRequest_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestRequest_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestRequest_SendGoal_Request_

// alias to use template instance with default allocator
using TestRequest_SendGoal_Request =
  actionlib::action::TestRequest_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace actionlib


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__actionlib__action__TestRequest_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__actionlib__action__TestRequest_SendGoal_Response __declspec(deprecated)
#endif

namespace actionlib
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TestRequest_SendGoal_Response_
{
  using Type = TestRequest_SendGoal_Response_<ContainerAllocator>;

  explicit TestRequest_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit TestRequest_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    actionlib::action::TestRequest_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const actionlib::action::TestRequest_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<actionlib::action::TestRequest_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<actionlib::action::TestRequest_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      actionlib::action::TestRequest_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<actionlib::action::TestRequest_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      actionlib::action::TestRequest_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<actionlib::action::TestRequest_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<actionlib::action::TestRequest_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<actionlib::action::TestRequest_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__actionlib__action__TestRequest_SendGoal_Response
    std::shared_ptr<actionlib::action::TestRequest_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__actionlib__action__TestRequest_SendGoal_Response
    std::shared_ptr<actionlib::action::TestRequest_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestRequest_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestRequest_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestRequest_SendGoal_Response_

// alias to use template instance with default allocator
using TestRequest_SendGoal_Response =
  actionlib::action::TestRequest_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace actionlib


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__actionlib__action__TestRequest_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__actionlib__action__TestRequest_SendGoal_Event __declspec(deprecated)
#endif

namespace actionlib
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TestRequest_SendGoal_Event_
{
  using Type = TestRequest_SendGoal_Event_<ContainerAllocator>;

  explicit TestRequest_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit TestRequest_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<actionlib::action::TestRequest_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<actionlib::action::TestRequest_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<actionlib::action::TestRequest_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<actionlib::action::TestRequest_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<actionlib::action::TestRequest_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<actionlib::action::TestRequest_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<actionlib::action::TestRequest_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<actionlib::action::TestRequest_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    actionlib::action::TestRequest_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const actionlib::action::TestRequest_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<actionlib::action::TestRequest_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<actionlib::action::TestRequest_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      actionlib::action::TestRequest_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<actionlib::action::TestRequest_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      actionlib::action::TestRequest_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<actionlib::action::TestRequest_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<actionlib::action::TestRequest_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<actionlib::action::TestRequest_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__actionlib__action__TestRequest_SendGoal_Event
    std::shared_ptr<actionlib::action::TestRequest_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__actionlib__action__TestRequest_SendGoal_Event
    std::shared_ptr<actionlib::action::TestRequest_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestRequest_SendGoal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestRequest_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestRequest_SendGoal_Event_

// alias to use template instance with default allocator
using TestRequest_SendGoal_Event =
  actionlib::action::TestRequest_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace actionlib

namespace actionlib
{

namespace action
{

struct TestRequest_SendGoal
{
  using Request = actionlib::action::TestRequest_SendGoal_Request;
  using Response = actionlib::action::TestRequest_SendGoal_Response;
  using Event = actionlib::action::TestRequest_SendGoal_Event;
};

}  // namespace action

}  // namespace actionlib


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__actionlib__action__TestRequest_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__actionlib__action__TestRequest_GetResult_Request __declspec(deprecated)
#endif

namespace actionlib
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TestRequest_GetResult_Request_
{
  using Type = TestRequest_GetResult_Request_<ContainerAllocator>;

  explicit TestRequest_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit TestRequest_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    actionlib::action::TestRequest_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const actionlib::action::TestRequest_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<actionlib::action::TestRequest_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<actionlib::action::TestRequest_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      actionlib::action::TestRequest_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<actionlib::action::TestRequest_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      actionlib::action::TestRequest_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<actionlib::action::TestRequest_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<actionlib::action::TestRequest_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<actionlib::action::TestRequest_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__actionlib__action__TestRequest_GetResult_Request
    std::shared_ptr<actionlib::action::TestRequest_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__actionlib__action__TestRequest_GetResult_Request
    std::shared_ptr<actionlib::action::TestRequest_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestRequest_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestRequest_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestRequest_GetResult_Request_

// alias to use template instance with default allocator
using TestRequest_GetResult_Request =
  actionlib::action::TestRequest_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace actionlib


// Include directives for member types
// Member 'result'
// already included above
// #include "actionlib/action/detail/test_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__actionlib__action__TestRequest_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__actionlib__action__TestRequest_GetResult_Response __declspec(deprecated)
#endif

namespace actionlib
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TestRequest_GetResult_Response_
{
  using Type = TestRequest_GetResult_Response_<ContainerAllocator>;

  explicit TestRequest_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit TestRequest_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    actionlib::action::TestRequest_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const actionlib::action::TestRequest_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    actionlib::action::TestRequest_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const actionlib::action::TestRequest_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<actionlib::action::TestRequest_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<actionlib::action::TestRequest_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      actionlib::action::TestRequest_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<actionlib::action::TestRequest_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      actionlib::action::TestRequest_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<actionlib::action::TestRequest_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<actionlib::action::TestRequest_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<actionlib::action::TestRequest_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__actionlib__action__TestRequest_GetResult_Response
    std::shared_ptr<actionlib::action::TestRequest_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__actionlib__action__TestRequest_GetResult_Response
    std::shared_ptr<actionlib::action::TestRequest_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestRequest_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestRequest_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestRequest_GetResult_Response_

// alias to use template instance with default allocator
using TestRequest_GetResult_Response =
  actionlib::action::TestRequest_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace actionlib


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__actionlib__action__TestRequest_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__actionlib__action__TestRequest_GetResult_Event __declspec(deprecated)
#endif

namespace actionlib
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TestRequest_GetResult_Event_
{
  using Type = TestRequest_GetResult_Event_<ContainerAllocator>;

  explicit TestRequest_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit TestRequest_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<actionlib::action::TestRequest_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<actionlib::action::TestRequest_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<actionlib::action::TestRequest_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<actionlib::action::TestRequest_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<actionlib::action::TestRequest_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<actionlib::action::TestRequest_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<actionlib::action::TestRequest_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<actionlib::action::TestRequest_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    actionlib::action::TestRequest_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const actionlib::action::TestRequest_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<actionlib::action::TestRequest_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<actionlib::action::TestRequest_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      actionlib::action::TestRequest_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<actionlib::action::TestRequest_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      actionlib::action::TestRequest_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<actionlib::action::TestRequest_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<actionlib::action::TestRequest_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<actionlib::action::TestRequest_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__actionlib__action__TestRequest_GetResult_Event
    std::shared_ptr<actionlib::action::TestRequest_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__actionlib__action__TestRequest_GetResult_Event
    std::shared_ptr<actionlib::action::TestRequest_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestRequest_GetResult_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestRequest_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestRequest_GetResult_Event_

// alias to use template instance with default allocator
using TestRequest_GetResult_Event =
  actionlib::action::TestRequest_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace actionlib

namespace actionlib
{

namespace action
{

struct TestRequest_GetResult
{
  using Request = actionlib::action::TestRequest_GetResult_Request;
  using Response = actionlib::action::TestRequest_GetResult_Response;
  using Event = actionlib::action::TestRequest_GetResult_Event;
};

}  // namespace action

}  // namespace actionlib


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "actionlib/action/detail/test_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__actionlib__action__TestRequest_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__actionlib__action__TestRequest_FeedbackMessage __declspec(deprecated)
#endif

namespace actionlib
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TestRequest_FeedbackMessage_
{
  using Type = TestRequest_FeedbackMessage_<ContainerAllocator>;

  explicit TestRequest_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit TestRequest_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    actionlib::action::TestRequest_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const actionlib::action::TestRequest_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    actionlib::action::TestRequest_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const actionlib::action::TestRequest_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<actionlib::action::TestRequest_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<actionlib::action::TestRequest_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      actionlib::action::TestRequest_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<actionlib::action::TestRequest_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      actionlib::action::TestRequest_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<actionlib::action::TestRequest_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<actionlib::action::TestRequest_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<actionlib::action::TestRequest_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__actionlib__action__TestRequest_FeedbackMessage
    std::shared_ptr<actionlib::action::TestRequest_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__actionlib__action__TestRequest_FeedbackMessage
    std::shared_ptr<actionlib::action::TestRequest_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestRequest_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestRequest_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestRequest_FeedbackMessage_

// alias to use template instance with default allocator
using TestRequest_FeedbackMessage =
  actionlib::action::TestRequest_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace actionlib

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace actionlib
{

namespace action
{

struct TestRequest
{
  /// The goal message defined in the action definition.
  using Goal = actionlib::action::TestRequest_Goal;
  /// The result message defined in the action definition.
  using Result = actionlib::action::TestRequest_Result;
  /// The feedback message defined in the action definition.
  using Feedback = actionlib::action::TestRequest_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = actionlib::action::TestRequest_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = actionlib::action::TestRequest_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = actionlib::action::TestRequest_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct TestRequest TestRequest;

}  // namespace action

}  // namespace actionlib

#endif  // ACTIONLIB__ACTION__DETAIL__TEST_REQUEST__STRUCT_HPP_
