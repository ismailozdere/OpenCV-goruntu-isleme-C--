//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include "opencv2/imgproc/imgproc.hpp"
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//Mat bw, src;
//
//int main()
//{
//	src = imread("labirent.png");
//	cvtColor(src, bw, COLOR_BGR2GRAY);
//
//
//	threshold(bw, bw, 100, 255, THRESH_BINARY_INV);
//	imshow("binary", bw);
//
//	vector<vector<Point>>contours;
//
//	findContours(bw, contours, RETR_EXTERNAL, CHAIN_APPROX_NONE);  // giriþ    çýkýþ   contour tespit etme
//
//	Mat path = Mat::zeros(src.size(), CV_8UC1);
//	drawContours(path, contours, 0, Scalar(255), 2);
//
//	imshow("contours", path);
//
//	Mat kernel = Mat::ones(5, 5, CV_8UC1);
//
//	dilate(path, path, kernel);
//	imshow("dilate", path);
//
//	Mat path_erode;
//	erode(path, path_erode, kernel);
//	imshow("erode", path_erode);
//
//	absdiff(path, path_erode, path);
//	imshow("absdiff", path);
//
//	vector<Mat>channels;
//	split(src, channels);
//
//	//channels[0] &= ~path;  
//	//channels[1] &= ~path;
//	//channels[2] |= path;
//
//	Mat path1, dst1, dst2, dst3;
//
//	bitwise_not(path, path1);
//	bitwise_and(path1, channels[0], dst1);
//	bitwise_and(path1, channels[1], dst2);
//	bitwise_or(path, channels[2], dst3);
//
//	channels[0] = dst1;  
//	channels[1] = dst2;
//	channels[2] = dst3;
//
//	Mat dst;
//	merge(channels, dst);
//	imshow("çözüm", dst);
//
//
//
//	waitKey(0);
//	return 0;
//}