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
//	Canny(orgim, orgim, 100, 50); // 1. giri� resmi 2. ��k�� resmi  3. ilk e�ik de�eri (y�kseltilirse kenarlar kaybolur) 4. 2. e�ik de�eri 
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