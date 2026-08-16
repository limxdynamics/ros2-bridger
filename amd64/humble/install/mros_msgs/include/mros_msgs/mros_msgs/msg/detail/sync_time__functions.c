// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mros_msgs:msg/SyncTime.idl
// generated code does not contain a copyright notice
#include "mros_msgs/msg/detail/sync_time__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
mros_msgs__msg__SyncTime__init(mros_msgs__msg__SyncTime * msg)
{
  if (!msg) {
    return false;
  }
  // tick
  // data
  if (!builtin_interfaces__msg__Time__init(&msg->data)) {
    mros_msgs__msg__SyncTime__fini(msg);
    return false;
  }
  return true;
}

void
mros_msgs__msg__SyncTime__fini(mros_msgs__msg__SyncTime * msg)
{
  if (!msg) {
    return;
  }
  // tick
  // data
  builtin_interfaces__msg__Time__fini(&msg->data);
}

bool
mros_msgs__msg__SyncTime__are_equal(const mros_msgs__msg__SyncTime * lhs, const mros_msgs__msg__SyncTime * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tick
  if (lhs->tick != rhs->tick) {
    return false;
  }
  // data
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
mros_msgs__msg__SyncTime__copy(
  const mros_msgs__msg__SyncTime * input,
  mros_msgs__msg__SyncTime * output)
{
  if (!input || !output) {
    return false;
  }
  // tick
  output->tick = input->tick;
  // data
  if (!builtin_interfaces__msg__Time__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

mros_msgs__msg__SyncTime *
mros_msgs__msg__SyncTime__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mros_msgs__msg__SyncTime * msg = (mros_msgs__msg__SyncTime *)allocator.allocate(sizeof(mros_msgs__msg__SyncTime), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mros_msgs__msg__SyncTime));
  bool success = mros_msgs__msg__SyncTime__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mros_msgs__msg__SyncTime__destroy(mros_msgs__msg__SyncTime * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mros_msgs__msg__SyncTime__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mros_msgs__msg__SyncTime__Sequence__init(mros_msgs__msg__SyncTime__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mros_msgs__msg__SyncTime * data = NULL;

  if (size) {
    data = (mros_msgs__msg__SyncTime *)allocator.zero_allocate(size, sizeof(mros_msgs__msg__SyncTime), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mros_msgs__msg__SyncTime__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mros_msgs__msg__SyncTime__fini(&data[i - 1]);
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
mros_msgs__msg__SyncTime__Sequence__fini(mros_msgs__msg__SyncTime__Sequence * array)
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
      mros_msgs__msg__SyncTime__fini(&array->data[i]);
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

mros_msgs__msg__SyncTime__Sequence *
mros_msgs__msg__SyncTime__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mros_msgs__msg__SyncTime__Sequence * array = (mros_msgs__msg__SyncTime__Sequence *)allocator.allocate(sizeof(mros_msgs__msg__SyncTime__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mros_msgs__msg__SyncTime__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mros_msgs__msg__SyncTime__Sequence__destroy(mros_msgs__msg__SyncTime__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mros_msgs__msg__SyncTime__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mros_msgs__msg__SyncTime__Sequence__are_equal(const mros_msgs__msg__SyncTime__Sequence * lhs, const mros_msgs__msg__SyncTime__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mros_msgs__msg__SyncTime__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mros_msgs__msg__SyncTime__Sequence__copy(
  const mros_msgs__msg__SyncTime__Sequence * input,
  mros_msgs__msg__SyncTime__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mros_msgs__msg__SyncTime);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mros_msgs__msg__SyncTime * data =
      (mros_msgs__msg__SyncTime *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mros_msgs__msg__SyncTime__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mros_msgs__msg__SyncTime__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mros_msgs__msg__SyncTime__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
