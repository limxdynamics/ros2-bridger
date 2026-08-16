// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from teleop_msgs:msg/TeleopTarget.idl
// generated code does not contain a copyright notice

#include "teleop_msgs/msg/detail/teleop_target__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_teleop_msgs
const rosidl_type_hash_t *
teleop_msgs__msg__TeleopTarget__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x22, 0x12, 0x90, 0x4d, 0x8f, 0xd8, 0x64, 0x45,
      0xef, 0xfa, 0x83, 0xc0, 0x94, 0xd1, 0xc9, 0x43,
      0xe7, 0xe9, 0xb1, 0x98, 0x9f, 0x42, 0xb4, 0x60,
      0xdf, 0x6d, 0x7b, 0xb7, 0xa1, 0x27, 0xe5, 0xdb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
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
#endif

static char teleop_msgs__msg__TeleopTarget__TYPE_NAME[] = "teleop_msgs/msg/TeleopTarget";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";

// Define type names, field names, and default values
static char teleop_msgs__msg__TeleopTarget__FIELD_NAME__name[] = "name";
static char teleop_msgs__msg__TeleopTarget__FIELD_NAME__pose[] = "pose";
static char teleop_msgs__msg__TeleopTarget__FIELD_NAME__validity[] = "validity";
static char teleop_msgs__msg__TeleopTarget__FIELD_NAME__source_stamp[] = "source_stamp";

