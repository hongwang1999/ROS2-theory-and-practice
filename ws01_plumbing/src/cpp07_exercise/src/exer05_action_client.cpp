/*
需求：向动作服务端发送目标点数据，并处理响应结果。
流程:
0.解析launch文件传入的参数
1.包含头文件;
2.初始化ROS2客户端;
3.自定义节点类;
    3-1.创建动作客户端；
    3-2.连接服务端，发送请求；
    3-3.处理目标值相关响应结果；
    3-4.处理连续反馈；
    3-5.处理最终响应。
4.调用spin函数,并传入节点对象指针;
5.资源释放。*/
// 1. 包含头文件
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "base_interfaces_demo/action/nav.hpp"

using base_interfaces_demo::action::Nav;
using namespace std::chrono_literals;
using std::placeholders::_1;
using std::placeholders::_2;
// 3. 自定义节点类
class Exer05ActionClient : public rclcpp::Node
{
public:
    Exer05ActionClient() : Node("Exer05ActionClient_node_cpp")
    {
        RCLCPP_INFO(this->get_logger(), "动作客户端！");
        // 3-1.创建动作客户端；
        client_ = rclcpp_action::create_client<Nav>(this, "nav");
    }
    // 3-2.连接服务端，发送请求；
    void send_goal(float x, float y, float theta)
    {
        // 1.连接服务端
        if (client_->wait_for_action_server(10s))
        {
            RCLCPP_INFO(this->get_logger(), "服务连接超时！");
            return;
        }
        // 2.组织并发送数据
        Nav::Goal goal;
        goal.goal_x = x;
        goal.goal_y = y;
        goal.goal_theta = theta;
        rclcpp_action::Client<Nav>::SendGoalOptions options;
        // std::function<void (std::shared_future<std::shared_ptr<rclcpp_action::ClientGoalHandle<base_interfaces_demo::action::Nav>>>)
        options.goal_response_callback = std::bind(&Exer05ActionClient::goal_response_callback, this, _1);
        // std::function<void (std::shared_ptr<rclcpp_action::ClientGoalHandle<base_interfaces_demo::action::Nav>>, std::shared_ptr<const base_interfaces_demo::action::Nav_Feedback>)
        options.feedback_callback = std::bind(&Exer05ActionClient::feedback_callback, this, _1, _2);
        // std::function<void (const rclcpp_action::ClientGoalHandle<base_interfaces_demo::action::Nav>::WrappedResult &result)
        options.result_callback = std::bind(&Exer05ActionClient::result_callback, this, _1);
        client_->async_send_goal(goal, options);
    }
    // 3-3.处理目标值相关响应结果；
    void goal_response_callback(std::shared_future<std::shared_ptr<rclcpp_action::ClientGoalHandle<Nav>>> goal_handle)
    {
        if (!goal_handle.valid())
        {
            RCLCPP_INFO(this->get_logger(),"请求目标非法！");
        }
        else
        {
            RCLCPP_INFO(this->get_logger(),"目标值被接收！");
        }
    }
    // 3-4.处理连续反馈；
    void feedback_callback(std::shared_ptr<rclcpp_action::ClientGoalHandle<Nav>> goal_handle, std::shared_ptr<const Nav::Feedback> feedback)
    {
        (void)goal_handle;
        RCLCPP_INFO(this->get_logger(),"剩余%.2f米",feedback->distance);
    }
    // 3-5.处理最终响应。
    void result_callback(const rclcpp_action::ClientGoalHandle<Nav>::WrappedResult &result)
    {
        if (result.code==rclcpp_action::ResultCode::SUCCEEDED)
        {
            //成功响应
            RCLCPP_INFO(this->get_logger(),"乌龟的最终位姿信息：坐标：(%.2f,%.2f)，航向：%.2f",result.result->turtle_x,result.result->turtle_y,result.result->turtle_theta);
        }
        else
        {
            //响应失败
            RCLCPP_INFO(this->get_logger(),"响应失败！");
        }
    }

private:
    rclcpp_action::Client<Nav>::SharedPtr client_;
};
int main(int argc, char const **argv)
{
    // 0.解析launch文件传入的参数
    if (argc != 5)
    {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "请输入合法的目标点数据！");
    }

    // 2. 初始化ROS2客户端
    rclcpp::init(argc, argv);
    // 4. 调用spin函数,并传入节点对象指针
    auto client = std::make_shared<Exer05ActionClient>();
    client->send_goal(atof(argv[1]), atof(argv[2]), atof(argv[3]));
    rclcpp::spin(client);
    // 5. 资源释放
    rclcpp::shutdown();
    return 0;
}
