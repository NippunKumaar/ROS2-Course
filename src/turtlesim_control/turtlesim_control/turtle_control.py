import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist 
from turtlesim.msg import Pose 

  
class TurtlesimControl(Node):
	def __init__(self):
		super().__init__('turtle_move')
		self.publisher_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
		self.subscription = self.create_subscription(Pose, 'turtle1/pose', self.pose_callback, 10)
		timer_period = 0.5 #seconds
		self.timer = self.create_timer(timer_period, self.timer_callback)


	def timer_callback(self):  
		vel_twist = Twist() 
		vel_twist.linear.x=1.0 
		self.publisher_.publish(vel_twist)
		self.get_logger().info('Publishing: "%s"' %vel_twist)

	  

	def pose_callback(self, message): 
		print ("X position:%f\tY position:%f\tTheta:%f\t"%(message.x, message.y, message.theta)) 

def main(args=None):
	rclpy.init(args=args)
	turtlesim_control = TurtlesimControl()
	rclpy.spin(turtlesim_control)

	turtlesim_control.destroy_node()
	rclpy.shutdown()
	

if __name__ == '__main__': 
	main()

 