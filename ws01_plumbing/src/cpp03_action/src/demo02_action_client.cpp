/*
需求：编写动作客户端，可以发送一个整型数据到服务端，并处理服务端的连续反馈和最终响应结果。
分析：
    1.创建动作服务端对象;
    2.处理提交的目标值;
    3.生成连续反馈;
    4.响应最终结果;
    5.处理取消请求。
流程:",
  前提：可以解析终端下动态传入的参数。
  "1.包含头文件；",
  "2.初始化ros2客户端;",
  "3.自定义节点类；",
    3-1.创建动作客户端;
    3-2.发送请求;
    3-3.处理关于目标值的服务端响应（回调函数）;
    3-4.处理连续反馈（回调函数）;
    3-5.处理最终响应（回调函数）。
  "4.调用spin函数,并传入节点对象指针;",
  "5.资源释放。
*/

// 1.包含头文件
#include "base_interfaces_demo/action/progress.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

using base_interfaces_demo::action::Progress;
using namespace std::chrono_literals;
using std::placeholders::_1;
using std::placeholders::_2;
// 3.自定义节点类
class ProgressActionClient : public rclcpp::Node
{
public:
    ProgressActionClient() : Node("progress_action_client_node_cpp")
    {
        RCLCPP_INFO(this->get_logger(), "action客户端创建");
        // 3-1.创建动作客户端;
        /*
        rclcpp_action::Client<ActionT>::SharedPtr create_client<ActionT, NodeT>
        (NodeT node, const std::string &name, rclcpp::CallbackGroup::SharedPtr group
        = nullptr)
         */
        client_ = rclcpp_action::create_client<Progress>(this, "get_sum");
    }
    // 3-2.发送请求;
    void send_goal(int num)
    {
        // 1.需要连接服务端
        if (!client_->wait_for_action_server(10s))
        {
            RCLCPP_ERROR(this->get_logger(), "服务连接失败!");
            return;
        }
        // 2.发送具体请求
        /*
        std::shared_future<rclcpp_action::ClientGoalHandle<base_interfaces_demo::action::Progress>::SharedPtr>
         async_send_goal(const base_interfaces_demo::action::Progress::Goal &goal,
         const
        rclcpp_action::Client<base_interfaces_demo::action::Progress>::SendGoalOptions
        &options)
         */
        auto goal = Progress::Goal();
        goal.num = num;
        rclcpp_action::Client<Progress>::SendGoalOptions options;
        // auto options = rclcpp_action::Client<Progress>::SendGoalOptions();
        options.goal_response_callback =
            std::bind(&ProgressActionClient::goal_response_callback, this, _1);
        options.feedback_callback =
            std::bind(&ProgressActionClient::feedback_callback, this, _1, _2);
        options.result_callback =
            std::bind(&ProgressActionClient::result_callback, this, _1);
        auto future = client_->async_send_goal(goal, options);
    }
    // 3-3.处理关于目标值的服务端响应（回调函数）;
    /*
    using GoalHandle = ClientGoalHandle<ActionT>;
    using GoalResponseCallback = std::function<void (typename
    GoalHandle::SharedPtr)>;
     */
    void goal_response_callback(std::shared_future<std::shared_ptr<rclcpp_action::ClientGoalHandle<Progress>>> goal_handle)
    {
        if (!goal_handle.valid())
        {
            RCLCPP_INFO(this->get_logger(), "目标请求被服务端拒绝!");
        }
        else
        {
            RCLCPP_INFO(this->get_logger(), "目标处理中!");
        }
    }
    // 3-4.处理连续反馈（回调函数）;
    /*
    std::function<void (
      typename ClientGoalHandle<ActionT>::SharedPtr,
      const std::shared_ptr<const Feedback>)>;
     */
    void feedback_callback(
        rclcpp_action::ClientGoalHandle<Progress>::SharedPtr goal_handle,
        const std::shared_ptr<const Progress::Feedback> feedback)
    {
        (void)goal_handle;
        double progress = feedback->progress;
        int pro = (int)(progress * 100);
        RCLCPP_INFO(this->get_logger(), "当前进度:%d%%", pro);
    }
    // 3-5.处理最终响应（回调函数）。
    /*
    std::function<void (const WrappedResult & result)>
     */
    void result_callback(
        const rclcpp_action::ClientGoalHandle<Progress>::WrappedResult &result)
    {
        // result.code
        // 通过状态码判断最终结果状态
        if (result.code == rclcpp_action::ResultCode::SUCCEEDED)
        {
            RCLCPP_INFO(this->get_logger(), "最终结果:%d", result.result->sum);
        }
        else if (result.code == rclcpp_action::ResultCode::ABORTED)
        {
            RCLCPP_INFO(this->get_logger(), "被中断!");
        }
        else if (result.code == rclcpp_action::ResultCode::CANCELED)
        {
            RCLCPP_INFO(this->get_logger(), "被取消!");
        }
        else
        {
            RCLCPP_INFO(this->get_logger(), "未知异常!");
        }
    }

private:
    rclcpp_action::Client<Progress>::SharedPtr client_;
};
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "请提交一个整型数据!");
        return 1;
    }
    // 2.初始化ros2客户端
    rclcpp::init(argc, argv);
    // 4.调用spin函数,并传入节点对象指针
    auto node = std::make_shared<ProgressActionClient>();
    node->send_goal(atoi(argv[1]));
    rclcpp::spin(node);
    // 5.资源释放
    // rclcpp::shutdown();
    rclcpp::shutdown();
    return 0;
}
