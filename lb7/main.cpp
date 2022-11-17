#include <opencv2/highgui.hpp>
//g++ -std=c++14 main.cpp `pkg-config opencv4 --cflags --libs` -o output

int main(){
    cv::Mat img = cv::imread("/home/liqwi/test.jpeg");
    cv::imshow("TEST IMAGE", img);
    cv::waitKey(0);
    return 0;
}
