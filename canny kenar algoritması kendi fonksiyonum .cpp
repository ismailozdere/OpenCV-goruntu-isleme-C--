//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include "opencv2/imgproc/imgproc.hpp"
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//Mat dst1, orgim;
//int trackval = 1;
//
//void track(int, void*)
//{
//
//	Mat dst2(orgim.rows, orgim.cols, CV_8UC1, Scalar(0));
//	Mat dst3(orgim.rows, orgim.cols, CV_8UC1, Scalar(0));
//
//	for (int i = 0; i < orgim.cols - 1; i++)
//	{
//		for (int j = 0; j < orgim.rows - 1; j++)
//		{
//			int a = dst1.at<uchar>(j + 1, i) - dst1.at<uchar>(j, i);
//			int b = dst1.at<uchar>(j, i) - dst1.at<uchar>(j + 1, i);
//
//			if (a > trackval || b > trackval)
//			{
//				dst2.at<uchar>(j, i) = 255;
//			}
//			else
//			{
//				dst2.at<uchar>(j, i) = 0;
//			}
//		}
//	}
//
//	for (int i = 0; i < orgim.cols - 1; i++)
//	{
//		for (int j = 0; j< orgim.rows - 1; j++)
//		{
//
//			int a = dst1.at<uchar>(j, i + 1) - dst1.at<uchar>(j, i);
//			int b = dst1.at<uchar>(j, i) - dst1.at<uchar>(j, i + 1);
//		
//			if (a > trackval || b > trackval)
//			{
//				dst3.at<uchar>(j, i) = 255;
//			}
//			else
//			{
//				dst3.at<uchar>(j, i) = 0;
//			}
//
//		}
//	}
//
//	imshow("resim", dst1);
//	imshow("Canny", dst2 + dst3);
//
//}
//
//int main()
//{
//
//	 orgim = imread("moon.jpg");
//	cvtColor(orgim, dst1, CV_RGB2GRAY);
//
//	namedWindow("trackbar", CV_WINDOW_AUTOSIZE);
//	createTrackbar("türev", "trackbar", &trackval, 255, track);
//
//
//	waitKey(0);
//	return 0;
//
//}