//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include "opencv2/imgproc/imgproc.hpp"
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//Mat tophat;
//Mat gradient;
//
//int main()
//{
//	Mat im = imread("cod.jpg");
//	Mat tophatim = imread("1965_mustang.jpg");
//
//	imshow("original", im);
//	imshow("original1", tophatim);
//
//	Mat element = getStructuringElement(MORPH_RECT, Size(5, 5));
//
//	morphologyEx(tophatim, tophat, MORPH_TOPHAT, element, Point(-1, -1), 2);
//	imshow("tophat", tophat);
//
//	morphologyEx(im, gradient, MORPH_GRADIENT, element, Point(-1, -1), 2);
//	imshow("gradient", gradient);
//
//
//
//	waitKey(0);
//	return 0;
//
//}