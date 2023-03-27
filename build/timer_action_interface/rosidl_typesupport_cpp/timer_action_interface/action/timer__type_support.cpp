// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from timer_action_interface:action/Timer.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "timer_action_interface/action/detail/timer__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace timer_action_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Timer_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Timer_Goal_type_support_ids_t;

static const _Timer_Goal_type_support_ids_t _Timer_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Timer_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Timer_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Timer_Goal_type_support_symbol_names_t _Timer_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, timer_action_interface, action, Timer_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, timer_action_interface, action, Timer_Goal)),
  }
};

typedef struct _Timer_Goal_type_support_data_t
{
  void * data[2];
} _Timer_Goal_type_support_data_t;

static _Timer_Goal_type_support_data_t _Timer_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Timer_Goal_message_typesupport_map = {
  2,
  "timer_action_interface",
  &_Timer_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Timer_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Timer_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Timer_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Timer_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace timer_action_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<timer_action_interface::action::Timer_Goal>()
{
  return &::timer_action_interface::action::rosidl_typesupport_cpp::Timer_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, timer_action_interface, action, Timer_Goal)() {
  return get_message_type_support_handle<timer_action_interface::action::Timer_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "timer_action_interface/action/detail/timer__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace timer_action_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Timer_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Timer_Result_type_support_ids_t;

static const _Timer_Result_type_support_ids_t _Timer_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Timer_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Timer_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Timer_Result_type_support_symbol_names_t _Timer_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, timer_action_interface, action, Timer_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, timer_action_interface, action, Timer_Result)),
  }
};

typedef struct _Timer_Result_type_support_data_t
{
  void * data[2];
} _Timer_Result_type_support_data_t;

static _Timer_Result_type_support_data_t _Timer_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Timer_Result_message_typesupport_map = {
  2,
  "timer_action_interface",
  &_Timer_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Timer_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Timer_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Timer_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Timer_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace timer_action_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<timer_action_interface::action::Timer_Result>()
{
  return &::timer_action_interface::action::rosidl_typesupport_cpp::Timer_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, timer_action_interface, action, Timer_Result)() {
  return get_message_type_support_handle<timer_action_interface::action::Timer_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "timer_action_interface/action/detail/timer__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace timer_action_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Timer_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Timer_Feedback_type_support_ids_t;

static const _Timer_Feedback_type_support_ids_t _Timer_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Timer_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Timer_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Timer_Feedback_type_support_symbol_names_t _Timer_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, timer_action_interface, action, Timer_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, timer_action_interface, action, Timer_Feedback)),
  }
};

typedef struct _Timer_Feedback_type_support_data_t
{
  void * data[2];
} _Timer_Feedback_type_support_data_t;

static _Timer_Feedback_type_support_data_t _Timer_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Timer_Feedback_message_typesupport_map = {
  2,
  "timer_action_interface",
  &_Timer_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Timer_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Timer_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Timer_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Timer_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace timer_action_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<timer_action_interface::action::Timer_Feedback>()
{
  return &::timer_action_interface::action::rosidl_typesupport_cpp::Timer_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, timer_action_interface, action, Timer_Feedback)() {
  return get_message_type_support_handle<timer_action_interface::action::Timer_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "timer_action_interface/action/detail/timer__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace timer_action_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Timer_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Timer_SendGoal_Request_type_support_ids_t;

static const _Timer_SendGoal_Request_type_support_ids_t _Timer_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Timer_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Timer_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Timer_SendGoal_Request_type_support_symbol_names_t _Timer_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, timer_action_interface, action, Timer_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, timer_action_interface, action, Timer_SendGoal_Request)),
  }
};

typedef struct _Timer_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Timer_SendGoal_Request_type_support_data_t;

static _Timer_SendGoal_Request_type_support_data_t _Timer_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Timer_SendGoal_Request_message_typesupport_map = {
  2,
  "timer_action_interface",
  &_Timer_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Timer_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Timer_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Timer_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Timer_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace timer_action_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<timer_action_interface::action::Timer_SendGoal_Request>()
{
  return &::timer_action_interface::action::rosidl_typesupport_cpp::Timer_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, timer_action_interface, action, Timer_SendGoal_Request)() {
  return get_message_type_support_handle<timer_action_interface::action::Timer_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "timer_action_interface/action/detail/timer__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace timer_action_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Timer_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Timer_SendGoal_Response_type_support_ids_t;

static const _Timer_SendGoal_Response_type_support_ids_t _Timer_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Timer_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Timer_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Timer_SendGoal_Response_type_support_symbol_names_t _Timer_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, timer_action_interface, action, Timer_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, timer_action_interface, action, Timer_SendGoal_Response)),
  }
};

typedef struct _Timer_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Timer_SendGoal_Response_type_support_data_t;

static _Timer_SendGoal_Response_type_support_data_t _Timer_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Timer_SendGoal_Response_message_typesupport_map = {
  2,
  "timer_action_interface",
  &_Timer_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Timer_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Timer_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Timer_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Timer_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace timer_action_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<timer_action_interface::action::Timer_SendGoal_Response>()
{
  return &::timer_action_interface::action::rosidl_typesupport_cpp::Timer_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, timer_action_interface, action, Timer_SendGoal_Response)() {
  return get_message_type_support_handle<timer_action_interface::action::Timer_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "timer_action_interface/action/detail/timer__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace timer_action_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Timer_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Timer_SendGoal_type_support_ids_t;

static const _Timer_SendGoal_type_support_ids_t _Timer_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Timer_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Timer_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Timer_SendGoal_type_support_symbol_names_t _Timer_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, timer_action_interface, action, Timer_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, timer_action_interface, action, Timer_SendGoal)),
  }
};

