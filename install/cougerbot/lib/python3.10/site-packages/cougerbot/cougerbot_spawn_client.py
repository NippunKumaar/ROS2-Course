import os
import sys
import rclpy
from ament_index_python.packages import get_package_share_directory
from gazebo_msgs.srv import SpawnEntity

def main():
    """ Main for spwaning turtlebot node """
    # Get input arguments from user
    argv = sys.argv[1:]

    # Start node
    rclpy.init()
    node = rclpy.create_node('spawn_cougerbot')
    urdf_file_path = "/home/nippun/ros2_course_test/src/cougerbot/urdf/cougerbot.urdf" 

    node.get_logger().info(
        'Creating Service client to connect to `/spawn_entity`')
    client = node.create_client(SpawnEntity, "/spawn_entity")

    node.get_logger().info("Connecting to `/spawn_entity` service...")
    if not client.service_is_ready():
        client.wait_for_service()
        node.get_logger().info("...connected!")

    # Set data for request
    request = SpawnEntity.Request()
    request.name = 'cougerbot'
    request.xml = open(urdf_file_path, 'r').read()
    request.robot_namespace = 'cougerbot'
    request.initial_pose.position.x = 0.0
    request.initial_pose.position.y = 0.0
    request.initial_pose.position.z = 0.0

    node.get_logger().info("Sending service request to `/spawn_entity`")
    future = client.call_async(request)
    rclpy.spin_until_future_complete(node, future)
    if future.result() is not None:
        print('response: %r' % future.result())
    else:
        raise RuntimeError(
            'exception while calling service: %r' % future.exception())

    node.get_logger().info("Done! Shutting down node.")
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()