// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from teleop_msgs:msg/TeleopRawInput.idl
// generated code does not contain a copyright notice

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
enum
{
  teleop_msgs__msg__TeleopRawInput__BTN_LEFT_STICK = 16ul
};

/// Constant 'BTN_RIGHT_STICK'.
enum
{
  teleop_msgs__msg__TeleopRawInput__BTN_RIGHT_STICK = 32ul
};

/// Constant 'BTN_LEFT_GRIP'.
enum
{
  teleop_msgs__msg__TeleopRawInput__BTN_LEFT_GRIP = 64ul
};

/// Constant 'BTN_RIGHT_GRIP'.
enum
{
  teleop_msgs__msg__TeleopRawInput__BTN_RIGHT_GRIP = 128ul
};

/// Constant 'BTN_LEFT_TRIGGER'.
enum
{
  teleop_msgs__msg__TeleopRawInput__BTN_LEFT_TRIGGER = 256ul
};

/// Constant 'BTN_RIGHT_TRIGGER'.
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

// Struct defined in msg/TeleopRawInput in the package teleop_msgs.
typedef struct teleop_msgs__msg__TeleopRawInput
{
  float left_trigger;
  float right_trigger;
  float left_grip;
  float right_grip;
  float left_stick[2];
  float right_stick[2];
  uint32_t buttons;
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
