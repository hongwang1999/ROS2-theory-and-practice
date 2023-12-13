// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from base_interfaces_demo:action/Progress.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__ACTION__DETAIL__PROGRESS__FUNCTIONS_H_
#define BASE_INTERFACES_DEMO__ACTION__DETAIL__PROGRESS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "base_interfaces_demo/msg/rosidl_generator_c__visibility_control.h"

#include "base_interfaces_demo/action/detail/progress__struct.h"

/// Initialize action/Progress message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * base_interfaces_demo__action__Progress_Goal
 * )) before or use
 * base_interfaces_demo__action__Progress_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__action__Progress_Goal__init(base_interfaces_demo__action__Progress_Goal * msg);

/// Finalize action/Progress message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_Goal__fini(base_interfaces_demo__action__Progress_Goal * msg);

/// Create action/Progress message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * base_interfaces_demo__action__Progress_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__action__Progress_Goal *
base_interfaces_demo__action__Progress_Goal__create();

/// Destroy action/Progress message.
/**
 * It calls
 * base_interfaces_demo__action__Progress_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_Goal__destroy(base_interfaces_demo__action__Progress_Goal * msg);


/// Initialize array of action/Progress messages.
/**
 * It allocates the memory for the number of elements and calls
 * base_interfaces_demo__action__Progress_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__action__Progress_Goal__Sequence__init(base_interfaces_demo__action__Progress_Goal__Sequence * array, size_t size);

/// Finalize array of action/Progress messages.
/**
 * It calls
 * base_interfaces_demo__action__Progress_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_Goal__Sequence__fini(base_interfaces_demo__action__Progress_Goal__Sequence * array);

/// Create array of action/Progress messages.
/**
 * It allocates the memory for the array and calls
 * base_interfaces_demo__action__Progress_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__action__Progress_Goal__Sequence *
base_interfaces_demo__action__Progress_Goal__Sequence__create(size_t size);

/// Destroy array of action/Progress messages.
/**
 * It calls
 * base_interfaces_demo__action__Progress_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_Goal__Sequence__destroy(base_interfaces_demo__action__Progress_Goal__Sequence * array);

/// Initialize action/Progress message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * base_interfaces_demo__action__Progress_Result
 * )) before or use
 * base_interfaces_demo__action__Progress_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__action__Progress_Result__init(base_interfaces_demo__action__Progress_Result * msg);

/// Finalize action/Progress message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_Result__fini(base_interfaces_demo__action__Progress_Result * msg);

/// Create action/Progress message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * base_interfaces_demo__action__Progress_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__action__Progress_Result *
base_interfaces_demo__action__Progress_Result__create();

/// Destroy action/Progress message.
/**
 * It calls
 * base_interfaces_demo__action__Progress_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_Result__destroy(base_interfaces_demo__action__Progress_Result * msg);


/// Initialize array of action/Progress messages.
/**
 * It allocates the memory for the number of elements and calls
 * base_interfaces_demo__action__Progress_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__action__Progress_Result__Sequence__init(base_interfaces_demo__action__Progress_Result__Sequence * array, size_t size);

/// Finalize array of action/Progress messages.
/**
 * It calls
 * base_interfaces_demo__action__Progress_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_Result__Sequence__fini(base_interfaces_demo__action__Progress_Result__Sequence * array);

/// Create array of action/Progress messages.
/**
 * It allocates the memory for the array and calls
 * base_interfaces_demo__action__Progress_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__action__Progress_Result__Sequence *
base_interfaces_demo__action__Progress_Result__Sequence__create(size_t size);

/// Destroy array of action/Progress messages.
/**
 * It calls
 * base_interfaces_demo__action__Progress_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_Result__Sequence__destroy(base_interfaces_demo__action__Progress_Result__Sequence * array);

/// Initialize action/Progress message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * base_interfaces_demo__action__Progress_Feedback
 * )) before or use
 * base_interfaces_demo__action__Progress_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__action__Progress_Feedback__init(base_interfaces_demo__action__Progress_Feedback * msg);

/// Finalize action/Progress message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_Feedback__fini(base_interfaces_demo__action__Progress_Feedback * msg);

/// Create action/Progress message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * base_interfaces_demo__action__Progress_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__action__Progress_Feedback *
base_interfaces_demo__action__Progress_Feedback__create();

/// Destroy action/Progress message.
/**
 * It calls
 * base_interfaces_demo__action__Progress_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_Feedback__destroy(base_interfaces_demo__action__Progress_Feedback * msg);


/// Initialize array of action/Progress messages.
/**
 * It allocates the memory for the number of elements and calls
 * base_interfaces_demo__action__Progress_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__action__Progress_Feedback__Sequence__init(base_interfaces_demo__action__Progress_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Progress messages.
/**
 * It calls
 * base_interfaces_demo__action__Progress_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_Feedback__Sequence__fini(base_interfaces_demo__action__Progress_Feedback__Sequence * array);

/// Create array of action/Progress messages.
/**
 * It allocates the memory for the array and calls
 * base_interfaces_demo__action__Progress_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__action__Progress_Feedback__Sequence *
base_interfaces_demo__action__Progress_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Progress messages.
/**
 * It calls
 * base_interfaces_demo__action__Progress_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_Feedback__Sequence__destroy(base_interfaces_demo__action__Progress_Feedback__Sequence * array);

/// Initialize action/Progress message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * base_interfaces_demo__action__Progress_SendGoal_Request
 * )) before or use
 * base_interfaces_demo__action__Progress_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__action__Progress_SendGoal_Request__init(base_interfaces_demo__action__Progress_SendGoal_Request * msg);

/// Finalize action/Progress message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_SendGoal_Request__fini(base_interfaces_demo__action__Progress_SendGoal_Request * msg);

/// Create action/Progress message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * base_interfaces_demo__action__Progress_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__action__Progress_SendGoal_Request *
base_interfaces_demo__action__Progress_SendGoal_Request__create();

/// Destroy action/Progress message.
/**
 * It calls
 * base_interfaces_demo__action__Progress_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_SendGoal_Request__destroy(base_interfaces_demo__action__Progress_SendGoal_Request * msg);


/// Initialize array of action/Progress messages.
/**
 * It allocates the memory for the number of elements and calls
 * base_interfaces_demo__action__Progress_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__action__Progress_SendGoal_Request__Sequence__init(base_interfaces_demo__action__Progress_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Progress messages.
/**
 * It calls
 * base_interfaces_demo__action__Progress_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_SendGoal_Request__Sequence__fini(base_interfaces_demo__action__Progress_SendGoal_Request__Sequence * array);

/// Create array of action/Progress messages.
/**
 * It allocates the memory for the array and calls
 * base_interfaces_demo__action__Progress_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__action__Progress_SendGoal_Request__Sequence *
base_interfaces_demo__action__Progress_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Progress messages.
/**
 * It calls
 * base_interfaces_demo__action__Progress_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_SendGoal_Request__Sequence__destroy(base_interfaces_demo__action__Progress_SendGoal_Request__Sequence * array);

/// Initialize action/Progress message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * base_interfaces_demo__action__Progress_SendGoal_Response
 * )) before or use
 * base_interfaces_demo__action__Progress_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__action__Progress_SendGoal_Response__init(base_interfaces_demo__action__Progress_SendGoal_Response * msg);

/// Finalize action/Progress message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_SendGoal_Response__fini(base_interfaces_demo__action__Progress_SendGoal_Response * msg);

/// Create action/Progress message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * base_interfaces_demo__action__Progress_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__action__Progress_SendGoal_Response *
base_interfaces_demo__action__Progress_SendGoal_Response__create();

/// Destroy action/Progress message.
/**
 * It calls
 * base_interfaces_demo__action__Progress_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_SendGoal_Response__destroy(base_interfaces_demo__action__Progress_SendGoal_Response * msg);


/// Initialize array of action/Progress messages.
/**
 * It allocates the memory for the number of elements and calls
 * base_interfaces_demo__action__Progress_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__action__Progress_SendGoal_Response__Sequence__init(base_interfaces_demo__action__Progress_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Progress messages.
/**
 * It calls
 * base_interfaces_demo__action__Progress_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_SendGoal_Response__Sequence__fini(base_interfaces_demo__action__Progress_SendGoal_Response__Sequence * array);

/// Create array of action/Progress messages.
/**
 * It allocates the memory for the array and calls
 * base_interfaces_demo__action__Progress_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__action__Progress_SendGoal_Response__Sequence *
base_interfaces_demo__action__Progress_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Progress messages.
/**
 * It calls
 * base_interfaces_demo__action__Progress_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_SendGoal_Response__Sequence__destroy(base_interfaces_demo__action__Progress_SendGoal_Response__Sequence * array);

/// Initialize action/Progress message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * base_interfaces_demo__action__Progress_GetResult_Request
 * )) before or use
 * base_interfaces_demo__action__Progress_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__action__Progress_GetResult_Request__init(base_interfaces_demo__action__Progress_GetResult_Request * msg);

/// Finalize action/Progress message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_GetResult_Request__fini(base_interfaces_demo__action__Progress_GetResult_Request * msg);

/// Create action/Progress message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * base_interfaces_demo__action__Progress_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__action__Progress_GetResult_Request *
base_interfaces_demo__action__Progress_GetResult_Request__create();

/// Destroy action/Progress message.
/**
 * It calls
 * base_interfaces_demo__action__Progress_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_GetResult_Request__destroy(base_interfaces_demo__action__Progress_GetResult_Request * msg);


/// Initialize array of action/Progress messages.
/**
 * It allocates the memory for the number of elements and calls
 * base_interfaces_demo__action__Progress_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__action__Progress_GetResult_Request__Sequence__init(base_interfaces_demo__action__Progress_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Progress messages.
/**
 * It calls
 * base_interfaces_demo__action__Progress_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_GetResult_Request__Sequence__fini(base_interfaces_demo__action__Progress_GetResult_Request__Sequence * array);

/// Create array of action/Progress messages.
/**
 * It allocates the memory for the array and calls
 * base_interfaces_demo__action__Progress_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__action__Progress_GetResult_Request__Sequence *
base_interfaces_demo__action__Progress_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Progress messages.
/**
 * It calls
 * base_interfaces_demo__action__Progress_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_GetResult_Request__Sequence__destroy(base_interfaces_demo__action__Progress_GetResult_Request__Sequence * array);

/// Initialize action/Progress message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * base_interfaces_demo__action__Progress_GetResult_Response
 * )) before or use
 * base_interfaces_demo__action__Progress_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__action__Progress_GetResult_Response__init(base_interfaces_demo__action__Progress_GetResult_Response * msg);

/// Finalize action/Progress message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_GetResult_Response__fini(base_interfaces_demo__action__Progress_GetResult_Response * msg);

/// Create action/Progress message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * base_interfaces_demo__action__Progress_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__action__Progress_GetResult_Response *
base_interfaces_demo__action__Progress_GetResult_Response__create();

/// Destroy action/Progress message.
/**
 * It calls
 * base_interfaces_demo__action__Progress_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_GetResult_Response__destroy(base_interfaces_demo__action__Progress_GetResult_Response * msg);


/// Initialize array of action/Progress messages.
/**
 * It allocates the memory for the number of elements and calls
 * base_interfaces_demo__action__Progress_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__action__Progress_GetResult_Response__Sequence__init(base_interfaces_demo__action__Progress_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Progress messages.
/**
 * It calls
 * base_interfaces_demo__action__Progress_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_GetResult_Response__Sequence__fini(base_interfaces_demo__action__Progress_GetResult_Response__Sequence * array);

/// Create array of action/Progress messages.
/**
 * It allocates the memory for the array and calls
 * base_interfaces_demo__action__Progress_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__action__Progress_GetResult_Response__Sequence *
base_interfaces_demo__action__Progress_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Progress messages.
/**
 * It calls
 * base_interfaces_demo__action__Progress_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_GetResult_Response__Sequence__destroy(base_interfaces_demo__action__Progress_GetResult_Response__Sequence * array);

/// Initialize action/Progress message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * base_interfaces_demo__action__Progress_FeedbackMessage
 * )) before or use
 * base_interfaces_demo__action__Progress_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__action__Progress_FeedbackMessage__init(base_interfaces_demo__action__Progress_FeedbackMessage * msg);

/// Finalize action/Progress message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_FeedbackMessage__fini(base_interfaces_demo__action__Progress_FeedbackMessage * msg);

/// Create action/Progress message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * base_interfaces_demo__action__Progress_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__action__Progress_FeedbackMessage *
base_interfaces_demo__action__Progress_FeedbackMessage__create();

/// Destroy action/Progress message.
/**
 * It calls
 * base_interfaces_demo__action__Progress_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_FeedbackMessage__destroy(base_interfaces_demo__action__Progress_FeedbackMessage * msg);


/// Initialize array of action/Progress messages.
/**
 * It allocates the memory for the number of elements and calls
 * base_interfaces_demo__action__Progress_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__action__Progress_FeedbackMessage__Sequence__init(base_interfaces_demo__action__Progress_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Progress messages.
/**
 * It calls
 * base_interfaces_demo__action__Progress_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_FeedbackMessage__Sequence__fini(base_interfaces_demo__action__Progress_FeedbackMessage__Sequence * array);

/// Create array of action/Progress messages.
/**
 * It allocates the memory for the array and calls
 * base_interfaces_demo__action__Progress_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__action__Progress_FeedbackMessage__Sequence *
base_interfaces_demo__action__Progress_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Progress messages.
/**
 * It calls
 * base_interfaces_demo__action__Progress_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__action__Progress_FeedbackMessage__Sequence__destroy(base_interfaces_demo__action__Progress_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__ACTION__DETAIL__PROGRESS__FUNCTIONS_H_
