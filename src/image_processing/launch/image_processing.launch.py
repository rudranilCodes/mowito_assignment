#!/usr/bin/python3
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.actions import ExecuteProcess
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
from launch.substitutions import FindExecutable

def generate_launch_description():

    ld = LaunchDescription()

    DeclareLaunchArgument(
        'conversion_mode',
        default_value=None
    )

    camera_node = Node(
        package='usb_cam', 
        executable='usb_cam_node_exe', 
        output='screen'
    )

    image_processing_node = Node(
        package = "image_processing",
        executable= "image_conversion.py",
        output= "screen"
    )


    conversion_mode = LaunchConfiguration('conversion_mode')

    ld.add_action(ExecuteProcess(
        cmd=[[
            FindExecutable(name='ros2'),
            " service call ",
            "/stream_converter ",
            "image_processing/srv/Conversion ",
            f'"{{conversion_mode: {conversion_mode}}}"',
        ]],
        shell=True
        )
    )


    ld.add_action(image_processing_node)
    ld.add_action(camera_node)
    return ld