//
//  frame4.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 7/03/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	Character X is seen jogging. 
//	Character X collapses suddenly.
//
#include <stdio.h>
#include <GL/glut.h>

void rectangleD(double x1, double y1, double x2, double y2, double z);
void body();

void frame4()
{
	glClearColor(0, 0, 0, 0);

	glPushMatrix();
	glTranslated(moveX, 0, 0);
	body();
	glPopMatrix();
	
	glFlush();
}

void rectangleD(double x1, double y1, double x2, double y2, double z)
{
	glBegin(GL_POLYGON);
	glVertex3d(x1, y1, z);
	glVertex3d(x2, y1, z);
	glVertex3d(x2, y2, z);
	glVertex3d(x1, y2, z);
	glEnd();
}

void body()
{
	glColor3f(1, 1, 1);

	// Head
	glPushMatrix();
	glTranslated(-UNIT * ASPECTRATIO + 200, moveY - 10, 0);
	rectangleD(-50, -50, 50, 50, 0);
	glPopMatrix();


	// Body
	glPushMatrix();
	glTranslated(-UNIT * ASPECTRATIO + 200, -200, 0);
	rectangleD(-50, -100, 50, 100, 0);
	glPopMatrix();


	glColor3f(1, 0, 0);

	// Right Leg
	glPushMatrix();
	glTranslated(-UNIT * ASPECTRATIO + 200, -400, 0);

	glTranslated(0, 90, 0);
	glRotated(-angle, 0, 0, 1);
	glTranslated(0, -90, 0);

	rectangleD(-20, -100, 20, 100, 1);
	rectangleD(-20, -100, 40, -80, 1);
	glPopMatrix();

	// Left Leg
	glColor3f(1, 1, 0);
	glPushMatrix();
	glTranslated(-UNIT * ASPECTRATIO + 200, -400, 0);

	glTranslated(0, 90, 0);
	glRotated(angle, 0, 0, 1);
	glTranslated(0, -90, 0);

	rectangleD(-20, -100, 20, 100, 0);
	rectangleD(-20, -100, 40, -80, 0);
	glPopMatrix();

	// Right Hand
	glColor3f(1, 0, 0);
	glPushMatrix();
	glTranslated(-UNIT * ASPECTRATIO + 200, -200, 0);

	glTranslated(0, 90, 0);
	glRotated(angle, 0, 0, 1);
	glTranslated(0, -90, 0);

	rectangleD(-20, -80, 20, 100, 1);
	glPopMatrix();

	// Left Hand
	glColor3f(1, 1, 0);
	glPushMatrix();
	glTranslated(-UNIT * ASPECTRATIO + 200, -200, 0);

	glTranslated(0, 90, 0);
	glRotated(-angle, 0, 0, 1);
	glTranslated(0, -90, 0);

	rectangleD(-20, -80, 20, 100, 0);
	glPopMatrix();
}