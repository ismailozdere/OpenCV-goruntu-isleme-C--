//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include "opencv2/imgproc/imgproc.hpp"
//#include"opencv2/objdetect/objdetect.hpp"
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat res = imread("toplu3.jpg");
//	//resize(res, res, Size(600, 900));
//
//	CascadeClassifier veri;
//	veri.load("haarcascade_eye.xml");
//
//	Mat grires;
//
//	cvtColor(res, grires, CV_BGR2GRAY);
//	vector<Rect> verivektoru;
//
//	veri.detectMultiScale(grires, verivektoru, 1.2, 3, 0, Size(30, 30));
//	//1. gri resim 2.oluþturulan dikdortgen  3. algýlama deðeri  4. kaç komþu dikdörtgen bulunmasý   5. fla
//
//	for (int i = 0; i < verivektoru.size(); i++)
//	{
//		Point pt1(verivektoru[i].x + verivektoru[i].width, verivektoru[i].y + verivektoru[i].height);
//		Point pt2(verivektoru[i].x, verivektoru[i].y);
//		rectangle(res, pt1, pt2, cvScalar(0, 255, 0, 0), 2, 8, 0);
//	}
//
//	imshow("yüz tanýma", res);
//
//	waitKey(0);
//	return 0;
//}