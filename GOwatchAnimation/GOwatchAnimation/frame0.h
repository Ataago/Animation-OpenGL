//
//  frame0.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 7/03/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	GO smart Watch Animated AD.
//	Press Spacebar to Play...
//

#include <GL/glut.h>
#include <string.h>



void frame0()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0, 0, 0, 0);
	char buffer[256];

	// Display "GO Smart Watch"
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(-500, 400, 0);
	glColor3f(1, 0, 0);
	strcpy_s(buffer, "GO Smart Watch");
	drawText(buffer);
	glPopMatrix();

	// Display  "Animated AD."
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(100, 250, 0);
	glScaled(0.7, 0.7, 0);
	strcpy_s(buffer, "Animated AD.");
	drawText(buffer);
	glPopMatrix();

	// Display "Press Spacebar to Play...".
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(500, -500, 0);
	glScaled(0.4, 0.4, 0);
	glColor3f(1, 1, 0);
	strcpy_s(buffer, "Press 'Spacebar' to Play...");
	drawText(buffer);
	glPopMatrix();

	glFlush();
}