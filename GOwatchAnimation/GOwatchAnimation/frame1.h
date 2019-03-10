//
//  frame1.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 7/03/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	Display 2015 and Animate
//

#include <GL/glut.h>
#include <stdio.h>


void frame1()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0, 0, 0, 0);
	char buffer[256];

	// Display Text
	glPushMatrix();
	glLoadIdentity();
	glScalef(scale, scale, 0);
	glTranslatef(-120, 0, 0);
	glColor3f(1, 0, 0);
	strcpy_s(buffer, "2015");
	drawText(buffer);
	glPopMatrix();

	glFlush();
}