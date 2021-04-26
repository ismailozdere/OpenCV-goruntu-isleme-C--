//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include "opencv2/imgproc/imgproc.hpp"
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//Mat orgim, gray, dst, abs_dst, cikis;
//
//
//
//int main()
//{
//	Mat orgim = imread("moon.jpg");
//	resize(orgim, orgim, Size(500, 500));
//
//	GaussianBlur(orgim, orgim, Size(3, 3), 7);
//	cvtColor(orgim, gray, CV_RGB2GRAY);
//	
//	Laplacian(gray, dst, CV_16S, 5); //1. giriþ resmi  2. çýkýþ resmi  3. derinlik 4.filtre boyutu
//	Laplacian(orgim, cikis, CV_16S, 5); //1. giriþ resmi  2. çýkýþ resmi  3. derinlik 4.filtre boyutu
//
//	convertScaleAbs(dst, abs_dst); //  1. giriþ resmi 2. çýkýþ resmi 
//
//	imshow("resim", abs_dst);
//	imshow("resim1", orgim);
//
//	waitKey(0);
//	return 0;
//}
///* iltek 
//b42 - fKp - yyM - Yyj*/