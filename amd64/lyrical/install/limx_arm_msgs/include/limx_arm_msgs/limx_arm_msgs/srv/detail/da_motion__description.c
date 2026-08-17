// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from limx_arm_msgs:srv/DA_motion.idl
// generated code does not contain a copyright notice

#include "limx_arm_msgs/srv/detail/da_motion__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__srv__DA_motion__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0x83, 0x91, 0xd5, 0xa7, 0x7c, 0x61, 0x5a,
      0x8f, 0x4f, 0xce, 0x80, 0x1b, 0x8f, 0x50, 0x11,
      0x6f, 0xaa, 0xf2, 0xf0, 0x16, 0x6c, 0x56, 0x7b,
      0xd8, 0x91, 0xf9, 0x9b, 0x05, 0x0f, 0xc8, 0xce,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__srv__DA_motion_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x02, 0xc4, 0xfa, 0xea, 0x00, 0xcf, 0x78, 0x58,
      0x11, 0x81, 0x8c, 0xe7, 0x7a, 0x05, 0xf1, 0x90,
      0x0a, 0xee, 0xd6, 0x72, 0x5b, 0x49, 0x70, 0xad,
      0xd8, 0x77, 0x4b, 0x68, 0xbd, 0xff, 0xe0, 0xe5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__srv__DA_motion_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x40, 0x41, 0xed, 0x7d, 0xd9, 0xeb, 0x16, 0xd0,
      0xc2, 0xaf, 0xcb, 0xd7, 0xf9, 0x55, 0x9f, 0x23,
      0x26, 0xd5, 0xd1, 0xfa, 0x83, 0xda, 0x6b, 0xb9,
      0x98, 0x2e, 0x80, 0xd4, 0x8e, 0xba, 0xf0, 0x84,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_limx_arm_msgs
const rosidl_type_hash_t *
limx_arm_msgs__srv__DA_motion_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcc, 0xe0, 0xd0, 0x7c, 0xfe, 0x97, 0x84, 0x6e,
      0x28, 0xf8, 0x03, 0x3e, 0x1b, 0x13, 0x57, 0x19,
      0x2a, 0x8d, 0xd4, 0xbe, 0x9b, 0x79, 0xbf, 0x86,
      0x0a, 0x4e, 0x47, 0x37, 0x2c, 0xe3, 0xf9, 0x78,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char limx_arm_msgs__srv__DA_motion__TYPE_NAME[] = "limx_arm_msgs/srv/DA_motion";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char limx_arm_msgs__srv__DA_motion_Event__TYPE_NAME[] = "limx_arm_msgs/srv/DA_motion_Event";
