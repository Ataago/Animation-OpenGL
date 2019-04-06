//
//  variables.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 7/03/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	Global Variables
//


// Main.cpp
#define UNIT 960
#define ESC 27
#define SPACE 32
#define f 102
#define PI 3.14159

#define w 119
#define a 97
#define s 115
#define d 100

int w_width = 1920;
int w_height = 1080;
double aspectRatio = (double) w_width / (double) w_height;

int frame = 0;		// Default: 0
int window3D = 0;	// if 0 then Ortho else 1 then Perspective

// animate_textZoom.h
double scale = 0.1;
double speed = 0.01;


// animate_walk.h
double angle = 0;
double angle1 = 0;
int direction = 1;		// 1 : forward | 0 : backward
double moveY = 0.5;
double moveX = 0;

// Passer by
double moveX1 = UNIT * 2;
double angle2 = 0;

// Ambulance
double moveX_Amb = 0;

int flag_fall = 0;

// Character S
double moveX_charS = 0;
double angle_charS = 0;
int flag_fallS = 0;
double anglefall_charS = 0;

// Colors
double red = 0;
double green = 0;
double blue = 0;