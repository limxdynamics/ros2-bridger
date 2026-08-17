// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from teleop_msgs:msg/TeleopMsg.idl
// generated code does not contain a copyright notice
#include "teleop_msgs/msg/detail/teleop_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `world`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `anchors`
#include "teleop_msgs/msg/detail/key_point__functions.h"
// Member `joint_cmd`
#include "controller_msgs/msg/detail/joint_cmd__functions.h"

bool
teleop_msgs__msg__TeleopMsg__init(teleop_msgs__msg__TeleopMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    teleop_msgs__msg__TeleopMsg__fini(msg);
    return false;
  }
  // world
  if (!geometry_msgs__msg__Pose__init(&msg->world)) {
    teleop_msgs__msg__TeleopMsg__fini(msg);
    return false;
  }
  // anchors
  if (!teleop_msgs__msg__KeyPoint__Sequence__init(&msg->anchors, 0)) {
    teleop_msgs__msg__TeleopMsg__fini(msg);
    return false;
  }
  // joint_cmd
  if (!controller_msgs__msg__JointCmd__init(&msg->joint_cmd)) {
    teleop_msgs__msg__TeleopMsg__fini(msg);
    return false;
  }
  return true;
}

void
teleop_msgs__msg__TeleopMsg__fini(teleop_msgs__msg__TeleopMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // world
  geometry_msgs__msg__Pose__fini(&msg->world);
  // anchors
  teleop_msgs__msg__KeyPoint__Sequence__fini(&msg->anchors);
  // joint_cmd
  controller_msgs__msg__JointCmd__fini(&msg->joint_cmd);
}

bool
teleop_msgs__msg__TeleopMsg__are_equal(const teleop_msgs__msg__TeleopMsg * lhs, const teleop_msgs__msg__TeleopMsg * rhs)
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
  // world
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->world), &(rhs->world)))
  {
    return false;
  }
  // anchors
  if (!teleop_msgs__msg__KeyPoint__Sequence__are_equal(
      &(lhs->anchors), &(rhs->anchors)))
  {
    return false;
  }
  // joint_cmd
  if (!controller_msgs__msg__JointCmd__are_equal(
      &(lhs->joint_cmd), &(rhs->joint_cmd)))
  {
    return false;
  }
  return true;
}

bool
teleop_msgs__msg__TeleopMsg__copy(
  const teleop_msgs__msg__TeleopMsg * input,
  teleop_msgs__msg__TeleopMsg * output)
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
  // world
  if (!geometry_msgs__msg__Pose__copy(
      &(input->world), &(output->world)))
  {
    return false;
  }
  // anchors
  if (!teleop_msgs__msg__KeyPoint__Sequence__copy(
      &(input->anchors), &(output->anchors)))
  {
    return false;
  }
  // joint_cmd
  if (!controller_msgs__msg__JointCmd__copy(
      &(input->joint_cmd), &(output->joint_cmd)))
  {
    return false;
  }
  return true;
}

teleop_msgs__msg__TeleopMsg *
teleop_msgs__msg__TeleopMsg__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__TeleopMsg * msg = (teleop_msgs__msg__TeleopMsg *)allocator.allocate(sizeof(teleop_msgs__msg__TeleopMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(teleop_msgs__msg__TeleopMsg));
  bool success = teleop_msgs__msg__TeleopMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
teleop_msgs__msg__TeleopMsg__destroy(teleop_msgs__msg__TeleopMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    teleop_msgs__msg__TeleopMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
teleop_msgs__msg__TeleopMsg__Sequence__init(teleop_msgs__msg__TeleopMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__TeleopMsg * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(teleop_msgs__msg__TeleopMsg)) {
      return false;
    }
    data = (teleop_msgs__msg__TeleopMsg *)allocator.zero_allocate(size, sizeof(teleop_msgs__msg__TeleopMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = teleop_msgs__msg__TeleopMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        teleop_msgs__msg__TeleopMsg__fini(&data[i - 1]);
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
teleop_msgs__msg__TeleopMsg__Sequence__fini(teleop_msgs__msg__TeleopMsg__Sequence * array)
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
      teleop_msgs__msg__TeleopMsg__fini(&array->data[i]);
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

teleop_msgs__msg__TeleopMsg__Sequence *
teleop_msgs__msg__TeleopMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__TeleopMsg__Sequence * array = (teleop_msgs__msg__TeleopMsg__Sequence *)allocator.allocate(sizeof(teleop_msgs__msg__TeleopMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = teleop_msgs__msg__TeleopMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
teleop_msgs__msg__TeleopMsg__Sequence__destroy(teleop_msgs__msg__TeleopMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    teleop_msgs__msg__TeleopMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
teleop_msgs__msg__TeleopMsg__Sequence__are_equal(const teleop_msgs__msg__TeleopMsg__Sequence * lhs, const teleop_msgs__msg__TeleopMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!teleop_msgs__msg__TeleopMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
teleop_msgs__msg__TeleopMsg__Sequence__copy(
  const teleop_msgs__msg__TeleopMsg__Sequence * input,
  teleop_msgs__msg__TeleopMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(teleop_msgs__msg__TeleopMsg)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(teleop_msgs__msg__TeleopMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    teleop_msgs__msg__TeleopMsg * data =
      (teleop_msgs__msg__TeleopMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!teleop_msgs__msg__TeleopMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          teleop_msgs__msg__TeleopMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!teleop_msgs__msg__TeleopMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
