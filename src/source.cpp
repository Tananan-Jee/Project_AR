
//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <opencv2/calib3d.hpp>
//#include <math.h>
//#include <iostream>
//#include <fstream>
//#include <sstream>
//
//using namespace cv;
//using namespace std;
//
//
//////Defining the dimensions of checkerboard
//int CHECKERBOARD[2]{ 6,9 };
//
//int main()
//{
//    // Creating vector to store vectors of 3D points for each checkerboard image
//    vector<vector<Point3f> > objpoints;
//
//    // Creating vector to store vectors of 2D points for each checkerboard image
//    vector<vector<Point2f> > imgpoints;
//
//    // Defining the world coordinates for 3D points
//    vector<Point3f> objp;
//    for (int i{ 0 }; i < CHECKERBOARD[1]; i++)
//    {
//        for (int j{ 0 }; j < CHECKERBOARD[0]; j++)
//            objp.push_back(Point3f(j, i, 0));
//    }
//
//    // Extracting path of individual image stored in a given directory
//    vector<String> images;
//    // Path of the folder containing checkerboard images
//    string path = "pics/chess2/*.jpg";
//
//    glob(path, images);
//
//    Mat frame, gray;
//    // vector to store the pixel coordinates of detected checker board corners 
//    vector<Point2f> corner_pts;
//    bool success;
//
//    // Looping over all the images in the directory
//    for (int i{ 0 }; i < images.size(); i++)
//    {
//        frame = imread(images[i]);
//        cvtColor(frame, gray, COLOR_BGR2GRAY);
//
//        // Finding checker board corners
//        // If desired number of corners are found in the image then success = true  
//        success = findChessboardCorners(gray, Size(CHECKERBOARD[0], CHECKERBOARD[1]), corner_pts, CALIB_CB_ADAPTIVE_THRESH | CALIB_CB_FAST_CHECK | CALIB_CB_NORMALIZE_IMAGE);
//
//        /*
//         * If desired number of corner are detected,
//         * we refine the pixel coordinates and display
//         * them on the images of checker board
//        */
//        if (success)
//        {
//            TermCriteria criteria(TermCriteria::EPS | TermCriteria::MAX_ITER, 30, 0.001);
//
//            // refining pixel coordinates for given 2d points.
//            cornerSubPix(gray, corner_pts, Size(11, 11), Size(-1, -1), criteria);
//
//            objpoints.push_back(objp);
//            imgpoints.push_back(corner_pts);
//        }
//
//    }
//
//    Mat cameraMatrix, distCoeffs, R, T, inpara, expara, perview;
//
//    /*
//     * Performing camera calibration by
//     * passing the value of known 3D points (objpoints)
//     * and corresponding pixel coordinates of the
//     * detected corners (imgpoints)
//    */
//    calibrateCamera(objpoints, imgpoints, Size(gray.rows, gray.cols), cameraMatrix, distCoeffs, R, T, inpara, expara, perview);
//    cout << "cameraMatrix" << cameraMatrix << endl;
//    cout << "distCoeffs" << distCoeffs << endl;
//    cout << "R" << R << endl;
//    cout << "T" << T << endl;
//    cout << "inpara" << inpara << endl;
//    cout << "expara" << expara << endl;
//
//    //// Creating vector to store vectors of 3D points for each checkerboard image
//    //vector<vector<Point3f> > objpoints2;
//
//    //// Creating vector to store vectors of 2D points for each checkerboard image
//    //vector<vector<Point2f> > imgpoints2;
//
//    //// Defining the world coordinates for 3D points
//    //vector<Point3f> objp2;
//    //for (int i{ 0 }; i < CHECKERBOARD[1]; i++)
//    //{
//    //    for (int j{ 0 }; j < CHECKERBOARD[0]; j++)
//    //        objp2.push_back(Point3f(j, i, 0));
//    //}
//
//    //vector<Point3f> axis;
//    //axis.push_back(Point3f(3, 0, 0));
//    //axis.push_back(Point3f(0, 3, 0));
//    //axis.push_back(Point3f(0, 0, -3));
//
//
//    //// vector to store the pixel coordinates of detected checker board corners 
//    //vector<Point2f> corner_pts2;
//    //bool success2;
//    //Mat rvec, tvec;
//    //vector<Point2f> points2d;
//
//    //Mat frame2;
//    //Mat drawToFrame;
//
//    //VideoCapture vid(0);
//
//    //if (!vid.isOpened())
//    //{
//    //    return 0;
//    //}
//    //int framePerSecond = 20;
//    //namedWindow("Webcam", WINDOW_AUTOSIZE);
//    //while (true)
//    //{
//    //    if (!vid.read(frame))
//    //    {
//    //        break;
//    //    }
//    //    vector<Point2f> foundPoints;
//    //    bool found = false;
//    //    cvtColor(frame, gray, COLOR_BGR2GRAY);
//    //    found = findChessboardCorners(gray, Size(CHECKERBOARD[0], CHECKERBOARD[1]), foundPoints, CALIB_CB_ADAPTIVE_THRESH | CALIB_CB_FAST_CHECK | CALIB_CB_NORMALIZE_IMAGE);
//    //    frame.copyTo(drawToFrame);
//    //    //drawChessboardCorners(drawToFrame, Size(CHECKERBOARD[0], CHECKERBOARD[1]), foundPoints, found);
//
//    //    if (found)
//    //    {
//
//    //        TermCriteria criteria(TermCriteria::EPS | TermCriteria::MAX_ITER, 30, 0.001);
//    //        // refining pixel coordinates for given 2d points.
//    //        cornerSubPix(gray, foundPoints, Size(11, 11), Size(-1, -1), criteria);
//
//    //        solvePnP(objp2, foundPoints, cameraMatrix, distCoeffs, rvec, tvec);
//    //        projectPoints(axis, rvec, tvec, cameraMatrix, distCoeffs, points2d);
//
//    //        line(drawToFrame, foundPoints[0], points2d[0], Scalar(255, 0, 0), 5);
//    //        line(drawToFrame, foundPoints[0], points2d[1], Scalar(0, 255, 0), 5);
//    //        line(drawToFrame, foundPoints[0], points2d[2], Scalar(0, 0, 255), 5);
//    //        imshow("Webcam", drawToFrame);
//    //    }
//    //    else
//    //    {
//    //        imshow("Webcam", frame);
//    //    }
//    //    char character = waitKey(1000 / framePerSecond);
//
//
//    //}
//
//    return 0;
//}



