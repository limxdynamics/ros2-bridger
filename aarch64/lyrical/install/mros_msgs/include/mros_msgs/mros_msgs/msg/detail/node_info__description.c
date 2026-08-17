// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mros_msgs:msg/NodeInfo.idl
// generated code does not contain a copyright notice

#include "mros_msgs/msg/detail/node_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mros_msgs
const rosidl_type_hash_t *
mros_msgs__msg__NodeInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6f, 0xdc, 0xfd, 0x3f, 0xf9, 0x9f, 0x8d, 0xd4,
      0x0b, 0x4e, 0x29, 0xc6, 0xcf, 0x34, 0xa9, 0xe5,
      0x31, 0x98, 0xf2, 0x01, 0x5c, 0x51, 0xb6, 0xb4,
      0x0b, 0x06, 0x16, 0x6c, 0xb6, 0x99, 0x93, 0x80,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mros_msgs__msg__NodeInfo__TYPE_NAME[] = "mros_msgs/msg/NodeInfo";

// Define type names, field names, and default values
static char mros_msgs__msg__NodeInfo__FIELD_NAME__node_name[] = "node_name";

static rosidl_runtime_c__type_description__Field mros_msgs__msg__NodeInfo__FIELDS[] = {
  {
    {mros_msgs__msg__NodeInfo__FIELD_NAME__node_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mros_msgs__msg__NodeInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mros_msgs__msg__NodeInfo__TYPE_NAME, 22, 22},
      {mros_msgs__msg__NodeInfo__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string node_name";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mros_msgs__msg__NodeInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mros_msgs__msg__NodeInfo__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 17, 17},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mros_msgs__msg__NodeInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mros_msgs__msg__NodeInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
