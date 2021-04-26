//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include "opencv2/imgproc/imgproc.hpp"
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat original = imread("Harley_Quinn.jpg");
//
//	namedWindow("Slider");
//
//	int light = 50;												//starting value of the trackbar//
//	createTrackbar("Brightness", "Slider", &light, 100);		//creating a trackbar//
//	int contrast = 50;											//starting value of the trackbar//
//	createTrackbar("Contrast", "Slider", &contrast, 100);		//creating a trackbar//
//
//	while (true) {
//		Mat edit;
//
//		int Brightness = light - 50;							//interaction with trackbar//
//		double Contrast = contrast / 50.0;						//interaction with trackbar//
//
//		original.convertTo(edit, -1, Contrast, Brightness);			//implement the effect of change of trackbar//
//		cout << "parlaklýk\t" << Brightness << endl;
//		cout << "konstrat\t\t" << Contrast << endl;
//
//		imshow("original" ,original); 
//		imshow("deðiþim", edit);
//		if (waitKey(30) == 27)break;
//
//	}
//	
//	return 0;
//}
//
