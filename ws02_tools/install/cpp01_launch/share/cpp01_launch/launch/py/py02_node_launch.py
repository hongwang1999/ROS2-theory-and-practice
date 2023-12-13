from launch import LaunchDescription
from launch_ros.actions import Node
#获取功能包下share目录路径-------
from ament_index_python.packages import get_package_share_directory
import os
""" 
需求：演示Node的使用
构造函数参数说明：
  :param: executable 可执行程序
  :param: package 被执行的程序所属的功能包
  :param: name 节点名称
  :param: namespace设置命名空间 
  :param: exec_name 设置程序标签
  :param: parameters 设置参数
  :param: remappings 实现话题重映射
  :param: arguments 为节点传参
                  xx yy zz --ros-args
  :param: ros_arguments 为节点传参
                  --ros-args xx yy
 """
def generate_launch_description():
  # turtle1=Node(
  #   package="turtlesim",
  #   executable="turtlesim_node",
  #   exec_name="my_label",
  #   ros_arguments=["--remap","__ns:=/t2"]
  #   #等价于ros2 run turtlesim turrtlesim_node --ros-args --remap __ns:=/t2
  # )
  turtle2=Node(
    package="turtlesim",
    executable="turtlesim_node",
    respawn=True,
    name="haha",
    # 方式1，
    # parameters=[{"background_r": 255,"background_g": 0,"background_b": 0}]
    # 方式2(更常用)，读取yaml文件()
    # parameters=["/home/hw_learn/ws_ros2/ws02_tools/install/cpp01_launch/share/cpp01_launch/config/haha.yaml"]
    # 优化：动态获取路径
    parameters=[os.path.join(get_package_share_directory("cpp01_launch"),"config","haha.yaml")]
  )
  return LaunchDescription([turtle2])