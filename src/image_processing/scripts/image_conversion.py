#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
import cv2 
from cv_bridge import CvBridge, CvBridgeError
from sensor_msgs.msg import Image
from image_processing.srv import Conversion


class image_conversion(Node):
    def __init__(self):
        super().__init__("image_conversion_service")
        self.callback_group = ReentrantCallbackGroup()
        self.raw_img_sub = self.create_subscription(Image, "/image_raw", self.color_callback, 10)
        self.output_img_publisher = self.create_publisher(Image, "/processed_video_stream",10)
        self.stream_converter_service = self.create_service(Conversion, "/stream_converter", self.stream_converter_callback, callback_group=self.callback_group)
        self.processing_rate = 0.02
        self.cv_image = None
        self.cv_bridge = CvBridge()
        self.conversion_mode = None
        self.output_image = None
        self.create_timer(self.processing_rate, self.process_image)

    def color_callback(self, data):
        self.cv_image = self.cv_bridge.imgmsg_to_cv2(data, desired_encoding='bgr8')



    def process_image(self):

        if self.cv_image is not None:
            try:
                if self.conversion_mode == 1:
                    self.greyscale_image = cv2.cvtColor(self.cv_image, cv2.COLOR_BGR2GRAY)
                    self.output_image = self.cv_bridge.cv2_to_imgmsg(self.greyscale_image)
                    self.output_img_publisher.publish(self.output_image)
                    cv2.imshow('greyscale_stream', self.greyscale_image)
                    cv2.destroyWindow('color_stream') 
                    cv2.waitKey(1)
                elif self.conversion_mode == 0:
                    self.output_image = self.cv_bridge.cv2_to_imgmsg(self.cv_image)
                    self.output_img_publisher.publish(self.output_image)
                    cv2.imshow('color_stream', self.cv_image)
                    cv2.destroyWindow('greyscale_stream') 
                    cv2.waitKey(1)
                else:
                    self.get_logger().info("No conversion mode set yet")

            except CvBridgeError as e:
                    self.get_logger().error(f"Error during image processing: {e}")
        else:
            self.get_logger().warn("No image received yet")

            

    def stream_converter_callback(self, request, response):
        if request.conversion_mode == 1:
            self.conversion_mode = 1
        else:
            self.conversion_mode = 0
            
        response.success = True
        response.message = f"Conversion mode set to {'Greyscale' if self.conversion_mode == 1 else 'Raw'}."
        return response       

def main(args=None):
    rclpy.init(args=args)
    node = image_conversion()
    rclpy.spin(node)

if __name__ == '__main__':
    main()
    
