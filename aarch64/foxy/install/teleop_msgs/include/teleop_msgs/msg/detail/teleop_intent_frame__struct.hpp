// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from teleop_msgs:msg/TeleopIntentFrame.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_INTENT_FRAME__STRUCT_HPP_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_INTENT_FRAME__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'reference_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'targets'
#include "teleop_msgs/msg/detail/teleop_target__struct.hpp"
// Member 'raw'
#include "teleop_msgs/msg/detail/teleop_raw_input__struct.hpp"
// Member 'retarget_joints'
#include "controller_msgs/msg/detail/joint_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__teleop_msgs__msg__TeleopIntentFrame __attribute__((deprecated))
#else
# define DEPRECATED__teleop_msgs__msg__TeleopIntentFrame __declspec(deprecated)
#endif

namespace teleop_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TeleopIntentFrame_
{
  using Type = TeleopIntentFrame_<ContainerAllocator>;

  explicit TeleopIntentFrame_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    reference_pose(_init),
    raw(_init),
    retarget_joints(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->schema_version = 0;
      this->source = 0;
      this->source_mask = 0ul;
      this->reference_frame = "";
      this->raw_valid = false;
      this->head_control_selected = false;
      this->retarget_valid = false;
    }
  }

  explicit TeleopIntentFrame_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    reference_frame(_alloc),
    reference_pose(_alloc, _init),
    raw(_alloc, _init),
    retarget_joints(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->schema_version = 0;
      this->source = 0;
      this->source_mask = 0ul;
      this->reference_frame = "";
      this->raw_valid = false;
      this->head_control_selected = false;
      this->retarget_valid = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _schema_version_type =
    uint16_t;
  _schema_version_type schema_version;
  using _source_type =
    uint8_t;
  _source_type source;
  using _source_mask_type =
    uint32_t;
  _source_mask_type source_mask;
  using _reference_frame_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _reference_frame_type reference_frame;
  using _reference_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _reference_pose_type reference_pose;
  using _targets_type =
    std::vector<teleop_msgs::msg::TeleopTarget_<ContainerAllocator>, typename ContainerAllocator::template rebind<teleop_msgs::msg::TeleopTarget_<ContainerAllocator>>::other>;
  _targets_type targets;
  using _raw_valid_type =
    bool;
  _raw_valid_type raw_valid;
  using _raw_type =
    teleop_msgs::msg::TeleopRawInput_<ContainerAllocator>;
  _raw_type raw;
  using _head_control_selected_type =
    bool;
  _head_control_selected_type head_control_selected;
  using _retarget_valid_type =
    bool;
  _retarget_valid_type retarget_valid;
  using _retarget_joints_type =
    controller_msgs::msg::JointCmd_<ContainerAllocator>;
  _retarget_joints_type retarget_joints;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__schema_version(
    const uint16_t & _arg)
  {
    this->schema_version = _arg;
    return *this;
  }
  Type & set__source(
    const uint8_t & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__source_mask(
    const uint32_t & _arg)
  {
    this->source_mask = _arg;
    return *this;
  }
  Type & set__reference_frame(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->reference_frame = _arg;
    return *this;
  }
  Type & set__reference_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->reference_pose = _arg;
    return *this;
  }
  Type & set__targets(
    const std::vector<teleop_msgs::msg::TeleopTarget_<ContainerAllocator>, typename ContainerAllocator::template rebind<teleop_msgs::msg::TeleopTarget_<ContainerAllocator>>::other> & _arg)
  {
    this->targets = _arg;
    return *this;
  }
  Type & set__raw_valid(
    const bool & _arg)
  {
    this->raw_valid = _arg;
    return *this;
  }
  Type & set__raw(
    const teleop_msgs::msg::TeleopRawInput_<ContainerAllocator> & _arg)
  {
    this->raw = _arg;
    return *this;
  }
  Type & set__head_control_selected(
    const bool & _arg)
  {
    this->head_control_selected = _arg;
    return *this;
  }
  Type & set__retarget_valid(
    const bool & _arg)
  {
    this->retarget_valid = _arg;
    return *this;
  }
  Type & set__retarget_joints(
    const controller_msgs::msg::JointCmd_<ContainerAllocator> & _arg)
  {
    this->retarget_joints = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t SCHEMA_VERSION =
    1u;
  static constexpr uint8_t SOURCE_UNKNOWN =
    0u;
  static constexpr uint8_t SOURCE_VR =
    1u;
  static constexpr uint8_t SOURCE_MOCAP =
    2u;
  static constexpr uint8_t SOURCE_GLOVE =
    3u;
  static constexpr uint8_t SOURCE_FUSED =
    4u;

  // pointer types
  using RawPtr =
    teleop_msgs::msg::TeleopIntentFrame_<ContainerAllocator> *;
  using ConstRawPtr =
    const teleop_msgs::msg::TeleopIntentFrame_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<teleop_msgs::msg::TeleopIntentFrame_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<teleop_msgs::msg::TeleopIntentFrame_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      teleop_msgs::msg::TeleopIntentFrame_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<teleop_msgs::msg::TeleopIntentFrame_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      teleop_msgs::msg::TeleopIntentFrame_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<teleop_msgs::msg::TeleopIntentFrame_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<teleop_msgs::msg::TeleopIntentFrame_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<teleop_msgs::msg::TeleopIntentFrame_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__teleop_msgs__msg__TeleopIntentFrame
    std::shared_ptr<teleop_msgs::msg::TeleopIntentFrame_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__teleop_msgs__msg__TeleopIntentFrame
    std::shared_ptr<teleop_msgs::msg::TeleopIntentFrame_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TeleopIntentFrame_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->schema_version != other.schema_version) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    if (this->source_mask != other.source_mask) {
      return false;
    }
    if (this->reference_frame != other.reference_frame) {
      return false;
    }
    if (this->reference_pose != other.reference_pose) {
      return false;
    }
    if (this->targets != other.targets) {
      return false;
    }
    if (this->raw_valid != other.raw_valid) {
      return false;
    }
    if (this->raw != other.raw) {
      return false;
    }
    if (this->head_control_selected != other.head_control_selected) {
      return false;
    }
    if (this->retarget_valid != other.retarget_valid) {
      return false;
    }
    if (this->retarget_joints != other.retarget_joints) {
      return false;
    }
    return true;
  }
  bool operator!=(const TeleopIntentFrame_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TeleopIntentFrame_

// alias to use template instance with default allocator
using TeleopIntentFrame =
  teleop_msgs::msg::TeleopIntentFrame_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t TeleopIntentFrame_<ContainerAllocator>::SCHEMA_VERSION;
template<typename ContainerAllocator>
constexpr uint8_t TeleopIntentFrame_<ContainerAllocator>::SOURCE_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t TeleopIntentFrame_<ContainerAllocator>::SOURCE_VR;
template<typename ContainerAllocator>
constexpr uint8_t TeleopIntentFrame_<ContainerAllocator>::SOURCE_MOCAP;
template<typename ContainerAllocator>
constexpr uint8_t TeleopIntentFrame_<ContainerAllocator>::SOURCE_GLOVE;
template<typename ContainerAllocator>
constexpr uint8_t TeleopIntentFrame_<ContainerAllocator>::SOURCE_FUSED;

}  // namespace msg

}  // namespace teleop_msgs

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_INTENT_FRAME__STRUCT_HPP_
