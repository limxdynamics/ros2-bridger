// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from std_srvs:srv/SetFloat32ArrayWithTitle.idl
// generated code does not contain a copyright notice

#include "std_srvs/srv/detail/set_float32_array_with_title__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_std_srvs
const rosidl_type_hash_t *
std_srvs__srv__SetFloat32ArrayWithTitle__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x10, 0x51, 0xd8, 0xdc, 0x63, 0x70, 0x01, 0x2c,
      0x99, 0xfc, 0x06, 0xe5, 0xbf, 0xa5, 0x77, 0x71,
      0x97, 0x70, 0x29, 0xc2, 0x5d, 0x11, 0xb7, 0xbb,
      0x2c, 0xa0, 0x85, 0x2c, 0xb6, 0xb8, 0x95, 0x71,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_std_srvs
const rosidl_type_hash_t *
std_srvs__srv__SetFloat32ArrayWithTitle_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbd, 0xfd, 0x56, 0xab, 0xda, 0xcc, 0x7a, 0x60,
      0x34, 0x0c, 0x3f, 0x7a, 0xb5, 0x99, 0x8a, 0x7b,
      0xa3, 0x6f, 0x2f, 0xf8, 0xd6, 0x3a, 0x51, 0x2a,
      0xaa, 0x74, 0x56, 0xfc, 0x3b, 0x6c, 0x32, 0x91,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_std_srvs
const rosidl_type_hash_t *
std_srvs__srv__SetFloat32ArrayWithTitle_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcb, 0x35, 0x32, 0xcf, 0xd8, 0x48, 0x9f, 0x01,
      0xd9, 0xfd, 0xa1, 0x04, 0x3d, 0x46, 0x6e, 0xcb,
      0xea, 0xdc, 0xfc, 0x69, 0xd7, 0x4f, 0x54, 0xf3,
      0x34, 0x49, 0x98, 0x76, 0xf5, 0x2d, 0xbe, 0x37,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_std_srvs
const rosidl_type_hash_t *
std_srvs__srv__SetFloat32ArrayWithTitle_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x02, 0x59, 0x64, 0x56, 0x03, 0xe4, 0xe8, 0xaf,
      0xef, 0x01, 0x31, 0xd1, 0x33, 0x80, 0x37, 0xb0,
      0x89, 0x5b, 0x2b, 0x97, 0x44, 0xb7, 0xf8, 0x70,
      0xcf, 0xbd, 0xd0, 0xe5, 0x82, 0xd2, 0xd1, 0x17,
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

static char std_srvs__srv__SetFloat32ArrayWithTitle__TYPE_NAME[] = "std_srvs/srv/SetFloat32ArrayWithTitle";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_srvs__srv__SetFloat32ArrayWithTitle_Event__TYPE_NAME[] = "std_srvs/srv/SetFloat32ArrayWithTitle_Event";
static char std_srvs__srv__SetFloat32ArrayWithTitle_Request__TYPE_NAME[] = "std_srvs/srv/SetFloat32ArrayWithTitle_Request";
static char std_srvs__srv__SetFloat32ArrayWithTitle_Response__TYPE_NAME[] = "std_srvs/srv/SetFloat32ArrayWithTitle_Response";

