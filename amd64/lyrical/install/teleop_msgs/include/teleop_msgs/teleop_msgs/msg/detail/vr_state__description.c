// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from teleop_msgs:msg/VRState.idl
// generated code does not contain a copyright notice

#include "teleop_msgs/msg/detail/vr_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_teleop_msgs
const rosidl_type_hash_t *
teleop_msgs__msg__VRState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6b, 0x01, 0xc8, 0x5b, 0x48, 0xc0, 0xbf, 0x76,
      0xaf, 0x3a, 0xfa, 0xff, 0x91, 0x0b, 0xf6, 0x8a,
      0x5a, 0x42, 0x15, 0xff, 0x41, 0x77, 0xbe, 0x97,
      0x72, 0x67, 0xba, 0x99, 0xe5, 0x07, 0xc5, 0x47,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char teleop_msgs__msg__VRState__TYPE_NAME[] = "teleop_msgs/msg/VRState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char teleop_msgs__msg__VRState__FIELD_NAME__header[] = "header";
static char teleop_msgs__msg__VRState__FIELD_NAME__eyePose[] = "eyePose";
static char teleop_msgs__msg__VRState__FIELD_NAME__l[] = "l";
static char teleop_msgs__msg__VRState__FIELD_NAME__r[] = "r";
static char teleop_msgs__msg__VRState__FIELD_NAME__leftJS[] = "leftJS";
static char teleop_msgs__msg__VRState__FIELD_NAME__leftTrig[] = "leftTrig";
static char teleop_msgs__msg__VRState__FIELD_NAME__leftGrip[] = "leftGrip";
static char teleop_msgs__msg__VRState__FIELD_NAME__LThU[] = "LThU";
static char teleop_msgs__msg__VRState__FIELD_NAME__LTr[] = "LTr";
static char teleop_msgs__msg__VRState__FIELD_NAME__LG[] = "LG";
static char teleop_msgs__msg__VRState__FIELD_NAME__X[] = "X";
static char teleop_msgs__msg__VRState__FIELD_NAME__Y[] = "Y";
static char teleop_msgs__msg__VRState__FIELD_NAME__rightJS[] = "rightJS";
static char teleop_msgs__msg__VRState__FIELD_NAME__rightTrig[] = "rightTrig";
static char teleop_msgs__msg__VRState__FIELD_NAME__rightGrip[] = "rightGrip";
static char teleop_msgs__msg__VRState__FIELD_NAME__RThU[] = "RThU";
static char teleop_msgs__msg__VRState__FIELD_NAME__RTr[] = "RTr";
static char teleop_msgs__msg__VRState__FIELD_NAME__RG[] = "RG";
static char teleop_msgs__msg__VRState__FIELD_NAME__A[] = "A";
static char teleop_msgs__msg__VRState__FIELD_NAME__B[] = "B";

