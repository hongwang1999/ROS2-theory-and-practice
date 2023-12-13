/* 
需求：以一定的频率发布"hello world"，并在后面加上数字，每发送一条信息数字+1。
流程：
  1.包含头文件;
  2.初始化ROS2客户端;
  3.自定义节点类;
    3-1.创建消息发布方;
    3-2.创建定时器;
    3-3.组织并发布消息;
  4.调用spin函数,并传入节点对象指针;
  5.释放资源。
 */

// 1.包含头文件;
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

//3.自定义节点类;
class Talker:public rclcpp::Node{
public:
  Talker():Node("talker_node_cpp"),count(0){
    RCLCPP_INFO(this->get_logger(),"create publish node!");
    // 3-1.创建消息发布方;
    /* 模板:将要发送消息的类型:
    参数:
      1. 话题名;
      2. QOS (消息队列长度) 
      返回值:发布对象指针
    */
    publisher_=this->create_publisher<std_msgs::msg::String>("chatter",10);
    // 3-2.创建定时器;
    /* 
    参数:
      1.时间间隔
      2.回调函数
    返回值:定时器对象指针
     */
    timer_=this->create_wall_timer(1s,std::bind(&Talker::on_timer,this));
  }
private:
  void on_timer(){
    //3-3.组织并发布消息;
    auto message = std_msgs::msg::String();
    message.data = "hello world!"+std::to_string(count++);
    RCLCPP_INFO(this->get_logger(), "The message published by the publisher:%s", message.data.c_str());
    publisher_->publish(message);
  }
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
  size_t count;
};

int main(int argc, char ** argv)
{
  //2.初始化ROS2客户端;
  rclcpp::init(argc,argv);
  //4.调用spin函数,并传入节点对象指针;
  rclcpp::spin(std::make_shared<Talker>());
  //5.释放资源。
  rclcpp::shutdown();
  return 0;
}
