#include "rclcpp/rclcpp.hpp"
#include <iostream>

class MyCustomNode : public rclcpp::Node // Modify Name
{
public:
    MyCustomNode() : Node("my_custom_node") // Modify Name
    {
    }

private:
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std ::make_shared<MyCustomNode>(); // Modify Name
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}