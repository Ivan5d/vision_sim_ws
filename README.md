# vision_sim_ws

#### This repository attempts to use openCV with Gazebo/ROS simulation. It uses Turtlebots3 waffle robot model. 


To spawn the waffle model into Gazebo, write the following command: 

`roslaunch vision_gazebo vision_gazebo.launch`

To run the image subscriber and displaying the openCV result, write the following command:

`rosrun vision_gazebo image_subscriber.py`

To teleoperate the robot with the keyboard, write the following command:

`rosrun turtlebot3_teleop turtlebot3_teleop_key`

To visualize the depth camera on rviz, write the following command:

`roslaunch turtlebot3_gazebo turtlebot3_gazebo_rviz.launch`