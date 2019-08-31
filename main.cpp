#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;
int main()
{
    printf("Hello\n");
    std::cout << "Hello!" << std::endl;
    cv::Mat image = cv::imread(RESOURCE_DIR"lena.png");
    cv::imshow("Display", image);

    cv::waitKey(0);
    return 0;
}
