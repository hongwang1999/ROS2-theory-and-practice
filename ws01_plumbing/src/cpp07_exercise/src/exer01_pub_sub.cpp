/*
需求：订阅乌龟1的位姿信息，解析出线速度和角速度，生成并发布控制乌龟2运动的速度指令。
明确：
        订阅话题：/turtle1/pose
        订阅消息：turtlesim/msg/Pose
    x: 0.0
    y: 0.0
    theta: 0.0
    linear_velocity: 0.0
    angular_velocity: 0.0

        发布话题：/t2/turtle1/cmd_vel
        发布消息：geometry_msgs/msg/Twist
    linear:
      x: 0.0 ---前后
      y: 0.0 ---左右
      z: 0.0 ---上下
    angular:
      x: 0.0 ---翻滚
      y: 0.0 ---俯仰
      z: 0.0 ---左右转
流程:
1.包含头文件;包含头文件
2.初始化ROS2客户端;
3.自定义节点类;
  3-1.创建发布方;
  3-2.创建订阅方（订阅乌龟1位姿，解析速度）;
  3-3.订阅方的回调函数，处理速度，生成并发布控制乌龟2的速度指令。
4.调用spin函数,并传入节点对象指针;
5.资源释放。
BUG描述：
  乌龟1后退时，乌龟2仍然前进。
BUG原因：
  1.和乌龟位姿发布有关，当乌龟实际速度为负数时，位姿中的速度仍是正数;
  2.发布的乌龟2的速度，与位姿中的线速度一致。
BUG修复：
  修改源码，将位姿中的线速度计算修改为直接等于x方向速度。
*/
// 1. 包含头文件
#include "geometry_msgs/msg/twist.hpp"
#include "rclcpp/rclcpp.hpp"
#include "turtlesim/msg/pose.hpp"
// 3. 自定义节点类
class Exer01PubSub : public rclcpp::Node {
public:
  Exer01PubSub() : Node("exer01_pub_sub_node_cpp") {
    RCLCPP_INFO(this->get_logger(), "案例1对象创建");
    // 3-1.创建发布方;
    pub_ = this->create_publisher<geometry_msgs::msg::Twist>(
        "/t2/turtle1/cmd_vel", 10);
    // 3-2.创建订阅方（订阅乌龟1位姿，解析速度）;
    sub_ = this->create_subscription<turtlesim::msg::Pose>(
        "/turtle1/pose", 10,
        std::bind(&Exer01PubSub::pose_cb, this, std::placeholders::_1));
  }

private:
  void pose_cb(const turtlesim::msg::Pose::SharedPtr pose) {
    // 3-3.订阅方的回调函数，处理速度，生成并发布控制乌龟2的速度指令。
    //创建速度指令
    geometry_msgs::msg::Twist twist;
    twist.linear.x = pose->linear_velocity;
    twist.angular.z = pose->angular_velocity;
    // 发布
    pub_->publish(twist);
  }
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_;
  rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr sub_;
};
int main(int argc, char **argv) {
  // 2. 初始化ROS2客户端
  rclcpp::init(argc, argv);
  // 4. 调用spin函数,并传入节点对象指针
  rclcpp::spin(std::make_shared<Exer01PubSub>());
  // 5. 资源释放
  rclcpp::shutdown();
  return 0;
}