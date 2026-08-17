// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from std_srvs:srv/SetFloat32WithTitle.idl
// generated code does not contain a copyright notice

#include "std_srvs/srv/detail/set_float32_with_title__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_std_srvs
const rosidl_type_hash_t *
std_srvs__srv__SetFloat32WithTitle__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe4, 0x6d, 0x89, 0x7e, 0xc2, 0xb2, 0xea, 0xb3,
      0x25, 0xee, 0x71, 0xa8, 0x93, 0x80, 0xb0, 0x9e,
      0x94, 0xc1, 0x95, 0x25, 0xe3, 0x99, 0x8f, 0xb8,
      0x13, 0x33, 0xfc, 0x26, 0xdc, 0x06, 0xe9, 0x72,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_std_srvs
const rosidl_type_hash_t *
std_srvs__srv__SetFloat32WithTitle_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa9, 0xd0, 0xf0, 0x7f, 0xb0, 0x2f, 0xd9, 0x52,
      0xc5, 0x93, 0x28, 0xf8, 0xef, 0xa5, 0x41, 0x07,
      0xde, 0xb3, 0x37, 0xd1, 0x8b, 0xe6, 0x64, 0x47,
      0x67, 0x8f, 0x4d, 0x08, 0xb3, 0x07, 0x8a, 0x8d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_std_srvs
const rosidl_type_hash_t *
std_srvs__srv__SetFloat32WithTitle_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb6, 0xcd, 0xe7, 0x26, 0x94, 0x86, 0xb9, 0x20,
      0x12, 0x08, 0x8e, 0x39, 0xfe, 0x46, 0x47, 0x23,
      0x9d, 0xbf, 0xf6, 0x05, 0xbc, 0xee, 0x28, 0x62,
      0x63, 0xd7, 0xfe, 0x40, 0xf6, 0x1f, 0x9c, 0xff,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_std_srvs
const rosidl_type_hash_t *
std_srvs__srv__SetFloat32WithTitle_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x16, 0xc2, 0xf8, 0x27, 0x65, 0x62, 0x6b, 0xbd,
      0xec, 0x15, 0x89, 0x8c, 0xf5, 0x19, 0x5d, 0x09,
      0x88, 0x27, 0xef, 0x4c, 0x1d, 0x6e, 0x4d, 0x68,
      0xfa, 0xe2, 0xf2, 0xb8, 0xdf, 0xca, 0x78, 0x7d,
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

static char std_srvs__srv__SetFloat32WithTitle__TYPE_NAME[] = "std_srvs/srv/SetFloat32WithTitle";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_srvs__srv__SetFloat32WithTitle_Event__TYPE_NAME[] = "std_srvs/srv/SetFloat32WithTitle_Event";
static char std_srvs__srv__SetFloat32WithTitle_Request__TYPE_NAME[] = "std_srvs/srv/SetFloat32WithTitle_Request";
static char std_srvs__srv__SetFloat32WithTitle_Response__TYPE_NAME[] = "std_srvs/srv/SetFloat32WithTitle_Response";

