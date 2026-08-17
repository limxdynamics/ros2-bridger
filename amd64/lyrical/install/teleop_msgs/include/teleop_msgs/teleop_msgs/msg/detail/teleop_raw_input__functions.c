// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from teleop_msgs:msg/TeleopRawInput.idl
// generated code does not contain a copyright notice
#include "teleop_msgs/msg/detail/teleop_raw_input__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
teleop_msgs__msg__TeleopRawInput__init(teleop_msgs__msg__TeleopRawInput * msg)
{
  if (!msg) {
    return false;
  }
  // left_trigger
  // right_trigger
  // left_grip
  // right_grip
  // left_stick
  // right_stick
  // buttons
  // buttons_valid
  return true;
}

void
teleop_msgs__msg__TeleopRawInput__fini(teleop_msgs__msg__TeleopRawInput * msg)
{
  if (!msg) {
    return;
  }
  // left_trigger
  // right_trigger
  // left_grip
  // right_grip
  // left_stick
  // right_stick
  // buttons
  // buttons_valid
}

bool
teleop_msgs__msg__TeleopRawInput__are_equal(const teleop_msgs__msg__TeleopRawInput * lhs, const teleop_msgs__msg__TeleopRawInput * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_trigger
  if (lhs->left_trigger != rhs->left_trigger) {
    return false;
  }
  // right_trigger
  if (lhs->right_trigger != rhs->right_trigger) {
    return false;
  }
  // left_grip
  if (lhs->left_grip != rhs->left_grip) {
    return false;
  }
  // right_grip
  if (lhs->right_grip != rhs->right_grip) {
    return false;
  }
  // left_stick
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->left_stick[i] != rhs->left_stick[i]) {
      return false;
    }
  }
  // right_stick
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->right_stick[i] != rhs->right_stick[i]) {
      return false;
    }
  }
  // buttons
  if (lhs->buttons != rhs->buttons) {
    return false;
  }
  // buttons_valid
  if (lhs->buttons_valid != rhs->buttons_valid) {
    return false;
  }
  return true;
}

bool
teleop_msgs__msg__TeleopRawInput__copy(
  const teleop_msgs__msg__TeleopRawInput * input,
  teleop_msgs__msg__TeleopRawInput * output)
{
  if (!input || !output) {
    return false;
  }
  // left_trigger
  output->left_trigger = input->left_trigger;
  // right_trigger
  output->right_trigger = input->right_trigger;
  // left_grip
  output->left_grip = input->left_grip;
  // right_grip
  output->right_grip = input->right_grip;
  // left_stick
  for (size_t i = 0; i < 2; ++i) {
    output->left_stick[i] = input->left_stick[i];
  }
  // right_stick
  for (size_t i = 0; i < 2; ++i) {
    output->right_stick[i] = input->right_stick[i];
  }
  // buttons
  output->buttons = input->buttons;
  // buttons_valid
  output->buttons_valid = input->buttons_valid;
  return true;
}

teleop_msgs__msg__TeleopRawInput *
teleop_msgs__msg__TeleopRawInput__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__TeleopRawInput * msg = (teleop_msgs__msg__TeleopRawInput *)allocator.allocate(sizeof(teleop_msgs__msg__TeleopRawInput), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(teleop_msgs__msg__TeleopRawInput));
  bool success = teleop_msgs__msg__TeleopRawInput__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
teleop_msgs__msg__TeleopRawInput__destroy(teleop_msgs__msg__TeleopRawInput * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    teleop_msgs__msg__TeleopRawInput__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
teleop_msgs__msg__TeleopRawInput__Sequence__init(teleop_msgs__msg__TeleopRawInput__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__TeleopRawInput * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(teleop_msgs__msg__TeleopRawInput)) {
      return false;
    }
    data = (teleop_msgs__msg__TeleopRawInput *)allocator.zero_allocate(size, sizeof(teleop_msgs__msg__TeleopRawInput), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = teleop_msgs__msg__TeleopRawInput__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        teleop_msgs__msg__TeleopRawInput__fini(&data[i - 1]);
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
teleop_msgs__msg__TeleopRawInput__Sequence__fini(teleop_msgs__msg__TeleopRawInput__Sequence * array)
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
      teleop_msgs__msg__TeleopRawInput__fini(&array->data[i]);
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

teleop_msgs__msg__TeleopRawInput__Sequence *
teleop_msgs__msg__TeleopRawInput__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__TeleopRawInput__Sequence * array = (teleop_msgs__msg__TeleopRawInput__Sequence *)allocator.allocate(sizeof(teleop_msgs__msg__TeleopRawInput__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = teleop_msgs__msg__TeleopRawInput__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
teleop_msgs__msg__TeleopRawInput__Sequence__destroy(teleop_msgs__msg__TeleopRawInput__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    teleop_msgs__msg__TeleopRawInput__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
teleop_msgs__msg__TeleopRawInput__Sequence__are_equal(const teleop_msgs__msg__TeleopRawInput__Sequence * lhs, const teleop_msgs__msg__TeleopRawInput__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!teleop_msgs__msg__TeleopRawInput__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
teleop_msgs__msg__TeleopRawInput__Sequence__copy(
  const teleop_msgs__msg__TeleopRawInput__Sequence * input,
  teleop_msgs__msg__TeleopRawInput__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(teleop_msgs__msg__TeleopRawInput)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(teleop_msgs__msg__TeleopRawInput);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    teleop_msgs__msg__TeleopRawInput * data =
      (teleop_msgs__msg__TeleopRawInput *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!teleop_msgs__msg__TeleopRawInput__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          teleop_msgs__msg__TeleopRawInput__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!teleop_msgs__msg__TeleopRawInput__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
