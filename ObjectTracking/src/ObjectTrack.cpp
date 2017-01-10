#include "opencv2/highgui/highgui.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/opencv.hpp"
#include <cstdio>

int main()
{
    cv::VideoCapture vcap;

    // changed address
    const std::string videoStreamAddress = "http://192.168.0.3:8080/shot.jpg";
    while(1)
        {

    if (!vcap.open(videoStreamAddress))
    {
        printf("Camera is null\n");
        return -1;
    }
    else
    {
        cv::Mat image;
        vcap.read(image);
        cv::imshow("image",image);
    }
    	cv::waitKey(1000);
    }
    return 0;
}