static rosidl_runtime_c__type_description__Field teleop_msgs__msg__VRState__FIELDS[] = {
  {
    {teleop_msgs__msg__VRState__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__VRState__FIELD_NAME__eyePose, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      16,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__VRState__FIELD_NAME__l, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      16,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__VRState__FIELD_NAME__r, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      16,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__VRState__FIELD_NAME__leftJS, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__VRState__FIELD_NAME__leftTrig, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__VRState__FIELD_NAME__leftGrip, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__VRState__FIELD_NAME__LThU, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__VRState__FIELD_NAME__LTr, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__VRState__FIELD_NAME__LG, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__VRState__FIELD_NAME__X, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__VRState__FIELD_NAME__Y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__VRState__FIELD_NAME__rightJS, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__VRState__FIELD_NAME__rightTrig, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__VRState__FIELD_NAME__rightGrip, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__VRState__FIELD_NAME__RThU, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__VRState__FIELD_NAME__RTr, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__VRState__FIELD_NAME__RG, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__VRState__FIELD_NAME__A, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {teleop_msgs__msg__VRState__FIELD_NAME__B, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription teleop_msgs__msg__VRState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
teleop_msgs__msg__VRState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {teleop_msgs__msg__VRState__TYPE_NAME, 23, 23},
      {teleop_msgs__msg__VRState__FIELDS, 20, 20},
    },
    {teleop_msgs__msg__VRState__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "float32[16] eyePose  # \\xe7\\x9c\\xbc\\xe9\\x95\\x9c\\xe4\\xbd\\x8d\\xe7\\xbd\\xae\\xe5\\xa7\\xbf\\xe6\\x80\\x81\\xe7\\x9f\\xa9\\xe9\\x98\\xb5 4x4\n"
  "float32[16] l   # \\xe5\\xb7\\xa6\\xe6\\x89\\x8b\\xe6\\x9f\\x84\\xe5\\xa7\\xbf\\xe6\\x80\\x81\\xe7\\x9f\\xa9\\xe9\\x98\\xb5 4x4\n"
  "float32[16] r   # \\xe5\\x8f\\xb3\\xe6\\x89\\x8b\\xe6\\x9f\\x84\\xe5\\xa7\\xbf\\xe6\\x80\\x81\\xe7\\x9f\\xa9\\xe9\\x98\\xb5 4x4\n"
  "\n"
  "float32[2] leftJS # \\xe5\\xb7\\xa6\\xe6\\x91\\x87\\xe6\\x9d\\x86\n"
  "float32 leftTrig  # \\xe5\\xb7\\xa6\\xe6\\x89\\xb3\\xe6\\x9c\\xba\n"
  "float32 leftGrip  # \\xe5\\xb7\\xa6 Grip \\xe9\\x94\\xae\n"
  "bool LThU  # \\xe5\\xb7\\xa6\\xe6\\x8b\\x87\\xe6\\x8c\\x87\\xef\\xbc\\x88\\xe5\\xb8\\x83\\xe5\\xb0\\x94\\xe5\\x80\\xbc\\xef\\xbc\\x89\n"
  "bool LTr   # \\xe5\\xb7\\xa6\\xe6\\x89\\xb3\\xe6\\x9c\\xba\\xef\\xbc\\x88\\xe5\\xb8\\x83\\xe5\\xb0\\x94\\xe5\\x80\\xbc\\xef\\xbc\\x89\n"
  "bool LG    # \\xe5\\xb7\\xa6 Grip \\xe9\\x94\\xae\\xef\\xbc\\x88\\xe5\\xb8\\x83\\xe5\\xb0\\x94\\xe5\\x80\\xbc\\xef\\xbc\\x89\n"
  "bool X     # X \\xe9\\x94\\xae\n"
  "bool Y     # Y \\xe9\\x94\\xae\n"
  "\n"
  "float32[2] rightJS  # \\xe5\\x8f\\xb3\\xe6\\x91\\x87\\xe6\\x9d\\x86\n"
  "float32 rightTrig   # \\xe5\\x8f\\xb3\\xe6\\x89\\xb3\\xe6\\x9c\\xba\n"
  "float32 rightGrip   # \\xe5\\x8f\\xb3 Grip \\xe9\\x94\\xae\n"
  "bool RThU  # \\xe5\\x8f\\xb3\\xe6\\x8b\\x87\\xe6\\x8c\\x87\\xef\\xbc\\x88\\xe5\\xb8\\x83\\xe5\\xb0\\x94\\xe5\\x80\\xbc\\xef\\xbc\\x89\n"
  "bool RTr   # \\xe5\\x8f\\xb3\\xe6\\x89\\xb3\\xe6\\x9c\\xba\\xef\\xbc\\x88\\xe5\\xb8\\x83\\xe5\\xb0\\x94\\xe5\\x80\\xbc\\xef\\xbc\\x89\n"
  "bool RG    # \\xe5\\x8f\\xb3 Grip \\xe9\\x94\\xae\\xef\\xbc\\x88\\xe5\\xb8\\x83\\xe5\\xb0\\x94\\xe5\\x80\\xbc\\xef\\xbc\\x89\n"
  "bool A     # A \\xe9\\x94\\xae\n"
  "bool B     # B \\xe9\\x94\\xae";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
teleop_msgs__msg__VRState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {teleop_msgs__msg__VRState__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 491, 491},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
teleop_msgs__msg__VRState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *teleop_msgs__msg__VRState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
