//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include "opencv2/imgproc/imgproc.hpp"
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
////int blue, green, red;
////int y = 100;
////int x = 120;
////double constVal = 0.3;
////int derinlik = 1;
////
////Mat orgImg;
////
////
////int main()
////{
////	orgImg = imread("Harley_Quinn.jpg");
////
////	Mat crtGrayImg(orgImg.rows, orgImg.cols, CV_8UC1, Scalar(0));
////
////	if (derinlik == -1) {
////
////		for (int i = 0; i < orgImg.cols; i++) {
////			for (int j = 0; j < orgImg.rows; j++) {
////
////				orgImg.at<Vec3b>(j, i)[0] = orgImg.at<Vec3b>(j, i)[0] * constVal;
////				orgImg.at<Vec3b>(j, i)[1] = orgImg.at<Vec3b>(j, i)[1] * constVal;
////				orgImg.at<Vec3b>(j, i)[2] = orgImg.at<Vec3b>(j, i)[2] * constVal;
////			}
////		}
////
////		Vec3b pixsel = orgImg.at<Vec3b>(y, x);
////
////		blue = pixsel.val[0];
////		green = pixsel.val[1];
////		red = pixsel.val[2];
////
////		cout << "Blue Value:" << blue << endl;
////		cout << "green Value:" << green << endl;
////		cout << "red Value:" << red << endl;
////
////	}
////
////	else if (derinlik == 1) {
////
////		cvtColor(orgImg, orgImg, CV_BGR2GRAY);
////
////		for (int i = 0; i < orgImg.cols; i++) {
////			for (int j = 0; j < orgImg.rows; j++) {
////
////				crtGrayImg.at<uchar>(j, i) = orgImg.at<uchar>(j, i) * constVal;
////			}
////		}
////
////
////	}
////
////
////	namedWindow("Resim Penceresi", CV_WINDOW_AUTOSIZE);
////	imshow("Resim Penceresi", crtGrayImg);
////
////
////
////	waitKey(0);
////	destroyWindow("Resim Penceresi");
////
////
////	return 0;
////}
//
//Mat newCont;
//
//void convert(Mat input, Mat output, int derinlik, float alfa)
//{
//	if (derinlik == -1)
//	{
//		for (int i = 0; i < input.rows; i++) {
//			for (int j = 0; j < input.cols; j++) {
//
//				if (input.at<Vec3b>(i, j)[0] * alfa > 255)input.at<Vec3b>(i, j)[0] = 255;
//				else input.at<Vec3b>(i, j)[0] = input.at<Vec3b>(i, j)[0] * alfa;
//
//				if (input.at<Vec3b>(i, j)[1] * alfa > 255)input.at<Vec3b>(i, j)[1] = 255;
//				else input.at<Vec3b>(i, j)[1] = input.at<Vec3b>(i, j)[1] * alfa;
//
//				if (input.at<Vec3b>(i, j)[2] * alfa > 255)input.at<Vec3b>(i, j)[2] = 255;
//				else input.at<Vec3b>(i, j)[2] = input.at<Vec3b>(i, j)[2] * alfa;
//			}
//		}
//	}
//	else if (derinlik == 1) {
//
//		cvtColor(input, input, CV_BGR2GRAY);
//
//		for (int i = 0; i < input.rows; i++) {
//			for (int j = 0; j < input.cols; j++) {
//
//				if (input.at<uchar>(i, j) * alfa > 255)input.at<uchar>(i, j) = 255;
//
//			}
//		}
//	}
//	newCont = input;
//}
//
//
//int main()
//{
//
//	Mat orgim = imread("Harley_Quinn.jpg");
//	imshow("orjinal", orgim);
//
//	convert(orgim, newCont, -1, 1.0);
//	imshow("resim", newCont);
//
//	convert(orgim, newCont, 1, 1.0);
//	imshow("resim1", newCont);
//
//	waitKey(0);
//	return 0;
//}
//
//
//
