#pragma once
#ifndef MARKER_DETECTION
#define MARKER_DETECTION

#include <vector>

#include <opencv2/opencv.hpp>


// Use the chessborad 6*9 as marker
// Return a list of 4x4 transformation matrices (rotation + translation)
void detectChessboardAndEstimatePose(
	const cv::Mat& input_image,
	std::vector<cv::Mat>& output_marker_poses
);

#endif 