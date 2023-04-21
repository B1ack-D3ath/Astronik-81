#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String


class PubDenPy00(Node):
    def __init__(self):
        super().__init__("pub_den_py_00")
        self.publisher_0 = self.create_publisher(String, "rad_den_00", 10)
        self.publisher_1 = self.create_publisher(String, "rad_den_01", 10)
        self.timer_0 = self.create_timer(0.5, self.publish_news_0)
        self.timer_1 = self.create_timer(1, self.publish_news_1)
        self.get_logger().info("Pub_den_py_00 Started")
        self.a_0 = 1
        self.a_1 = 1

    def publish_news_0(self):
        msg = String()
        msg.data = "Hello" + str(self.a_0)
        self.publisher_0.publish(msg)
        self.a_0 += 1

    def publish_news_1(self):
        msg = String()
        msg.data = "Hello Ramazan " + str(self.a_1)
        self.publisher_1.publish(msg)
        self.a_1 += 1


def main(args=None):
    rclpy.init(args=args)
    node = PubDenPy00()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
