//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include "opencv2/imgproc/imgproc.hpp"
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//Mat img;
//int sayac;
//
//Point pt1, pt2;
//
//void fonksiyon(int event, int x, int y, int flags, void* userdata) //fare hareketini izlemek ve týlamak için iþlev 
//{
//	if (event == EVENT_MOUSEMOVE)
//	{
//		int blue = img.at<Vec3b>(y, x)[0];
//		int green = img.at<Vec3b>(y, x)[1];
//		int red = img.at<Vec3b>(y, x)[2];
//
//		cout << "blue value : " << blue << "		";
//		cout << "green value : " << green << "		";
//		cout << "red value : " << red << "		";
//		cout << "sutun :	 " << x << "satir : " << y << endl;
//
//	}
//	else if (event == EVENT_RBUTTONDOWN)
//	{
//		pt1.x = x;
//		pt1.y = y;
//	
//	}
//
//	if (event == EVENT_MOUSEMOVE && flags == EVENT_FLAG_RBUTTON)
//	{
//		pt2.x = x;
//		pt2.y = y;
//		Mat gecici = Mat::zeros(img.size(), CV_8UC3);
//		rectangle(gecici, Point(pt1.x, pt1.y), Point(pt2.x, pt2.y), Scalar(0, 255, 0), 4, 8, 0);
//		gecici = gecici + img;
//		imshow("kýrp", gecici);
//	}
//
//	if (event == EVENT_RBUTTONUP) {
//
//		Rect crop;
//		crop.x = pt1.x;
//		crop.y = pt1.y;
//
//		crop.width = pt2.x - pt1.x;
//		crop.height = pt2.y - pt1.y;
//
//		Mat sonresim = img(crop);
//		imshow("orjinal", sonresim);
//	}
//	
//	
//
//
//	else if (event == EVENT_LBUTTONDOWN)
//	{
//		sayac++;
//
//		if (sayac == 1)
//		{
//			pt1.x = x;
//			pt1.y = y;
//		}
//
//		else if(sayac==2)
//		{
//			pt2.x = x;
//			pt2.y = y;
//
//			line(img, pt1, pt2, Scalar(0, 255, 24), 2, 8, 0);
//
//			imshow("pencere", img);
//
//			sayac = 0;
//		}
//
//
//	}/*
//	else if (event == EVENT_MBUTTONDOWN)
//	{
//		cout << "mouse orta tuþu" << endl;
//	}*/
//}
//
//
//int main()
//{
//	img = imread("Harley_Quinn.jpg");
//	namedWindow("pencere", CV_WINDOW_AUTOSIZE);
//	setMouseCallback("pencere", fonksiyon, NULL);
//
//	imshow("pencere", img);
//
//	waitKey(0);
//	return 0;
//
//}