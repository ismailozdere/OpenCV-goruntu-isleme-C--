//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include "opencv2/imgproc/imgproc.hpp"
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//float filtre[7][7] = {
//	{1,1,1,1,1,1,1},
//	{1,1,1,1,1,1,1},
//	{1,1,1,1,1,1,1},
//	{1,1,1,1,1,1,1},
//	{1,1,1,1,1,1,1},
//	{1,1,1,1,1,1,1},
//	{1,1,1,1,1,1,1}
//};
//
//int filtreboyutu = 7;
//
//
//double toplam, toplam1, toplam2;
//double  k, l;
//
//Mat orgim;
//Mat dst;
//
//int main(int argc, char** argv)
//{
//
//	orgim = imread("Harley_quinn.jpg");
//	Mat filtreres(orgim.rows, orgim.cols, CV_8UC3, Scalar(0, 0, 0));
//
//	l = filtreboyutu * filtreboyutu;
//	k = 1.0 / 1;
//
//	for (int y = 0; y < orgim.rows - filtreboyutu; y++) {
//		for (int x = 0; x < orgim.cols - filtreboyutu; x++) {
//			for (int t = 0; t < filtreboyutu; t++) {
//				for (int f = 0; f < filtreboyutu; f++) {
//
//					toplam =  toplam  + orgim.at<Vec3b>(y + t, x + f)[0] * filtre[t][f] * k;
//					toplam1 = toplam1 + orgim.at<Vec3b>(y + t, x + f)[1] * filtre[t][f] * k;
//					toplam2 = toplam2 + orgim.at<Vec3b>(y + t, x + f)[2] * filtre[t][f] * k;
//				}
//			}
//
//			filtreres.at<Vec3b>(y, x)[0] = toplam;
//			filtreres.at<Vec3b>(y, x)[1] = toplam1;
//			filtreres.at<Vec3b>(y, x)[2] = toplam2;
//
//			toplam = 0;
//			toplam1 = 0;
//			toplam2 = 0;
//		}
//	}
//
//	blur(orgim, dst, Size(3, 3), Point(-1, -1));
//
//	imshow("resim", orgim);
//	imshow("hazýr resim", dst);
//	imshow("kendi resim", filtreres);
//
//	waitKey(0);
//	return 0;
//}