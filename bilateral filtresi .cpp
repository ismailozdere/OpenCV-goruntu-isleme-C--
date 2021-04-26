//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include "opencv2/imgproc/imgproc.hpp"
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//Mat dst, dst1;
//
//int main()
//{
//	Mat src = imread("Harley_Quinn.jpg");
//
//	bilateralFilter(src, dst, 15, 100, 100);  //1. giriþ resmi  2. çýkýþ resmi 3    4ve 5 filtre boyutu
//	
//	GaussianBlur(src, dst1, Size(7, 7), 1);   // (1. giriþ resmi 2. çýkýþ resmi 3.filtre byutu) 4. standart sapma deðeri(sigma)
//
//	imshow("original ", src);
//	imshow("bilateral", dst);
//	imshow("gauss", dst1);
//
//
//	waitKey(0);
//	return 0;
//}