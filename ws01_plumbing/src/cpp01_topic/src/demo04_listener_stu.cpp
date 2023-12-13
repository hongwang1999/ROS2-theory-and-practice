/*
需求:订阅学生消息并将其输出到终端。
流程：
  1.包含头文件;
  2.初始化ROS2客户端;
  3.自定义节点类;
    3-1.创建订阅者;
    3-2.回调函数订阅并解析数据；
  4.调用spin函数,并传入节点对象指针;
  5.释放资源。
 */
// 1.包含头文件;
#include "base_interfaces_demo/msg/student.hpp"
#include "rclcpp/rclcpp.hpp"

using base_interfaces_demo::msg::Student;
// 3.自定义节点类;
class ListenerStu : public rclcpp::Node
{
public:
  ListenerStu() : Node("listenerstu_node_cpp")
  {
    // 3-1.创建订阅者;
    subscription_ = this->create_subscription<Student>(
        "chatter_stu", 10,
        std::bind(&ListenerStu::do_cb, this, std::placeholders::_1));
  }

private:
  void do_cb(const Student::SharedPtr stu)
  {
    // 3-2.回调函数订阅并解析数据；
    RCLCPP_INFO(this->get_logger(),
                "subscribed student message:name=%s,age=%d,height=%.2f",
                stu->name.c_str(), stu->age, stu->height);
  }
  rclcpp::Subscription<Student>::SharedPtr subscription_;
};

int main(int argc, char **argv)
{
  // 2.初始化ROS2客户端;
  rclcpp::init(argc, argv);
  // 4.调用spin函数,并传入节点对象指针;
  rclcpp::spin(std::make_shared<ListenerStu>());
  // 5.释放资源。
  rclcpp::shutdown();

  return 0;
}