#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <math.h>
#include <iostream>
#include <fstream>
#include <sstream>

// Include GLEW
#include <GL/glew.h>
// Include GLFW
#include <GLFW/glfw3.h>
// Include GLM
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

//#include <shader.hpp>
#include "parameters.h"
#include "draw_graphics.h"
#include "marker_detection.h"
#include "graphics_utility.h"


int main() {

	// Open the internal camera
	cv::VideoCapture cam(0);
	//CAP_PROP_FRAME_WIDTH = 3, CAP_PROP_FRAME_HEIGHT =4
	// Set width as 540 pixels
	cam.set(3, 1080);
	// Set height as 540 pixels
	cam.set(4, 1080);

	// Current frame from the internal camera
	cv::Mat frame;

	GLFWwindow* window = nullptr;
	initializeGL(window);

	// Load the shaders for drawing background
	GLuint background_shader_id = loadShaders(
		"background_vertex_shader.vert",
		"background_fragment_shader.frag");
	
	//shading bunny
	//Load the shaders for drawing the bunny with specular shading
	GLuint shading_shader_id = loadShaders(
		"shading_vertex_shader.vert",
		"shading_fragment_shader.frag");
	
	//coloring bunny + cube
	// Load the color for drawing the cube/bunny
	//GLuint color_shader_id = loadShaders(
	//	"color_vertex_shader.vert",
	//	"color_fragment_shader.frag");

	////color bunny
	//std::vector<glm::vec3> color_bunny_vertices;
	//loadPly("./models/bun_zipper_res4.ply", color_bunny_vertices);
	
	//shading bunny
	std::vector<glm::vec3> shading_vertices, shading_normals;
	loadObj("./models/bun_zipper.obj",shading_vertices, shading_normals);


	//////cube
	////// A cube has 6 faces with 2 triangles each, so this makes 6*2=12 triangles, and 12*3 vertices
	//static const std::vector<glm::vec3> color_vertices = {
	//	glm::vec3(-1.0f,-1.0f,-1.0f),
	//	glm::vec3(-1.0f,-1.0f, 1.0f),
	//	glm::vec3(-1.0f, 1.0f, 1.0f),
	//	glm::vec3(1.0f, 1.0f,-1.0f),
	//	glm::vec3(-1.0f,-1.0f,-1.0f),
	//	glm::vec3(-1.0f, 1.0f,-1.0f),
	//	glm::vec3(1.0f,-1.0f, 1.0f),
	//	glm::vec3(-1.0f,-1.0f,-1.0f),
	//	glm::vec3(1.0f,-1.0f,-1.0f),
	//	glm::vec3(1.0f, 1.0f,-1.0f),
	//	glm::vec3(1.0f,-1.0f,-1.0f),
	//	glm::vec3(-1.0f,-1.0f,-1.0f),
	//	glm::vec3(-1.0f,-1.0f,-1.0f),
	//	glm::vec3(-1.0f, 1.0f, 1.0f),
	//	glm::vec3(-1.0f, 1.0f,-1.0f),
	//	glm::vec3(1.0f,-1.0f, 1.0f),
	//	glm::vec3(-1.0f,-1.0f, 1.0f),
	//	glm::vec3(-1.0f,-1.0f,-1.0f),
	//	glm::vec3(-1.0f, 1.0f, 1.0f),
	//	glm::vec3(-1.0f,-1.0f, 1.0f),
	//	glm::vec3(1.0f,-1.0f, 1.0f),
	//	glm::vec3(1.0f, 1.0f, 1.0f),
	//	glm::vec3(1.0f,-1.0f,-1.0f),
	//	glm::vec3(1.0f, 1.0f,-1.0f),
	//	glm::vec3(1.0f,-1.0f,-1.0f),
	//	glm::vec3(1.0f, 1.0f, 1.0f),
	//	glm::vec3(1.0f,-1.0f, 1.0f),
	//	glm::vec3(1.0f, 1.0f, 1.0f),
	//	glm::vec3(1.0f, 1.0f,-1.0f),
	//	glm::vec3(-1.0f, 1.0f,-1.0f),
	//	glm::vec3(1.0f, 1.0f, 1.0f),
	//	glm::vec3(-1.0f, 1.0f,-1.0f),
	//	glm::vec3(-1.0f, 1.0f, 1.0f),
	//	glm::vec3(1.0f, 1.0f, 1.0f),
	//	glm::vec3(-1.0f, 1.0f, 1.0f),
	//	glm::vec3(1.0f,-1.0f, 1.0f)
	//};


	while (glfwGetKey(window, GLFW_KEY_ESCAPE) != GLFW_PRESS && !glfwWindowShouldClose(window)) {
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


		if (cam.read(frame)) {
			// Convert BGR to RGB
			cvtColor(frame, frame, cv::COLOR_BGR2RGB);

			// Record the poses of the markers
			std::vector<cv::Mat> all_marker_poses;

			detectChessboardAndEstimatePose(frame, all_marker_poses);
			// Switch the image origin from top-left to bottom-left image
			// in order to draw in OpenGL
			flip(frame, frame, 0);

			// Draw the current frame as background
			drawBackground(frame, background_shader_id);
			glClear(GL_DEPTH_BUFFER_BIT);

			glm::mat4 projection;
			buildProjection(frame, projection);
			
			////model for cube
			//// translate on x y and z-axis
			//glm::vec3 translate_axis(0.1f, 0.07f, 0.1f);
			//// Rotate around z-axis
			//glm::vec3 rotation_axis(0.0f, 0.0f, 1.0f);
			//// Scaling is to shrink the size of the bunny
			//glm::mat4 model = glm::translate(glm::mat4(1.0f), translate_axis) * glm::rotate(glm::mat4(), glm::radians(89.0f), rotation_axis) * glm::scale(glm::mat4(), glm::vec3(0.05f, 0.05f, 0.05f));
			//

			//model for bunny
			// translate on x y and z-axis
			glm::vec3 translate_axis(0.1f, 0.07f, 0.0f);
			// Rotate around x-axis
			glm::vec3 rotation_axis(1.0f, 0.0f, 0.0f);
			// Scaling is to shrink the size of the bunny
			glm::mat4 model = glm::translate(glm::mat4(1.0f), translate_axis) * glm::rotate(glm::mat4(), glm::radians(89.0f), rotation_axis) * glm::scale(glm::mat4(), glm::vec3(0.5f, 0.5f, 0.5f));

			size_t num_of_marker = all_marker_poses.size();
			for (size_t i = 0; i < num_of_marker; i++) {
				cv::Mat current_marker_pose = all_marker_poses[i];
				glm::mat4 view = glm::make_mat4(reinterpret_cast<GLfloat*>(current_marker_pose.data));

				//This is the code for drawing color bunny
				/*drawColor(
					color_bunny_vertices,
					model, view, projection,
					color_shader_id);*/
				

				//// This is the code for drawing cube
				//drawColor(
				//	color_vertices,
				//	model, view, projection,
				//	color_shader_id);
				

				// This is the code for drawing shading bunny
				drawShading(
					shading_vertices, shading_normals,
					model, view, projection,
					shading_shader_id);
				
			}

			glfwSwapBuffers(window);
		}
	}

	glDeleteProgram(background_shader_id);
	glDeleteProgram(shading_shader_id);
	//glDeleteProgram(color_shader_id);

	// Close OpenGL window and terminate GLFW
	glfwTerminate();

	return 0;
}
