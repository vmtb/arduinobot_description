// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arduinobot_interfaces:srv/EulerToQuaternion.idl
// generated code does not contain a copyright notice

#ifndef ARDUINOBOT_INTERFACES__SRV__DETAIL__EULER_TO_QUATERNION__TRAITS_HPP_
#define ARDUINOBOT_INTERFACES__SRV__DETAIL__EULER_TO_QUATERNION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arduinobot_interfaces/srv/detail/euler_to_quaternion__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace arduinobot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const EulerToQuaternion_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EulerToQuaternion_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EulerToQuaternion_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace arduinobot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use arduinobot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arduinobot_interfaces::srv::EulerToQuaternion_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arduinobot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arduinobot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const arduinobot_interfaces::srv::EulerToQuaternion_Request & msg)
{
  return arduinobot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arduinobot_interfaces::srv::EulerToQuaternion_Request>()
{
  return "arduinobot_interfaces::srv::EulerToQuaternion_Request";
}

template<>
inline const char * name<arduinobot_interfaces::srv::EulerToQuaternion_Request>()
{
  return "arduinobot_interfaces/srv/EulerToQuaternion_Request";
}

template<>
struct has_fixed_size<arduinobot_interfaces::srv::EulerToQuaternion_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arduinobot_interfaces::srv::EulerToQuaternion_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arduinobot_interfaces::srv::EulerToQuaternion_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace arduinobot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const EulerToQuaternion_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << ", ";
  }

  // member: d
  {
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EulerToQuaternion_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }

  // member: d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EulerToQuaternion_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace arduinobot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use arduinobot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arduinobot_interfaces::srv::EulerToQuaternion_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arduinobot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arduinobot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const arduinobot_interfaces::srv::EulerToQuaternion_Response & msg)
{
  return arduinobot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arduinobot_interfaces::srv::EulerToQuaternion_Response>()
{
  return "arduinobot_interfaces::srv::EulerToQuaternion_Response";
}

template<>
inline const char * name<arduinobot_interfaces::srv::EulerToQuaternion_Response>()
{
  return "arduinobot_interfaces/srv/EulerToQuaternion_Response";
}

template<>
struct has_fixed_size<arduinobot_interfaces::srv::EulerToQuaternion_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arduinobot_interfaces::srv::EulerToQuaternion_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arduinobot_interfaces::srv::EulerToQuaternion_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arduinobot_interfaces::srv::EulerToQuaternion>()
{
  return "arduinobot_interfaces::srv::EulerToQuaternion";
}

template<>
inline const char * name<arduinobot_interfaces::srv::EulerToQuaternion>()
{
  return "arduinobot_interfaces/srv/EulerToQuaternion";
}

template<>
struct has_fixed_size<arduinobot_interfaces::srv::EulerToQuaternion>
  : std::integral_constant<
    bool,
    has_fixed_size<arduinobot_interfaces::srv::EulerToQuaternion_Request>::value &&
    has_fixed_size<arduinobot_interfaces::srv::EulerToQuaternion_Response>::value
  >
{
};

template<>
struct has_bounded_size<arduinobot_interfaces::srv::EulerToQuaternion>
  : std::integral_constant<
    bool,
    has_bounded_size<arduinobot_interfaces::srv::EulerToQuaternion_Request>::value &&
    has_bounded_size<arduinobot_interfaces::srv::EulerToQuaternion_Response>::value
  >
{
};

template<>
struct is_service<arduinobot_interfaces::srv::EulerToQuaternion>
  : std::true_type
{
};

template<>
struct is_service_request<arduinobot_interfaces::srv::EulerToQuaternion_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arduinobot_interfaces::srv::EulerToQuaternion_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARDUINOBOT_INTERFACES__SRV__DETAIL__EULER_TO_QUATERNION__TRAITS_HPP_
