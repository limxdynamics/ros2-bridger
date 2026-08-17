// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from actionlib:action/TestRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "actionlib/action/test_request.h"


#ifndef ACTIONLIB__ACTION__DETAIL__TEST_REQUEST__STRUCT_H_
#define ACTIONLIB__ACTION__DETAIL__TEST_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TERMINATE_SUCCESS'.
enum
{
  actionlib__action__TestRequest_Goal__TERMINATE_SUCCESS = 0l
};

/// Constant 'TERMINATE_ABORTED'.
enum
{
  actionlib__action__TestRequest_Goal__TERMINATE_ABORTED = 1l
};

/// Constant 'TERMINATE_REJECTED'.
enum
{
  actionlib__action__TestRequest_Goal__TERMINATE_REJECTED = 2l
};

/// Constant 'TERMINATE_LOSE'.
enum
{
  actionlib__action__TestRequest_Goal__TERMINATE_LOSE = 3l
};

/// Constant 'TERMINATE_DROP'.
enum
{
  actionlib__action__TestRequest_Goal__TERMINATE_DROP = 4l
};

/// Constant 'TERMINATE_EXCEPTION'.
enum
{
  actionlib__action__TestRequest_Goal__TERMINATE_EXCEPTION = 5l
};

// Include directives for member types
// Member 'result_text'
#include "rosidl_runtime_c/string.h"
// Member 'delay_accept'
// Member 'delay_terminate'
// Member 'pause_status'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/TestRequest in the package actionlib.
typedef struct actionlib__action__TestRequest_Goal
{
  int32_t terminate_status;
  /// If true, ignores requests to cancel
  bool ignore_cancel;
  rosidl_runtime_c__String result_text;
  /// Desired value for the_result in the Result
  int32_t the_result;
  bool is_simple_client;
  /// Delays accepting the goal by this amount of time
  builtin_interfaces__msg__Duration delay_accept;
  /// Delays terminating for this amount of time
  builtin_interfaces__msg__Duration delay_terminate;
  /// Pauses the status messages for this amount of time
  builtin_interfaces__msg__Duration pause_status;
} actionlib__action__TestRequest_Goal;

// Struct for a sequence of actionlib__action__TestRequest_Goal.
typedef struct actionlib__action__TestRequest_Goal__Sequence
{
  actionlib__action__TestRequest_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib__action__TestRequest_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/TestRequest in the package actionlib.
typedef struct actionlib__action__TestRequest_Result
{
  int32_t the_result;
  bool is_simple_server;
} actionlib__action__TestRequest_Result;

// Struct for a sequence of actionlib__action__TestRequest_Result.
typedef struct actionlib__action__TestRequest_Result__Sequence
{
  actionlib__action__TestRequest_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib__action__TestRequest_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/TestRequest in the package actionlib.
typedef struct actionlib__action__TestRequest_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} actionlib__action__TestRequest_Feedback;

// Struct for a sequence of actionlib__action__TestRequest_Feedback.
typedef struct actionlib__action__TestRequest_Feedback__Sequence
{
  actionlib__action__TestRequest_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib__action__TestRequest_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "actionlib/action/detail/test_request__struct.h"

/// Struct defined in action/TestRequest in the package actionlib.
typedef struct actionlib__action__TestRequest_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  actionlib__action__TestRequest_Goal goal;
} actionlib__action__TestRequest_SendGoal_Request;

// Struct for a sequence of actionlib__action__TestRequest_SendGoal_Request.
typedef struct actionlib__action__TestRequest_SendGoal_Request__Sequence
{
  actionlib__action__TestRequest_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib__action__TestRequest_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/TestRequest in the package actionlib.
typedef struct actionlib__action__TestRequest_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} actionlib__action__TestRequest_SendGoal_Response;

// Struct for a sequence of actionlib__action__TestRequest_SendGoal_Response.
typedef struct actionlib__action__TestRequest_SendGoal_Response__Sequence
{
  actionlib__action__TestRequest_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib__action__TestRequest_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  actionlib__action__TestRequest_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  actionlib__action__TestRequest_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/TestRequest in the package actionlib.
typedef struct actionlib__action__TestRequest_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  actionlib__action__TestRequest_SendGoal_Request__Sequence request;
  actionlib__action__TestRequest_SendGoal_Response__Sequence response;
} actionlib__action__TestRequest_SendGoal_Event;

// Struct for a sequence of actionlib__action__TestRequest_SendGoal_Event.
typedef struct actionlib__action__TestRequest_SendGoal_Event__Sequence
{
  actionlib__action__TestRequest_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib__action__TestRequest_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/TestRequest in the package actionlib.
typedef struct actionlib__action__TestRequest_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} actionlib__action__TestRequest_GetResult_Request;

// Struct for a sequence of actionlib__action__TestRequest_GetResult_Request.
typedef struct actionlib__action__TestRequest_GetResult_Request__Sequence
{
  actionlib__action__TestRequest_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib__action__TestRequest_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "actionlib/action/detail/test_request__struct.h"

/// Struct defined in action/TestRequest in the package actionlib.
typedef struct actionlib__action__TestRequest_GetResult_Response
{
  int8_t status;
  actionlib__action__TestRequest_Result result;
} actionlib__action__TestRequest_GetResult_Response;

// Struct for a sequence of actionlib__action__TestRequest_GetResult_Response.
typedef struct actionlib__action__TestRequest_GetResult_Response__Sequence
{
  actionlib__action__TestRequest_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib__action__TestRequest_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  actionlib__action__TestRequest_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  actionlib__action__TestRequest_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/TestRequest in the package actionlib.
typedef struct actionlib__action__TestRequest_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  actionlib__action__TestRequest_GetResult_Request__Sequence request;
  actionlib__action__TestRequest_GetResult_Response__Sequence response;
} actionlib__action__TestRequest_GetResult_Event;

// Struct for a sequence of actionlib__action__TestRequest_GetResult_Event.
typedef struct actionlib__action__TestRequest_GetResult_Event__Sequence
{
  actionlib__action__TestRequest_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib__action__TestRequest_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "actionlib/action/detail/test_request__struct.h"

/// Struct defined in action/TestRequest in the package actionlib.
typedef struct actionlib__action__TestRequest_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  actionlib__action__TestRequest_Feedback feedback;
} actionlib__action__TestRequest_FeedbackMessage;

// Struct for a sequence of actionlib__action__TestRequest_FeedbackMessage.
typedef struct actionlib__action__TestRequest_FeedbackMessage__Sequence
{
  actionlib__action__TestRequest_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib__action__TestRequest_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTIONLIB__ACTION__DETAIL__TEST_REQUEST__STRUCT_H_
