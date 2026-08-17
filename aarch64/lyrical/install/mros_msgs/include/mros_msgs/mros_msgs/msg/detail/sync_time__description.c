// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mros_msgs:msg/SyncTime.idl
// generated code does not contain a copyright notice

#include "mros_msgs/msg/detail/sync_time__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mros_msgs
const rosidl_type_hash_t *
mros_msgs__msg__SyncTime__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0b, 0xf4, 0x68, 0x03, 0x59, 0x5e, 0x4a, 0xe6,
      0xec, 0x19, 0x02, 0x71, 0x52, 0xca, 0xb2, 0x83,
      0xcf, 0x30, 0x8e, 0x4c, 0xf0, 0x87, 0x32, 0x70,
      0x70, 0x56, 0x29, 0xd0, 0x93, 0xcf, 0x2d, 0x13,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char mros_msgs__msg__SyncTime__TYPE_NAME[] = "mros_msgs/msg/SyncTime";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char mros_msgs__msg__SyncTime__FIELD_NAME__tick[] = "tick";
static char mros_msgs__msg__SyncTime__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field mros_msgs__msg__SyncTime__FIELDS[] = {
  {
    {mros_msgs__msg__SyncTime__FIELD_NAME__tick, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__SyncTime__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mros_msgs__msg__SyncTime__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mros_msgs__msg__SyncTime__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mros_msgs__msg__SyncTime__TYPE_NAME, 22, 22},
      {mros_msgs__msg__SyncTime__FIELDS, 2, 2},
    },
    {mros_msgs__msg__SyncTime__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 tick # milliseconds\n"
  "builtin_interfaces/Time data   # dds time";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mros_msgs__msg__SyncTime__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mros_msgs__msg__SyncTime__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 69, 69},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mros_msgs__msg__SyncTime__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mros_msgs__msg__SyncTime__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
