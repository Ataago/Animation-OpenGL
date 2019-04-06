//
//  frame16.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 6/4/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	_________________________________________________________
//



void frame16()
{
	char string16_1[] = "Go Watch Saved his Life.";
	char string16_2[] = "GO Watch! Made for you!!!";

	glPushMatrix();
	glTranslated(-900, 500, 0);
	drawText(string16_1);
	glPopMatrix();

	glPushMatrix();
	glScalef(scale, scale, 0);
	glTranslatef(-700, 0, 0);
	glColor3f(1, 0, 0);
	drawText(string16_2);
	glPopMatrix();

	glFlush();
}
