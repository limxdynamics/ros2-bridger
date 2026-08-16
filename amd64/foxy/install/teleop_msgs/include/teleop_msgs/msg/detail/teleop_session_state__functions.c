// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from teleop_msgs:msg/TeleopSessionState.idl
// generated code does not contain a copyright notice
#include "teleop_msgs/msg/detail/teleop_session_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `mode`
// Member `fault_detail`
#include "rosidl_runtime_c/string_functions.h"
// Member `limbs`
#include "teleop_msgs/msg/detail/teleop_limb_state__functions.h"

bool
teleop_msgs__msg__TeleopSessionState__init(teleop_msgs__msg__TeleopSessionState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    teleop_msgs__msg__TeleopSessionState__fini(msg);
    return false;
  }
  // schema_version
  // session_state
  // mode
  if (!rosidl_runtime_c__String__init(&msg->mode)) {
    teleop_msgs__msg__TeleopSessionState__fini(msg);
    return false;
  }
  // limbs
  if (!teleop_msgs__msg__TeleopLimbState__Sequence__init(&msg->limbs, 0)) {
    teleop_msgs__msg__TeleopSessionState__fini(msg);
    return false;
  }
  // reanchor_epoch
  // retarget_required
  // fault_code
  // fault_detail
  if (!rosidl_runtime_c__String__init(&msg->fault_detail)) {
    teleop_msgs__msg__TeleopSessionState__fini(msg);
    return false;
  }
  return true;
}

void
teleop_msgs__msg__TeleopSessionState__fini(teleop_msgs__msg__TeleopSessionState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // schema_version
  // session_state
  // mode
  rosidl_runtime_c__String__fini(&msg->mode);
  // limbs
  teleop_msgs__msg__TeleopLimbState__Sequence__fini(&msg->limbs);
  // reanchor_epoch
  // retarget_required
  // fault_code
  // fault_detail
  rosidl_runtime_c__String__fini(&msg->fault_detail);
}

bool
teleop_msgs__msg__TeleopSessionState__are_equal(const teleop_msgs__msg__TeleopSessionState * lhs, const teleop_msgs__msg__TeleopSessionState * rhs)
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
  // session_state
  if (lhs->session_state != rhs->session_state) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  // limbs
  if (!teleop_msgs__msg__TeleopLimbState__Sequence__are_equal(
      &(lhs->limbs), &(rhs->limbs)))
  {
    return false;
  }
  // reanchor_epoch
  if (lhs->reanchor_epoch != rhs->reanchor_epoch) {
    return false;
  }
  // retarget_required
  if (lhs->retarget_required != rhs->retarget_required) {
    return false;
  }
  // fault_code
  if (lhs->fault_code != rhs->fault_code) {
    return false;
  }
  // fault_detail
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->fault_detail), &(rhs->fault_detail)))
  {
    return false;
  }
  return true;
}

bool
teleop_msgs__msg__TeleopSessionState__copy(
  const teleop_msgs__msg__TeleopSessionState * input,
  teleop_msgs__msg__TeleopSessionState * output)
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
  // session_state
  output->session_state = input->session_state;
  // mode
  if (!rosidl_runtime_c__String__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  // limbs
  if (!teleop_msgs__msg__TeleopLimbState__Sequence__copy(
      &(input->limbs), &(output->limbs)))
  {
    return false;
  }
  // reanchor_epoch
  output->reanchor_epoch = input->reanchor_epoch;
  // retarget_required
  output->retarget_required = input->retarget_required;
  // fault_code
  output->fault_code = input->fault_code;
  // fault_detail
  if (!rosidl_runtime_c__String__copy(
      &(input->fault_detail), &(output->fault_detail)))
  {
    return false;
  }
  return true;
}

teleop_msgs__msg__TeleopSessionState *
teleop_msgs__msg__TeleopSessionState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__TeleopSessionState * msg = (teleop_msgs__msg__TeleopSessionState *)allocator.allocate(sizeof(teleop_msgs__msg__TeleopSessionState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(teleop_msgs__msg__TeleopSessionState));
  bool success = teleop_msgs__msg__TeleopSessionState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
teleop_msgs__msg__TeleopSessionState__destroy(teleop_msgs__msg__TeleopSessionState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    teleop_msgs__msg__TeleopSessionState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
teleop_msgs__msg__TeleopSessionState__Sequence__init(teleop_msgs__msg__TeleopSessionState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__TeleopSessionState * data = NULL;

  if (size) {
    data = (teleop_msgs__msg__TeleopSessionState *)allocator.zero_allocate(size, sizeof(teleop_msgs__msg__TeleopSessionState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = teleop_msgs__msg__TeleopSessionState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        teleop_msgs__msg__TeleopSessionState__fini(&data[i - 1]);
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
teleop_msgs__msg__TeleopSessionState__Sequence__fini(teleop_msgs__msg__TeleopSessionState__Sequence * array)
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
      teleop_msgs__msg__TeleopSessionState__fini(&array->data[i]);
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

teleop_msgs__msg__TeleopSessionState__Sequence *
teleop_msgs__msg__TeleopSessionState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__TeleopSessionState__Sequence * array = (teleop_msgs__msg__TeleopSessionState__Sequence *)allocator.allocate(sizeof(teleop_msgs__msg__TeleopSessionState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = teleop_msgs__msg__TeleopSessionState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
teleop_msgs__msg__TeleopSessionState__Sequence__destroy(teleop_msgs__msg__TeleopSessionState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    teleop_msgs__msg__TeleopSessionState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
teleop_msgs__msg__TeleopSessionState__Sequence__are_equal(const teleop_msgs__msg__TeleopSessionState__Sequence * lhs, const teleop_msgs__msg__TeleopSessionState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!teleop_msgs__msg__TeleopSessionState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
teleop_msgs__msg__TeleopSessionState__Sequence__copy(
  const teleop_msgs__msg__TeleopSessionState__Sequence * input,
  teleop_msgs__msg__TeleopSessionState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(teleop_msgs__msg__TeleopSessionState);
    teleop_msgs__msg__TeleopSessionState * data =
      (teleop_msgs__msg__TeleopSessionState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!teleop_msgs__msg__TeleopSessionState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          teleop_msgs__msg__TeleopSessionState__fini(&data[i]);
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
    if (!teleop_msgs__msg__TeleopSessionState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
