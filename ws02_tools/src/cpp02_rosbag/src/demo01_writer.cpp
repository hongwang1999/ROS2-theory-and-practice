/*需求：录制控制乌龟运动的速度指令。
流程:
1.包含头文件;
2.初始化ROS2客户端;
3.自定义节点类;
  3-1.创建录制对象;
  3-2.设置磁盘文件;
  3-3.写数据（创建一个速度订阅方，回调函数中执行写出操作）。
4.调用spin函数,并传入节点对象指针;
5.资源释放。*/
// 1. 包含头文件
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "rosbag2_cpp/writer.hpp"
// 3. 自定义节点类
class SimpleBagRecorder : public rclcpp::Node {
public:
  SimpleBagRecorder() : Node("simple_bag_recorder_node_cpp") {
    RCLCPP_INFO(this->get_logger(), "消息录制对象创建！");
    // 3-1.创建录制对象;
    writer_ = std::make_unique<rosbag2_cpp::Writer>();
    // 3-2.设置磁盘文件;
    writer_->open("my_bag");//相对路径，是工作空间的直接子集
    // 3-3.写数据（创建一个速度订阅方，回调函数中执行写出操作）。
    //writer_->write()
    sub_ = this->create_subscription<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10, std::bind(&SimpleBagRecorder::do_write_msg, this, std::placeholders::_1));
  }

private:
  void do_write_msg(std::shared_ptr<rclcpp::SerializedMessage> msg){
    // 参数列表：被写出的消息，话题名称，消息类型，时间戳
    writer_->write(msg, "turtle1/cmd_vel", "geometry_msgs/msg/Twist", this->now());
  }
  std::unique_ptr<rosbag2_cpp::Writer> writer_;
  rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr sub_;
};
int main(int argc, char **argv) {
  // 2. 初始化ROS2客户端
  rclcpp::init(argc, argv);
  // 4. 调用spin函数,并传入节点对象指针
  rclcpp::spin(std::make_shared<SimpleBagRecorder>());
  // 5. 资源释放
  rclcpp::shutdown();
  return 0;
}