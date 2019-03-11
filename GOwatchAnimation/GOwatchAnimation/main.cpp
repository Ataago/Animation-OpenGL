//
//  main.cpp
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 7/03/19.
//  Copyright © 2019 Ataago. All rights reserved.
//


#ifdef __APPLE_CC__
#include <GLUT/glut.h>
#else 
#include <GL/glut.h>
#endif

#include <stdio.h>
#include <string.h>

#include "Header.h"




void myInit();
void myReshape(int w, int h);
void myDisplay();
void myKeyboard(unsigned char key, int x, int y); \
void timer(int);
void control();


int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

	glutInitWindowPosition(0, 0);	// Window location
	glutInitWindowSize(W_WIDTH, W_HEIGHT);
	glutCreateWindow("Go Watch");

	glutDisplayFunc(myDisplay);
	glutReshapeFunc(myReshape);
	glutKeyboardFunc(myKeyboard);

	glutTimerFunc(0, timer, 0);

	myInit();

	glutMainLoop();
	return 0;
}

void myInit()
{
	glEnable(GL_DEPTH_TEST);

	glViewport(0, 0, W_WIDTH, W_HEIGHT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-UNIT * ASPECTRATIO, UNIT * ASPECTRATIO, -UNIT, UNIT, -UNIT, UNIT);
	glMatrixMode(GL_MATRIX_MODE);
}

void myReshape(int w, int h)
{
	ASPECTRATIO = (GLfloat) w / (GLfloat) h;

	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if (w > h)
		glOrtho(-UNIT * ASPECTRATIO, UNIT * ASPECTRATIO, -UNIT, UNIT, -UNIT, UNIT);
	else
		glOrtho(-UNIT, UNIT, -UNIT / ASPECTRATIO, UNIT / ASPECTRATIO, -UNIT, UNIT);
	glMatrixMode(GL_MODELVIEW);

	// Update the window width and height.
	W_WIDTH = w;
	W_HEIGHT = h;
}

void myKeyboard(unsigned char key, int x, int y)
{
	switch ((int)key)
	{
	case ESC: exit(0);		break;

	case SPACE: frame++;	break;
	}
}

void myDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	switch (frame)
	{
	case 0:	frame0();	break;
	case 1:	frame1();	break;
	case 2:	frame2();	break;
	case 3:	frame3();	break;
	case 4: frame4();	break;
	case 5: frame5();	break;

//  case x: frameX(); break;
	default:
		break;
	}

	glutSwapBuffers();
}

void timer(int)		
{	// Function runs throughtout the code every 1/60 th of a min (FPS = 60)
	control();	// Check which frame to animate
	glutPostRedisplay();	// Trigger myDisplay()
	glutTimerFunc(1000 / 60, timer, 0);		// 60 FPS animation
}

void control()
{
	// Iterate through the frames and animate them
	if (frame == 1)
		if (!animate_textZoom())
		{
			speed = 0.005;
			frame++;
		}

	if (frame == 2)
		if (!animate_textZoom())
		{
			speed = 0.01;
			frame++;
		}

	if (frame == 3)
		if (!animate_textZoom())
		{
			speed = 5;
			frame++;
		}

	if (frame == 4)
		if (!animate_walk())
		{
			speed = 0.1;
			frame++;
		}

	if (frame == 5)
		return;

	/*
	if (frame == x)
		doSomething with the objects?
	*/
}