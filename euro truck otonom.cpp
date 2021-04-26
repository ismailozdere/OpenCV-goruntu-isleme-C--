#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>

using namespace std;
using namespace cv;


int ilowH = 0;
int ihighH = 179;

int ilowS = 0;
int ihighS = 34;

int ilowV = 109;
int ihighV = 255;

int trackVal = 0;

float mcenterx, mcentery;
float pidTerm;
float kp = 1, ki = 1, kd = 0;
float ýntegral;
int hata;
static int toplam_hata;
static int son_hata;

Mat im, hsv, imthresh, video, cropim;

VideoCapture vid("euro_truck1.mp4");

void videokirpma()
{
	Rect rect;
	rect.x = 100;
	rect.y = 200;

	rect.width = 300;
	rect.height = 350;

	cropim = video(rect);
}

void filtre()
{
	cvtColor(cropim, hsv, CV_BGR2HSV);

	inRange(hsv, Scalar(ilowH, ilowS, ilowV), Scalar(ihighH, ihighS, ihighV), imthresh);

	erode(imthresh, imthresh, getStructuringElement(MORPH_ELLIPSE, Size(3, 3)));
	dilate(imthresh, imthresh, getStructuringElement(MORPH_ELLIPSE, Size(3, 3)));

	dilate(imthresh, imthresh, getStructuringElement(MORPH_ELLIPSE, Size(3, 3)));
	erode(imthresh, imthresh, getStructuringElement(MORPH_ELLIPSE, Size(3, 3)));

	Mat element = getStructuringElement(MORPH_RECT, Size(3, 3));

	morphologyEx(imthresh, imthresh, MORPH_OPEN, element, Point(-1, -1), 2);
	morphologyEx(imthresh, imthresh, MORPH_OPEN, element, Point(-1, -1), 2);

}



void track(int, void*)
{
	
	vid.read(video);

	resize(video, video, Size(600, 600));

	videokirpma();
	filtre();

	vector<vector<Point> > contours;
	vector<Vec4i>hierarchy;

	findContours(imthresh, contours, hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE, Point(0, 0));

	vector<Moments> mu(contours.size());

	for (int i = 0; i < contours.size(); i++)
	{
		mu[i] = moments(contours[i]);
	}

	vector<Point2f> mc(contours.size());

	for (int i = 0; i < contours.size(); i++)
	{
		mcenterx = mu[i].m10 / mu[i].m00;
		mcentery = mu[i].m01 / mu[i].m00;
		mc[i] = Point2f((mcenterx), (mcentery));

		if (mu[i].m00 < 1800 && mu[i].m00 > 200) {

			circle(video, Point(mcenterx + 100, mcentery + 1000), 3, Scalar(0, 0, 255), 3, LINE_AA, 0);
			//videoda þeridin yerin görmek için 
		}
	}

	circle(video, Point(300,400), 3, Scalar(100, 255, 0), 3, LINE_AA, 0);

	int fark = 300 - mcenterx + 100;

	hata = 300 - fark;
	toplam_hata += hata;
	
	pidTerm = kp * (hata) +kd * (hata - son_hata)+ toplam_hata * ki  ;

	son_hata = hata;

	printf("%.2f\n", pidTerm);

	imshow("color", imthresh);
	imshow("resim3", video); //gerçek video

}


int main()
{


	namedWindow("control", CV_WINDOW_AUTOSIZE);

	createTrackbar("lowH", "control", &ilowH, 10, track); // Hue (0 - 179)
	createTrackbar("highH", "control", &ihighH, 200, track);

	createTrackbar("lowS", "control", &ilowS, 10, track); // saturation (0 - 255)
	createTrackbar("highS", "control", &ihighS, 40, track);

	createTrackbar("lowV", "control", &ilowV, 10, track); // value (0 - 179)
	createTrackbar("highV", "control", &ihighV, 200, track);




	waitKey(0);
	return 0;
}