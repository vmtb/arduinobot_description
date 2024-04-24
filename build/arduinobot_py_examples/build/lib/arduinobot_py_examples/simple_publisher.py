import rclpy 
from rclpy.node import Node 
from std_msgs.msg import String

class SimplePublisher(Node): 
    def __init__(self):
        super().__init__('simple_publisher')
        
        self.pub_ = self.create_publisher(String, "chatter", 10)
        self.counter_ = 0 
        self.frequency_ = 1.0  
        
        self.get_logger().info("Simple Publisher Node has been started")
        self.get_logger().info("Publishing at %d Hz"% self.frequency_)
        
        self.timer_ = self.create_timer(self.frequency_, self.timerCallback)
        
    def timerCallback(self): 
        msg = String()
        msg.data = "Hello Ros 2 - %d"%self.counter_
        
        self.pub_.publish(msg)
        self.counter_+=1
        

def main():
    rclpy.init()
    node = SimplePublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
    
if __name__=='__main__':
    main()
                       