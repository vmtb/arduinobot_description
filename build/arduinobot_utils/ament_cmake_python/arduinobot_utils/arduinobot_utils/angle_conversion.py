#!/usr/bin/env python3  
import rclpy
from rclpy.node import Node
from arduinobot_interfaces.srv import EulerToQuaternion, QuaternionToEuler
from tf_transformations import quaternion_from_euler, euler_from_quaternion

# ros-humble-tf-transformations package 
# pip3 install transforms3d
class AngleConversion(Node):

    def __init__(self): 
        super().__init__("angle_conversion_service_server")
        self.euler_to_quaternion_ = self.create_service(EulerToQuaternion, 'euler_to_quaternion_', self.eulerToQuaternionCallback)
        self.quaternion_to_euler_ = self.create_service(QuaternionToEuler, 'quaternion_to_euler', self.quaternionToEulerCallback)
        
        self.get_logger().info("Angle Conversion Services are ready")
        
    
    def eulerToQuaternionCallback(self, req, res): 
        self.get_logger().info("Requested to convert Euler Angles roll: %f, pitch: %f, yaw: %f, into a quaternion"%(req.roll, req.pitch, req.yaw))
        (res.a, res.b, res.c, res.d) = quaternion_from_euler(req.roll, req.pitch, req.yaw)
        self.get_logger().info("Corresponding quaternion: x:%f, y: %f, z:%f, d:%f"%(res.a, res.b, res.c, res.d))
        
        return res
    
    def quaternionToEulerCallback(self, req, res): 
        self.get_logger().info("Requested to convert quaternion: x:%f, y: %f, z:%f, d:%f into a euler"%(req.a, req.b, req.c, req.d) )
        (res.roll, res.pitch, res.yaw) = euler_from_quaternion(req.a, req.b, req.c, req.d)
        self.get_logger().info("Corresponding Euler Angles roll: %f, pitch: %f, yaw: %f, into a quaternion"%(res.roll, res.pitch, res.yaw))
        
        return res
        
        
def main(args = None):
    rclpy.init(args=args) #init communication
    node = AngleConversion()
    rclpy.spin(node) # will pause the program and continue to be alive
    node.destroy_node()
    rclpy.shutdown() #exit ros2 communication

if __name__ == "__main__":
    main()