// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from teleop_msgs:msg/TeleopIntentFrame.idl
// generated code does not contain a copyright notice
#include "teleop_msgs/msg/detail/teleop_intent_frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `reference_frame`
#include "rosidl_runtime_c/string_functions.h"
// Member `reference_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `targets`
#include "teleop_msgs/msg/detail/teleop_target__functions.h"
// Member `raw`
#include "teleop_msgs/msg/detail/teleop_raw_input__functions.h"
// Member `retarget_joints`
#include "controller_msgs/msg/detail/joint_cmd__functions.h"

bool
teleop_msgs__msg__TeleopIntentFrame__init(teleop_msgs__msg__TeleopIntentFrame * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    teleop_msgs__msg__TeleopIntentFrame__fini(msg);
    return false;
  }
  // schema_version
  // source
  // source_mask
  // reference_frame
  if (!rosidl_runtime_c__String__init(&msg->reference_frame)) {
    teleop_msgs__msg__TeleopIntentFrame__fini(msg);
    return false;
  }
  // reference_pose
  if (!geometry_msgs__msg__Pose__init(&msg->reference_pose)) {
    teleop_msgs__msg__TeleopIntentFrame__fini(msg);
    return false;
  }
  // targets
  if (!teleop_msgs__msg__TeleopTarget__Sequence__init(&msg->targets, 0)) {
    teleop_msgs__msg__TeleopIntentFrame__fini(msg);
    return false;
  }
  // raw_valid
  // raw
  if (!teleop_msgs__msg__TeleopRawInput__init(&msg->raw)) {
    teleop_msgs__msg__TeleopIntentFrame__fini(msg);
    return false;
  }
  // head_control_selected
  // retarget_valid
  // retarget_joints
  if (!controller_msgs__msg__JointCmd__init(&msg->retarget_joints)) {
    teleop_msgs__msg__TeleopIntentFrame__fini(msg);
    return false;
  }
  return true;
}

void
teleop_msgs__msg__TeleopIntentFrame__fini(teleop_msgs__msg__TeleopIntentFrame * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // schema_version
  // source
  // source_mask
  // reference_frame
  rosidl_runtime_c__String__fini(&msg->reference_frame);
  // reference_pose
  geometry_msgs__msg__Pose__fini(&msg->reference_pose);
  // targets
  teleop_msgs__msg__TeleopTarget__Sequence__fini(&msg->targets);
  // raw_valid
  // raw
  teleop_msgs__msg__TeleopRawInput__fini(&msg->raw);
  // head_control_selected
  // retarget_valid
  // retarget_joints
  controller_msgs__msg__JointCmd__fini(&msg->retarget_joints);
}

bool
teleop_msgs__msg__TeleopIntentFrame__are_equal(const teleop_msgs__msg__TeleopIntentFrame * lhs, const teleop_msgs__msg__TeleopIntentFrame * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // schema_version
  if (lhs->schema_version != rhs->schema_version) {
    return false;
  }
  // source
  if (lhs->source != rhs->source) {
    return false;
  }
  // source_mask
  if (lhs->source_mask != rhs->source_mask) {
    return false;
  }
  // reference_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reference_frame), &(rhs->reference_frame)))
  {
    return false;
  }
  // reference_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->reference_pose), &(rhs->reference_pose)))
  {
    return false;
  }
  // targets
  if (!teleop_msgs__msg__TeleopTarget__Sequence__are_equal(
      &(lhs->targets), &(rhs->targets)))
  {
    return false;
  }
  // raw_valid
  if (lhs->raw_valid != rhs->raw_valid) {
    return false;
  }
  // raw
  if (!teleop_msgs__msg__TeleopRawInput__are_equal(
      &(lhs->raw), &(rhs->raw)))
  {
    return false;
  }
  // head_control_selected
  if (lhs->head_control_selected != rhs->head_control_selected) {
    return false;
  }
  // retarget_valid
  if (lhs->retarget_valid != rhs->retarget_valid) {
    return false;
  }
  // retarget_joints
  if (!controller_msgs__msg__JointCmd__are_equal(
      &(lhs->retarget_joints), &(rhs->retarget_joints)))
  {
    return false;
  }
  return true;
}

