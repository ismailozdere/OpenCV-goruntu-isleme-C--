//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include "opencv2/imgproc/imgproc.hpp"
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//Mat orgim;
//Mat grayim;
//Mat hist_img;
//
//int dizi[255];
//
//
//int main()
//{
//
//	orgim = imread("Harley_Quinn.jpg");
//	cvtColor(orgim, grayim, CV_BGR2GRAY);
//
//	equalizeHist(grayim, hist_img);
//
//	Mat grafik(800, 1200, CV_8UC3, Scalar(0, 0, 0));
//
//	for (int i = 0; i < orgim.cols; i++) {
//		for (int j = 0; j < orgim.rows; j++) {
//
//			for (int p = 0;p < 255; p++) {
//
//				if (hist_img.at<uchar>(j, i) == p) dizi[p]++;
//
//			}
//		}
//	}
//
//	for (int i = 0; i < 255; i++) {
//		printf("%d'lerin sayisi:  %d\n", i, dizi[i]);
//	}
//
//	for (int i = 0; i < 255; i++) {
//
//
//		line(grafik, Point(i * 1200 / 255, 800), Point(i * 1200 / 255, 800 - dizi[i] / 30), Scalar(50, i, dizi[i]), 5, 8, 0);
//
//	}
//
//	imshow("gri resim", grafik);
//
//
//	waitKey(0);
//	return 0;
//}