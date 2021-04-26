//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include "opencv2/imgproc/imgproc.hpp"
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat orgim = imread("moon.jpg");
//
//	imshow("original", orgim);
//
//	cvtColor(orgim, orgim, CV_RGB2GRAY);
//
//	Canny(orgim, orgim, 100, 50); // 1. giriþ resmi 2. çýkýþ resmi  3. ilk eþik deðeri (yükseltilirse kenarlar kaybolur) 4. 2. eþik deðeri 
//
//	imshow("Canny", orgim);
//
//
//
//
//
//	waitKey(0);
//	return 0;
//}