//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include "opencv2/imgproc/imgproc.hpp"
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//Mat open;
//Mat close;
//
//int main()
//{
//
//	Mat im = imread("1965_mustang.jpg");
//
//	imshow("original", im);
//
//	Mat element(getStructuringElement(MORPH_RECT, Size(5, 5)));
//
//	morphologyEx(im, open, MORPH_OPEN, element, Point(-1, -1), 4);
//	//1. giri� resmi 2. �k�� resmi 3. open i�lemini kullanac��m�z i�in 4. boyutlar 5 nokta belirte
//	//6. ka� kez erot delay kullanmam�z gerekti�ini s�yler
//
//	imshow("open", open); 
//
//	morphologyEx(im, close, MORPH_CLOSE, element, Point(-1, -1), 4);
//
//	imshow("close", close);
//
//	waitKey(0);
//	return 0;
//}