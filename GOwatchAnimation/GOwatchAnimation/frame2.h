//
//  frame2.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 7/03/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	Display  "In Kumaraswamy Layout..." and Animate
//

#include <GL/glut.h>
#include <stdio.h>


const float speed2 = 0.01;
float scale2 = 0.1;

void frame2()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glClearColor(0, 0, 0, 0);
	char buffer[256];

	// Display Text
	glPushMatrix();
	glLoadIdentity();
	glScalef(scale, scale, 0);
	glTranslatef(-550, 0, 0);
	glColor3f(1, 0, 0);
	strcpy_s(buffer, "In Kumarswamy Layout");
	drawText(buffer);
	glPopMatrix();

	glFlush();
}