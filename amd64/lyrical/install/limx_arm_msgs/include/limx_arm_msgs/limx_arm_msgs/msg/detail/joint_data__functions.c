// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from limx_arm_msgs:msg/JointData.idl
// generated code does not contain a copyright notice
#include "limx_arm_msgs/msg/detail/joint_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `deviceid`
#include "rosidl_runtime_c/string_functions.h"

bool
limx_arm_msgs__msg__JointData__init(limx_arm_msgs__msg__JointData * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  // deviceid
  if (!rosidl_runtime_c__String__init(&msg->deviceid)) {
    limx_arm_msgs__msg__JointData__fini(msg);
    return false;
  }
  // angle
  // velocity
  // current
  return true;
}

void
limx_arm_msgs__msg__JointData__fini(limx_arm_msgs__msg__JointData * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  // deviceid
  rosidl_runtime_c__String__fini(&msg->deviceid);
  // angle
  // velocity
  // current
}

bool
limx_arm_msgs__msg__JointData__are_equal(const limx_arm_msgs__msg__JointData * lhs, const limx_arm_msgs__msg__JointData * rhs)
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
  // angle
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->angle[i] != rhs->angle[i]) {
      return false;
    }
  }
  // velocity
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->velocity[i] != rhs->velocity[i]) {
      return false;
    }
  }
  // current
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->current[i] != rhs->current[i]) {
      return false;
    }
  }
  return true;
}

bool
limx_arm_msgs__msg__JointData__copy(
  const limx_arm_msgs__msg__JointData * input,
  limx_arm_msgs__msg__JointData * output)
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
  // angle
  for (size_t i = 0; i < 6; ++i) {
    output->angle[i] = input->angle[i];
  }
  // velocity
  for (size_t i = 0; i < 6; ++i) {
    output->velocity[i] = input->velocity[i];
  }
  // current
  for (size_t i = 0; i < 6; ++i) {
    output->current[i] = input->current[i];
  }
  return true;
}

limx_arm_msgs__msg__JointData *
limx_arm_msgs__msg__JointData__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__msg__JointData * msg = (limx_arm_msgs__msg__JointData *)allocator.allocate(sizeof(limx_arm_msgs__msg__JointData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(limx_arm_msgs__msg__JointData));
  bool success = limx_arm_msgs__msg__JointData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
limx_arm_msgs__msg__JointData__destroy(limx_arm_msgs__msg__JointData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    limx_arm_msgs__msg__JointData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
limx_arm_msgs__msg__JointData__Sequence__init(limx_arm_msgs__msg__JointData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__msg__JointData * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(limx_arm_msgs__msg__JointData)) {
      return false;
    }
    data = (limx_arm_msgs__msg__JointData *)allocator.zero_allocate(size, sizeof(limx_arm_msgs__msg__JointData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = limx_arm_msgs__msg__JointData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        limx_arm_msgs__msg__JointData__fini(&data[i - 1]);
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
limx_arm_msgs__msg__JointData__Sequence__fini(limx_arm_msgs__msg__JointData__Sequence * array)
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
      limx_arm_msgs__msg__JointData__fini(&array->data[i]);
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

limx_arm_msgs__msg__JointData__Sequence *
limx_arm_msgs__msg__JointData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__msg__JointData__Sequence * array = (limx_arm_msgs__msg__JointData__Sequence *)allocator.allocate(sizeof(limx_arm_msgs__msg__JointData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = limx_arm_msgs__msg__JointData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
limx_arm_msgs__msg__JointData__Sequence__destroy(limx_arm_msgs__msg__JointData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    limx_arm_msgs__msg__JointData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
limx_arm_msgs__msg__JointData__Sequence__are_equal(const limx_arm_msgs__msg__JointData__Sequence * lhs, const limx_arm_msgs__msg__JointData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!limx_arm_msgs__msg__JointData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
limx_arm_msgs__msg__JointData__Sequence__copy(
  const limx_arm_msgs__msg__JointData__Sequence * input,
  limx_arm_msgs__msg__JointData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(limx_arm_msgs__msg__JointData)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(limx_arm_msgs__msg__JointData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    limx_arm_msgs__msg__JointData * data =
      (limx_arm_msgs__msg__JointData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!limx_arm_msgs__msg__JointData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          limx_arm_msgs__msg__JointData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!limx_arm_msgs__msg__JointData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
