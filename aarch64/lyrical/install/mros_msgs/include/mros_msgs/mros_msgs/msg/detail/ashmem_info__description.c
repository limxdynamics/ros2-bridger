// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mros_msgs:msg/AshmemInfo.idl
// generated code does not contain a copyright notice

#include "mros_msgs/msg/detail/ashmem_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mros_msgs
const rosidl_type_hash_t *
mros_msgs__msg__AshmemInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x56, 0xea, 0x86, 0x15, 0xec, 0x55, 0x75, 0x47,
      0xd2, 0x68, 0xc2, 0x3e, 0xfd, 0xdd, 0x92, 0x29,
      0x83, 0xce, 0x9c, 0xb7, 0x89, 0x4f, 0x61, 0x4b,
      0x57, 0x79, 0x49, 0xd1, 0x5b, 0x22, 0x84, 0xa9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mros_msgs__msg__AshmemInfo__TYPE_NAME[] = "mros_msgs/msg/AshmemInfo";

// Define type names, field names, and default values
static char mros_msgs__msg__AshmemInfo__FIELD_NAME__topic_id[] = "topic_id";
static char mros_msgs__msg__AshmemInfo__FIELD_NAME__topic_name[] = "topic_name";
static char mros_msgs__msg__AshmemInfo__FIELD_NAME__message_type[] = "message_type";
static char mros_msgs__msg__AshmemInfo__FIELD_NAME__message_md5sum[] = "message_md5sum";
static char mros_msgs__msg__AshmemInfo__FIELD_NAME__message_definition[] = "message_definition";
static char mros_msgs__msg__AshmemInfo__FIELD_NAME__shm_seed[] = "shm_seed";
static char mros_msgs__msg__AshmemInfo__FIELD_NAME__shm_size[] = "shm_size";
static char mros_msgs__msg__AshmemInfo__FIELD_NAME__msg_size[] = "msg_size";
static char mros_msgs__msg__AshmemInfo__FIELD_NAME__identity[] = "identity";

static rosidl_runtime_c__type_description__Field mros_msgs__msg__AshmemInfo__FIELDS[] = {
  {
    {mros_msgs__msg__AshmemInfo__FIELD_NAME__topic_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__AshmemInfo__FIELD_NAME__topic_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__AshmemInfo__FIELD_NAME__message_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__AshmemInfo__FIELD_NAME__message_md5sum, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__AshmemInfo__FIELD_NAME__message_definition, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__AshmemInfo__FIELD_NAME__shm_seed, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__AshmemInfo__FIELD_NAME__shm_size, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__AshmemInfo__FIELD_NAME__msg_size, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mros_msgs__msg__AshmemInfo__FIELD_NAME__identity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mros_msgs__msg__AshmemInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mros_msgs__msg__AshmemInfo__TYPE_NAME, 24, 24},
      {mros_msgs__msg__AshmemInfo__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 topic_id\n"
  "string topic_name\n"
  "string message_type\n"
  "string message_md5sum\n"
  "string message_definition\n"
  "int32 shm_seed\n"
  "int32 shm_size\n"
  "int32 msg_size\n"
  "string[] identity\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mros_msgs__msg__AshmemInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mros_msgs__msg__AshmemInfo__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 166, 166},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mros_msgs__msg__AshmemInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mros_msgs__msg__AshmemInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
