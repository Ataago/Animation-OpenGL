//
//  frame14.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 6/4/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	_________________________________________________________
//


void frame14()
{
	char string14_1[] = "5 Mins later...";

	// Display Text
	glPushMatrix();
	glScalef(scale, scale, 0);
	glTranslatef(-200, 0, 0);
	glColor3f(1, 0, 0);
	drawText(string14_1);
	glPopMatrix();

	glFlush();
}