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
//
//double ilowH = 0;
//double ihighH = 179;
//
//double ilowS = 0;
//double ihighS = 34;
//
//double ilowV = 109;
//double ihighV = 255;
//
//double trackVal = 0;
//
//
//float mcenterx, mcentery;
//float pidTerm;
//float kp = 0.5, ki = 0, kd = 0.3;
//float ýntegral;
//int hata;
//static int toplam_hata;
//static int son_hata;
//
//
//
//Mat im,  hsv, imthresh;;
//
//void track(int, void*)
//{
//	im = imread("yol.jpg");
//
//	resize(im, im, Size(600, 600));
//
//	int x = 0;
//	int y = trackVal;
//
//	Rect crop;
//
//	crop.x = x;
//	crop.y = y;
//
//	crop.width = 600;
//	crop.height = 50;
//
//	Mat cropim = im(crop);
//
//	imshow("resim1", cropim);
//
//	cvtColor(cropim, hsv, CV_BGR2HSV);
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
//
//	vector<Point2f> mc(contours.size());
//
//	for (int i = 0; i < contours.size(); i++)
//	{
//		 mcenterx = mu[i].m10 / mu[i].m00;
//		 mcentery = mu[i].m01 / mu[i].m00;
//		 mc[i] = Point2f((mcenterx), (mcentery));
//
//		
//		circle(cropim, Point(mcenterx, mcentery), 3, Scalar(0, 0, 255), 3, LINE_AA, 0);
//
//		
//	}
//
//	double orta = (mu[1].m10 / mu[1].m00 + mu[0].m10 / mu[0].m00) / 2;
//	circle(cropim, Point(orta, 25), 3, Scalar(100, 255, 0), 3, LINE_AA, 0);
//
//	circle(im, Point(300, 25 + trackVal), 3, Scalar(255, 255, 0), 3, LINE_AA, 0);
//
//
//	double hata = 300 - orta;
//	ýntegral += hata;
//
//	pidTerm = kp * hata + ýntegral * ki + kd * (hata - son_hata);
//
//	son_hata = hata;
//
//	printf("%2.f\n", pidTerm);
//
//	imshow("resim2", cropim);
//
//}
//
//
//int main()
//{
//	im = imread("yol.jpg");
//
//	resize(im, im, Size(600, 600));
//
//	imshow("original", im);
//
//	namedWindow("trackbar penceresi", CV_WINDOW_AUTOSIZE);
//
//	createTrackbar("name", "trackbar penceresi", &trackVal, 500, track);
//
//	namedWindow("control", CV_WINDOW_AUTOSIZE);
//
//	createTrackbar("lowH", "control", &ilowH, 500, track); // Hue (0 - 179)
//	createTrackbar("highH", "control", &ihighH, 500, track);
//
//	createTrackbar("lowS", "control", &ilowS, 500, track); // saturation (0 - 255)
//	createTrackbar("highS", "control", &ihighS, 500, track);
//
//	createTrackbar("lowV", "control", &ilowV, 500, track); // value (0 - 179)
//	createTrackbar("highV", "control", &ihighV, 179, track);
//
//
//
//
//	waitKey(0);
//	return 0;
//}