import rclpy
from sensor_msgs.msg import LaserScan


def scan_callback(msg):
	range_ahead = msg.ranges[0]
	print ("range ahead: %0.1f" % range_ahead)


def main(args=None):
	global cmd_vel_pub
	rclpy.init()
	node = rclpy.create_node('obs_detection_node')
	scan_subs = node.create_subscription(LaserScan, 'scan', scan_callback, 1)

	rclpy.spin(node)

if __name__ == '__main__':
    main()