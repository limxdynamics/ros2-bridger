// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from teleop_msgs:msg/TeleopRawInput.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_msgs/msg/teleop_raw_input.h"


#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_RAW_INPUT__STRUCT_H_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_RAW_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'BTN_LEFT_X'.
/**
  * 按键位掩码。预留高位，新增按键不需要改本消息。
 */
enum
{
  teleop_msgs__msg__TeleopRawInput__BTN_LEFT_X = 1ul
};

/// Constant 'BTN_LEFT_Y'.
enum
{
  teleop_msgs__msg__TeleopRawInput__BTN_LEFT_Y = 2ul
};

/// Constant 'BTN_RIGHT_A'.
enum
{
  teleop_msgs__msg__TeleopRawInput__BTN_RIGHT_A = 4ul
};

/// Constant 'BTN_RIGHT_B'.
enum
{
  teleop_msgs__msg__TeleopRawInput__BTN_RIGHT_B = 8ul
};

/// Constant 'BTN_LEFT_STICK'.
/**
  * 左摇杆按下
 */
enum
{
  teleop_msgs__msg__TeleopRawInput__BTN_LEFT_STICK = 16ul
};

/// Constant 'BTN_RIGHT_STICK'.
/**
  * 右摇杆按下
 */
enum
{
  teleop_msgs__msg__TeleopRawInput__BTN_RIGHT_STICK = 32ul
};

/// Constant 'BTN_LEFT_GRIP'.
/**
  * 左 Grip 的布尔态
 */
enum
{
  teleop_msgs__msg__TeleopRawInput__BTN_LEFT_GRIP = 64ul
};

/// Constant 'BTN_RIGHT_GRIP'.
/**
  * 右 Grip 的布尔态
 */
enum
{
  teleop_msgs__msg__TeleopRawInput__BTN_RIGHT_GRIP = 128ul
};

/// Constant 'BTN_LEFT_TRIGGER'.
/**
  * 左扳机的布尔态
 */
enum
{
  teleop_msgs__msg__TeleopRawInput__BTN_LEFT_TRIGGER = 256ul
};

/// Constant 'BTN_RIGHT_TRIGGER'.
/**
  * 右扳机的布尔态
 */
enum
{
  teleop_msgs__msg__TeleopRawInput__BTN_RIGHT_TRIGGER = 512ul
};

/// Constant 'BTN_LEFT_THUMBREST'.
enum
{
  teleop_msgs__msg__TeleopRawInput__BTN_LEFT_THUMBREST = 1024ul
};

/// Constant 'BTN_RIGHT_THUMBREST'.
enum
{
  teleop_msgs__msg__TeleopRawInput__BTN_RIGHT_THUMBREST = 2048ul
};

/// Struct defined in msg/TeleopRawInput in the package teleop_msgs.
/**
  * 操作者控制器的原始输入量。
  * 发送方不解释任何按键含义，组合键语义一律由接收方解释。
 */
typedef struct teleop_msgs__msg__TeleopRawInput
{
  /// 模拟量，范围 0.0 ~ 1.0
  float left_trigger;
  float right_trigger;
  float left_grip;
  float right_grip;
  /// 摇杆，[x, y]，范围 -1.0 ~ 1.0
  float left_stick[2];
  float right_stick[2];
  uint32_t buttons;
  /// 哪些按键位本帧有效。设备不提供的按键，对应位为 0。
  /// 接收方不得把「设备未提供」当成「按键未按下」。
  uint32_t buttons_valid;
} teleop_msgs__msg__TeleopRawInput;

// Struct for a sequence of teleop_msgs__msg__TeleopRawInput.
typedef struct teleop_msgs__msg__TeleopRawInput__Sequence
{
  teleop_msgs__msg__TeleopRawInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} teleop_msgs__msg__TeleopRawInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_RAW_INPUT__STRUCT_H_
