//
//  frame8.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 6/4/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	_________________________________________________________
//


void frame8()
{
	char string8_1[] = "Present Day...";

	// Display Text
	glPushMatrix();
	glScalef(scale, scale, 0);
	glTranslatef(-400, 0, 0);
	glColor3f(1, 0, 0);
	drawText(string8_1);
	glPopMatrix();

	glFlush();
}