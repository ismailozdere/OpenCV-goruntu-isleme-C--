//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include "opencv2/imgproc/imgproc.hpp"
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//int trackval = 1;
//Mat orgim, dst;
//void track(int, void*) 
//{
//	if (trackval % 2 == 1) {
//		medianBlur(orgim, dst, trackval);
//
//		printf("%d", trackval);
//		imshow("median Blur", dst);
//	}
//}
//
//int main()
//{
//	orgim = imread("Harley_Quinn.jpg");
//
//	namedWindow("pencere", CV_WINDOW_AUTOSIZE);
//
//	createTrackbar("blur", "pencere", &trackval, 100, track);
//
//	imshow("resim", orgim);
//
//
//	waitKey(0);
//	return 0;
//}