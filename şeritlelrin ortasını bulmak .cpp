//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include "opencv2/imgproc/imgproc.hpp"
//#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//
//using namespace std;
//using namespace cv;
//
//Mat im, hsv, imthresh;
//Mat video;
//
//double ilowH = 0;
//double ihighH = 179;
//
//double ilowS = 0;
//double ihighS = 255;
//
//double ilowV = 0;
//double ihighV = 255;
//float mcenterx, mcentery;
//
//void track(int, void*)
//{
//	cvtColor(video, hsv, CV_BGR2HSV);
//
//	inRange(hsv, Scalar(ilowH, ilowS, ilowV), Scalar(ihighH, ihighS, ihighV), imthresh);
//
//	erode(imthresh, imthresh, getStructuringElement(MORPH_ELLIPSE, Size(3,3)));
//	dilate(imthresh, imthresh, getStructuringElement(MORPH_ELLIPSE, Size(3, 3)));
//
//	dilate(imthresh, imthresh, getStructuringElement(MORPH_ELLIPSE, Size(3, 3)));
//	erode(imthresh, imthresh, getStructuringElement(MORPH_ELLIPSE, Size(3, 3)));
//
//	vector<vector<Point> > contours;
//	vector<Vec4i>hierarchy;
//
//	findContours(imthresh, contours, hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE, Point(0, 0));
//
//	vector<Moments> mu(contours.size());
//
//	for (int i = 0; i < contours.size(); i++)
//	{
//		mu[i] = moments(contours[i]);
//	}
//	vector<Point2f> mc(contours.size());
//
//	for (int i = 0; i < contours.size(); i++)
//	{
//		mcenterx = mu[i].m10 / mu[i].m00;
//		mcentery = mu[i].m01 / mu[i].m00;
//		mc[i] = Point2f((mcenterx), (mcentery));
//
//		drawContours(video, contours, i, Scalar(0, 255, 0), 3);
//		circle(video, Point(mcenterx, mcentery), 3, Scalar(0, 0, 255), 3, LINE_AA, 0);
//
//
//	}
//	
//	imshow("color", imthresh);
//}
//
//int main()
//{
//	//im = imread("yol.jpg");
//	//resize(im, im, Size(600, 600));
//
//	VideoCapture vid("C:/Users/ismail özdere/source/repos/opencv/gözv.mp4");
//		
//	//imshow("original", im);
//
//	namedWindow("control", CV_WINDOW_AUTOSIZE);
//
//	createTrackbar("lowH", "control", &ilowH, 179, track); // Hue (0 - 179)
//	createTrackbar("highH", "control", &ihighH, 179, track);
//
//	createTrackbar("lowS", "control", &ilowS, 179, track); // saturation (0 - 255)
//	createTrackbar("highS", "control", &ihighS, 179, track);
//
//	createTrackbar("lowV", "control", &ilowV, 179, track); // value (0 - 179)
//	createTrackbar("highV", "control", &ihighV, 179, track);
//
//	/*while (true) {
//
//		vid.read(video);
//		resize(video, video, Size(600, 600));
//
//		imshow("Video", video);
//
//		waitKey(100);
//
//		if (waitKey(30) == 27) break;
//	}*/
//
//	
//	return 0;
//}