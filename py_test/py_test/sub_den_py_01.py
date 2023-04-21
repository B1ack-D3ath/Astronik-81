#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String


class SubDenPy01(Node):
    def __init__(self):
        super().__init__("sub_den_py_01")
        self.subscriber_ = self.create_subscription(
            String, "rad_den_01", self.callback_paper, 10)
        self.get_logger().info("Sub_den_py_01 Started")

    def callback_paper(self, msg):
        self.get_logger().info("Hear " + msg.data+" now")


def main(args=None):
    rclpy.init(args=args)
    node = SubDenPy01()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
