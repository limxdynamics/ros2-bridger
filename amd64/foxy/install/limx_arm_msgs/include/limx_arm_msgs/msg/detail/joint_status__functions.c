// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from limx_arm_msgs:msg/JointStatus.idl
// generated code does not contain a copyright notice
#include "limx_arm_msgs/msg/detail/joint_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `deviceid`
// Member `error`
// Member `log_path`
#include "rosidl_runtime_c/string_functions.h"

bool
limx_arm_msgs__msg__JointStatus__init(limx_arm_msgs__msg__JointStatus * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  // deviceid
  if (!rosidl_runtime_c__String__init(&msg->deviceid)) {
    limx_arm_msgs__msg__JointStatus__fini(msg);
    return false;
  }
  // run_time
  // enable
  // error
  for (size_t i = 0; i < 6; ++i) {
    if (!rosidl_runtime_c__String__init(&msg->error[i])) {
      limx_arm_msgs__msg__JointStatus__fini(msg);
      return false;
    }
  }
  // zero
  // limit_min
  // limit_max
  // tool_size
  // mode
  // state
  // play_state
  // log_path
  if (!rosidl_runtime_c__String__init(&msg->log_path)) {
    limx_arm_msgs__msg__JointStatus__fini(msg);
    return false;
  }
  return true;
}

void
limx_arm_msgs__msg__JointStatus__fini(limx_arm_msgs__msg__JointStatus * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  // deviceid
  rosidl_runtime_c__String__fini(&msg->deviceid);
  // run_time
  // enable
  // error
  for (size_t i = 0; i < 6; ++i) {
    rosidl_runtime_c__String__fini(&msg->error[i]);
  }
  // zero
  // limit_min
  // limit_max
  // tool_size
  // mode
  // state
  // play_state
  // log_path
  rosidl_runtime_c__String__fini(&msg->log_path);
}

bool
limx_arm_msgs__msg__JointStatus__are_equal(const limx_arm_msgs__msg__JointStatus * lhs, const limx_arm_msgs__msg__JointStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (lhs->stamp != rhs->stamp) {
    return false;
  }
  // deviceid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->deviceid), &(rhs->deviceid)))
  {
    return false;
  }
  // run_time
  if (lhs->run_time != rhs->run_time) {
    return false;
  }
  // enable
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->enable[i] != rhs->enable[i]) {
      return false;
    }
  }
  // error
  for (size_t i = 0; i < 6; ++i) {
    if (!rosidl_runtime_c__String__are_equal(
        &(lhs->error[i]), &(rhs->error[i])))
    {
      return false;
    }
  }
  // zero
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->zero[i] != rhs->zero[i]) {
      return false;
    }
  }
  // limit_min
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->limit_min[i] != rhs->limit_min[i]) {
      return false;
    }
  }
  // limit_max
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->limit_max[i] != rhs->limit_max[i]) {
      return false;
    }
  }
  // tool_size
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->tool_size[i] != rhs->tool_size[i]) {
      return false;
    }
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // play_state
  if (lhs->play_state != rhs->play_state) {
    return false;
  }
  // log_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->log_path), &(rhs->log_path)))
  {
    return false;
  }
  return true;
}

bool
limx_arm_msgs__msg__JointStatus__copy(
  const limx_arm_msgs__msg__JointStatus * input,
  limx_arm_msgs__msg__JointStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  output->stamp = input->stamp;
  // deviceid
  if (!rosidl_runtime_c__String__copy(
      &(input->deviceid), &(output->deviceid)))
  {
    return false;
  }
  // run_time
  output->run_time = input->run_time;
  // enable
  for (size_t i = 0; i < 6; ++i) {
    output->enable[i] = input->enable[i];
  }
  // error
  for (size_t i = 0; i < 6; ++i) {
    if (!rosidl_runtime_c__String__copy(
        &(input->error[i]), &(output->error[i])))
    {
      return false;
    }
  }
  // zero
  for (size_t i = 0; i < 6; ++i) {
    output->zero[i] = input->zero[i];
  }
  // limit_min
  for (size_t i = 0; i < 6; ++i) {
    output->limit_min[i] = input->limit_min[i];
  }
  // limit_max
  for (size_t i = 0; i < 6; ++i) {
    output->limit_max[i] = input->limit_max[i];
  }
  // tool_size
  for (size_t i = 0; i < 3; ++i) {
    output->tool_size[i] = input->tool_size[i];
  }
  // mode
  output->mode = input->mode;
  // state
  output->state = input->state;
  // play_state
  output->play_state = input->play_state;
  // log_path
  if (!rosidl_runtime_c__String__copy(
      &(input->log_path), &(output->log_path)))
  {
    return false;
  }
  return true;
}

limx_arm_msgs__msg__JointStatus *
limx_arm_msgs__msg__JointStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__msg__JointStatus * msg = (limx_arm_msgs__msg__JointStatus *)allocator.allocate(sizeof(limx_arm_msgs__msg__JointStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(limx_arm_msgs__msg__JointStatus));
  bool success = limx_arm_msgs__msg__JointStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
limx_arm_msgs__msg__JointStatus__destroy(limx_arm_msgs__msg__JointStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    limx_arm_msgs__msg__JointStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
limx_arm_msgs__msg__JointStatus__Sequence__init(limx_arm_msgs__msg__JointStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__msg__JointStatus * data = NULL;

  if (size) {
    data = (limx_arm_msgs__msg__JointStatus *)allocator.zero_allocate(size, sizeof(limx_arm_msgs__msg__JointStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = limx_arm_msgs__msg__JointStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        limx_arm_msgs__msg__JointStatus__fini(&data[i - 1]);
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
limx_arm_msgs__msg__JointStatus__Sequence__fini(limx_arm_msgs__msg__JointStatus__Sequence * array)
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
      limx_arm_msgs__msg__JointStatus__fini(&array->data[i]);
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

limx_arm_msgs__msg__JointStatus__Sequence *
limx_arm_msgs__msg__JointStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__msg__JointStatus__Sequence * array = (limx_arm_msgs__msg__JointStatus__Sequence *)allocator.allocate(sizeof(limx_arm_msgs__msg__JointStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = limx_arm_msgs__msg__JointStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
limx_arm_msgs__msg__JointStatus__Sequence__destroy(limx_arm_msgs__msg__JointStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    limx_arm_msgs__msg__JointStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
limx_arm_msgs__msg__JointStatus__Sequence__are_equal(const limx_arm_msgs__msg__JointStatus__Sequence * lhs, const limx_arm_msgs__msg__JointStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!limx_arm_msgs__msg__JointStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
limx_arm_msgs__msg__JointStatus__Sequence__copy(
  const limx_arm_msgs__msg__JointStatus__Sequence * input,
  limx_arm_msgs__msg__JointStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(limx_arm_msgs__msg__JointStatus);
    limx_arm_msgs__msg__JointStatus * data =
      (limx_arm_msgs__msg__JointStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!limx_arm_msgs__msg__JointStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          limx_arm_msgs__msg__JointStatus__fini(&data[i]);
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
    if (!limx_arm_msgs__msg__JointStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
