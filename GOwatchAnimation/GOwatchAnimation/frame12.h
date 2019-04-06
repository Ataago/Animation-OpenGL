//
//  frame12.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 6/4/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	_________________________________________________________
//


void frame12()
{
	char string12_1[] = "Fall Detected";
	char string12_2[] = "Sending Emergency Signal in 5s";

	glPushMatrix();
	glTranslated(-600, 300, 0);
	drawText(string12_1);
	glPopMatrix();

	// Display Text
	glPushMatrix();
	glScalef(scale, scale, 0);
	glScaled(0.8, 0.8, 0);
	glTranslatef(-700, 0, 0);
	glColor3f(1, 0, 0);
	drawText(string12_2);
	glPopMatrix();


	glFlush();
}