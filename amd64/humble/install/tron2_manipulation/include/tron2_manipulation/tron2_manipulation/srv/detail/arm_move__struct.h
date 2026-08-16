// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tron2_manipulation:srv/arm_move.idl
// generated code does not contain a copyright notice

#ifndef TRON2_MANIPULATION__SRV__DETAIL__ARM_MOVE__STRUCT_H_
#define TRON2_MANIPULATION__SRV__DETAIL__ARM_MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/arm_move in the package tron2_manipulation.
typedef struct tron2_manipulation__srv__arm_move_Request
{
  /// unit: m
  float left_arm_pos[7];
  /// unit: m
  float right_arm_pos[7];
  /// speed
  /// unit: rad/s or m/s
  float speed;
} tron2_manipulation__srv__arm_move_Request;

// Struct for a sequence of tron2_manipulation__srv__arm_move_Request.
typedef struct tron2_manipulation__srv__arm_move_Request__Sequence
{
  tron2_manipulation__srv__arm_move_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tron2_manipulation__srv__arm_move_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/arm_move in the package tron2_manipulation.
typedef struct tron2_manipulation__srv__arm_move_Response
{
  int32_t status;
} tron2_manipulation__srv__arm_move_Response;

// Struct for a sequence of tron2_manipulation__srv__arm_move_Response.
typedef struct tron2_manipulation__srv__arm_move_Response__Sequence
{
  tron2_manipulation__srv__arm_move_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tron2_manipulation__srv__arm_move_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRON2_MANIPULATION__SRV__DETAIL__ARM_MOVE__STRUCT_H_
