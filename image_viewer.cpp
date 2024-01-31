#include <opencv2/opencv.hpp>
#include <iostream>

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <image_file>" << std::endl;
        return 1;
    }

    cv::Mat image = cv::imread(argv[1]);
    
    if (image.empty()) {
        std::cerr << "Error: Couldn't open the image file." << std::endl;
        return 2;
    }

    cv::namedWindow("Image Viewer", cv::WINDOW_NORMAL);
    cv::imshow("Image Viewer", image);
    cv::waitKey(0);

    return 0;
}
