// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arduinobot_interfaces:srv/QuaternionToEuler.idl
// generated code does not contain a copyright notice

#ifndef ARDUINOBOT_INTERFACES__SRV__DETAIL__QUATERNION_TO_EULER__BUILDER_HPP_
#define ARDUINOBOT_INTERFACES__SRV__DETAIL__QUATERNION_TO_EULER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arduinobot_interfaces/srv/detail/quaternion_to_euler__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arduinobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_QuaternionToEuler_Request_d
{
public:
  explicit Init_QuaternionToEuler_Request_d(::arduinobot_interfaces::srv::QuaternionToEuler_Request & msg)
  : msg_(msg)
  {}
  ::arduinobot_interfaces::srv::QuaternionToEuler_Request d(::arduinobot_interfaces::srv::QuaternionToEuler_Request::_d_type arg)
  {
    msg_.d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduinobot_interfaces::srv::QuaternionToEuler_Request msg_;
};

class Init_QuaternionToEuler_Request_c
{
public:
  explicit Init_QuaternionToEuler_Request_c(::arduinobot_interfaces::srv::QuaternionToEuler_Request & msg)
  : msg_(msg)
  {}
  Init_QuaternionToEuler_Request_d c(::arduinobot_interfaces::srv::QuaternionToEuler_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return Init_QuaternionToEuler_Request_d(msg_);
  }

private:
  ::arduinobot_interfaces::srv::QuaternionToEuler_Request msg_;
};

class Init_QuaternionToEuler_Request_b
{
public:
  explicit Init_QuaternionToEuler_Request_b(::arduinobot_interfaces::srv::QuaternionToEuler_Request & msg)
  : msg_(msg)
  {}
  Init_QuaternionToEuler_Request_c b(::arduinobot_interfaces::srv::QuaternionToEuler_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_QuaternionToEuler_Request_c(msg_);
  }

private:
  ::arduinobot_interfaces::srv::QuaternionToEuler_Request msg_;
};

class Init_QuaternionToEuler_Request_a
{
public:
  Init_QuaternionToEuler_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuaternionToEuler_Request_b a(::arduinobot_interfaces::srv::QuaternionToEuler_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_QuaternionToEuler_Request_b(msg_);
  }

private:
  ::arduinobot_interfaces::srv::QuaternionToEuler_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduinobot_interfaces::srv::QuaternionToEuler_Request>()
{
  return arduinobot_interfaces::srv::builder::Init_QuaternionToEuler_Request_a();
}

}  // namespace arduinobot_interfaces


namespace arduinobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_QuaternionToEuler_Response_yaw
{
public:
  explicit Init_QuaternionToEuler_Response_yaw(::arduinobot_interfaces::srv::QuaternionToEuler_Response & msg)
  : msg_(msg)
  {}
  ::arduinobot_interfaces::srv::QuaternionToEuler_Response yaw(::arduinobot_interfaces::srv::QuaternionToEuler_Response::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduinobot_interfaces::srv::QuaternionToEuler_Response msg_;
};

class Init_QuaternionToEuler_Response_pitch
{
public:
  explicit Init_QuaternionToEuler_Response_pitch(::arduinobot_interfaces::srv::QuaternionToEuler_Response & msg)
  : msg_(msg)
  {}
  Init_QuaternionToEuler_Response_yaw pitch(::arduinobot_interfaces::srv::QuaternionToEuler_Response::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_QuaternionToEuler_Response_yaw(msg_);
  }

private:
  ::arduinobot_interfaces::srv::QuaternionToEuler_Response msg_;
};

class Init_QuaternionToEuler_Response_roll
{
public:
  Init_QuaternionToEuler_Response_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuaternionToEuler_Response_pitch roll(::arduinobot_interfaces::srv::QuaternionToEuler_Response::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_QuaternionToEuler_Response_pitch(msg_);
  }

private:
  ::arduinobot_interfaces::srv::QuaternionToEuler_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduinobot_interfaces::srv::QuaternionToEuler_Response>()
{
  return arduinobot_interfaces::srv::builder::Init_QuaternionToEuler_Response_roll();
}

}  // namespace arduinobot_interfaces

#endif  // ARDUINOBOT_INTERFACES__SRV__DETAIL__QUATERNION_TO_EULER__BUILDER_HPP_