// Define type names, field names, and default values
static char std_srvs__srv__SetFloat32ArrayWithTitle__FIELD_NAME__request_message[] = "request_message";
static char std_srvs__srv__SetFloat32ArrayWithTitle__FIELD_NAME__response_message[] = "response_message";
static char std_srvs__srv__SetFloat32ArrayWithTitle__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field std_srvs__srv__SetFloat32ArrayWithTitle__FIELDS[] = {
  {
    {std_srvs__srv__SetFloat32ArrayWithTitle__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_srvs__srv__SetFloat32ArrayWithTitle_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32ArrayWithTitle__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_srvs__srv__SetFloat32ArrayWithTitle_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32ArrayWithTitle__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_srvs__srv__SetFloat32ArrayWithTitle_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription std_srvs__srv__SetFloat32ArrayWithTitle__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32ArrayWithTitle_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32ArrayWithTitle_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32ArrayWithTitle_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
std_srvs__srv__SetFloat32ArrayWithTitle__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {std_srvs__srv__SetFloat32ArrayWithTitle__TYPE_NAME, 37, 37},
      {std_srvs__srv__SetFloat32ArrayWithTitle__FIELDS, 3, 3},
    },
    {std_srvs__srv__SetFloat32ArrayWithTitle__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = std_srvs__srv__SetFloat32ArrayWithTitle_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = std_srvs__srv__SetFloat32ArrayWithTitle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = std_srvs__srv__SetFloat32ArrayWithTitle_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char std_srvs__srv__SetFloat32ArrayWithTitle_Request__FIELD_NAME__title[] = "title";
static char std_srvs__srv__SetFloat32ArrayWithTitle_Request__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field std_srvs__srv__SetFloat32ArrayWithTitle_Request__FIELDS[] = {
  {
    {std_srvs__srv__SetFloat32ArrayWithTitle_Request__FIELD_NAME__title, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32ArrayWithTitle_Request__FIELD_NAME__data, 4, 4},
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
std_srvs__srv__SetFloat32ArrayWithTitle_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {std_srvs__srv__SetFloat32ArrayWithTitle_Request__TYPE_NAME, 45, 45},
      {std_srvs__srv__SetFloat32ArrayWithTitle_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char std_srvs__srv__SetFloat32ArrayWithTitle_Response__FIELD_NAME__success[] = "success";
static char std_srvs__srv__SetFloat32ArrayWithTitle_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field std_srvs__srv__SetFloat32ArrayWithTitle_Response__FIELDS[] = {
  {
    {std_srvs__srv__SetFloat32ArrayWithTitle_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32ArrayWithTitle_Response__FIELD_NAME__message, 7, 7},
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
std_srvs__srv__SetFloat32ArrayWithTitle_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {std_srvs__srv__SetFloat32ArrayWithTitle_Response__TYPE_NAME, 46, 46},
      {std_srvs__srv__SetFloat32ArrayWithTitle_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char std_srvs__srv__SetFloat32ArrayWithTitle_Event__FIELD_NAME__info[] = "info";
static char std_srvs__srv__SetFloat32ArrayWithTitle_Event__FIELD_NAME__request[] = "request";
static char std_srvs__srv__SetFloat32ArrayWithTitle_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field std_srvs__srv__SetFloat32ArrayWithTitle_Event__FIELDS[] = {
  {
    {std_srvs__srv__SetFloat32ArrayWithTitle_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32ArrayWithTitle_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {std_srvs__srv__SetFloat32ArrayWithTitle_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32ArrayWithTitle_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {std_srvs__srv__SetFloat32ArrayWithTitle_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription std_srvs__srv__SetFloat32ArrayWithTitle_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32ArrayWithTitle_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {std_srvs__srv__SetFloat32ArrayWithTitle_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
std_srvs__srv__SetFloat32ArrayWithTitle_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {std_srvs__srv__SetFloat32ArrayWithTitle_Event__TYPE_NAME, 43, 43},
      {std_srvs__srv__SetFloat32ArrayWithTitle_Event__FIELDS, 3, 3},
    },
    {std_srvs__srv__SetFloat32ArrayWithTitle_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = std_srvs__srv__SetFloat32ArrayWithTitle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = std_srvs__srv__SetFloat32ArrayWithTitle_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string title\n"
  "float32[]  data     # array of data\n"
  "---\n"
  "bool success   # indicate successful run of triggered service\n"
  "string message # informational, e.g. for error messages";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
std_srvs__srv__SetFloat32ArrayWithTitle__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {std_srvs__srv__SetFloat32ArrayWithTitle__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 170, 170},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
std_srvs__srv__SetFloat32ArrayWithTitle_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {std_srvs__srv__SetFloat32ArrayWithTitle_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
std_srvs__srv__SetFloat32ArrayWithTitle_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {std_srvs__srv__SetFloat32ArrayWithTitle_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
std_srvs__srv__SetFloat32ArrayWithTitle_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {std_srvs__srv__SetFloat32ArrayWithTitle_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
std_srvs__srv__SetFloat32ArrayWithTitle__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *std_srvs__srv__SetFloat32ArrayWithTitle__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *std_srvs__srv__SetFloat32ArrayWithTitle_Event__get_individual_type_description_source(NULL);
    sources[4] = *std_srvs__srv__SetFloat32ArrayWithTitle_Request__get_individual_type_description_source(NULL);
    sources[5] = *std_srvs__srv__SetFloat32ArrayWithTitle_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
std_srvs__srv__SetFloat32ArrayWithTitle_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *std_srvs__srv__SetFloat32ArrayWithTitle_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
std_srvs__srv__SetFloat32ArrayWithTitle_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *std_srvs__srv__SetFloat32ArrayWithTitle_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
std_srvs__srv__SetFloat32ArrayWithTitle_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *std_srvs__srv__SetFloat32ArrayWithTitle_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *std_srvs__srv__SetFloat32ArrayWithTitle_Request__get_individual_type_description_source(NULL);
    sources[4] = *std_srvs__srv__SetFloat32ArrayWithTitle_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
