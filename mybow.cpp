#include <iostream>
#include <opencv2/opencv.hpp>

//#include <opencv2/xfeatures2d.hpp>

int main()
{
    cv::Mat myImg = cv::imread("~/Downloads/4loko.jpg", cv::IMREAD_COLOR);

    cv::namedWindow("Image", cv::WINDOW_AUTOSIZE);
    cv::imshow("Image",myImg);
    cv::waitKey(0);

    return 0;
}