#include<iostream>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>

using namespace cv;

int main()
{
	Mat image;
	std::cout << "This image is " << image.rows << " x "
		<< image.cols << std::endl;
	image = imread("Untitled1.png");
	if (image.empty())
	{
		std::cout << "No file loaded\n";
		//getchar();
		return -1;
	}
	
	namedWindow("Original Image");
	imshow("Original Image", image);
	waitKey(6000);
	return 0;
}