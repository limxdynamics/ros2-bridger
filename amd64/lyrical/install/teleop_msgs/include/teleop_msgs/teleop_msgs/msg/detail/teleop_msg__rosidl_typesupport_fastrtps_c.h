// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from teleop_msgs:msg/TeleopMsg.idl
// generated code does not contain a copyright notice
#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "teleop_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "teleop_msgs/msg/detail/teleop_msg__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_msgs
bool cdr_serialize_teleop_msgs__msg__TeleopMsg(
  const teleop_msgs__msg__TeleopMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_msgs
bool cdr_deserialize_teleop_msgs__msg__TeleopMsg(
  eprosima::fastcdr::Cdr &,
  teleop_msgs__msg__TeleopMsg * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_msgs
size_t get_serialized_size_teleop_msgs__msg__TeleopMsg(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_msgs
size_t max_serialized_size_teleop_msgs__msg__TeleopMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_msgs
bool cdr_serialize_key_teleop_msgs__msg__TeleopMsg(
  const teleop_msgs__msg__TeleopMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_msgs
size_t get_serialized_size_key_teleop_msgs__msg__TeleopMsg(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_msgs
size_t max_serialized_size_key_teleop_msgs__msg__TeleopMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, teleop_msgs, msg, TeleopMsg)();

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
