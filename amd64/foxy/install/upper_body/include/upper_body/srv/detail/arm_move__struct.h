// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from upper_body:srv/arm_move.idl
// generated code does not contain a copyright notice

#ifndef UPPER_BODY__SRV__DETAIL__ARM_MOVE__STRUCT_H_
#define UPPER_BODY__SRV__DETAIL__ARM_MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'move_type'
#include "rosidl_runtime_c/string.h"
// Member 'left_arm_joints'
// Member 'right_arm_joints'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/arm_move in the package upper_body.
typedef struct upper_body__srv__arm_move_Request
{
  rosidl_runtime_c__String move_type;
  rosidl_runtime_c__float__Sequence left_arm_joints;
  rosidl_runtime_c__float__Sequence right_arm_joints;
  float left_arm_pos[7];
  float right_arm_pos[7];
  float speed;
} upper_body__srv__arm_move_Request;

// Struct for a sequence of upper_body__srv__arm_move_Request.
typedef struct upper_body__srv__arm_move_Request__Sequence
{
  upper_body__srv__arm_move_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} upper_body__srv__arm_move_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/arm_move in the package upper_body.
typedef struct upper_body__srv__arm_move_Response
{
  int32_t status;
} upper_body__srv__arm_move_Response;

// Struct for a sequence of upper_body__srv__arm_move_Response.
typedef struct upper_body__srv__arm_move_Response__Sequence
{
  upper_body__srv__arm_move_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} upper_body__srv__arm_move_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UPPER_BODY__SRV__DETAIL__ARM_MOVE__STRUCT_H_