static rosidl_runtime_c__type_description__Field teleop_msgs__msg__TeleopTarget__FIELDS[] = {
  {
    {teleop_msgs__msg__TeleopTarget__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopTarget__FIELD_NAME__pose, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopTarget__FIELD_NAME__validity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__TeleopTarget__FIELD_NAME__source_stamp, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription teleop_msgs__msg__TeleopTarget__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
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
};

const rosidl_runtime_c__type_description__TypeDescription *
teleop_msgs__msg__TeleopTarget__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {teleop_msgs__msg__TeleopTarget__TYPE_NAME, 28, 28},
      {teleop_msgs__msg__TeleopTarget__FIELDS, 4, 4},
    },
    {teleop_msgs__msg__TeleopTarget__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe9\\x81\\xa5\\xe6\\x93\\x8d\\xe4\\xbd\\x9c\\xe4\\xb8\\xad\\xe7\\x9a\\x84\\xe5\\x8d\\x95\\xe4\\xb8\\xaa\\xe8\\xb7\\x9f\\xe8\\xb8\\xaa\\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xef\\xbc\\x88\\xe6\\x9c\\xab\\xe7\\xab\\xaf\\xe3\\x80\\x81\\xe5\\xa4\\xb4\\xe3\\x80\\x81\\xe8\\xba\\xaf\\xe5\\xb9\\xb2\\xe3\\x80\\x81\\xe8\\xb6\\xb3\\xe7\\xad\\x89\\xef\\xbc\\x89\\xe3\\x80\\x82\n"
  "# \\xe4\\xbd\\x9c\\xe4\\xb8\\xba TeleopIntentFrame.targets \\xe7\\x9a\\x84\\xe5\\x85\\x83\\xe7\\xb4\\xa0\\xe4\\xbd\\xbf\\xe7\\x94\\xa8\\xe3\\x80\\x82\n"
  "\n"
  "# \\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe5\\x90\\x8d\\xe3\\x80\\x82\\xe7\\xba\\xa6\\xe5\\xae\\x9a\\xe5\\x80\\xbc\\xef\\xbc\\x9aleft_hand / right_hand / head / torso / base /\n"
  "# left_foot / right_foot / left_wrist / right_wrist\\xe3\\x80\\x82\n"
  "# \\xe6\\x96\\xb0\\xe5\\xa2\\x9e\\xe8\\xb7\\x9f\\xe8\\xb8\\xaa\\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe5\\x8f\\xaa\\xe9\\x9c\\x80\\xe7\\xba\\xa6\\xe5\\xae\\x9a\\xe6\\x96\\xb0\\xe5\\x90\\x8d\\xe5\\xad\\x97\\xef\\xbc\\x8c\\xe4\\xb8\\x8d\\xe9\\x9c\\x80\\xe8\\xa6\\x81\\xe6\\x94\\xb9\\xe6\\x9c\\xac\\xe6\\xb6\\x88\\xe6\\x81\\xaf\\xe3\\x80\\x82\n"
  "string name\n"
  "\n"
  "# \\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe4\\xbd\\x8d\\xe5\\xa7\\xbf\\xe3\\x80\\x82\\xe5\\x8f\\x82\\xe8\\x80\\x83\\xe7\\xb3\\xbb\\xe7\\x94\\xb1 TeleopIntentFrame.reference_frame \\xe6\\x8c\\x87\\xe5\\xae\\x9a\\xe3\\x80\\x82\n"
  "geometry_msgs/Pose pose\n"
  "\n"
  "# \\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe5\\x8f\\xaf\\xe4\\xbf\\xa1\\xe5\\xba\\xa6\\xe3\\x80\\x82\\xe6\\x8e\\xa5\\xe6\\x94\\xb6\\xe6\\x96\\xb9\\xe6\\x8d\\xae\\xe6\\xad\\xa4\\xe5\\x86\\xb3\\xe5\\xae\\x9a\\xe8\\xb7\\x9f\\xe9\\x9a\\x8f\\xe3\\x80\\x81\\xe9\\x99\\x8d\\xe7\\xba\\xa7\\xe8\\xbf\\x98\\xe6\\x98\\xaf\\xe5\\xbf\\xbd\\xe7\\x95\\xa5\\xe3\\x80\\x82\n"
  "uint8 VALIDITY_INVALID=0       # \\xe9\\x9d\\x9e\\xe6\\xb3\\x95\\xef\\xbc\\x8c\\xe6\\x8e\\xa5\\xe6\\x94\\xb6\\xe6\\x96\\xb9\\xe5\\xbf\\x85\\xe9\\xa1\\xbb\\xe5\\xbf\\xbd\\xe7\\x95\\xa5\n"
  "uint8 VALIDITY_VALID=1         # \\xe6\\x96\\xb0\\xe9\\xb2\\x9c\\xe5\\x8f\\xaf\\xe7\\x94\\xa8\n"
  "uint8 VALIDITY_STALE=2         # \\xe6\\x9c\\x89\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe4\\xbd\\x86\\xe5\\xb7\\xb2\\xe8\\xb6\\x85\\xe6\\x9c\\x9f\n"
  "uint8 VALIDITY_EXTRAPOLATED=3  # \\xe7\\x94\\xb1\\xe5\\xa4\\x96\\xe6\\x8e\\xa8\\xe5\\xbe\\x97\\xe5\\x88\\xb0\\xef\\xbc\\x8c\\xe9\\x9d\\x9e\\xe5\\xae\\x9e\\xe6\\xb5\\x8b\n"
  "uint8 validity\n"
  "\n"
  "# \\xe8\\xaf\\xa5\\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe7\\x9a\\x84\\xe9\\x87\\x87\\xe9\\x9b\\x86\\xe6\\x97\\xb6\\xe5\\x88\\xbb\\xe3\\x80\\x82\\xe4\\xb8\\x8e\\xe5\\xb8\\xa7\\xe7\\xbb\\x84\\xe8\\xa3\\x85\\xe6\\x97\\xb6\\xe5\\x88\\xbb\\xef\\xbc\\x88header.stamp\\xef\\xbc\\x89\\xe5\\x8f\\xaf\\xe8\\x83\\xbd\\xe4\\xb8\\x8d\\xe5\\x90\\x8c\\xef\\xbc\\x8c\n"
  "# \\xe6\\x8e\\xa5\\xe6\\x94\\xb6\\xe6\\x96\\xb9\\xe6\\x8d\\xae\\xe6\\xad\\xa4\\xe5\\x88\\xa4\\xe6\\x96\\xad\\xe5\\x8d\\x95\\xe4\\xb8\\xaa\\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe7\\x9a\\x84\\xe6\\x96\\xb0\\xe9\\xb2\\x9c\\xe5\\xba\\xa6\\xe3\\x80\\x82\n"
  "builtin_interfaces/Time source_stamp";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
teleop_msgs__msg__TeleopTarget__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {teleop_msgs__msg__TeleopTarget__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 592, 592},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
teleop_msgs__msg__TeleopTarget__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *teleop_msgs__msg__TeleopTarget__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
