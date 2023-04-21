#include "rclcpp/rclcpp.hpp"
#include <iostream>
#include "example_interfaces/msg/string.hpp"

class PubDenCpp00 : public rclcpp::Node // Modify Name
{
public:
    PubDenCpp00() : Node("pub_den_cpp_00") // Modify Name
    {
        radio_sayi_0 = 1;
        radio_sayi_1 = 1;
        radio_ad_ = "PDC0";
        publisher0_ = this->create_publisher<example_interfaces::msg::String>("rad_den_00", 10);
        publisher1_ = this->create_publisher<example_interfaces::msg::String>("rad_den_01", 10);
        timer0_ = this->create_wall_timer(std::chrono::milliseconds(500),
                                          std::bind(&PubDenCpp00::publish_news0_, this));
        timer1_ = this->create_wall_timer(std::chrono::milliseconds(1000),
                                          std::bind(&PubDenCpp00::publish_news1_, this));
        RCLCPP_INFO(this->get_logger(), "Pub_Den_Cpp has been started.");
    }

private:
    void publish_news0_()
    {
        auto msg = example_interfaces::msg::String();
        msg.data = radio_ad_ + std::string(" RD0 ") + std::to_string(radio_sayi_0);
        publisher0_->publish(msg);
        radio_sayi_0++;
    }
    void publish_news1_()
    {
        auto msg = example_interfaces::msg::String();
        msg.data = radio_ad_ + std::string(" RD1 ") + std::to_string(radio_sayi_1);
        publisher1_->publish(msg);
        radio_sayi_1++;
    }
    int radio_sayi_0;
    int radio_sayi_1;
    std::string radio_ad_;
    rclcpp::Publisher<example_interfaces::msg::String>::SharedPtr publisher0_;
    rclcpp::Publisher<example_interfaces::msg::String>::SharedPtr publisher1_;
    rclcpp::TimerBase::SharedPtr timer0_;
    rclcpp::TimerBase::SharedPtr timer1_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<PubDenCpp00>(); // Modify Name
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}