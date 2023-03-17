import rclpy
from rclpy.node import Node
from complex_msg.msg import Complex 
from random import random

class MinimalPublisher(Node):
	def __init__(self):
		super().__init__('complex_talker')
		self.publisher_ = self.create_publisher(Complex, 'complex_chatter', 10)
		timer_period = 0.5 #seconds
		self.timer = self.create_timer(timer_period, self.timer_callback)


	def timer_callback(self):
		msg = Complex()
		msg.real = random()
		msg.imaginary = random()
		self.publisher_.publish(msg)
		self.get_logger().info('Publishing: "%s"' %msg)

def main(args=None):
	rclpy.init(args=args)

	minimal_publisher = MinimalPublisher()

	rclpy.spin(minimal_publisher)
	# Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)

	minimal_publisher.destroy_node()
	rclpy.shutdown()



if __name__ == '__main__':
	main()