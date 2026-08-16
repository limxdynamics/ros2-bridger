// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mros_msgs:msg/TopicStatistics.idl
// generated code does not contain a copyright notice
#include "mros_msgs/msg/detail/topic_statistics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `node`
#include "rosidl_runtime_c/string_functions.h"
// Member `subscribers`
// Member `publishers`
#include "mros_msgs/msg/detail/topic_info__functions.h"

bool
mros_msgs__msg__TopicStatistics__init(mros_msgs__msg__TopicStatistics * msg)
{
  if (!msg) {
    return false;
  }
  // node
  if (!rosidl_runtime_c__String__init(&msg->node)) {
    mros_msgs__msg__TopicStatistics__fini(msg);
    return false;
  }
  // subscribers
  if (!mros_msgs__msg__TopicInfo__Sequence__init(&msg->subscribers, 0)) {
    mros_msgs__msg__TopicStatistics__fini(msg);
    return false;
  }
  // publishers
  if (!mros_msgs__msg__TopicInfo__Sequence__init(&msg->publishers, 0)) {
    mros_msgs__msg__TopicStatistics__fini(msg);
    return false;
  }
  return true;
}

void
mros_msgs__msg__TopicStatistics__fini(mros_msgs__msg__TopicStatistics * msg)
{
  if (!msg) {
    return;
  }
  // node
  rosidl_runtime_c__String__fini(&msg->node);
  // subscribers
  mros_msgs__msg__TopicInfo__Sequence__fini(&msg->subscribers);
  // publishers
  mros_msgs__msg__TopicInfo__Sequence__fini(&msg->publishers);
}

bool
mros_msgs__msg__TopicStatistics__are_equal(const mros_msgs__msg__TopicStatistics * lhs, const mros_msgs__msg__TopicStatistics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node), &(rhs->node)))
  {
    return false;
  }
  // subscribers
  if (!mros_msgs__msg__TopicInfo__Sequence__are_equal(
      &(lhs->subscribers), &(rhs->subscribers)))
  {
    return false;
  }
  // publishers
  if (!mros_msgs__msg__TopicInfo__Sequence__are_equal(
      &(lhs->publishers), &(rhs->publishers)))
  {
    return false;
  }
  return true;
}

bool
mros_msgs__msg__TopicStatistics__copy(
  const mros_msgs__msg__TopicStatistics * input,
  mros_msgs__msg__TopicStatistics * output)
{
  if (!input || !output) {
    return false;
  }
  // node
  if (!rosidl_runtime_c__String__copy(
      &(input->node), &(output->node)))
  {
    return false;
  }
  // subscribers
  if (!mros_msgs__msg__TopicInfo__Sequence__copy(
      &(input->subscribers), &(output->subscribers)))
  {
    return false;
  }
  // publishers
  if (!mros_msgs__msg__TopicInfo__Sequence__copy(
      &(input->publishers), &(output->publishers)))
  {
    return false;
  }
  return true;
}

mros_msgs__msg__TopicStatistics *
mros_msgs__msg__TopicStatistics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mros_msgs__msg__TopicStatistics * msg = (mros_msgs__msg__TopicStatistics *)allocator.allocate(sizeof(mros_msgs__msg__TopicStatistics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mros_msgs__msg__TopicStatistics));
  bool success = mros_msgs__msg__TopicStatistics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mros_msgs__msg__TopicStatistics__destroy(mros_msgs__msg__TopicStatistics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mros_msgs__msg__TopicStatistics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mros_msgs__msg__TopicStatistics__Sequence__init(mros_msgs__msg__TopicStatistics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mros_msgs__msg__TopicStatistics * data = NULL;

  if (size) {
    data = (mros_msgs__msg__TopicStatistics *)allocator.zero_allocate(size, sizeof(mros_msgs__msg__TopicStatistics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mros_msgs__msg__TopicStatistics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mros_msgs__msg__TopicStatistics__fini(&data[i - 1]);
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
mros_msgs__msg__TopicStatistics__Sequence__fini(mros_msgs__msg__TopicStatistics__Sequence * array)
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
      mros_msgs__msg__TopicStatistics__fini(&array->data[i]);
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

mros_msgs__msg__TopicStatistics__Sequence *
mros_msgs__msg__TopicStatistics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mros_msgs__msg__TopicStatistics__Sequence * array = (mros_msgs__msg__TopicStatistics__Sequence *)allocator.allocate(sizeof(mros_msgs__msg__TopicStatistics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mros_msgs__msg__TopicStatistics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mros_msgs__msg__TopicStatistics__Sequence__destroy(mros_msgs__msg__TopicStatistics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mros_msgs__msg__TopicStatistics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mros_msgs__msg__TopicStatistics__Sequence__are_equal(const mros_msgs__msg__TopicStatistics__Sequence * lhs, const mros_msgs__msg__TopicStatistics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mros_msgs__msg__TopicStatistics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mros_msgs__msg__TopicStatistics__Sequence__copy(
  const mros_msgs__msg__TopicStatistics__Sequence * input,
  mros_msgs__msg__TopicStatistics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mros_msgs__msg__TopicStatistics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mros_msgs__msg__TopicStatistics * data =
      (mros_msgs__msg__TopicStatistics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mros_msgs__msg__TopicStatistics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mros_msgs__msg__TopicStatistics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mros_msgs__msg__TopicStatistics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
