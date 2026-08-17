// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from teleop_msgs:msg/TeleopIntentFrame.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_msgs/msg/teleop_intent_frame.h"


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
/**
  * 本帧的主输入源
 */
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

/// Struct defined in msg/TeleopIntentFrame in the package teleop_msgs.
/**
  * 遥操作意图帧。输入汇聚层每组装出一个操作者帧，发布至多一条本消息。
  * 承载「操作者想做什么」，不承载任何控制决策。
 */
typedef struct teleop_msgs__msg__TeleopIntentFrame
{
  /// stamp 为帧组装时刻；seq 为帧序号，供接收方检测丢帧。
  std_msgs__msg__Header header;
  uint16_t schema_version;
  uint8_t source;
  /// 参与本帧合成的全部输入源，按 1 << SOURCE_* 置位
  uint32_t source_mask;
  /// targets 中位姿所在参考系的名称
  rosidl_runtime_c__String reference_frame;
  /// 当参考系本身是运行时位姿（例如随头部偏航的参考系）时给出其位姿。
  /// 参考系为静态具名坐标系时填单位位姿。
  geometry_msgs__msg__Pose reference_pose;
  /// 本帧的跟踪目标。目标缺席即表示该肢体本帧无输入。
  teleop_msgs__msg__TeleopTarget__Sequence targets;
  /// 原始输入是否有效。纯动捕帧没有手柄输入时为 false。
  bool raw_valid;
  teleop_msgs__msg__TeleopRawInput raw;
  /// 操作者侧选项：是否选择了「控头」。
  /// 来源可能是 VR 应用内的选择，也可能是兼容服务设置，不属于设备原始输入。
  bool head_control_selected;
  /// 全身重定向结果是否有效。是否真正下发由接收方决定。
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
