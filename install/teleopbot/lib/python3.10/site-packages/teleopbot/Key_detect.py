import tty
import sys
import termios
import rclpy
from std_msgs.msg import String

key_pub = None
x= String()

def timer_callback():
	global key_pub, x
	x.data = sys.stdin.read(1)[0]
	key_pub.publish(x)
	print("You pressed", x.data)


  


def main(args=None):
	global key_pub, x
	rclpy.init()
	node = rclpy.create_node('keyboard_driver')
	key_pub = node.create_publisher(String, 'keys', 1)
	timer_period = 100
	orig_settings = termios.tcgetattr(sys.stdin)
	tty.setcbreak(sys.stdin)
	print ("Publishing keystrokes. Press Ctrl-C to exit...")
	timer_period = 2
	node.timer = node.create_timer(timer_period, timer_callback)
	rclpy.spin(node)

	termios.tcsetattr(sys.stdin, termios.TCSADRAIN, orig_settings)

if __name__ == '__main__':
    main()