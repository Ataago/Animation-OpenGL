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
	char string16_1[] = "Character S is saved";
	char string16_2[] = "GO watch is a life saving Band.";

	glPushMatrix();
	glTranslated(-900, 500, 0);
	drawText(string16_2);
	glPopMatrix();

	glPushMatrix();
	glScalef(scale, scale, 0);
	glTranslatef(-350, 0, 0);
	glColor3f(1, 0, 0);
	drawText(string16_1);
	glPopMatrix();

	glFlush();
}
