// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from teleop_msgs:msg/VRState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_msgs/msg/vr_state.hpp"


#ifndef TELEOP_MSGS__MSG__DETAIL__VR_STATE__STRUCT_HPP_
#define TELEOP_MSGS__MSG__DETAIL__VR_STATE__STRUCT_HPP_

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
# define DEPRECATED__teleop_msgs__msg__VRState __attribute__((deprecated))
#else
# define DEPRECATED__teleop_msgs__msg__VRState __declspec(deprecated)
#endif

namespace teleop_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VRState_
{
  using Type = VRState_<ContainerAllocator>;

  explicit VRState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 16>::iterator, float>(this->eyePose.begin(), this->eyePose.end(), 0.0f);
      std::fill<typename std::array<float, 16>::iterator, float>(this->l.begin(), this->l.end(), 0.0f);
      std::fill<typename std::array<float, 16>::iterator, float>(this->r.begin(), this->r.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->leftJS.begin(), this->leftJS.end(), 0.0f);
      this->leftTrig = 0.0f;
      this->leftGrip = 0.0f;
      this->LThU = false;
      this->LTr = false;
      this->LG = false;
      this->X = false;
      this->Y = false;
      std::fill<typename std::array<float, 2>::iterator, float>(this->rightJS.begin(), this->rightJS.end(), 0.0f);
      this->rightTrig = 0.0f;
      this->rightGrip = 0.0f;
      this->RThU = false;
      this->RTr = false;
      this->RG = false;
      this->A = false;
      this->B = false;
    }
  }

  explicit VRState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    eyePose(_alloc),
    l(_alloc),
    r(_alloc),
    leftJS(_alloc),
    rightJS(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 16>::iterator, float>(this->eyePose.begin(), this->eyePose.end(), 0.0f);
      std::fill<typename std::array<float, 16>::iterator, float>(this->l.begin(), this->l.end(), 0.0f);
      std::fill<typename std::array<float, 16>::iterator, float>(this->r.begin(), this->r.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->leftJS.begin(), this->leftJS.end(), 0.0f);
      this->leftTrig = 0.0f;
      this->leftGrip = 0.0f;
      this->LThU = false;
      this->LTr = false;
      this->LG = false;
      this->X = false;
      this->Y = false;
      std::fill<typename std::array<float, 2>::iterator, float>(this->rightJS.begin(), this->rightJS.end(), 0.0f);
      this->rightTrig = 0.0f;
      this->rightGrip = 0.0f;
      this->RThU = false;
      this->RTr = false;
      this->RG = false;
      this->A = false;
      this->B = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _eyePose_type =
    std::array<float, 16>;
  _eyePose_type eyePose;
  using _l_type =
    std::array<float, 16>;
  _l_type l;
  using _r_type =
    std::array<float, 16>;
  _r_type r;
  using _leftJS_type =
    std::array<float, 2>;
  _leftJS_type leftJS;
  using _leftTrig_type =
    float;
  _leftTrig_type leftTrig;
  using _leftGrip_type =
    float;
  _leftGrip_type leftGrip;
  using _LThU_type =
    bool;
  _LThU_type LThU;
  using _LTr_type =
    bool;
  _LTr_type LTr;
  using _LG_type =
    bool;
  _LG_type LG;
  using _X_type =
    bool;
  _X_type X;
  using _Y_type =
    bool;
  _Y_type Y;
  using _rightJS_type =
    std::array<float, 2>;
  _rightJS_type rightJS;
  using _rightTrig_type =
    float;
  _rightTrig_type rightTrig;
  using _rightGrip_type =
    float;
  _rightGrip_type rightGrip;
  using _RThU_type =
    bool;
  _RThU_type RThU;
  using _RTr_type =
    bool;
  _RTr_type RTr;
  using _RG_type =
    bool;
  _RG_type RG;
  using _A_type =
    bool;
  _A_type A;
  using _B_type =
    bool;
  _B_type B;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__eyePose(
    const std::array<float, 16> & _arg)
  {
    this->eyePose = _arg;
    return *this;
  }
  Type & set__l(
    const std::array<float, 16> & _arg)
  {
    this->l = _arg;
    return *this;
  }
  Type & set__r(
    const std::array<float, 16> & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__leftJS(
    const std::array<float, 2> & _arg)
  {
    this->leftJS = _arg;
    return *this;
  }
  Type & set__leftTrig(
    const float & _arg)
  {
    this->leftTrig = _arg;
    return *this;
  }
  Type & set__leftGrip(
    const float & _arg)
  {
    this->leftGrip = _arg;
    return *this;
  }
  Type & set__LThU(
    const bool & _arg)
  {
    this->LThU = _arg;
    return *this;
  }
  Type & set__LTr(
    const bool & _arg)
  {
    this->LTr = _arg;
    return *this;
  }
  Type & set__LG(
    const bool & _arg)
  {
    this->LG = _arg;
    return *this;
  }
  Type & set__X(
    const bool & _arg)
  {
    this->X = _arg;
    return *this;
  }
  Type & set__Y(
    const bool & _arg)
  {
    this->Y = _arg;
    return *this;
  }
  Type & set__rightJS(
    const std::array<float, 2> & _arg)
  {
    this->rightJS = _arg;
    return *this;
  }
  Type & set__rightTrig(
    const float & _arg)
  {
    this->rightTrig = _arg;
    return *this;
  }
  Type & set__rightGrip(
    const float & _arg)
  {
    this->rightGrip = _arg;
    return *this;
  }
  Type & set__RThU(
    const bool & _arg)
  {
    this->RThU = _arg;
    return *this;
  }
  Type & set__RTr(
    const bool & _arg)
  {
    this->RTr = _arg;
    return *this;
  }
  Type & set__RG(
    const bool & _arg)
  {
    this->RG = _arg;
    return *this;
  }
  Type & set__A(
    const bool & _arg)
  {
    this->A = _arg;
    return *this;
  }
  Type & set__B(
    const bool & _arg)
  {
    this->B = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    teleop_msgs::msg::VRState_<ContainerAllocator> *;
  using ConstRawPtr =
    const teleop_msgs::msg::VRState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<teleop_msgs::msg::VRState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<teleop_msgs::msg::VRState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      teleop_msgs::msg::VRState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<teleop_msgs::msg::VRState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      teleop_msgs::msg::VRState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<teleop_msgs::msg::VRState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<teleop_msgs::msg::VRState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<teleop_msgs::msg::VRState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__teleop_msgs__msg__VRState
    std::shared_ptr<teleop_msgs::msg::VRState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__teleop_msgs__msg__VRState
    std::shared_ptr<teleop_msgs::msg::VRState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VRState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->eyePose != other.eyePose) {
      return false;
    }
    if (this->l != other.l) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    if (this->leftJS != other.leftJS) {
      return false;
    }
    if (this->leftTrig != other.leftTrig) {
      return false;
    }
    if (this->leftGrip != other.leftGrip) {
      return false;
    }
    if (this->LThU != other.LThU) {
      return false;
    }
    if (this->LTr != other.LTr) {
      return false;
    }
    if (this->LG != other.LG) {
      return false;
    }
    if (this->X != other.X) {
      return false;
    }
    if (this->Y != other.Y) {
      return false;
    }
    if (this->rightJS != other.rightJS) {
      return false;
    }
    if (this->rightTrig != other.rightTrig) {
      return false;
    }
    if (this->rightGrip != other.rightGrip) {
      return false;
    }
    if (this->RThU != other.RThU) {
      return false;
    }
    if (this->RTr != other.RTr) {
      return false;
    }
    if (this->RG != other.RG) {
      return false;
    }
    if (this->A != other.A) {
      return false;
    }
    if (this->B != other.B) {
      return false;
    }
    return true;
  }
  bool operator!=(const VRState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VRState_

// alias to use template instance with default allocator
using VRState =
  teleop_msgs::msg::VRState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace teleop_msgs

#endif  // TELEOP_MSGS__MSG__DETAIL__VR_STATE__STRUCT_HPP_
