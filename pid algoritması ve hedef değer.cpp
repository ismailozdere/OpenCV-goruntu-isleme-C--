////#include <opencv2/core/core.hpp>
////#include <opencv2/highgui/highgui.hpp>
////#include "opencv2/imgproc/imgproc.hpp"
////#include <iostream>
////
////using namespace std;
////using namespace cv;
////
////int track = 500;
////int ýntegral;
////int sonhata;
////double pidTerm;
////double kp = 0.5, ki = 0, kd = 0.3;
////
////void trackFonk(int, void*)
////{
////	int hata = 500 - track;
////	ýntegral += hata;
////
////	pidTerm = kp * hata + ýntegral * ki + kd * (hata - sonhata);
////
////	printf("%2.f\n", pidTerm);
////}
////
////int main()
////{
////	namedWindow("trackbar penceresi", CV_WINDOW_AUTOSIZE);
////	createTrackbar("name", "trackbar penceresi", &track, 1000, trackFonk);
////
////	waitKey(0);
////	return 0;
////	
////}
//
//#include "opencv2/highgui/highgui.hpp"
//#include "opencv2/imgproc/imgproc.hpp"
//#include "opencv2/core/core.hpp"
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//double  track = 500.00;
//double sonhata;
//double ýntegral;
//double kp = 0.5;
//double ki = 0;
//double kd  = 0.3;
//double pidTerm;
//
//void trackFonk(double , void*)
//{
//	double hata = 500.00 - track;
//	ýntegral += hata;
//
//	pidTerm = kp * hata + ki * ýntegral + kd * (hata - sonhata);
//	
//	printf("%.2f\n", pidTerm);
//}
//
//int main()
//{
//	namedWindow("Trackbar Penceresi", CV_WINDOW_AUTOSIZE);
//	createTrackbar("Name", "Trackbar Penceresi", &track, 1000, trackFonk);
//
//	printf("%2.f\n", pidTerm );
//
//	waitKey(0);
//	return 0;
//}
//
