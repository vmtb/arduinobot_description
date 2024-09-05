from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from moveit_configs_utils import MoveItConfigsBuilder
import os
from ament_index_python import get_package_share_directory
from launch_ros.actions import Node

def generate_launch_description():
    
    is_sim_arg = DeclareLaunchArgument(
        "is_sim", 
        default_value="True"
    )
    
    is_sim = LaunchConfiguration("is_sim")
    moveit_config = (MoveItConfigsBuilder("arduinobot", package_name="arduinobot_moveit")
                     .robot_description(file_path=os.path.join(get_package_share_directory("arduinobot_description"), "urdf", "arduinobot.urdf.xacro"))
                     .robot_description_semantic(file_path="config/arduinobot.srdf")
                     .trajectory_execution(file_path="config/moveit_controllers.yaml")
                     .to_moveit_configs()
    )
    move_group_nooode = Node(
        package="moveit_ros_move_group", 
        executable="move_group",
        output="screen", 
        parameters=[moveit_config.to_dict(), {"use_sim_time": is_sim}, {"publish_robot_description_semantic": True}], 
        arguments=["--ros-args", "--log-level", "info"] 
    )
    
    rviz_config = os.path.join(get_package_share_directory("arduinobot_moveit"), "config", "moveit.rviz")
    
    rviz_node = Node(
        package="rviz2", 
        executable="rviz2", 
        name="rviz2", 
        output="screen", 
        arguments=["-d", rviz_config]
    )
    
    return LaunchDescription([
        is_sim_arg,
        move_group_nooode
    ])