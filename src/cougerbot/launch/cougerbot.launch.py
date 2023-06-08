import os
from launch import LaunchDescription
from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import FindExecutable

from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.actions import ExecuteProcess




def generate_launch_description():
  ld = LaunchDescription()
  # Get the path to the URDF file
  package_name = 'cougerbot'
  urdf_file = os.path.join(get_package_share_directory(package_name), 'urdf', 'cougerbot.urdf')
  xml = open(urdf_file, 'r').read()
  xml = xml.replace('"', '\\"')

  ##gazebo empty world launch file
  gazebo_empty_launch = LaunchDescription([
    IncludeLaunchDescription(
    PythonLaunchDescriptionSource([
    FindPackageShare("gazebo_ros"), '/launch', '/gazebo.launch.py'])
            )
    ])
  
  spawn_client = ExecuteProcess(
    cmd = ['ros2',  'service', 'call', '/spawn_entity', 'gazebo_msgs/srv/SpawnEntity', 
    '{name:\"my_robot\", xml:\"' + xml + '\"}'], output='screen')

  ld.add_action(gazebo_empty_launch)
  ld.add_action(spawn_client)
  return ld