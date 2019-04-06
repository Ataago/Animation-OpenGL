//
//  main.cpp
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 7/03/19.
//  Copyright © 2019 Ataago. All rights reserved.
//


#include "Header.h"

void myInit();
void myReshape(int width, int height);
void myDisplay();
void myKeyboard(unsigned char key, int x, int y); 
void timer(int);
void control();


int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

	glutInitWindowPosition(0, 0);	// Window location
	glutInitWindowSize(w_width, w_height);
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
	if (!window3D)
	{
		glEnable(GL_DEPTH_TEST);

		glViewport(0, 0, w_width, w_height);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		glOrtho(-UNIT * aspectRatio, UNIT * aspectRatio, -UNIT, UNIT, -UNIT, UNIT);
		glMatrixMode(GL_MATRIX_MODE);
	}
	else
	{
		glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
		glClearDepth(1.0f);                   // Set background depth to farthest
		glEnable(GL_DEPTH_TEST);   // Enable depth testing for z-culling
		glDepthFunc(GL_LEQUAL);    // Set the type of depth-test
		glShadeModel(GL_SMOOTH);   // Enable smooth shading
		glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);  // Nice perspective corrections
	}
	
}

void myReshape(int width, int height)
{
	aspectRatio = (GLfloat)width / (GLfloat)height;

	// Set the viewport to cover the new window
	glViewport(0, 0, width, height);

	// Set the aspect ratio of the clipping volume to match the viewport
	glMatrixMode(GL_PROJECTION);  // To operate on the Projection matrix
	glLoadIdentity();             // Reset

	if (!window3D)
	{
		if (width > height)
			glOrtho(-UNIT * aspectRatio, UNIT * aspectRatio, -UNIT, UNIT, -UNIT, UNIT);
		else
			glOrtho(-UNIT, UNIT, -UNIT / aspectRatio, UNIT / aspectRatio, -UNIT, UNIT);
		glMatrixMode(GL_MODELVIEW);
	}
	else
	{
		// Enable perspective projection with fovy, aspect, zNear and zFar
		gluPerspective(45.0f, aspectRatio, 0.1f, 100000);

		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		glTranslatef(0, 0, -2000);
	}
	
	// Update the window width and height.
	w_width = width;
	w_height = height;
}

void myKeyboard(unsigned char key, int x, int y)
{
	int speed3d = 5;

	switch ((int)key)
	{
	case ESC: exit(0);		break;
	case SPACE: frame++;	break;

	case f: flag_fall++;	break;	// for Debug

	// 3D camera moment

	case d:		// Y axis +
		glRotated(speed3d, 0, 1, 0);
		break;
	case a:		// Y axis -
		glRotated(-speed3d, 0, 1, 0);
		break;

	case w:		// X axis +
		glRotated(speed3d, 1, 0, 0);
		break;
	case s:		// X axis -
		glRotated(-speed3d, 1, 0, 0);
		break;

	}
}

void myDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0, 0, 0, 0);

	switch (frame)
	{
	case 0:	frame0();	break;
	case 1:	frame1();	break;
	case 2:	frame2();	break;
	case 3:	frame3();	break;
	case 4: frame4();	break;
	case 5: frame5();	break;
	case 6: frame6();	break;
	case 7: frame7();	break;
	case 8: frame8();	break;
	case 9: frame9();	break;
	case 10: frame10();	break;
	case 11: frame11();	break;
	case 12: frame12(); break;
	case 13: frame13(); break;
	case 14: frame14(); break;
	case 15: frame15(); break;
	case 16: frame16(); break;
	case 17: frame17(); break;
	case 18: frameEnd(); break;

	default:	
		frameEnd();
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
	switch (frame)
	{
	case 0:		// Frame 0
		break;

	case 1:		// Frame 1
		if (!animate_textZoom())
		{
			speed = 0.005;
			frame++;
		}
		break;

	case 2:		// Frame 2
		if (!animate_textZoom())
		{
			speed = 0.01;
			frame++;
		}
		break;

	case 3:		// Frame 3
		if (!animate_textZoom())
		{
			speed = 2;
			frame++;
		}
		break;

	case 4:		// Frame 4
		switch (flag_fall)
		{
		case 0: animate_walk();		break;
		case 1:	animate_fall();		break;
		case 2:
			if (!animate_walk1())
			{
				speed = 0.01;
				scale = 0.1;
				frame++;
			}
			break;
		}
		break;

	case 5:		// Frame 5
		if (!animate_textZoom())
		{
			speed = 1;
			frame++;
		}
		break;

	case 6:		// Frame 6
		if (!animate_ambulance())
		{
			speed = 0.006;
			frame++;
		}
		break;

	case 7:		// Frame 7
		if (!animate_textZoom())
		{
			speed = 0.006;
			frame++;
		}
		break;

	case 8:
		if (!animate_textZoom())
		{
			speed = 0.006;
			frame++;
		}
		break;

	case 9:
		if (!animate_textZoom())
		{
			speed = 0.006;
			frame++;
		}
		break;
	
	case 10:
		if (!animate_textZoom())
		{
			speed = 2;
			frame++;
		}
		break;

	case 11:
		switch (flag_fallS)
		{
		case 0: animate_walkCharS();		break;
		case 1:	
			if (!animate_fallCharS())
			{
				speed = 0.006;
				scale = 0.1;
				frame++;
			}
			break;
		}
		break;

	case 12:
		if (!animate_textZoom())
		{
			speed = 0.006;
			frame++;
		}
		break;

	case 13:
		if (!animate_textZoom())
		{
			speed = 0.006;
			frame++;
		}
		break;
	
	case 14:
		if (!animate_textZoom())
		{
			speed = 2;
			moveX_Amb = 0;
			frame++;
		}
		break;
	
	case 15:
		if (!animate_ambulance())
		{
			speed = 0.006;
			frame++;
		}
		break;

	case 16:
		if (!animate_textZoom())
		{
			speed = 0.006;
			window3D = 1;
			frame++;
		}
		break;

	case 17:
		break;

	case 18: 
		window3D = 0;
		break;

	default:
		break;
	}
}