bool
teleop_msgs__msg__TeleopIntentFrame__copy(
  const teleop_msgs__msg__TeleopIntentFrame * input,
  teleop_msgs__msg__TeleopIntentFrame * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // schema_version
  output->schema_version = input->schema_version;
  // source
  output->source = input->source;
  // source_mask
  output->source_mask = input->source_mask;
  // reference_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->reference_frame), &(output->reference_frame)))
  {
    return false;
  }
  // reference_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->reference_pose), &(output->reference_pose)))
  {
    return false;
  }
  // targets
  if (!teleop_msgs__msg__TeleopTarget__Sequence__copy(
      &(input->targets), &(output->targets)))
  {
    return false;
  }
  // raw_valid
  output->raw_valid = input->raw_valid;
  // raw
  if (!teleop_msgs__msg__TeleopRawInput__copy(
      &(input->raw), &(output->raw)))
  {
    return false;
  }
  // head_control_selected
  output->head_control_selected = input->head_control_selected;
  // retarget_valid
  output->retarget_valid = input->retarget_valid;
  // retarget_joints
  if (!controller_msgs__msg__JointCmd__copy(
      &(input->retarget_joints), &(output->retarget_joints)))
  {
    return false;
  }
  return true;
}

teleop_msgs__msg__TeleopIntentFrame *
teleop_msgs__msg__TeleopIntentFrame__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__TeleopIntentFrame * msg = (teleop_msgs__msg__TeleopIntentFrame *)allocator.allocate(sizeof(teleop_msgs__msg__TeleopIntentFrame), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(teleop_msgs__msg__TeleopIntentFrame));
  bool success = teleop_msgs__msg__TeleopIntentFrame__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
teleop_msgs__msg__TeleopIntentFrame__destroy(teleop_msgs__msg__TeleopIntentFrame * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    teleop_msgs__msg__TeleopIntentFrame__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
teleop_msgs__msg__TeleopIntentFrame__Sequence__init(teleop_msgs__msg__TeleopIntentFrame__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__TeleopIntentFrame * data = NULL;

  if (size) {
    data = (teleop_msgs__msg__TeleopIntentFrame *)allocator.zero_allocate(size, sizeof(teleop_msgs__msg__TeleopIntentFrame), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = teleop_msgs__msg__TeleopIntentFrame__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        teleop_msgs__msg__TeleopIntentFrame__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
teleop_msgs__msg__TeleopIntentFrame__Sequence__fini(teleop_msgs__msg__TeleopIntentFrame__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      teleop_msgs__msg__TeleopIntentFrame__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

teleop_msgs__msg__TeleopIntentFrame__Sequence *
teleop_msgs__msg__TeleopIntentFrame__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__TeleopIntentFrame__Sequence * array = (teleop_msgs__msg__TeleopIntentFrame__Sequence *)allocator.allocate(sizeof(teleop_msgs__msg__TeleopIntentFrame__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = teleop_msgs__msg__TeleopIntentFrame__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
teleop_msgs__msg__TeleopIntentFrame__Sequence__destroy(teleop_msgs__msg__TeleopIntentFrame__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    teleop_msgs__msg__TeleopIntentFrame__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
teleop_msgs__msg__TeleopIntentFrame__Sequence__are_equal(const teleop_msgs__msg__TeleopIntentFrame__Sequence * lhs, const teleop_msgs__msg__TeleopIntentFrame__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!teleop_msgs__msg__TeleopIntentFrame__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
teleop_msgs__msg__TeleopIntentFrame__Sequence__copy(
  const teleop_msgs__msg__TeleopIntentFrame__Sequence * input,
  teleop_msgs__msg__TeleopIntentFrame__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(teleop_msgs__msg__TeleopIntentFrame);
    teleop_msgs__msg__TeleopIntentFrame * data =
      (teleop_msgs__msg__TeleopIntentFrame *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!teleop_msgs__msg__TeleopIntentFrame__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          teleop_msgs__msg__TeleopIntentFrame__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!teleop_msgs__msg__TeleopIntentFrame__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
