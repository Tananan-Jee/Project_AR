#pragma once

#ifndef PARAMETERS
#define PARAMETERS

#include <vector>

#include <opencv2/opencv.hpp>

// The intrinsic parameters of camera (3x3 matrix)
static const float intrinsic_parameters[9] = {
	9.626662850049687e+02f, 0.0f, 6.128667488246948e+02f,
	0.0f, 9.620093428783988e+02f, 3.427734003308024e+02f,
	0.0f, 0.0f, 1.0f
};

// The distortion coefficients of camera (1x5 vector)
static const float distortion_coefficients[5] = { 
	-5.773437164896195e-02f, 5.636449112487451e-01f, -2.889260520530237e-03f, -4.947100978736589e-03f, -1.241406621016894f
};

// The canonical coordinates of 4 corners of a marker in 3D space
static const std::vector<cv::Point3f> canonical_marker_corners_3d = {
	cv::Point3f(-0.5f, -0.5f, 0), cv::Point3f(+0.5f, -0.5f, 0),
	cv::Point3f(+0.5f, +0.5f, 0), cv::Point3f(-0.5f, +0.5f, 0)
};


#endif 