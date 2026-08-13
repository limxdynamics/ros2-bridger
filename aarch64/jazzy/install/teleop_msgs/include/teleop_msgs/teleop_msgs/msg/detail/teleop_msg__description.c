// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from teleop_msgs:msg/TeleopMsg.idl
// generated code does not contain a copyright notice

#include "teleop_msgs/msg/detail/teleop_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_teleop_msgs
const rosidl_type_hash_t *
teleop_msgs__msg__TeleopMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8d, 0xea, 0x31, 0x89, 0xdc, 0x41, 0xc1, 0xf9,
      0x82, 0x73, 0x2f, 0x83, 0xee, 0xd4, 0x28, 0x34,
      0x41, 0x4d, 0x50, 0xad, 0x19, 0x71, 0xda, 0xb9,
      0x12, 0x01, 0x37, 0x38, 0xa7, 0x3a, 0xf9, 0x44,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "teleop_msgs/msg/detail/key_point__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "controller_msgs/msg/detail/joint_cmd__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"

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
static const rosidl_type_hash_t teleop_msgs__msg__KeyPoint__EXPECTED_HASH = {1, {
    0x2f, 0x6a, 0xbe, 0xcf, 0xa5, 0x32, 0x31, 0xf4,
    0x17, 0x85, 0x92, 0xd0, 0x5f, 0xac, 0xbb, 0x30,
    0xaf, 0xb8, 0xbb, 0x7d, 0xda, 0x85, 0xd9, 0xa9,
    0xab, 0x00, 0xf5, 0xc4, 0xa4, 0xe1, 0xf8, 0xb3,
  }};
#endif

static char teleop_msgs__msg__TeleopMsg__TYPE_NAME[] = "teleop_msgs/msg/TeleopMsg";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char controller_msgs__msg__JointCmd__TYPE_NAME[] = "controller_msgs/msg/JointCmd";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char teleop_msgs__msg__KeyPoint__TYPE_NAME[] = "teleop_msgs/msg/KeyPoint";

// Define type names, field names, and default values
static char teleop_msgs__msg__TeleopMsg__FIELD_NAME__header[] = "header";
static char teleop_msgs__msg__TeleopMsg__FIELD_NAME__world[] = "world";
static char teleop_msgs__msg__TeleopMsg__FIELD_NAME__anchors[] = "anchors";
static char teleop_msgs__msg__TeleopMsg__FIELD_NAME__joint_cmd[] = "joint_cmd";

static rosidl_runtime_c__type_description__Field teleop_msgs__msg__TeleopMsg__FIELDS[] = {
  {
    {teleop_msgs__msg__TeleopMsg__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopMsg__FIELD_NAME__world, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopMsg__FIELD_NAME__anchors, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {teleop_msgs__msg__KeyPoint__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopMsg__FIELD_NAME__joint_cmd, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {controller_msgs__msg__JointCmd__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription teleop_msgs__msg__TeleopMsg__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {teleop_msgs__msg__KeyPoint__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
teleop_msgs__msg__TeleopMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {teleop_msgs__msg__TeleopMsg__TYPE_NAME, 25, 25},
      {teleop_msgs__msg__TeleopMsg__FIELDS, 4, 4},
    },
    {teleop_msgs__msg__TeleopMsg__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
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
    assert(0 == memcmp(&teleop_msgs__msg__KeyPoint__EXPECTED_HASH, teleop_msgs__msg__KeyPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = teleop_msgs__msg__KeyPoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "geometry_msgs/Pose world\n"
  "\n"
  "teleop_msgs/KeyPoint[] anchors\n"
  "\n"
  "controller_msgs/JointCmd joint_cmd\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
teleop_msgs__msg__TeleopMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {teleop_msgs__msg__TeleopMsg__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 118, 118},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
teleop_msgs__msg__TeleopMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *teleop_msgs__msg__TeleopMsg__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *controller_msgs__msg__JointCmd__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[7] = *teleop_msgs__msg__KeyPoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
