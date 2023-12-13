/*
需求：自实现静态坐标变换广播器，执行该程序时需要传入参数
ros2 run 包 可执行程序 x y z roll pitch yaw frame child_frame
流程:
0.判断传入的参数是否合法
1.包含头文件;
2.初始化ROS2客户端;
3.自定义节点类;
  3-1.创建广播对象;
  3-2.组织并发布数据。
4.调用spin函数,并传入节点对象指针;
5.资源释放。*/
// 1. 包含头文件
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "rclcpp/rclcpp.hpp"
#include "tf2_ros/static_transform_broadcaster.h"
#include "tf2/LinearMath/Quaternion.h"
// 3. 自定义节点类
class TFStaticBroadcaster : public rclcpp::Node {
public:
  TFStaticBroadcaster(char * argv[]) : Node("tf_static_broadcaster_node_cpp") {
    // 3-1.创建广播对象;
    broadcaster_ = std::make_shared<tf2_ros::StaticTransformBroadcaster>(this);
    // 3-2.组织并发布数据。
    pub_static_tf(argv);
  }

private:
  std::shared_ptr<tf2_ros::StaticTransformBroadcaster> broadcaster_;
  void pub_static_tf(char * argv[]) {
    // 组织消息
    geometry_msgs::msg::TransformStamped transform;
    transform.header.stamp = this->now();//时间戳
    transform.header.frame_id = argv[7];//父坐标系
    transform.child_frame_id = argv[8];//子级坐标系
    //设置偏移量
    transform.transform.translation.x = atof(argv[1]);
    transform.transform.translation.y = atof(argv[2]);
    transform.transform.translation.z = atof(argv[3]);
    //设置四元数
    //将欧拉角转换成四元数
    tf2::Quaternion qtn;
    qtn.setRPY(atof(argv[4]), atof(argv[5]), atof(argv[6]));
    transform.transform.rotation.x = qtn.x();
    transform.transform.rotation.y = qtn.y();
    transform.transform.rotation.z = qtn.z();
    transform.transform.rotation.w = qtn.w();
    // 发布
    broadcaster_->sendTransform(transform);
  }
};
int main(int argc, char **argv) {
  // 0.判断传入的参数是否合法
  if (argc != 9) {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "传入的参数不合法！");
    return 1;
  }

  // 2. 初始化ROS2客户端
  rclcpp::init(argc, argv);
  // 4. 调用spin函数,并传入节点对象指针
  rclcpp::spin(std::make_shared<TFStaticBroadcaster>(argv));
  // 5. 资源释放
  rclcpp::shutdown();
  return 0;
}