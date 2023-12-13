/*
需求：广播laser->base_link的坐标系相对关系，然后发布point->laser的坐标
    求解point->base_link的坐标。
流程:
1.包含头文件;
2.初始化ROS2客户端;
3.自定义节点类;
  3-1.创建坐标变换监听器;
  3-2.创建坐标点消息订阅方;
  3-3.创建过滤器，解析数据。
4.调用spin函数,并传入节点对象指针;
5.资源释放。*/
// 1. 包含头文件
#include "geometry_msgs/msg/point_stamped.hpp"
#include "message_filters/subscriber.h"
#include "rclcpp/rclcpp.hpp"
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"
#include "tf2_ros/buffer.h"
#include "tf2_ros/create_timer_ros.h"
#include "tf2_ros/message_filter.h"
#include "tf2_ros/transform_listener.h"

using namespace std::chrono_literals;
// 3. 自定义节点类
class TFPointListener : public rclcpp::Node {
public:
  TFPointListener() : Node("tf_point_listener_node_cpp") {
    // 3-1.创建坐标变换监听器;
    buffer_ = std::make_shared<tf2_ros::Buffer>(this->get_clock());
    // rclcpp::node_interfaces::NodeBaseInterface::SharedPtr node_base,
    // rclcpp::node_interfaces::NodeTimersInterface::SharedPtr node_timers
    timer_ = std::make_shared<tf2_ros::CreateTimerROS>(
        this->get_node_base_interface(), this->get_node_timers_interface());
    buffer_->setCreateTimerInterface(timer_);
    listener_ = std::make_shared<tf2_ros::TransformListener>(*buffer_);
    // 3-2.创建坐标点消息订阅方;
    point_sub.subscribe(this, "point");
    // 3-3.创建过滤器，解析数据。
    /*
    F & f, 订阅对象
    BufferT & buffer, 坐标监听缓存
    const std::string & target_frame, base_link
    uint32_t queue_size, 10
    const rclcpp::node_interfaces::NodeLoggingInterface::SharedPtr &
    node_logging, const rclcpp::node_interfaces::NodeClockInterface::SharedPtr &
    node_clock, std::chrono::duration<TimeRepT, TimeT> buffer_timeout =
    std::chrono::duration<TimeRepT, TimeT>::max()
     */
    filter_ = std::make_shared<
        tf2_ros::MessageFilter<geometry_msgs::msg::PointStamped>>(
        point_sub, *buffer_, "base_link", 10,
        this->get_node_logging_interface(), this->get_node_clock_interface(),
        1s);
    //解析数据
    filter_->registerCallback(&TFPointListener::transform_point, this);
  }

private:
  void transform_point(const geometry_msgs::msg::PointStamped &ps) {
    //实现坐标点变换
    //必须包含一个头文件
    auto out=buffer_->transform(ps, "base_link");
    RCLCPP_INFO(this->get_logger(), "父级坐标系：%s,坐标：(%.2f,%.2f,%.2f)",
                out.header.frame_id.c_str(),
                out.point.x,
                out.point.y,
                out.point.z);
  }
  std::shared_ptr<tf2_ros::Buffer> buffer_;
  std::shared_ptr<tf2_ros::TransformListener> listener_;
  std::shared_ptr<tf2_ros::CreateTimerROS> timer_;
  message_filters::Subscriber<geometry_msgs::msg::PointStamped> point_sub;
  std::shared_ptr<tf2_ros::MessageFilter<geometry_msgs::msg::PointStamped>>
      filter_;
};
int main(int argc, char **argv) {
  // 2. 初始化ROS2客户端
  rclcpp::init(argc, argv);
  // 4. 调用spin函数,并传入节点对象指针
  rclcpp::spin(std::make_shared<TFPointListener>());
  // 5. 资源释放
  rclcpp::shutdown();
  return 0;
}