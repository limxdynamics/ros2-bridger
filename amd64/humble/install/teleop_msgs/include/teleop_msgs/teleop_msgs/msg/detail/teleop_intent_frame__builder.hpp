// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from teleop_msgs:msg/TeleopIntentFrame.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_INTENT_FRAME__BUILDER_HPP_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_INTENT_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "teleop_msgs/msg/detail/teleop_intent_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace teleop_msgs
{

namespace msg
{

namespace builder
{

class Init_TeleopIntentFrame_retarget_joints
{
public:
  explicit Init_TeleopIntentFrame_retarget_joints(::teleop_msgs::msg::TeleopIntentFrame & msg)
  : msg_(msg)
  {}
  ::teleop_msgs::msg::TeleopIntentFrame retarget_joints(::teleop_msgs::msg::TeleopIntentFrame::_retarget_joints_type arg)
  {
    msg_.retarget_joints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopIntentFrame msg_;
};

class Init_TeleopIntentFrame_retarget_valid
{
public:
  explicit Init_TeleopIntentFrame_retarget_valid(::teleop_msgs::msg::TeleopIntentFrame & msg)
  : msg_(msg)
  {}
  Init_TeleopIntentFrame_retarget_joints retarget_valid(::teleop_msgs::msg::TeleopIntentFrame::_retarget_valid_type arg)
  {
    msg_.retarget_valid = std::move(arg);
    return Init_TeleopIntentFrame_retarget_joints(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopIntentFrame msg_;
};

class Init_TeleopIntentFrame_head_control_selected
{
public:
  explicit Init_TeleopIntentFrame_head_control_selected(::teleop_msgs::msg::TeleopIntentFrame & msg)
  : msg_(msg)
  {}
  Init_TeleopIntentFrame_retarget_valid head_control_selected(::teleop_msgs::msg::TeleopIntentFrame::_head_control_selected_type arg)
  {
    msg_.head_control_selected = std::move(arg);
    return Init_TeleopIntentFrame_retarget_valid(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopIntentFrame msg_;
};

class Init_TeleopIntentFrame_raw
{
public:
  explicit Init_TeleopIntentFrame_raw(::teleop_msgs::msg::TeleopIntentFrame & msg)
  : msg_(msg)
  {}
  Init_TeleopIntentFrame_head_control_selected raw(::teleop_msgs::msg::TeleopIntentFrame::_raw_type arg)
  {
    msg_.raw = std::move(arg);
    return Init_TeleopIntentFrame_head_control_selected(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopIntentFrame msg_;
};

class Init_TeleopIntentFrame_raw_valid
{
public:
  explicit Init_TeleopIntentFrame_raw_valid(::teleop_msgs::msg::TeleopIntentFrame & msg)
  : msg_(msg)
  {}
  Init_TeleopIntentFrame_raw raw_valid(::teleop_msgs::msg::TeleopIntentFrame::_raw_valid_type arg)
  {
    msg_.raw_valid = std::move(arg);
    return Init_TeleopIntentFrame_raw(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopIntentFrame msg_;
};

class Init_TeleopIntentFrame_targets
{
public:
  explicit Init_TeleopIntentFrame_targets(::teleop_msgs::msg::TeleopIntentFrame & msg)
  : msg_(msg)
  {}
  Init_TeleopIntentFrame_raw_valid targets(::teleop_msgs::msg::TeleopIntentFrame::_targets_type arg)
  {
    msg_.targets = std::move(arg);
    return Init_TeleopIntentFrame_raw_valid(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopIntentFrame msg_;
};

class Init_TeleopIntentFrame_reference_pose
{
public:
  explicit Init_TeleopIntentFrame_reference_pose(::teleop_msgs::msg::TeleopIntentFrame & msg)
  : msg_(msg)
  {}
  Init_TeleopIntentFrame_targets reference_pose(::teleop_msgs::msg::TeleopIntentFrame::_reference_pose_type arg)
  {
    msg_.reference_pose = std::move(arg);
    return Init_TeleopIntentFrame_targets(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopIntentFrame msg_;
};

class Init_TeleopIntentFrame_reference_frame
{
public:
  explicit Init_TeleopIntentFrame_reference_frame(::teleop_msgs::msg::TeleopIntentFrame & msg)
  : msg_(msg)
  {}
  Init_TeleopIntentFrame_reference_pose reference_frame(::teleop_msgs::msg::TeleopIntentFrame::_reference_frame_type arg)
  {
    msg_.reference_frame = std::move(arg);
    return Init_TeleopIntentFrame_reference_pose(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopIntentFrame msg_;
};

class Init_TeleopIntentFrame_source_mask
{
public:
  explicit Init_TeleopIntentFrame_source_mask(::teleop_msgs::msg::TeleopIntentFrame & msg)
  : msg_(msg)
  {}
  Init_TeleopIntentFrame_reference_frame source_mask(::teleop_msgs::msg::TeleopIntentFrame::_source_mask_type arg)
  {
    msg_.source_mask = std::move(arg);
    return Init_TeleopIntentFrame_reference_frame(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopIntentFrame msg_;
};

class Init_TeleopIntentFrame_source
{
public:
  explicit Init_TeleopIntentFrame_source(::teleop_msgs::msg::TeleopIntentFrame & msg)
  : msg_(msg)
  {}
  Init_TeleopIntentFrame_source_mask source(::teleop_msgs::msg::TeleopIntentFrame::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_TeleopIntentFrame_source_mask(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopIntentFrame msg_;
};

class Init_TeleopIntentFrame_schema_version
{
public:
  explicit Init_TeleopIntentFrame_schema_version(::teleop_msgs::msg::TeleopIntentFrame & msg)
  : msg_(msg)
  {}
  Init_TeleopIntentFrame_source schema_version(::teleop_msgs::msg::TeleopIntentFrame::_schema_version_type arg)
  {
    msg_.schema_version = std::move(arg);
    return Init_TeleopIntentFrame_source(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopIntentFrame msg_;
};

class Init_TeleopIntentFrame_header
{
public:
  Init_TeleopIntentFrame_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TeleopIntentFrame_schema_version header(::teleop_msgs::msg::TeleopIntentFrame::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TeleopIntentFrame_schema_version(msg_);
  }

private:
  ::teleop_msgs::msg::TeleopIntentFrame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_msgs::msg::TeleopIntentFrame>()
{
  return teleop_msgs::msg::builder::Init_TeleopIntentFrame_header();
}

}  // namespace teleop_msgs

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_INTENT_FRAME__BUILDER_HPP_
