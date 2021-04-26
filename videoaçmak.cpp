//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	videocapture vid("ýron.mp4"); //kendinize göre deðiþtirin.
//	namedwindow("video penceresi", cv_wýndow_autosýze);
//
//	float fps = vid.get(cap_prop_fps);
//	printf("%.2f\n", fps);
//
//	if (vid.isopened())
//	{
//		cout << "hatalý yol veya video" << endl;
//		return -1;
//	}
//
//	while (true)
//	{
//		mat video;
//		bool frame = vid.read(video);
//
//		if (waitkey(30) == 27 || frame == 0)
//		{
//			destroywindow("video penceresi");
//			break;
//		}
//		imshow("video penceresi", video);
//	}
//	return 0;
//}
//
//
//#include "opencv2/highgui/highgui.hpp"
//#include "opencv2/imgproc/imgproc.hpp"
//#include "opencv2/core/core.hpp"
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	mat crtýmg(240, 240, cv_8uc3, scalar(200, 200, 200));
//
//	namedwindow("resim penceresi", cv_wýndow_autosýze);
//	imshow("resim penceresi", crtýmg);
//	waitkey(0);
//	destroywindow("resim penceresi");
//
//	return 0;
//}
