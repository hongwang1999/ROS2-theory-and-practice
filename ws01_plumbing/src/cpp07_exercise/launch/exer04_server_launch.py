from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    #1.turtlesim_node
  t=Node(package="turtlesim",executable="turtlesim_node")
    #2.自定义的动作服务端
  server=Node(package="cpp07_exercise",executable="exer04_action_server")
  return LaunchDescription([t,server])