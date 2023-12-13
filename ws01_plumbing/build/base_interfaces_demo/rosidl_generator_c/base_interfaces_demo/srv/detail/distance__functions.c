// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces_demo:srv/Distance.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/srv/detail/distance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
base_interfaces_demo__srv__Distance_Request__init(base_interfaces_demo__srv__Distance_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // theta
  return true;
}

void
base_interfaces_demo__srv__Distance_Request__fini(base_interfaces_demo__srv__Distance_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // theta
}

base_interfaces_demo__srv__Distance_Request *
base_interfaces_demo__srv__Distance_Request__create()
{
  base_interfaces_demo__srv__Distance_Request * msg = (base_interfaces_demo__srv__Distance_Request *)malloc(sizeof(base_interfaces_demo__srv__Distance_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__srv__Distance_Request));
  bool success = base_interfaces_demo__srv__Distance_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__srv__Distance_Request__destroy(base_interfaces_demo__srv__Distance_Request * msg)
{
  if (msg) {
    base_interfaces_demo__srv__Distance_Request__fini(msg);
  }
  free(msg);
}


bool
base_interfaces_demo__srv__Distance_Request__Sequence__init(base_interfaces_demo__srv__Distance_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  base_interfaces_demo__srv__Distance_Request * data = NULL;
  if (size) {
    data = (base_interfaces_demo__srv__Distance_Request *)calloc(size, sizeof(base_interfaces_demo__srv__Distance_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__srv__Distance_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__srv__Distance_Request__fini(&data[i - 1]);
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
base_interfaces_demo__srv__Distance_Request__Sequence__fini(base_interfaces_demo__srv__Distance_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_interfaces_demo__srv__Distance_Request__fini(&array->data[i]);
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

base_interfaces_demo__srv__Distance_Request__Sequence *
base_interfaces_demo__srv__Distance_Request__Sequence__create(size_t size)
{
  base_interfaces_demo__srv__Distance_Request__Sequence * array = (base_interfaces_demo__srv__Distance_Request__Sequence *)malloc(sizeof(base_interfaces_demo__srv__Distance_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__srv__Distance_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__srv__Distance_Request__Sequence__destroy(base_interfaces_demo__srv__Distance_Request__Sequence * array)
{
  if (array) {
    base_interfaces_demo__srv__Distance_Request__Sequence__fini(array);
  }
  free(array);
}


bool
base_interfaces_demo__srv__Distance_Response__init(base_interfaces_demo__srv__Distance_Response * msg)
{
  if (!msg) {
    return false;
  }
  // distance
  return true;
}

void
base_interfaces_demo__srv__Distance_Response__fini(base_interfaces_demo__srv__Distance_Response * msg)
{
  if (!msg) {
    return;
  }
  // distance
}

base_interfaces_demo__srv__Distance_Response *
base_interfaces_demo__srv__Distance_Response__create()
{
  base_interfaces_demo__srv__Distance_Response * msg = (base_interfaces_demo__srv__Distance_Response *)malloc(sizeof(base_interfaces_demo__srv__Distance_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__srv__Distance_Response));
  bool success = base_interfaces_demo__srv__Distance_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__srv__Distance_Response__destroy(base_interfaces_demo__srv__Distance_Response * msg)
{
  if (msg) {
    base_interfaces_demo__srv__Distance_Response__fini(msg);
  }
  free(msg);
}


bool
base_interfaces_demo__srv__Distance_Response__Sequence__init(base_interfaces_demo__srv__Distance_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  base_interfaces_demo__srv__Distance_Response * data = NULL;
  if (size) {
    data = (base_interfaces_demo__srv__Distance_Response *)calloc(size, sizeof(base_interfaces_demo__srv__Distance_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__srv__Distance_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__srv__Distance_Response__fini(&data[i - 1]);
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
base_interfaces_demo__srv__Distance_Response__Sequence__fini(base_interfaces_demo__srv__Distance_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_interfaces_demo__srv__Distance_Response__fini(&array->data[i]);
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

base_interfaces_demo__srv__Distance_Response__Sequence *
base_interfaces_demo__srv__Distance_Response__Sequence__create(size_t size)
{
  base_interfaces_demo__srv__Distance_Response__Sequence * array = (base_interfaces_demo__srv__Distance_Response__Sequence *)malloc(sizeof(base_interfaces_demo__srv__Distance_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__srv__Distance_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__srv__Distance_Response__Sequence__destroy(base_interfaces_demo__srv__Distance_Response__Sequence * array)
{
  if (array) {
    base_interfaces_demo__srv__Distance_Response__Sequence__fini(array);
  }
  free(array);
}
