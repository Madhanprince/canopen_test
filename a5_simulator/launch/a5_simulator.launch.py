"""
Launch file: a5_simulator.launch.py
Starts the A5 hardware simulator node.

Usage:
    ros2 launch a5_simulator a5_simulator.launch.py

To run alongside your a5_control node (replace real hardware):
    Terminal 1:  ros2 launch a5_simulator a5_simulator.launch.py
    Terminal 2:  ros2 run a5_control a5_control_node  (or your lifecycle manager)
"""
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='a5_simulator',
            executable='a5_simulator_node',
            name='a5_simulator',
            output='screen',
            emulate_tty=True,       # keeps the interactive CLI readable
            parameters=[{
                'use_sim_time': False,
            }],
        )
    ])
