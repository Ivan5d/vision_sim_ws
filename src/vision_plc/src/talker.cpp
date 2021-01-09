#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream> 

//BUG: error libraries  
int main(int argc, char **argv)
{
    ros::init(argc, argv, "talker");
    
    ros::NodeHandle n;
    //publisher_object = node_handle.advertise<
    //Ros_message::message_type > ("topic_name",1000)
    ros::Publisher chatter_pub = n.advertise<
    std_msgs::String>("chatter",1000);
    
    ros::Rate loop_rate(10);
    
    int count = 0;
    
    while (ros::ok())
    {
        //Ros message definition
        std_msgs::String msg;
        std::stringstream ss;
        ss << "hello world" << count;
        msg.data = ss.str();
        ROS_INFO("%s", msg.data.c_str());
        //publisher_object.publish 
        chatter_pub.publish(msg);
        //Should be called after publishing a topic
        ros::spinOnce();
        loop_rate.sleep();
        ++count;
    }
    return 0;
}