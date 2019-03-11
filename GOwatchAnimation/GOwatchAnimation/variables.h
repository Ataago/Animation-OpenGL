// Global Variables


// Main.cpp
#define UNIT 960
#define ESC 27
#define SPACE 32


int W_WIDTH = 1920;
int W_HEIGHT = 1080;
double ASPECTRATIO = (double) W_WIDTH / (double) W_HEIGHT;

int frame = 3;

// animate_textZoom.h
double scale = 0.1;
double speed = 0.01;


// animate_walk.h
double angle = 0;
int direction = 1;		// 1 : forward | 0 : backward
double moveY = 0.5;
double moveX = 0;