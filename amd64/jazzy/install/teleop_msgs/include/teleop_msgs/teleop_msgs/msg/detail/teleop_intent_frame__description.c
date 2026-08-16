// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from teleop_msgs:msg/TeleopIntentFrame.idl
// generated code does not contain a copyright notice

#include "teleop_msgs/msg/detail/teleop_intent_frame__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_teleop_msgs
const rosidl_type_hash_t *
teleop_msgs__msg__TeleopIntentFrame__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2f, 0x13, 0xcf, 0xc6, 0xba, 0xb1, 0xdb, 0x2a,
      0x61, 0x9d, 0x72, 0x87, 0x79, 0xf7, 0xf0, 0xaf,
      0x86, 0xfb, 0x15, 0xb2, 0xd5, 0x58, 0xf2, 0x7d,
      0x16, 0x8a, 0x2a, 0xf3, 0xc0, 0x4b, 0x51, 0x24,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "controller_msgs/msg/detail/joint_cmd__functions.h"
#include "teleop_msgs/msg/detail/teleop_raw_input__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "teleop_msgs/msg/detail/teleop_target__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t controller_msgs__msg__JointCmd__EXPECTED_HASH = {1, {
    0x50, 0x11, 0x4f, 0xe2, 0x52, 0xc0, 0x32, 0xa1,
    0x7b, 0x35, 0xb7, 0xd3, 0x03, 0xb4, 0xd2, 0x93,
    0x3e, 0x7d, 0x99, 0x6e, 0x82, 0xdd, 0xce, 0x60,
    0x78, 0x74, 0x18, 0x64, 0x83, 0x2b, 0x84, 0x1a,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
static const rosidl_type_hash_t teleop_msgs__msg__TeleopRawInput__EXPECTED_HASH = {1, {
    0xa7, 0xc1, 0x77, 0xc7, 0xc8, 0x2f, 0x6f, 0xfb,
    0x32, 0x52, 0x72, 0xad, 0x4e, 0xc2, 0xa7, 0xf9,
    0x9a, 0xd4, 0xf9, 0x37, 0x39, 0xa0, 0x4e, 0x91,
    0x29, 0xa4, 0xe3, 0xc4, 0x36, 0x1d, 0xbf, 0x7c,
  }};
static const rosidl_type_hash_t teleop_msgs__msg__TeleopTarget__EXPECTED_HASH = {1, {
    0x22, 0x12, 0x90, 0x4d, 0x8f, 0xd8, 0x64, 0x45,
    0xef, 0xfa, 0x83, 0xc0, 0x94, 0xd1, 0xc9, 0x43,
    0xe7, 0xe9, 0xb1, 0x98, 0x9f, 0x42, 0xb4, 0x60,
    0xdf, 0x6d, 0x7b, 0xb7, 0xa1, 0x27, 0xe5, 0xdb,
  }};
#endif

static char teleop_msgs__msg__TeleopIntentFrame__TYPE_NAME[] = "teleop_msgs/msg/TeleopIntentFrame";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char controller_msgs__msg__JointCmd__TYPE_NAME[] = "controller_msgs/msg/JointCmd";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char teleop_msgs__msg__TeleopRawInput__TYPE_NAME[] = "teleop_msgs/msg/TeleopRawInput";
static char teleop_msgs__msg__TeleopTarget__TYPE_NAME[] = "teleop_msgs/msg/TeleopTarget";

// Define type names, field names, and default values
static char teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__header[] = "header";
static char teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__schema_version[] = "schema_version";
static char teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__source[] = "source";
static char teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__source_mask[] = "source_mask";
static char teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__reference_frame[] = "reference_frame";
static char teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__reference_pose[] = "reference_pose";
static char teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__targets[] = "targets";
static char teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__raw_valid[] = "raw_valid";
static char teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__raw[] = "raw";
static char teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__head_control_selected[] = "head_control_selected";
static char teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__retarget_valid[] = "retarget_valid";
static char teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__retarget_joints[] = "retarget_joints";

