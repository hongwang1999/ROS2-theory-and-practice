// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces_demo:msg/Student.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/student__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
base_interfaces_demo__msg__Student__init(base_interfaces_demo__msg__Student * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    base_interfaces_demo__msg__Student__fini(msg);
    return false;
  }
  // age
  // height
  return true;
}

void
base_interfaces_demo__msg__Student__fini(base_interfaces_demo__msg__Student * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // age
  // height
}

base_interfaces_demo__msg__Student *
base_interfaces_demo__msg__Student__create()
{
  base_interfaces_demo__msg__Student * msg = (base_interfaces_demo__msg__Student *)malloc(sizeof(base_interfaces_demo__msg__Student));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__msg__Student));
  bool success = base_interfaces_demo__msg__Student__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__msg__Student__destroy(base_interfaces_demo__msg__Student * msg)
{
  if (msg) {
    base_interfaces_demo__msg__Student__fini(msg);
  }
  free(msg);
}


bool
base_interfaces_demo__msg__Student__Sequence__init(base_interfaces_demo__msg__Student__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  base_interfaces_demo__msg__Student * data = NULL;
  if (size) {
    data = (base_interfaces_demo__msg__Student *)calloc(size, sizeof(base_interfaces_demo__msg__Student));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__msg__Student__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__msg__Student__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_interfaces_demo__msg__Student__Sequence__fini(base_interfaces_demo__msg__Student__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_interfaces_demo__msg__Student__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_interfaces_demo__msg__Student__Sequence *
base_interfaces_demo__msg__Student__Sequence__create(size_t size)
{
  base_interfaces_demo__msg__Student__Sequence * array = (base_interfaces_demo__msg__Student__Sequence *)malloc(sizeof(base_interfaces_demo__msg__Student__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__msg__Student__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__msg__Student__Sequence__destroy(base_interfaces_demo__msg__Student__Sequence * array)
{
  if (array) {
    base_interfaces_demo__msg__Student__Sequence__fini(array);
  }
  free(array);
}
