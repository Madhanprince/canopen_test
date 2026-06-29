#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import UInt32
from sensor_msgs.msg import Range
from example_interfaces.msg import Float32

# Replace this import with your actual message type
# from a5_msgs.msg import LedCommandMsg

class FakeA5Slave(Node):
    def __init__(self):
        super().__init__('fake_a5_slave')

        self.encoder_pub = self.create_publisher(UInt32, '/encoder', 10)
        self.ultrasonic_pub = self.create_publisher(Range, '/ultrasonic', 10)

        # Replace with your actual message type and topic
        # self.led_sub = self.create_subscription(
        #     LedCommandMsg,
        #     '/led_command',
        #     self.led_callback,
        #     10
        # )

        self.encoder_count = 0
        self.timer = self.create_timer(1.0, self.publish_data)

    def publish_data(self):
        encoder = UInt32()
        encoder.data = self.encoder_count
        self.encoder_pub.publish(encoder)

        ultrasonic = Range()
        ultrasonic.header.stamp = self.get_clock().now().to_msg()
        ultrasonic.header.frame_id = "ultrasonic_link"
        ultrasonic.field_of_view = 0.52
        ultrasonic.min_range = 0.02
        ultrasonic.max_range = 4.0
        ultrasonic.range = 1.5
        self.ultrasonic_pub.publish(ultrasonic)

        self.encoder_count += 10

        self.get_logger().info(
            f"Published Encoder={encoder.data}, Ultrasonic={ultrasonic.range}"
        )

    def led_callback(self, msg):
        self.get_logger().info(
            f"LED Status={msg.led_command}, "
            f"Left={msg.left_indicator}, "
            f"Right={msg.right_indicator}"
        )


def main():
    rclpy.init()
    node = FakeA5Slave()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