typedef struct _Timer_SendGoal_type_support_data_t
{
  void * data[2];
} _Timer_SendGoal_type_support_data_t;

static _Timer_SendGoal_type_support_data_t _Timer_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Timer_SendGoal_service_typesupport_map = {
  2,
  "timer_action_interface",
  &_Timer_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Timer_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Timer_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Timer_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Timer_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace timer_action_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<timer_action_interface::action::Timer_SendGoal>()
{
  return &::timer_action_interface::action::rosidl_typesupport_cpp::Timer_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "timer_action_interface/action/detail/timer__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace timer_action_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Timer_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Timer_GetResult_Request_type_support_ids_t;

static const _Timer_GetResult_Request_type_support_ids_t _Timer_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Timer_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Timer_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Timer_GetResult_Request_type_support_symbol_names_t _Timer_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, timer_action_interface, action, Timer_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, timer_action_interface, action, Timer_GetResult_Request)),
  }
};

typedef struct _Timer_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Timer_GetResult_Request_type_support_data_t;

static _Timer_GetResult_Request_type_support_data_t _Timer_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Timer_GetResult_Request_message_typesupport_map = {
  2,
  "timer_action_interface",
  &_Timer_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Timer_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Timer_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Timer_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Timer_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace timer_action_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<timer_action_interface::action::Timer_GetResult_Request>()
{
  return &::timer_action_interface::action::rosidl_typesupport_cpp::Timer_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, timer_action_interface, action, Timer_GetResult_Request)() {
  return get_message_type_support_handle<timer_action_interface::action::Timer_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "timer_action_interface/action/detail/timer__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace timer_action_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Timer_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Timer_GetResult_Response_type_support_ids_t;

static const _Timer_GetResult_Response_type_support_ids_t _Timer_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Timer_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Timer_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Timer_GetResult_Response_type_support_symbol_names_t _Timer_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, timer_action_interface, action, Timer_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, timer_action_interface, action, Timer_GetResult_Response)),
  }
};

typedef struct _Timer_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Timer_GetResult_Response_type_support_data_t;

static _Timer_GetResult_Response_type_support_data_t _Timer_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Timer_GetResult_Response_message_typesupport_map = {
  2,
  "timer_action_interface",
  &_Timer_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Timer_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Timer_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Timer_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Timer_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace timer_action_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<timer_action_interface::action::Timer_GetResult_Response>()
{
  return &::timer_action_interface::action::rosidl_typesupport_cpp::Timer_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, timer_action_interface, action, Timer_GetResult_Response)() {
  return get_message_type_support_handle<timer_action_interface::action::Timer_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "timer_action_interface/action/detail/timer__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace timer_action_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Timer_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Timer_GetResult_type_support_ids_t;

static const _Timer_GetResult_type_support_ids_t _Timer_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Timer_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Timer_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Timer_GetResult_type_support_symbol_names_t _Timer_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, timer_action_interface, action, Timer_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, timer_action_interface, action, Timer_GetResult)),
  }
};

typedef struct _Timer_GetResult_type_support_data_t
{
  void * data[2];
} _Timer_GetResult_type_support_data_t;

static _Timer_GetResult_type_support_data_t _Timer_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Timer_GetResult_service_typesupport_map = {
  2,
  "timer_action_interface",
  &_Timer_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Timer_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Timer_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Timer_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Timer_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace timer_action_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<timer_action_interface::action::Timer_GetResult>()
{
  return &::timer_action_interface::action::rosidl_typesupport_cpp::Timer_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "timer_action_interface/action/detail/timer__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace timer_action_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Timer_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Timer_FeedbackMessage_type_support_ids_t;

static const _Timer_FeedbackMessage_type_support_ids_t _Timer_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Timer_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Timer_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Timer_FeedbackMessage_type_support_symbol_names_t _Timer_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, timer_action_interface, action, Timer_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, timer_action_interface, action, Timer_FeedbackMessage)),
  }
};

typedef struct _Timer_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Timer_FeedbackMessage_type_support_data_t;

static _Timer_FeedbackMessage_type_support_data_t _Timer_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Timer_FeedbackMessage_message_typesupport_map = {
  2,
  "timer_action_interface",
  &_Timer_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Timer_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Timer_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Timer_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Timer_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace timer_action_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<timer_action_interface::action::Timer_FeedbackMessage>()
{
  return &::timer_action_interface::action::rosidl_typesupport_cpp::Timer_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, timer_action_interface, action, Timer_FeedbackMessage)() {
  return get_message_type_support_handle<timer_action_interface::action::Timer_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "timer_action_interface/action/detail/timer__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace timer_action_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t Timer_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace timer_action_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<timer_action_interface::action::Timer>()
{
  using ::timer_action_interface::action::rosidl_typesupport_cpp::Timer_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  Timer_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::timer_action_interface::action::Timer::Impl::SendGoalService>();
  Timer_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::timer_action_interface::action::Timer::Impl::GetResultService>();
  Timer_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::timer_action_interface::action::Timer::Impl::CancelGoalService>();
  Timer_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::timer_action_interface::action::Timer::Impl::FeedbackMessage>();
  Timer_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::timer_action_interface::action::Timer::Impl::GoalStatusMessage>();
  return &Timer_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
