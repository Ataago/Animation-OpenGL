//
//  frame13.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 6/4/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	_________________________________________________________
//


void frame13()
{
	char string13_1[] = "Tic Tic..";
	char string13_2[] = "5";
	char string13_3[] = "4";
	char string13_4[] = "3";
	char string13_5[] = "2";
	char string13_6[] = "1";

	glPushMatrix();
	glTranslated(-600, 300, 0);
	drawText(string13_1);
	glPopMatrix();

	// Display Text
	glPushMatrix();
	glScalef(scale, scale, 0);
	//glTranslatef(-50, 0, 0);
	glColor3f(1, 0, 0);

	if(scale < 0.3)
		drawText(string13_2);
	else if(scale < 0.5)
		drawText(string13_3);
	else if (scale < 0.7)
		drawText(string13_4);
	else if (scale < 0.8)
		drawText(string13_5);
	else if (scale <= 1)
		drawText(string13_6);

	glPopMatrix();

	glFlush();
}