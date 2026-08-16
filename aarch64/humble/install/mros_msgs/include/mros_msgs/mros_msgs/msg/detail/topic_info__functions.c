// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mros_msgs:msg/TopicInfo.idl
// generated code does not contain a copyright notice
#include "mros_msgs/msg/detail/topic_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `topic_name`
// Member `message_type`
// Member `md5sum`
// Member `node`
// Member `definition`
#include "rosidl_runtime_c/string_functions.h"

bool
mros_msgs__msg__TopicInfo__init(mros_msgs__msg__TopicInfo * msg)
{
  if (!msg) {
    return false;
  }
  // topic_id
  // topic_name
  if (!rosidl_runtime_c__String__init(&msg->topic_name)) {
    mros_msgs__msg__TopicInfo__fini(msg);
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__init(&msg->message_type)) {
    mros_msgs__msg__TopicInfo__fini(msg);
    return false;
  }
  // md5sum
  if (!rosidl_runtime_c__String__init(&msg->md5sum)) {
    mros_msgs__msg__TopicInfo__fini(msg);
    return false;
  }
  // buffer_size
  // negotiated
  // node
  if (!rosidl_runtime_c__String__init(&msg->node)) {
    mros_msgs__msg__TopicInfo__fini(msg);
    return false;
  }
  // definition
  if (!rosidl_runtime_c__String__init(&msg->definition)) {
    mros_msgs__msg__TopicInfo__fini(msg);
    return false;
  }
  // latch
  // reliable
  // queue_size
  // enabled
  return true;
}

void
mros_msgs__msg__TopicInfo__fini(mros_msgs__msg__TopicInfo * msg)
{
  if (!msg) {
    return;
  }
  // topic_id
  // topic_name
  rosidl_runtime_c__String__fini(&msg->topic_name);
  // message_type
  rosidl_runtime_c__String__fini(&msg->message_type);
  // md5sum
  rosidl_runtime_c__String__fini(&msg->md5sum);
  // buffer_size
  // negotiated
  // node
  rosidl_runtime_c__String__fini(&msg->node);
  // definition
  rosidl_runtime_c__String__fini(&msg->definition);
  // latch
  // reliable
  // queue_size
  // enabled
}

bool
mros_msgs__msg__TopicInfo__are_equal(const mros_msgs__msg__TopicInfo * lhs, const mros_msgs__msg__TopicInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // topic_id
  if (lhs->topic_id != rhs->topic_id) {
    return false;
  }
  // topic_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->topic_name), &(rhs->topic_name)))
  {
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message_type), &(rhs->message_type)))
  {
    return false;
  }
  // md5sum
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->md5sum), &(rhs->md5sum)))
  {
    return false;
  }
  // buffer_size
  if (lhs->buffer_size != rhs->buffer_size) {
    return false;
  }
  // negotiated
  if (lhs->negotiated != rhs->negotiated) {
    return false;
  }
  // node
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node), &(rhs->node)))
  {
    return false;
  }
  // definition
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->definition), &(rhs->definition)))
  {
    return false;
  }
  // latch
  if (lhs->latch != rhs->latch) {
    return false;
  }
  // reliable
  if (lhs->reliable != rhs->reliable) {
    return false;
  }
  // queue_size
  if (lhs->queue_size != rhs->queue_size) {
    return false;
  }
  // enabled
  if (lhs->enabled != rhs->enabled) {
    return false;
  }
  return true;
}

bool
mros_msgs__msg__TopicInfo__copy(
  const mros_msgs__msg__TopicInfo * input,
  mros_msgs__msg__TopicInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // topic_id
  output->topic_id = input->topic_id;
  // topic_name
  if (!rosidl_runtime_c__String__copy(
      &(input->topic_name), &(output->topic_name)))
  {
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__copy(
      &(input->message_type), &(output->message_type)))
  {
    return false;
  }
  // md5sum
  if (!rosidl_runtime_c__String__copy(
      &(input->md5sum), &(output->md5sum)))
  {
    return false;
  }
  // buffer_size
  output->buffer_size = input->buffer_size;
  // negotiated
  output->negotiated = input->negotiated;
  // node
  if (!rosidl_runtime_c__String__copy(
      &(input->node), &(output->node)))
  {
    return false;
  }
  // definition
  if (!rosidl_runtime_c__String__copy(
      &(input->definition), &(output->definition)))
  {
    return false;
  }
  // latch
  output->latch = input->latch;
  // reliable
  output->reliable = input->reliable;
  // queue_size
  output->queue_size = input->queue_size;
  // enabled
  output->enabled = input->enabled;
  return true;
}

mros_msgs__msg__TopicInfo *
mros_msgs__msg__TopicInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mros_msgs__msg__TopicInfo * msg = (mros_msgs__msg__TopicInfo *)allocator.allocate(sizeof(mros_msgs__msg__TopicInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mros_msgs__msg__TopicInfo));
  bool success = mros_msgs__msg__TopicInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mros_msgs__msg__TopicInfo__destroy(mros_msgs__msg__TopicInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mros_msgs__msg__TopicInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mros_msgs__msg__TopicInfo__Sequence__init(mros_msgs__msg__TopicInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mros_msgs__msg__TopicInfo * data = NULL;

  if (size) {
    data = (mros_msgs__msg__TopicInfo *)allocator.zero_allocate(size, sizeof(mros_msgs__msg__TopicInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mros_msgs__msg__TopicInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mros_msgs__msg__TopicInfo__fini(&data[i - 1]);
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
mros_msgs__msg__TopicInfo__Sequence__fini(mros_msgs__msg__TopicInfo__Sequence * array)
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
      mros_msgs__msg__TopicInfo__fini(&array->data[i]);
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

mros_msgs__msg__TopicInfo__Sequence *
mros_msgs__msg__TopicInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mros_msgs__msg__TopicInfo__Sequence * array = (mros_msgs__msg__TopicInfo__Sequence *)allocator.allocate(sizeof(mros_msgs__msg__TopicInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mros_msgs__msg__TopicInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mros_msgs__msg__TopicInfo__Sequence__destroy(mros_msgs__msg__TopicInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mros_msgs__msg__TopicInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mros_msgs__msg__TopicInfo__Sequence__are_equal(const mros_msgs__msg__TopicInfo__Sequence * lhs, const mros_msgs__msg__TopicInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mros_msgs__msg__TopicInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mros_msgs__msg__TopicInfo__Sequence__copy(
  const mros_msgs__msg__TopicInfo__Sequence * input,
  mros_msgs__msg__TopicInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mros_msgs__msg__TopicInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mros_msgs__msg__TopicInfo * data =
      (mros_msgs__msg__TopicInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mros_msgs__msg__TopicInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mros_msgs__msg__TopicInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mros_msgs__msg__TopicInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
