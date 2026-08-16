// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from upper_body:srv/arm_move.idl
// generated code does not contain a copyright notice

#include "upper_body/srv/detail/arm_move__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_upper_body
const rosidl_type_hash_t *
upper_body__srv__arm_move__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x95, 0x1b, 0xd7, 0x98, 0xb8, 0x35, 0x75, 0xd8,
      0x34, 0xa7, 0x34, 0x5e, 0xc7, 0x4e, 0x6c, 0x05,
      0x99, 0x26, 0x84, 0x38, 0xe0, 0x6c, 0x96, 0xf3,
      0x83, 0xd7, 0x57, 0x7b, 0x46, 0xf4, 0x59, 0xfc,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_upper_body
const rosidl_type_hash_t *
upper_body__srv__arm_move_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x56, 0x7f, 0x5a, 0x72, 0x40, 0x69, 0x01, 0x37,
      0xf0, 0x7e, 0xac, 0xa4, 0x5c, 0xeb, 0x9e, 0xbd,
      0x47, 0xf3, 0x35, 0x95, 0x6b, 0x03, 0x5b, 0x43,
      0x08, 0x41, 0x3d, 0xe4, 0xa1, 0xaa, 0x24, 0xb4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_upper_body
const rosidl_type_hash_t *
upper_body__srv__arm_move_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x80, 0xa9, 0x9e, 0xe1, 0xef, 0x9b, 0xbc, 0x0a,
      0x57, 0x09, 0xff, 0x08, 0x2d, 0x29, 0xda, 0x30,
      0xa0, 0x16, 0xe4, 0xa1, 0x08, 0x25, 0xfc, 0x31,
      0x1b, 0x60, 0x69, 0x43, 0x99, 0x9e, 0x2a, 0x4c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_upper_body
const rosidl_type_hash_t *
upper_body__srv__arm_move_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb1, 0xea, 0x16, 0x4f, 0x7e, 0xcf, 0x1f, 0x4f,
      0x7f, 0xdd, 0xa9, 0x35, 0x22, 0x1e, 0x06, 0x41,
      0xb2, 0x24, 0x0a, 0x22, 0xe7, 0x6c, 0xa1, 0xc8,
      0xfc, 0x47, 0x4c, 0xff, 0xd2, 0x49, 0x3c, 0x2c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

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

static char upper_body__srv__arm_move__TYPE_NAME[] = "upper_body/srv/arm_move";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char upper_body__srv__arm_move_Event__TYPE_NAME[] = "upper_body/srv/arm_move_Event";
static char upper_body__srv__arm_move_Request__TYPE_NAME[] = "upper_body/srv/arm_move_Request";
static char upper_body__srv__arm_move_Response__TYPE_NAME[] = "upper_body/srv/arm_move_Response";

