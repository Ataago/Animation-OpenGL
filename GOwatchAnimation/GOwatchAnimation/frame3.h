//
//  frame4.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 7/03/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	Display "Time : 17 : 30HRS" and animate
//

#include <GL/glut.h>
#include <stdio.h>


void frame3()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0, 0, 0, 0);
	char buffer[256];

	// Display Text
	glPushMatrix();
	glLoadIdentity();
	glScalef(scale, scale, 0);
	glTranslatef(-450, 0, 0);
	glColor3f(1, 0, 0);
	strcpy_s(buffer, "Time: 17:30 HRS");
	drawText(buffer);
	glPopMatrix();

	glFlush();
}
