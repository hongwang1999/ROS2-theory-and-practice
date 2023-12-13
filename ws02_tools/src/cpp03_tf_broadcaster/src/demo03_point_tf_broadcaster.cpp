/*
需求：发布相对于laser坐标系的坐标点数据。
流程:
1.包含头文件;
2.初始化ROS2客户端;
3.自定义节点类;
  3-1.创建发布方;
  3-2.创建定时器;
  3-3.回调函数中组织并发布消息。
4.调用spin函数,并传入节点对象指针;
5.资源释放。*/
// 1. 包含头文件
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/point_stamped.hpp"

using namespace std::chrono_literals;
// 3. 自定义节点类
class PointBroadcaster:public rclcpp::Node{
public:
    PointBroadcaster():Node("point_broadcaster_node_cpp"),x(0.0){
  // 3-1.创建发布方;
  point_pub_ = this->create_publisher<geometry_msgs::msg::PointStamped>("point", 10);
  // 3-2.创建定时器;
  timer_ = this->create_wall_timer(1s, std::bind(&PointBroadcaster::on_timer, this));
   }
private:
  // 3-3.回调函数中组织并发布消息。
  void on_timer(){
    //1.组织消息
  geometry_msgs::msg::PointStamped ps;
  ps.header.stamp = this->now();
  ps.header.frame_id = "laser";
  x += 0.05;
  ps.point.x = x;
  ps.point.y = 0.0;
  ps.point.z = -0.1;
  // 2.发布消息
  point_pub_->publish(ps);
  }
  rclcpp::Publisher<geometry_msgs::msg::PointStamped>::SharedPtr point_pub_;
  rclcpp::TimerBase::SharedPtr timer_;
  double_t x;
};
int main(int argc, char ** argv)
{
    //2. 初始化ROS2客户端
    rclcpp::init(argc,argv);
    //4. 调用spin函数,并传入节点对象指针
    rclcpp::spin(std::make_shared<PointBroadcaster>());
    //5. 资源释放
    rclcpp::shutdown();
    return 0;
}