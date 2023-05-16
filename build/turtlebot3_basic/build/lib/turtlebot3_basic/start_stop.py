import rclpy
from geometry_msgs.msg import Twist

cmd_vel_pub = None
driving_forward = True

def timer_callback():
	global driving_forward, cmd_vel_pub
	stop = Twist()
	start = Twist()
	start.linear.x = 0.1
	if driving_forward:
		cmd_vel_pub.publish(start)
	else:
		cmd_vel_pub.publish(stop)
	driving_forward = not driving_forward



def main(args=None):
	global cmd_vel_pub
	rclpy.init()
	node = rclpy.create_node('start_stop_node')
	cmd_vel_pub = node.create_publisher(Twist, 'cmd_vel', 1)
	timer_period = 2
	node.timer = node.create_timer(timer_period, timer_callback)
	rclpy.spin(node)

if __name__ == '__main__':
    main()
