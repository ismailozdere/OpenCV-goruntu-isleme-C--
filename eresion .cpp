//#include <opencv2/highgui/highgui.hpp>
//#include "opencv2/imgproc/imgproc.hpp"
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//Mat image;
//Mat dst;
//Mat dst1;
//
//int main()
//{
//	image = imread("moon.jpg");
//	erode(image, dst, getStructuringElement(MORPH_RECT, Size(7, 7)));	// giriþ resmi  çýkýþ resmi    get
//
//	dilate(image, dst1, getStructuringElement(MORPH_RECT, Size(7, 7)));
//
//	imshow("original", image);
//	imshow("erode", dst);
//	imshow("dilate", dst1);
//
//	waitKey(0);
//	return 0;
//
//
//}