// Define type names, field names, and default values
static char upper_body__srv__arm_move__FIELD_NAME__request_message[] = "request_message";
static char upper_body__srv__arm_move__FIELD_NAME__response_message[] = "response_message";
static char upper_body__srv__arm_move__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field upper_body__srv__arm_move__FIELDS[] = {
  {
    {upper_body__srv__arm_move__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {upper_body__srv__arm_move_Request__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__arm_move__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {upper_body__srv__arm_move_Response__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__arm_move__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {upper_body__srv__arm_move_Event__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription upper_body__srv__arm_move__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__arm_move_Event__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__arm_move_Request__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__arm_move_Response__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
upper_body__srv__arm_move__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {upper_body__srv__arm_move__TYPE_NAME, 23, 23},
      {upper_body__srv__arm_move__FIELDS, 3, 3},
    },
    {upper_body__srv__arm_move__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = upper_body__srv__arm_move_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = upper_body__srv__arm_move_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = upper_body__srv__arm_move_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char upper_body__srv__arm_move_Request__FIELD_NAME__move_type[] = "move_type";
static char upper_body__srv__arm_move_Request__FIELD_NAME__left_arm_joints[] = "left_arm_joints";
static char upper_body__srv__arm_move_Request__FIELD_NAME__right_arm_joints[] = "right_arm_joints";
static char upper_body__srv__arm_move_Request__FIELD_NAME__left_arm_pos[] = "left_arm_pos";
static char upper_body__srv__arm_move_Request__FIELD_NAME__right_arm_pos[] = "right_arm_pos";
static char upper_body__srv__arm_move_Request__FIELD_NAME__speed[] = "speed";

static rosidl_runtime_c__type_description__Field upper_body__srv__arm_move_Request__FIELDS[] = {
  {
    {upper_body__srv__arm_move_Request__FIELD_NAME__move_type, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__arm_move_Request__FIELD_NAME__left_arm_joints, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__arm_move_Request__FIELD_NAME__right_arm_joints, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__arm_move_Request__FIELD_NAME__left_arm_pos, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      7,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__arm_move_Request__FIELD_NAME__right_arm_pos, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      7,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__arm_move_Request__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
upper_body__srv__arm_move_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {upper_body__srv__arm_move_Request__TYPE_NAME, 31, 31},
      {upper_body__srv__arm_move_Request__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char upper_body__srv__arm_move_Response__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field upper_body__srv__arm_move_Response__FIELDS[] = {
  {
    {upper_body__srv__arm_move_Response__FIELD_NAME__status, 6, 6},
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
upper_body__srv__arm_move_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {upper_body__srv__arm_move_Response__TYPE_NAME, 32, 32},
      {upper_body__srv__arm_move_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char upper_body__srv__arm_move_Event__FIELD_NAME__info[] = "info";
static char upper_body__srv__arm_move_Event__FIELD_NAME__request[] = "request";
static char upper_body__srv__arm_move_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field upper_body__srv__arm_move_Event__FIELDS[] = {
  {
    {upper_body__srv__arm_move_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__arm_move_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {upper_body__srv__arm_move_Request__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__arm_move_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {upper_body__srv__arm_move_Response__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription upper_body__srv__arm_move_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__arm_move_Request__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {upper_body__srv__arm_move_Response__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
upper_body__srv__arm_move_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {upper_body__srv__arm_move_Event__TYPE_NAME, 29, 29},
      {upper_body__srv__arm_move_Event__FIELDS, 3, 3},
    },
    {upper_body__srv__arm_move_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = upper_body__srv__arm_move_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = upper_body__srv__arm_move_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# motion type\n"
  "string move_type # moveJ\\\\ moveL\\\\ moveP\\\\ moveWaistArm\n"
  "# moveJ\n"
  "float32[] left_arm_joints # unit: rad\n"
  "float32[] right_arm_joints # unit: rad\n"
  "# moveL\\\\ moveP\n"
  "float32[7] left_arm_pos # [px py pz Qx Qy Qz Qw] unit: m\n"
  "float32[7] right_arm_pos # [px py pz Qx Qy Qz Qw] unit: m\n"
  "# speed\n"
  "float32 speed # unit: rad/s or m/s\n"
  "---\n"
  "int32 status";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
upper_body__srv__arm_move__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {upper_body__srv__arm_move__TYPE_NAME, 23, 23},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 342, 342},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
upper_body__srv__arm_move_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {upper_body__srv__arm_move_Request__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
upper_body__srv__arm_move_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {upper_body__srv__arm_move_Response__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
upper_body__srv__arm_move_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {upper_body__srv__arm_move_Event__TYPE_NAME, 29, 29},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
upper_body__srv__arm_move__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *upper_body__srv__arm_move__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *upper_body__srv__arm_move_Event__get_individual_type_description_source(NULL);
    sources[4] = *upper_body__srv__arm_move_Request__get_individual_type_description_source(NULL);
    sources[5] = *upper_body__srv__arm_move_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
upper_body__srv__arm_move_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *upper_body__srv__arm_move_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
upper_body__srv__arm_move_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *upper_body__srv__arm_move_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
upper_body__srv__arm_move_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *upper_body__srv__arm_move_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *upper_body__srv__arm_move_Request__get_individual_type_description_source(NULL);
    sources[4] = *upper_body__srv__arm_move_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
