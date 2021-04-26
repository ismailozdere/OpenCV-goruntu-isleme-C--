//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	VideoCapture vid("ýron.mp4"); //Kendinize Göre Deðiþtirin.
//	namedWindow("Video Penceresi", CV_WINDOW_AUTOSIZE);
//
//	float fps = vid.get(CAP_PROP_FPS);
//	printf("%.2f\n", fps);
//
//	if (!vid.isOpened())
//	{
//		cout << "Hatalý yol veya video" << endl;
//		return -1;
//	}
//
//
//	while (true)
//	{
//		Mat video;
//		bool frame = vid.read(video);
//
//		if (waitKey(30) == 27 || frame == 0)
//		{
//			destroyWindow("Video Penceresi");
//			break;
//		}
//
//		imshow("Video Penceresi", video);
//	}
//
//	return 0;
//}