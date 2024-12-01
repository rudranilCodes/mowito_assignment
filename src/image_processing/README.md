This package contains the necessary files for successful completion of the assignment.

Navigate to the **srv** folder to find the service definition.

Navigate to the **scripts** folder to find the file **image_conversion.py**. This file contains the ROS 2 service server for the */stream_converter* service to output the raw video stream or greyscale video stream based on the service parameters. Setting the service paramter *conversion_mode* to 1 changes the stream to greyscale inside the *process_image* function while setting it to 0 outputs the raw color stream.

The input stream is taken from the */image_raw* topic of the **usb_cam** node. The output stream is published on the */processed_video_stream* topic.

To run this script separately, use the following command: 

    ros2 run image_processing image_conversion.py

To call the service from CLI and display the raw color stream, use:

    ros2 service call /stream_converter image_processing/srv/Conversion "{conversion_mode: 0}"

for the greyscale video stream, use:

    ros2 service call /stream_converter image_processing/srv/Conversion "{conversion_mode: 1}"


Navigate to the **launch** folder to find the **image_processing.launch.py** file. This launch file simultaneously runs the **usb_cam** node as well as the **image_conversion.py** node while also calling the */stream_converter* service. It uses launch arguments to configure runtime setting of the parameter values passed onto the */stream_converter* service. 

To run the launch file and display raw video stream, use the following command:
    
     ros2 launch image_processing image_processing.launch.py conversion_mode:=0

To run the launch file and display raw greyscale video stream, use the following command:

     ros2 launch image_processing image_processing.launch.py conversion_mode:=1