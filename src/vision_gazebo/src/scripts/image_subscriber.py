#!/usr/bin/env python

import rospy 
import cv2 
import numpy as np

from std_msgs.msg import String
from sensor_msgs.msg import Image 
from cv_bridge import CvBridge, CvBridgeError

class Camera:
    def __init__(self):
        self.bridge = CvBridge()
        self.image_received = False
        self.image = [[]]
        #Topics name is called: <</camera/rgb/image_raw>> and pkg image_viewer publishes the same topic
        rospy.Subscriber("/camera/rgb/image_raw", Image, self.ImageCallback)
        rospy.sleep(1)
    
    def ImageCallback(self, data):
        try:
            #Converting ROS image into OpenCv 
            cv_image = self.bridge.imgmsg_to_cv2(data, "bgr8")
            self.image_received = True
            self.image = cv_image 
        except CvBridgeError as e:
            rospy.logerr(e)
    
    def take_photo (self, img_title):
        if self.image_received:
            cv2.imwrite(img_title, self.image)
            return True
        else: 
            return False

if __name__=="__main__":
    rospy.init_node("Color_Detection", anonymous=False)
    camera = Camera()
    cv2.namedWindow("video")

    lower_color = np.array([0,0,0])
    upper_color = np.array([0,0,0])

    while not rospy.is_shutdown():
        #hsv = cv2.cvtColor(camera.image, cv2.COLOR_BGR2HSV)
        cv2.imshow ("video", camera.image)
        cv2.waitKey(10) 

