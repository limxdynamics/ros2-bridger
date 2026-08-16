// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from teleop_msgs:msg/TeleopIntentFrame.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__TELEOP_INTENT_FRAME__STRUCT_H_
#define TELEOP_MSGS__MSG__DETAIL__TELEOP_INTENT_FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SCHEMA_VERSION'.
enum
{
  teleop_msgs__msg__TeleopIntentFrame__SCHEMA_VERSION = 1
};

/// Constant 'SOURCE_UNKNOWN'.
enum
{
  teleop_msgs__msg__TeleopIntentFrame__SOURCE_UNKNOWN = 0
};

/// Constant 'SOURCE_VR'.
enum
{
  teleop_msgs__msg__TeleopIntentFrame__SOURCE_VR = 1
};

/// Constant 'SOURCE_MOCAP'.
enum
{
  teleop_msgs__msg__TeleopIntentFrame__SOURCE_MOCAP = 2
};

/// Constant 'SOURCE_GLOVE'.
enum
{
  teleop_msgs__msg__TeleopIntentFrame__SOURCE_GLOVE = 3
};

/// Constant 'SOURCE_FUSED'.
enum
{
  teleop_msgs__msg__TeleopIntentFrame__SOURCE_FUSED = 4
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'reference_frame'
#include "rosidl_runtime_c/string.h"
// Member 'reference_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'targets'
#include "teleop_msgs/msg/detail/teleop_target__struct.h"
// Member 'raw'
#include "teleop_msgs/msg/detail/teleop_raw_input__struct.h"
// Member 'retarget_joints'
#include "controller_msgs/msg/detail/joint_cmd__struct.h"

// Struct defined in msg/TeleopIntentFrame in the package teleop_msgs.
typedef struct teleop_msgs__msg__TeleopIntentFrame
{
  std_msgs__msg__Header header;
  uint16_t schema_version;
  uint8_t source;
  uint32_t source_mask;
  rosidl_runtime_c__String reference_frame;
  geometry_msgs__msg__Pose reference_pose;
  teleop_msgs__msg__TeleopTarget__Sequence targets;
  bool raw_valid;
  teleop_msgs__msg__TeleopRawInput raw;
  bool head_control_selected;
  bool retarget_valid;
  controller_msgs__msg__JointCmd retarget_joints;
} teleop_msgs__msg__TeleopIntentFrame;

// Struct for a sequence of teleop_msgs__msg__TeleopIntentFrame.
typedef struct teleop_msgs__msg__TeleopIntentFrame__Sequence
{
  teleop_msgs__msg__TeleopIntentFrame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} teleop_msgs__msg__TeleopIntentFrame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_MSGS__MSG__DETAIL__TELEOP_INTENT_FRAME__STRUCT_H_
