from add_two_ints.srv import AddTwoInts                                                           # CHANGE

import rclpy
from rclpy.node import Node


class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(AddTwoInts, 'add_two_ints', self.add_two_ints_callback)       # CHANGE

    def add_two_ints_callback(self, request, response):
        response.sum = request.a + request.b                                                   # CHANGE
        self.get_logger().info('Incoming request\na: %d b: %d' % (request.a, request.b))  # CHANGE

        return response

def main(args=None):
    rclpy.init(args=args)

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()

if __name__ == '__main__':
    main()