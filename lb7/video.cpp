#include <opencv2/highgui.hpp>
using namespace cv;

int main()
{
   VideoCapture cap("jojo.mp4");

if(!cap.isOpened())
        return -1;

    
    Mat frame;
    for(;;) 
    {
        cap >> frame;
        imshow( "Video Footage", frame );
        if( waitKey(33) >= 0 ) break;
    }
return 0;
}
