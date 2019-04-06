//
//  frame5.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 7/03/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	_________________________________________________________
//


void frame5()
{
	char string5_1[] = "15 Mins later...";

	// Display Text
	glPushMatrix();
	glScalef(scale, scale, 0);
	glTranslatef(-200, 0, 0);
	glColor3f(1, 0, 0);
	drawText(string5_1);
	glPopMatrix();

	glFlush();
}