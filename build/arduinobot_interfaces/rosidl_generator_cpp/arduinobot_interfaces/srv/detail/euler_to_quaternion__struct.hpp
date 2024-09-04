// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arduinobot_interfaces:srv/EulerToQuaternion.idl
// generated code does not contain a copyright notice

#ifndef ARDUINOBOT_INTERFACES__SRV__DETAIL__EULER_TO_QUATERNION__STRUCT_HPP_
#define ARDUINOBOT_INTERFACES__SRV__DETAIL__EULER_TO_QUATERNION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__arduinobot_interfaces__srv__EulerToQuaternion_Request __attribute__((deprecated))
#else
# define DEPRECATED__arduinobot_interfaces__srv__EulerToQuaternion_Request __declspec(deprecated)
#endif

namespace arduinobot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EulerToQuaternion_Request_
{
  using Type = EulerToQuaternion_Request_<ContainerAllocator>;

  explicit EulerToQuaternion_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
    }
  }

  explicit EulerToQuaternion_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
    }
  }

  // field types and members
  using _roll_type =
    double;
  _roll_type roll;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _yaw_type =
    double;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arduinobot_interfaces::srv::EulerToQuaternion_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduinobot_interfaces::srv::EulerToQuaternion_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduinobot_interfaces::srv::EulerToQuaternion_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduinobot_interfaces::srv::EulerToQuaternion_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduinobot_interfaces::srv::EulerToQuaternion_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduinobot_interfaces::srv::EulerToQuaternion_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduinobot_interfaces::srv::EulerToQuaternion_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduinobot_interfaces::srv::EulerToQuaternion_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduinobot_interfaces::srv::EulerToQuaternion_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduinobot_interfaces::srv::EulerToQuaternion_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduinobot_interfaces__srv__EulerToQuaternion_Request
    std::shared_ptr<arduinobot_interfaces::srv::EulerToQuaternion_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduinobot_interfaces__srv__EulerToQuaternion_Request
    std::shared_ptr<arduinobot_interfaces::srv::EulerToQuaternion_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EulerToQuaternion_Request_ & other) const
  {
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const EulerToQuaternion_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EulerToQuaternion_Request_

// alias to use template instance with default allocator
using EulerToQuaternion_Request =
  arduinobot_interfaces::srv::EulerToQuaternion_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arduinobot_interfaces


#ifndef _WIN32
# define DEPRECATED__arduinobot_interfaces__srv__EulerToQuaternion_Response __attribute__((deprecated))
#else
# define DEPRECATED__arduinobot_interfaces__srv__EulerToQuaternion_Response __declspec(deprecated)
#endif

namespace arduinobot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EulerToQuaternion_Response_
{
  using Type = EulerToQuaternion_Response_<ContainerAllocator>;

  explicit EulerToQuaternion_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0.0;
      this->b = 0.0;
      this->c = 0.0;
      this->d = 0.0;
    }
  }

  explicit EulerToQuaternion_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0.0;
      this->b = 0.0;
      this->c = 0.0;
      this->d = 0.0;
    }
  }

  // field types and members
  using _a_type =
    double;
  _a_type a;
  using _b_type =
    double;
  _b_type b;
  using _c_type =
    double;
  _c_type c;
  using _d_type =
    double;
  _d_type d;

  // setters for named parameter idiom
  Type & set__a(
    const double & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const double & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__c(
    const double & _arg)
  {
    this->c = _arg;
    return *this;
  }
  Type & set__d(
    const double & _arg)
  {
    this->d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arduinobot_interfaces::srv::EulerToQuaternion_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduinobot_interfaces::srv::EulerToQuaternion_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduinobot_interfaces::srv::EulerToQuaternion_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduinobot_interfaces::srv::EulerToQuaternion_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduinobot_interfaces::srv::EulerToQuaternion_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduinobot_interfaces::srv::EulerToQuaternion_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduinobot_interfaces::srv::EulerToQuaternion_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduinobot_interfaces::srv::EulerToQuaternion_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduinobot_interfaces::srv::EulerToQuaternion_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduinobot_interfaces::srv::EulerToQuaternion_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduinobot_interfaces__srv__EulerToQuaternion_Response
    std::shared_ptr<arduinobot_interfaces::srv::EulerToQuaternion_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduinobot_interfaces__srv__EulerToQuaternion_Response
    std::shared_ptr<arduinobot_interfaces::srv::EulerToQuaternion_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EulerToQuaternion_Response_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->c != other.c) {
      return false;
    }
    if (this->d != other.d) {
      return false;
    }
    return true;
  }
  bool operator!=(const EulerToQuaternion_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EulerToQuaternion_Response_

// alias to use template instance with default allocator
using EulerToQuaternion_Response =
  arduinobot_interfaces::srv::EulerToQuaternion_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arduinobot_interfaces

namespace arduinobot_interfaces
{

namespace srv
{

struct EulerToQuaternion
{
  using Request = arduinobot_interfaces::srv::EulerToQuaternion_Request;
  using Response = arduinobot_interfaces::srv::EulerToQuaternion_Response;
};

}  // namespace srv

}  // namespace arduinobot_interfaces

#endif  // ARDUINOBOT_INTERFACES__SRV__DETAIL__EULER_TO_QUATERNION__STRUCT_HPP_
