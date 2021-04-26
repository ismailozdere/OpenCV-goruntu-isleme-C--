//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include "opencv2/imgproc/imgproc.hpp"
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//Mat newcont;
//void convert(Mat input, Mat output, int derinlik, float alfa,float beta)
//{
//	if (derinlik == -1) {
//		for (int i = 0; i < input.rows; i++) {
//			for (int j = 0; j < input.cols; j++) {
//
//				if (input.at<Vec3b>(i, j)[0] * alfa+beta > 255)input.at<Vec3b>(i, j)[0] = 255;
//				else if (input.at<Vec3b>(i, j)[0] * alfa + beta < 0)input.at<Vec3b>(i, j)[0] = 0;
//				else input.at<Vec3b>(i, j)[0] = input.at<Vec3b>(i, j)[0] * alfa+beta;
//
//				if (input.at<Vec3b>(i, j)[1] * alfa + beta > 255)input.at<Vec3b>(i, j)[1] = 255;
//				else if (input.at<Vec3b>(i, j)[1] * alfa + beta < 0)input.at<Vec3b>(i, j)[1] = 0;
//				else input.at<Vec3b>(i, j)[1] = input.at<Vec3b>(i, j)[1] * alfa + beta;
//
//				if (input.at<Vec3b>(i, j)[2] * alfa + beta > 255)input.at<Vec3b>(i, j)[2] = 255;
//				else if (input.at<Vec3b>(i, j)[2] * alfa + beta < 0)input.at<Vec3b>(i, j)[2] = 0;
//				else input.at<Vec3b>(i, j)[2] = input.at<Vec3b>(i, j)[2] * alfa + beta;
//			}
//		}
//	}
//	else if (derinlik == 1) {
//		cvtColor(input, input, CV_BGR2GRAY);
//
//		for (int i = 0; i < input.rows; i++) {
//			for (int j = 0; j < input.cols; j++) {
//
//				if (input.at<uchar>(i, j) * alfa+beta > 255)input.at<uchar>(i, j) = 255;
//				else if (input.at<uchar>(i, j) * alfa + beta < 0)input.at<uchar>(i, j) = 0;
//				else input.at<uchar>(i, j) = input.at<uchar>(i, j) * alfa+beta;
//			}
//		}
//	}
//	newcont = input;
//}
//
//
//
//int main()
//{
//	Mat orgim = imread("Harley_Quinn.jpg");
//	imshow("orjinal resim", orgim);
//
//	convert(orgim, newcont, -1, 1.0, 100);
//	imshow("resim", newcont);
//
//	convert(orgim, newcont, 1, 1.0, 100);
//	imshow("resim 2", newcont);
//
//	waitKey(0);
//	return 0;
//}