static rosidl_runtime_c__type_description__Field teleop_msgs__msg__TeleopIntentFrame__FIELDS[] = {
  {
    {teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__schema_version, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__source, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__source_mask, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__reference_frame, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__reference_pose, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__targets, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {teleop_msgs__msg__TeleopTarget__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__raw_valid, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__raw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {teleop_msgs__msg__TeleopRawInput__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__head_control_selected, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__retarget_valid, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopIntentFrame__FIELD_NAME__retarget_joints, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {controller_msgs__msg__JointCmd__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription teleop_msgs__msg__TeleopIntentFrame__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {controller_msgs__msg__JointCmd__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopRawInput__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopTarget__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
teleop_msgs__msg__TeleopIntentFrame__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {teleop_msgs__msg__TeleopIntentFrame__TYPE_NAME, 33, 33},
      {teleop_msgs__msg__TeleopIntentFrame__FIELDS, 12, 12},
    },
    {teleop_msgs__msg__TeleopIntentFrame__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&controller_msgs__msg__JointCmd__EXPECTED_HASH, controller_msgs__msg__JointCmd__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = controller_msgs__msg__JointCmd__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&teleop_msgs__msg__TeleopRawInput__EXPECTED_HASH, teleop_msgs__msg__TeleopRawInput__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = teleop_msgs__msg__TeleopRawInput__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&teleop_msgs__msg__TeleopTarget__EXPECTED_HASH, teleop_msgs__msg__TeleopTarget__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = teleop_msgs__msg__TeleopTarget__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe9\\x81\\xa5\\xe6\\x93\\x8d\\xe4\\xbd\\x9c\\xe6\\x84\\x8f\\xe5\\x9b\\xbe\\xe5\\xb8\\xa7\\xe3\\x80\\x82\\xe8\\xbe\\x93\\xe5\\x85\\xa5\\xe6\\xb1\\x87\\xe8\\x81\\x9a\\xe5\\xb1\\x82\\xe6\\xaf\\x8f\\xe7\\xbb\\x84\\xe8\\xa3\\x85\\xe5\\x87\\xba\\xe4\\xb8\\x80\\xe4\\xb8\\xaa\\xe6\\x93\\x8d\\xe4\\xbd\\x9c\\xe8\\x80\\x85\\xe5\\xb8\\xa7\\xef\\xbc\\x8c\\xe5\\x8f\\x91\\xe5\\xb8\\x83\\xe8\\x87\\xb3\\xe5\\xa4\\x9a\\xe4\\xb8\\x80\\xe6\\x9d\\xa1\\xe6\\x9c\\xac\\xe6\\xb6\\x88\\xe6\\x81\\xaf\\xe3\\x80\\x82\n"
  "# \\xe6\\x89\\xbf\\xe8\\xbd\\xbd\\xe3\\x80\\x8c\\xe6\\x93\\x8d\\xe4\\xbd\\x9c\\xe8\\x80\\x85\\xe6\\x83\\xb3\\xe5\\x81\\x9a\\xe4\\xbb\\x80\\xe4\\xb9\\x88\\xe3\\x80\\x8d\\xef\\xbc\\x8c\\xe4\\xb8\\x8d\\xe6\\x89\\xbf\\xe8\\xbd\\xbd\\xe4\\xbb\\xbb\\xe4\\xbd\\x95\\xe6\\x8e\\xa7\\xe5\\x88\\xb6\\xe5\\x86\\xb3\\xe7\\xad\\x96\\xe3\\x80\\x82\n"
  "\n"
  "# stamp \\xe4\\xb8\\xba\\xe5\\xb8\\xa7\\xe7\\xbb\\x84\\xe8\\xa3\\x85\\xe6\\x97\\xb6\\xe5\\x88\\xbb\\xef\\xbc\\x9bseq \\xe4\\xb8\\xba\\xe5\\xb8\\xa7\\xe5\\xba\\x8f\\xe5\\x8f\\xb7\\xef\\xbc\\x8c\\xe4\\xbe\\x9b\\xe6\\x8e\\xa5\\xe6\\x94\\xb6\\xe6\\x96\\xb9\\xe6\\xa3\\x80\\xe6\\xb5\\x8b\\xe4\\xb8\\xa2\\xe5\\xb8\\xa7\\xe3\\x80\\x82\n"
  "std_msgs/Header header\n"
  "\n"
  "uint16 SCHEMA_VERSION=1\n"
  "uint16 schema_version\n"
  "\n"
  "# \\xe6\\x9c\\xac\\xe5\\xb8\\xa7\\xe7\\x9a\\x84\\xe4\\xb8\\xbb\\xe8\\xbe\\x93\\xe5\\x85\\xa5\\xe6\\xba\\x90\n"
  "uint8 SOURCE_UNKNOWN=0\n"
  "uint8 SOURCE_VR=1\n"
  "uint8 SOURCE_MOCAP=2\n"
  "uint8 SOURCE_GLOVE=3\n"
  "uint8 SOURCE_FUSED=4\n"
  "uint8 source\n"
  "\n"
  "# \\xe5\\x8f\\x82\\xe4\\xb8\\x8e\\xe6\\x9c\\xac\\xe5\\xb8\\xa7\\xe5\\x90\\x88\\xe6\\x88\\x90\\xe7\\x9a\\x84\\xe5\\x85\\xa8\\xe9\\x83\\xa8\\xe8\\xbe\\x93\\xe5\\x85\\xa5\\xe6\\xba\\x90\\xef\\xbc\\x8c\\xe6\\x8c\\x89 1 << SOURCE_* \\xe7\\xbd\\xae\\xe4\\xbd\\x8d\n"
  "uint32 source_mask\n"
  "\n"
  "# targets \\xe4\\xb8\\xad\\xe4\\xbd\\x8d\\xe5\\xa7\\xbf\\xe6\\x89\\x80\\xe5\\x9c\\xa8\\xe5\\x8f\\x82\\xe8\\x80\\x83\\xe7\\xb3\\xbb\\xe7\\x9a\\x84\\xe5\\x90\\x8d\\xe7\\xa7\\xb0\n"
  "string reference_frame\n"
  "\n"
  "# \\xe5\\xbd\\x93\\xe5\\x8f\\x82\\xe8\\x80\\x83\\xe7\\xb3\\xbb\\xe6\\x9c\\xac\\xe8\\xba\\xab\\xe6\\x98\\xaf\\xe8\\xbf\\x90\\xe8\\xa1\\x8c\\xe6\\x97\\xb6\\xe4\\xbd\\x8d\\xe5\\xa7\\xbf\\xef\\xbc\\x88\\xe4\\xbe\\x8b\\xe5\\xa6\\x82\\xe9\\x9a\\x8f\\xe5\\xa4\\xb4\\xe9\\x83\\xa8\\xe5\\x81\\x8f\\xe8\\x88\\xaa\\xe7\\x9a\\x84\\xe5\\x8f\\x82\\xe8\\x80\\x83\\xe7\\xb3\\xbb\\xef\\xbc\\x89\\xe6\\x97\\xb6\\xe7\\xbb\\x99\\xe5\\x87\\xba\\xe5\\x85\\xb6\\xe4\\xbd\\x8d\\xe5\\xa7\\xbf\\xe3\\x80\\x82\n"
  "# \\xe5\\x8f\\x82\\xe8\\x80\\x83\\xe7\\xb3\\xbb\\xe4\\xb8\\xba\\xe9\\x9d\\x99\\xe6\\x80\\x81\\xe5\\x85\\xb7\\xe5\\x90\\x8d\\xe5\\x9d\\x90\\xe6\\xa0\\x87\\xe7\\xb3\\xbb\\xe6\\x97\\xb6\\xe5\\xa1\\xab\\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xe4\\xbd\\x8d\\xe5\\xa7\\xbf\\xe3\\x80\\x82\n"
  "geometry_msgs/Pose reference_pose\n"
  "\n"
  "# \\xe6\\x9c\\xac\\xe5\\xb8\\xa7\\xe7\\x9a\\x84\\xe8\\xb7\\x9f\\xe8\\xb8\\xaa\\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe3\\x80\\x82\\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe7\\xbc\\xba\\xe5\\xb8\\xad\\xe5\\x8d\\xb3\\xe8\\xa1\\xa8\\xe7\\xa4\\xba\\xe8\\xaf\\xa5\\xe8\\x82\\xa2\\xe4\\xbd\\x93\\xe6\\x9c\\xac\\xe5\\xb8\\xa7\\xe6\\x97\\xa0\\xe8\\xbe\\x93\\xe5\\x85\\xa5\\xe3\\x80\\x82\n"
  "teleop_msgs/TeleopTarget[] targets\n"
  "\n"
  "# \\xe5\\x8e\\x9f\\xe5\\xa7\\x8b\\xe8\\xbe\\x93\\xe5\\x85\\xa5\\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe6\\x9c\\x89\\xe6\\x95\\x88\\xe3\\x80\\x82\\xe7\\xba\\xaf\\xe5\\x8a\\xa8\\xe6\\x8d\\x95\\xe5\\xb8\\xa7\\xe6\\xb2\\xa1\\xe6\\x9c\\x89\\xe6\\x89\\x8b\\xe6\\x9f\\x84\\xe8\\xbe\\x93\\xe5\\x85\\xa5\\xe6\\x97\\xb6\\xe4\\xb8\\xba false\\xe3\\x80\\x82\n"
  "bool raw_valid\n"
  "teleop_msgs/TeleopRawInput raw\n"
  "\n"
  "# \\xe6\\x93\\x8d\\xe4\\xbd\\x9c\\xe8\\x80\\x85\\xe4\\xbe\\xa7\\xe9\\x80\\x89\\xe9\\xa1\\xb9\\xef\\xbc\\x9a\\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe9\\x80\\x89\\xe6\\x8b\\xa9\\xe4\\xba\\x86\\xe3\\x80\\x8c\\xe6\\x8e\\xa7\\xe5\\xa4\\xb4\\xe3\\x80\\x8d\\xe3\\x80\\x82\n"
  "# \\xe6\\x9d\\xa5\\xe6\\xba\\x90\\xe5\\x8f\\xaf\\xe8\\x83\\xbd\\xe6\\x98\\xaf VR \\xe5\\xba\\x94\\xe7\\x94\\xa8\\xe5\\x86\\x85\\xe7\\x9a\\x84\\xe9\\x80\\x89\\xe6\\x8b\\xa9\\xef\\xbc\\x8c\\xe4\\xb9\\x9f\\xe5\\x8f\\xaf\\xe8\\x83\\xbd\\xe6\\x98\\xaf\\xe5\\x85\\xbc\\xe5\\xae\\xb9\\xe6\\x9c\\x8d\\xe5\\x8a\\xa1\\xe8\\xae\\xbe\\xe7\\xbd\\xae\\xef\\xbc\\x8c\\xe4\\xb8\\x8d\\xe5\\xb1\\x9e\\xe4\\xba\\x8e\\xe8\\xae\\xbe\\xe5\\xa4\\x87\\xe5\\x8e\\x9f\\xe5\\xa7\\x8b\\xe8\\xbe\\x93\\xe5\\x85\\xa5\\xe3\\x80\\x82\n"
  "bool head_control_selected\n"
  "\n"
  "# \\xe5\\x85\\xa8\\xe8\\xba\\xab\\xe9\\x87\\x8d\\xe5\\xae\\x9a\\xe5\\x90\\x91\\xe7\\xbb\\x93\\xe6\\x9e\\x9c\\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe6\\x9c\\x89\\xe6\\x95\\x88\\xe3\\x80\\x82\\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe7\\x9c\\x9f\\xe6\\xad\\xa3\\xe4\\xb8\\x8b\\xe5\\x8f\\x91\\xe7\\x94\\xb1\\xe6\\x8e\\xa5\\xe6\\x94\\xb6\\xe6\\x96\\xb9\\xe5\\x86\\xb3\\xe5\\xae\\x9a\\xe3\\x80\\x82\n"
  "bool retarget_valid\n"
  "controller_msgs/JointCmd retarget_joints";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
teleop_msgs__msg__TeleopIntentFrame__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {teleop_msgs__msg__TeleopIntentFrame__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 804, 804},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
teleop_msgs__msg__TeleopIntentFrame__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *teleop_msgs__msg__TeleopIntentFrame__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *controller_msgs__msg__JointCmd__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[7] = *teleop_msgs__msg__TeleopRawInput__get_individual_type_description_source(NULL);
    sources[8] = *teleop_msgs__msg__TeleopTarget__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
