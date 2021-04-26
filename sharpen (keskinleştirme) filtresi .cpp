//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include "opencv2/imgproc/imgproc.hpp"
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//Mat orgim;
//Mat dst;
//int trackval = 1;
//
//
//void track(int, void*)
//{
//	addWeighted(orgim, trackval / 7.0, dst, -0.5, 0, dst);   // 1. giriþ resmi 2. 3. çýkýþ matrisi
//	imshow("Add", dst);
//
//}
//
//int main()
//{
//	orgim = imread("moon.jpg");
//	resize(orgim, orgim, Size(500, 500));
//
//	GaussianBlur(orgim, dst, Size(3, 3), 11);
//
//	namedWindow("Trackbar", CV_WINDOW_AUTOSIZE);
//	createTrackbar("filtre", "Trackbar", &trackval, 100, track);// 1. trackbar ismi 2. pencere ismi 3. deðiþtirilen deðer  4. max deðer 5. fonksiyon 
//	
//	imshow("original", orgim);
//
//	waitKey(0);
//	return 0;
//}
