//
//  frame7.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 6/4/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	_________________________________________________________
//


void frame7()
{
	char string7_1[] = "Character X is Declared Dead";

	// Display Text
	glPushMatrix();
	glScalef(scale, scale, 0);
	glTranslatef(-700, 0, 0);
	glColor3f(1, 0, 0);
	drawText(string7_1);
	glPopMatrix();

	glFlush();
}