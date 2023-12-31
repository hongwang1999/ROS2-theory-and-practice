/*
需求:订阅发布端发布的消息并将其输出到终端。
流程：
  1.包含头文件;
  2.初始化ROS2客户端;
  3.自定义节点类;
    3-1.创建订阅者;
    3-2.解析并输出数据;
  4.调用spin函数,并传入节点对象指针;
  5.释放资源。
 */
// 1.包含头文件;
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

// 3.自定义节点类;
class Listener : public rclcpp::Node {
public:
  Listener() : Node("listener_node_cpp") {
    RCLCPP_INFO(this->get_logger(), "subscriber creation!");
    // 3-1.创建订阅者;
    /*
    模板:消息类型;
    参数:
      1.话题名;
      2.QOS,队列长度;
      3.回调函数.
    返回值:订阅对象指针
     */
    subscription_ = this->create_subscription<std_msgs::msg::String>(
        "chatter", 10,
        std::bind(&Listener::do_cb, this, std::placeholders::_1));
  }

private:
  void do_cb(const std_msgs::msg::String::SharedPtr msg) {
    // 3-2.解析并输出数据;
    RCLCPP_INFO(this->get_logger(), "The subscribed news is:%s",
                msg->data.c_str());
  }
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};
int main(int argc, char const *argv[]) {
  // 2.初始化ROS2客户端;
  rclcpp::init(argc, argv);
  // 4.调用spin函数,并传入节点对象指针;
  rclcpp::spin(std::make_shared<Listener>());
  // 5.释放资源。
  rclcpp::shutdown();
  return 0;
}
