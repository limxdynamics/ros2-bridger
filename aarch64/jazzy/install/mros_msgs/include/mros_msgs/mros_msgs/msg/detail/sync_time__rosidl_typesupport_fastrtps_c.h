// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from mros_msgs:msg/SyncTime.idl
// generated code does not contain a copyright notice
#ifndef MROS_MSGS__MSG__DETAIL__SYNC_TIME__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define MROS_MSGS__MSG__DETAIL__SYNC_TIME__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mros_msgs/msg/detail/sync_time__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mros_msgs
bool cdr_serialize_mros_msgs__msg__SyncTime(
  const mros_msgs__msg__SyncTime * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mros_msgs
bool cdr_deserialize_mros_msgs__msg__SyncTime(
  eprosima::fastcdr::Cdr &,
  mros_msgs__msg__SyncTime * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mros_msgs
size_t get_serialized_size_mros_msgs__msg__SyncTime(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mros_msgs
size_t max_serialized_size_mros_msgs__msg__SyncTime(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mros_msgs
bool cdr_serialize_key_mros_msgs__msg__SyncTime(
  const mros_msgs__msg__SyncTime * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mros_msgs
size_t get_serialized_size_key_mros_msgs__msg__SyncTime(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mros_msgs
size_t max_serialized_size_key_mros_msgs__msg__SyncTime(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mros_msgs, msg, SyncTime)();

#ifdef __cplusplus
}
#endif

#endif  // MROS_MSGS__MSG__DETAIL__SYNC_TIME__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
