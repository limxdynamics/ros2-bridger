// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from std_srvs:srv/SetFloat32Array.idl
// generated code does not contain a copyright notice

#include "std_srvs/srv/detail/set_float32_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_std_srvs
const rosidl_type_hash_t *
std_srvs__srv__SetFloat32Array__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x32, 0xd6, 0x91, 0x58, 0x78, 0xa8, 0x74, 0xf9,
      0xba, 0x45, 0xa1, 0xe8, 0xcf, 0x48, 0xf5, 0xc9,
      0xde, 0x24, 0xc5, 0xe3, 0x67, 0x5a, 0x1d, 0x66,
      0xa0, 0x8f, 0x85, 0xa4, 0x27, 0xad, 0x1c, 0x0b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_std_srvs
const rosidl_type_hash_t *
std_srvs__srv__SetFloat32Array_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5a, 0x79, 0x97, 0xb1, 0x0a, 0xeb, 0x8a, 0x1e,
      0xda, 0x74, 0x14, 0x24, 0xfa, 0xb8, 0x8f, 0xa1,
      0xdc, 0x83, 0xde, 0xcc, 0x77, 0xf5, 0x73, 0x02,
      0xcb, 0x2e, 0xe5, 0xfe, 0x52, 0x74, 0x85, 0xb5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_std_srvs
const rosidl_type_hash_t *
std_srvs__srv__SetFloat32Array_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5c, 0x4e, 0x14, 0xa5, 0x89, 0x5e, 0x56, 0xf8,
      0xf9, 0x4b, 0xe8, 0xe4, 0x88, 0x46, 0xb8, 0x74,
      0xc6, 0x1c, 0x33, 0x33, 0xc8, 0x7b, 0x89, 0x59,
      0xa5, 0xfc, 0x7f, 0x74, 0xf5, 0xab, 0xae, 0x12,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_std_srvs
const rosidl_type_hash_t *
std_srvs__srv__SetFloat32Array_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc2, 0xe2, 0x94, 0x2c, 0x98, 0x38, 0x37, 0x8b,
      0xbe, 0x3a, 0x5e, 0xe7, 0x5b, 0x1c, 0x4f, 0xb1,
      0xf5, 0x68, 0x49, 0x51, 0xc3, 0xea, 0xdf, 0xa6,
      0x6a, 0xd6, 0x15, 0x5d, 0x04, 0x15, 0x16, 0xdf,
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

static char std_srvs__srv__SetFloat32Array__TYPE_NAME[] = "std_srvs/srv/SetFloat32Array";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_srvs__srv__SetFloat32Array_Event__TYPE_NAME[] = "std_srvs/srv/SetFloat32Array_Event";
static char std_srvs__srv__SetFloat32Array_Request__TYPE_NAME[] = "std_srvs/srv/SetFloat32Array_Request";
static char std_srvs__srv__SetFloat32Array_Response__TYPE_NAME[] = "std_srvs/srv/SetFloat32Array_Response";

// Define type names, field names, and default values
static char std_srvs__srv__SetFloat32Array__FIELD_NAME__request_message[] = "request_message";
static char std_srvs__srv__SetFloat32Array__FIELD_NAME__response_message[] = "response_message";
static char std_srvs__srv__SetFloat32Array__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field std_srvs__srv__SetFloat32Array__FIELDS[] = {
  {
    {std_srvs__srv__SetFloat32Array__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_srvs__srv__SetFloat32Array_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32Array__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_srvs__srv__SetFloat32Array_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32Array__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_srvs__srv__SetFloat32Array_Event__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription std_srvs__srv__SetFloat32Array__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32Array_Event__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32Array_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32Array_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
std_srvs__srv__SetFloat32Array__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {std_srvs__srv__SetFloat32Array__TYPE_NAME, 28, 28},
      {std_srvs__srv__SetFloat32Array__FIELDS, 3, 3},
    },
    {std_srvs__srv__SetFloat32Array__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = std_srvs__srv__SetFloat32Array_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = std_srvs__srv__SetFloat32Array_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = std_srvs__srv__SetFloat32Array_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char std_srvs__srv__SetFloat32Array_Request__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field std_srvs__srv__SetFloat32Array_Request__FIELDS[] = {
  {
    {std_srvs__srv__SetFloat32Array_Request__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
std_srvs__srv__SetFloat32Array_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {std_srvs__srv__SetFloat32Array_Request__TYPE_NAME, 36, 36},
      {std_srvs__srv__SetFloat32Array_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char std_srvs__srv__SetFloat32Array_Response__FIELD_NAME__success[] = "success";
static char std_srvs__srv__SetFloat32Array_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field std_srvs__srv__SetFloat32Array_Response__FIELDS[] = {
  {
    {std_srvs__srv__SetFloat32Array_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32Array_Response__FIELD_NAME__message, 7, 7},
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
std_srvs__srv__SetFloat32Array_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {std_srvs__srv__SetFloat32Array_Response__TYPE_NAME, 37, 37},
      {std_srvs__srv__SetFloat32Array_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char std_srvs__srv__SetFloat32Array_Event__FIELD_NAME__info[] = "info";
static char std_srvs__srv__SetFloat32Array_Event__FIELD_NAME__request[] = "request";
static char std_srvs__srv__SetFloat32Array_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field std_srvs__srv__SetFloat32Array_Event__FIELDS[] = {
  {
    {std_srvs__srv__SetFloat32Array_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32Array_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {std_srvs__srv__SetFloat32Array_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32Array_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {std_srvs__srv__SetFloat32Array_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription std_srvs__srv__SetFloat32Array_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32Array_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32Array_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
std_srvs__srv__SetFloat32Array_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {std_srvs__srv__SetFloat32Array_Event__TYPE_NAME, 34, 34},
      {std_srvs__srv__SetFloat32Array_Event__FIELDS, 3, 3},
    },
    {std_srvs__srv__SetFloat32Array_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = std_srvs__srv__SetFloat32Array_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = std_srvs__srv__SetFloat32Array_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[]  data     # array of data\n"
  "---\n"
  "bool success   # indicate successful run of triggered service\n"
  "string message # informational, e.g. for error messages";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
std_srvs__srv__SetFloat32Array__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {std_srvs__srv__SetFloat32Array__TYPE_NAME, 28, 28},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 157, 157},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
std_srvs__srv__SetFloat32Array_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {std_srvs__srv__SetFloat32Array_Request__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
std_srvs__srv__SetFloat32Array_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {std_srvs__srv__SetFloat32Array_Response__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
std_srvs__srv__SetFloat32Array_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {std_srvs__srv__SetFloat32Array_Event__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
std_srvs__srv__SetFloat32Array__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *std_srvs__srv__SetFloat32Array__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *std_srvs__srv__SetFloat32Array_Event__get_individual_type_description_source(NULL);
    sources[4] = *std_srvs__srv__SetFloat32Array_Request__get_individual_type_description_source(NULL);
    sources[5] = *std_srvs__srv__SetFloat32Array_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
std_srvs__srv__SetFloat32Array_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *std_srvs__srv__SetFloat32Array_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
std_srvs__srv__SetFloat32Array_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *std_srvs__srv__SetFloat32Array_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
std_srvs__srv__SetFloat32Array_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *std_srvs__srv__SetFloat32Array_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *std_srvs__srv__SetFloat32Array_Request__get_individual_type_description_source(NULL);
    sources[4] = *std_srvs__srv__SetFloat32Array_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
