// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from limx_arm_msgs:msg/arm_status.idl
// generated code does not contain a copyright notice
#ifndef LIMX_ARM_MSGS__MSG__DETAIL__ARM_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define LIMX_ARM_MSGS__MSG__DETAIL__ARM_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "limx_arm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "limx_arm_msgs/msg/detail/arm_status__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_limx_arm_msgs
bool cdr_serialize_limx_arm_msgs__msg__arm_status(
  const limx_arm_msgs__msg__arm_status * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_limx_arm_msgs
bool cdr_deserialize_limx_arm_msgs__msg__arm_status(
  eprosima::fastcdr::Cdr &,
  limx_arm_msgs__msg__arm_status * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_limx_arm_msgs
size_t get_serialized_size_limx_arm_msgs__msg__arm_status(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_limx_arm_msgs
size_t max_serialized_size_limx_arm_msgs__msg__arm_status(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_limx_arm_msgs
bool cdr_serialize_key_limx_arm_msgs__msg__arm_status(
  const limx_arm_msgs__msg__arm_status * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_limx_arm_msgs
size_t get_serialized_size_key_limx_arm_msgs__msg__arm_status(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_limx_arm_msgs
size_t max_serialized_size_key_limx_arm_msgs__msg__arm_status(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_limx_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, limx_arm_msgs, msg, arm_status)();

#ifdef __cplusplus
}
#endif

#endif  // LIMX_ARM_MSGS__MSG__DETAIL__ARM_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
