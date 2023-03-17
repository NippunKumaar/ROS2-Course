from word_count_msg.srv import WordCount                                                           

import rclpy
from rclpy.node import Node


class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(WordCount, 'word_count_msg', self.word_count_callback)      

    def word_count_callback(self, request, response):
        response.count = len(request.words.split())                                                  
        self.get_logger().info('Responded [Count:%s]' %response.count)
        return response

def main(args=None):
    rclpy.init(args=args)

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()

if __name__ == '__main__':
    main()