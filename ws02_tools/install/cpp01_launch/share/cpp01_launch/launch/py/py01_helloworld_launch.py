from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    t1=Node(package="turtlesim",executable="turtlesim_node",name="t1")
    t2=Node(package="turtlesim",executable="turtlesim_node",name="t2")
    return LaunchDescription([t1,t2])