#include <iostream>
#include "rclcpp/rclcpp.hpp"

class MyNode : public rclcpp::Node
{
public:
    MyNode() : Node("cpp_test_node_1"),counter_(0)
    {
        RCLCPP_INFO(this->get_logger(), "Cpp Node");
        timer_ = this->create_wall_timer(std::chrono::seconds(1),
                                         std::bind(&MyNode::zamanCallback, this));
    }

private:
    void zamanCallback()
    {
        counter_++;
        RCLCPP_INFO(this->get_logger(), "Hello Cpp %d" ,counter_);
    }

    rclcpp::TimerBase::SharedPtr timer_;
    int counter_=0;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MyNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}