#include "ofMain.h"
#include "ofApp.h"
#include <ros/ros.h>

//========================================================================

int main(int argc, char *argv[]){
    ros::init(argc, argv, "ros_tutorial_msg_publisher");  // ノード名の初期化

	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

    ofApp *app = new ofApp();
//    app->argc = argc;
//    app->argv = argv;


	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(app);

}