static char limx_arm_msgs__srv__DA_motion_Request__TYPE_NAME[] = "limx_arm_msgs/srv/DA_motion_Request";
static char limx_arm_msgs__srv__DA_motion_Response__TYPE_NAME[] = "limx_arm_msgs/srv/DA_motion_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char limx_arm_msgs__srv__DA_motion__FIELD_NAME__request_message[] = "request_message";
static char limx_arm_msgs__srv__DA_motion__FIELD_NAME__response_message[] = "response_message";
static char limx_arm_msgs__srv__DA_motion__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field limx_arm_msgs__srv__DA_motion__FIELDS[] = {
  {
    {limx_arm_msgs__srv__DA_motion__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {limx_arm_msgs__srv__DA_motion_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__DA_motion__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {limx_arm_msgs__srv__DA_motion_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__DA_motion__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {limx_arm_msgs__srv__DA_motion_Event__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription limx_arm_msgs__srv__DA_motion__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__DA_motion_Event__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__DA_motion_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__DA_motion_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
limx_arm_msgs__srv__DA_motion__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {limx_arm_msgs__srv__DA_motion__TYPE_NAME, 27, 27},
      {limx_arm_msgs__srv__DA_motion__FIELDS, 3, 3},
    },
    {limx_arm_msgs__srv__DA_motion__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = limx_arm_msgs__srv__DA_motion_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = limx_arm_msgs__srv__DA_motion_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = limx_arm_msgs__srv__DA_motion_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char limx_arm_msgs__srv__DA_motion_Request__FIELD_NAME__functionName[] = "functionName";
static char limx_arm_msgs__srv__DA_motion_Request__FIELD_NAME__left_arm_pos[] = "left_arm_pos";
static char limx_arm_msgs__srv__DA_motion_Request__FIELD_NAME__right_arm_pos[] = "right_arm_pos";
static char limx_arm_msgs__srv__DA_motion_Request__FIELD_NAME__speed[] = "speed";
static char limx_arm_msgs__srv__DA_motion_Request__FIELD_NAME__left_arm_joints[] = "left_arm_joints";
static char limx_arm_msgs__srv__DA_motion_Request__FIELD_NAME__right_arm_joints[] = "right_arm_joints";
static char limx_arm_msgs__srv__DA_motion_Request__FIELD_NAME__headPos[] = "headPos";

static rosidl_runtime_c__type_description__Field limx_arm_msgs__srv__DA_motion_Request__FIELDS[] = {
  {
    {limx_arm_msgs__srv__DA_motion_Request__FIELD_NAME__functionName, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__DA_motion_Request__FIELD_NAME__left_arm_pos, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      7,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__DA_motion_Request__FIELD_NAME__right_arm_pos, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      7,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__DA_motion_Request__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__DA_motion_Request__FIELD_NAME__left_arm_joints, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      7,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__DA_motion_Request__FIELD_NAME__right_arm_joints, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      7,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__DA_motion_Request__FIELD_NAME__headPos, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
limx_arm_msgs__srv__DA_motion_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {limx_arm_msgs__srv__DA_motion_Request__TYPE_NAME, 35, 35},
      {limx_arm_msgs__srv__DA_motion_Request__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char limx_arm_msgs__srv__DA_motion_Response__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field limx_arm_msgs__srv__DA_motion_Response__FIELDS[] = {
  {
    {limx_arm_msgs__srv__DA_motion_Response__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
limx_arm_msgs__srv__DA_motion_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {limx_arm_msgs__srv__DA_motion_Response__TYPE_NAME, 36, 36},
      {limx_arm_msgs__srv__DA_motion_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char limx_arm_msgs__srv__DA_motion_Event__FIELD_NAME__info[] = "info";
static char limx_arm_msgs__srv__DA_motion_Event__FIELD_NAME__request[] = "request";
static char limx_arm_msgs__srv__DA_motion_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field limx_arm_msgs__srv__DA_motion_Event__FIELDS[] = {
  {
    {limx_arm_msgs__srv__DA_motion_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__DA_motion_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {limx_arm_msgs__srv__DA_motion_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__DA_motion_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {limx_arm_msgs__srv__DA_motion_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription limx_arm_msgs__srv__DA_motion_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__DA_motion_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {limx_arm_msgs__srv__DA_motion_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
limx_arm_msgs__srv__DA_motion_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {limx_arm_msgs__srv__DA_motion_Event__TYPE_NAME, 33, 33},
      {limx_arm_msgs__srv__DA_motion_Event__FIELDS, 3, 3},
    },
    {limx_arm_msgs__srv__DA_motion_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = limx_arm_msgs__srv__DA_motion_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = limx_arm_msgs__srv__DA_motion_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string functionName\n"
  "float32[7] left_arm_pos # [px py pz Qx Qy Qz Qw]\n"
  "float32[7] right_arm_pos # [px py pz Qx Qy Qz Qw]\n"
  "float32 speed \n"
  "float32[7] left_arm_joints\n"
  "float32[7] right_arm_joints  \n"
  "float32[2] headPos\n"
  "---\n"
  "int32 status";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__srv__DA_motion__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {limx_arm_msgs__srv__DA_motion__TYPE_NAME, 27, 27},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 227, 227},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__srv__DA_motion_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {limx_arm_msgs__srv__DA_motion_Request__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__srv__DA_motion_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {limx_arm_msgs__srv__DA_motion_Response__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
limx_arm_msgs__srv__DA_motion_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {limx_arm_msgs__srv__DA_motion_Event__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__srv__DA_motion__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *limx_arm_msgs__srv__DA_motion__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *limx_arm_msgs__srv__DA_motion_Event__get_individual_type_description_source(NULL);
    sources[3] = *limx_arm_msgs__srv__DA_motion_Request__get_individual_type_description_source(NULL);
    sources[4] = *limx_arm_msgs__srv__DA_motion_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__srv__DA_motion_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *limx_arm_msgs__srv__DA_motion_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__srv__DA_motion_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *limx_arm_msgs__srv__DA_motion_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
limx_arm_msgs__srv__DA_motion_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *limx_arm_msgs__srv__DA_motion_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *limx_arm_msgs__srv__DA_motion_Request__get_individual_type_description_source(NULL);
    sources[3] = *limx_arm_msgs__srv__DA_motion_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