// Define type names, field names, and default values
static char std_srvs__srv__SetFloat32WithTitle__FIELD_NAME__request_message[] = "request_message";
static char std_srvs__srv__SetFloat32WithTitle__FIELD_NAME__response_message[] = "response_message";
static char std_srvs__srv__SetFloat32WithTitle__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field std_srvs__srv__SetFloat32WithTitle__FIELDS[] = {
  {
    {std_srvs__srv__SetFloat32WithTitle__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_srvs__srv__SetFloat32WithTitle_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32WithTitle__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_srvs__srv__SetFloat32WithTitle_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32WithTitle__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_srvs__srv__SetFloat32WithTitle_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription std_srvs__srv__SetFloat32WithTitle__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32WithTitle_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32WithTitle_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32WithTitle_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
std_srvs__srv__SetFloat32WithTitle__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {std_srvs__srv__SetFloat32WithTitle__TYPE_NAME, 32, 32},
      {std_srvs__srv__SetFloat32WithTitle__FIELDS, 3, 3},
    },
    {std_srvs__srv__SetFloat32WithTitle__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = std_srvs__srv__SetFloat32WithTitle_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = std_srvs__srv__SetFloat32WithTitle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = std_srvs__srv__SetFloat32WithTitle_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char std_srvs__srv__SetFloat32WithTitle_Request__FIELD_NAME__title[] = "title";
static char std_srvs__srv__SetFloat32WithTitle_Request__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field std_srvs__srv__SetFloat32WithTitle_Request__FIELDS[] = {
  {
    {std_srvs__srv__SetFloat32WithTitle_Request__FIELD_NAME__title, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32WithTitle_Request__FIELD_NAME__data, 4, 4},
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
std_srvs__srv__SetFloat32WithTitle_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {std_srvs__srv__SetFloat32WithTitle_Request__TYPE_NAME, 40, 40},
      {std_srvs__srv__SetFloat32WithTitle_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char std_srvs__srv__SetFloat32WithTitle_Response__FIELD_NAME__success[] = "success";
static char std_srvs__srv__SetFloat32WithTitle_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field std_srvs__srv__SetFloat32WithTitle_Response__FIELDS[] = {
  {
    {std_srvs__srv__SetFloat32WithTitle_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32WithTitle_Response__FIELD_NAME__message, 7, 7},
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
std_srvs__srv__SetFloat32WithTitle_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {std_srvs__srv__SetFloat32WithTitle_Response__TYPE_NAME, 41, 41},
      {std_srvs__srv__SetFloat32WithTitle_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char std_srvs__srv__SetFloat32WithTitle_Event__FIELD_NAME__info[] = "info";
static char std_srvs__srv__SetFloat32WithTitle_Event__FIELD_NAME__request[] = "request";
static char std_srvs__srv__SetFloat32WithTitle_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field std_srvs__srv__SetFloat32WithTitle_Event__FIELDS[] = {
  {
    {std_srvs__srv__SetFloat32WithTitle_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32WithTitle_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {std_srvs__srv__SetFloat32WithTitle_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32WithTitle_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {std_srvs__srv__SetFloat32WithTitle_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription std_srvs__srv__SetFloat32WithTitle_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32WithTitle_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32WithTitle_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
std_srvs__srv__SetFloat32WithTitle_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {std_srvs__srv__SetFloat32WithTitle_Event__TYPE_NAME, 38, 38},
      {std_srvs__srv__SetFloat32WithTitle_Event__FIELDS, 3, 3},
    },
    {std_srvs__srv__SetFloat32WithTitle_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = std_srvs__srv__SetFloat32WithTitle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = std_srvs__srv__SetFloat32WithTitle_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string title\n"
  "float32  data     # data\n"
  "---\n"
  "bool success   # indicate successful run of triggered service\n"
  "string message # informational, e.g. for error messages";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
std_srvs__srv__SetFloat32WithTitle__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {std_srvs__srv__SetFloat32WithTitle__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 159, 159},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
std_srvs__srv__SetFloat32WithTitle_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {std_srvs__srv__SetFloat32WithTitle_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
std_srvs__srv__SetFloat32WithTitle_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {std_srvs__srv__SetFloat32WithTitle_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
std_srvs__srv__SetFloat32WithTitle_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {std_srvs__srv__SetFloat32WithTitle_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
std_srvs__srv__SetFloat32WithTitle__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *std_srvs__srv__SetFloat32WithTitle__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *std_srvs__srv__SetFloat32WithTitle_Event__get_individual_type_description_source(NULL);
    sources[4] = *std_srvs__srv__SetFloat32WithTitle_Request__get_individual_type_description_source(NULL);
    sources[5] = *std_srvs__srv__SetFloat32WithTitle_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
std_srvs__srv__SetFloat32WithTitle_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *std_srvs__srv__SetFloat32WithTitle_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
std_srvs__srv__SetFloat32WithTitle_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *std_srvs__srv__SetFloat32WithTitle_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
std_srvs__srv__SetFloat32WithTitle_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *std_srvs__srv__SetFloat32WithTitle_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *std_srvs__srv__SetFloat32WithTitle_Request__get_individual_type_description_source(NULL);
    sources[4] = *std_srvs__srv__SetFloat32WithTitle_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
