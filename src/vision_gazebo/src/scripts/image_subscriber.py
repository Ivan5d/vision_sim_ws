#!/usr/bin/env python

import rospy 
import cv2 
#import numpy as np

from std_msgs.msg import String
from sensor_msgs.msg import Image 
from cv_bridge import CvBridge, CvBridgeError

class Camera:
    def __init__(self):
        self.bridge = CvBridge()
        self.image_received = False
        self.image = [[]]
        self.image_resized = [[]]
        #Topics name is called: <</camera/rgb/image_raw>> and pkg image_viewer publishes the same topic
        rospy.Subscriber("/camera/rgb/image_raw", Image, self.ImageCallback)
        rospy.sleep(1)
    
    def ImageCallback(self, data):
        try:
            #Converting ROS image into OpenCv 
            cv_image = self.bridge.imgmsg_to_cv2(data, "bgr8")
            self.image_received = True
            self.image = cv_image 
            self.image_resized = cv2.resize(cv_image, (480,360))
        except CvBridgeError as e:
            rospy.logerr(e)    

    #def ImageFilter(self, image)

if __name__=="__main__":
    rospy.init_node("Color_Detection", anonymous=False)
    #Creation of object camera with all characteristics of Camera class
    camera = Camera()

    while not rospy.is_shutdown():
        cv2.imshow("video", camera.image_resized)
        image_gray = cv2.cvtColor(camera.image_resized, cv2.COLOR_BGR2GRAY)
        cv2.imshow("video_gray", image_gray)
        cv2.waitKey(10) 

