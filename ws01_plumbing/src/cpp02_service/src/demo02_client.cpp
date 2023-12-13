//需求：创建客户端，组织并提交数据，然后处理响应结果（需要关注业务流程）

//前提:在主函数中有必要判断提交参数的数量是否正确

//1.包含头文件;
#include "rclcpp/rclcpp.hpp"
#include "base_interfaces_demo/srv/add_ints.hpp"

using base_interfaces_demo::srv::AddInts;
using namespace std::chrono_literals;
//3.自定义节点类;
class AddIntsClient:public rclcpp::Node{
public:
    AddIntsClient():Node("add_ints_client_node_cpp"){
    RCLCPP_INFO(this->get_logger(), "client node creation");
    //3-1.创建客户端
    /* 
      模板:服务接口;
      参数:服务话题名;
      返回值:服务对象指针.
     */
    client_ = this->create_client<AddInts>("add_ints");
    }
    //3-2.连接到服务端（对于服务通信，如果客户端不能连接到服务端，则请求无法被发送）
    /* 
      连接到服务端实现，如果连接成功则返回true，否则返回false
     */
    bool connect_server(){
    //在指定的超时时间内连接到服务端,如果连接成功返回true,否则返回false。
    //循环使用2s作为连接服务端的超时时间，并且直到连接到服务端时循环才会释放。
    while (!client_->wait_for_service(2s))
    {
      //对ctrl+c操作做特殊处理
      //1.如何判断是否按下ctrl+c? 2.如何处理它?
      if(!rclcpp::ok())
      {
          RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Forcefully terminate the client!");
          return false;
      }
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service connection!");
    }

    return true;
    }
    //3-3.发送请求
    //写一个发送请求函数(参数是两个整数, 返回值是服务端提交请求后的返回结果
  
    rclcpp::Client<AddInts>::SharedFuture send_request(int num1,int num2){
      //组织请求数据

      //发送
      /* 
      rclcpp::Client<base_interfaces_demo::srv::AddInts>::SharedFuture 
      async_send_request(std::shared_ptr<base_interfaces_demo::srv::AddInts_Request> request)
       */
      auto request = std::make_shared<AddInts::Request>();
      request->num1 = num1;
      request->num2 = num2;
      return client_->async_send_request(request);
    }

private:
  rclcpp::Client<AddInts>::SharedPtr client_;
};
int main(int argc, char ** argv)
{
    if (argc!=3)
    {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Please submit two integer numbers");
      return 1;
    }

    //2.初始化ROS2客户端;
    rclcpp::init(argc,argv);
    
    //创建客户端对象
    auto client = std::make_shared<AddIntsClient>();
    //调用客户端对象的连接服务端函数
    bool flag = client->connect_server();
    // 基于连接结果做进一步处理
    if(!flag)
    {
      //rclcpp::get_logger("rclcpp")创建一个不依赖于上下文的logger对象
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Server connection failed, program exits");
      return 0;
    }
    // 执行后续操作...
    // 调用请求提交函数，接收并处理响应结果
    auto future = client->send_request(atoi(argv[1]), atoi(argv[2]));
    //处理响应
    if (rclcpp::spin_until_future_complete(client,future)==rclcpp::FutureReturnCode::SUCCESS)//成功
    { 
      RCLCPP_INFO(client->get_logger(), "响应成功!sum=%d",future.get()->sum);
    }
    else//失败
    {
      RCLCPP_INFO(client->get_logger(), "响应失败!");
    }

    //5.释放资源。
    rclcpp::shutdown();
    return 0;
}