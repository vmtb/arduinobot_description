import rclpy 
from rclpy.node import Node 
from std_msgs.msg import String
from rcl_interfaces.msg import SetParametersResult
from rclpy.parameter import Parameter

class SimpleParameter(Node): 
    def __init__(self):
        super().__init__('simple_parameter')
        
        self.declare_parameter("simple_int_param", 28)
        self.declare_parameter("simple_string_param", "marina")
        
        self.add_on_set_parameters_callback(self.paramChangeCallback)
        
        
        self.pub_ = self.create_publisher(String, "chatter", 10)
        self.counter_ = 0 
        self.frequency_ = 1.0  
        
        self.get_logger().info("Simple Publisher Node has been started")
        self.get_logger().info("Publishing at %d Hz"% self.frequency_)
        
        self.timer_ = self.create_timer(self.frequency_, self.timerCallback)
        
    
    def paramChangeCallback(self, params): 
        result = SetParametersResult()
        
        for param in params:
            if param.name=="simple_int_param" and param.type_ == Parameter.Type.INTEGER:
                self.get_logger().info("Param simple_int_param changed! new value is %d"% param.Value)
                result.successful = True 
            
            if param.name=="simple_string_param" and param.type_ == Parameter.Type.STRING:
                self.get_logger().info("Param simple_string_param changed! new value is %s"% param.value)
                result.successful = True 
            
        return result
    
    
    def timerCallback(self): 
        msg = String()
        msg.data = "Hello Ros 2 - %d"%self.counter_
        
        self.pub_.publish(msg)
        self.counter_+=1
        

def main():
    rclpy.init()
    node = SimpleParameter()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
    
if __name__=='__main__':
    main()
                       