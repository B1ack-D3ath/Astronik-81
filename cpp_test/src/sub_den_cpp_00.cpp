#include "rclcpp/rclcpp.hpp"
#include <iostream>
#include "example_interfaces/msg/string.hpp"

class SubDenCpp00 : public rclcpp::Node // Modify Name
{
public:
    SubDenCpp00() : Node("sub_den_cpp_00") // Modify Name
    {
        subscriber_ = this->create_subscription<example_interfaces::msg::String>("rad_den_00", 10, std::bind(&SubDenCpp00::cbsdc0, this, std::placeholders::_1));
        RCLCPP_INFO(this->get_logger(), "Sub_den_cpp_00 basladi.");
    }

private:
    void cbsdc0(const example_interfaces::msg::String::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), "%s", msg->data.c_str());
    }
    rclcpp::Subscription<example_interfaces::msg::String>::SharedPtr subscriber_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std ::make_shared<SubDenCpp00>(); // Modify Name
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}