import rclpy
from std_msgs.msg import String
from geometry_msgs.msg import Twist

key_mapping = { 'w': [ 0.0, 0.1], 'x': [0.0, -0.1],
'a': [1.0, 0.0], 'd': [-1.0, 0.0],
's': [ 0.0, 0.0] }

def keys_cb(msg, motion_pub):
	if len(msg.data) == 0 or msg.data[0] not in key_mapping:
		return
	vels = key_mapping[msg.data[0]]
	t = Twist()
	t.angular.z = vels[0]
	t.linear.x = vels[1]
	motion_pub.publish(t)




def main(args=None):
	rclpy.init()
	node = rclpy.create_node('teleop_node')
	motion_pub = node.create_publisher(Twist, 'cmd_vel', 1)
	keys_subs = node.create_subscription(String, 'keys', lambda msg: keys_cb(msg, motion_pub), 1)
	rclpy.spin(node)

if __name__ == '__main__':
    main()