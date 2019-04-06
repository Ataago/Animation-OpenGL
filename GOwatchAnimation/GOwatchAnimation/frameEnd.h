//
//  frameEnd.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 7/03/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	GO smart Watch Animated AD.
//	Press Spacebar to Play...
//


void frameEnd()
{
	glLoadIdentity();

	char stringEnd_1[] = "GO Smart Watch";
	glPushMatrix();
	glTranslatef(-500, 600, 0);
	glColor3f(1, 0, 0);
	drawText(stringEnd_1);
	glPopMatrix();

	char stringEnd_2[] = "Thank You!";
	glPushMatrix();
	glTranslatef(-200, 300, 0);
	glScaled(0.7, 0.7, 0);
	glColor3d(1, 1, 1);
	drawText(stringEnd_2);
	glPopMatrix();

	char stringEnd_3[] = "Done by:";
	glPushMatrix();
	glTranslatef(300, -200, 0);
	glScaled(0.4, 0.4, 0);
	glColor3f(1, 1, 0);
	drawText(stringEnd_3);
	glPopMatrix();

	char stringEnd_4[] = "Mohammed Ataaur Rahaman [1DS16CS721]";
	glPushMatrix();
	glTranslatef(500, -300, 0);
	glScaled(0.4, 0.4, 0);
	glColor3f(1, 1, 0);
	drawText(stringEnd_4);
	glPopMatrix();

	char stringEnd_5[] = "Chandana KS [1DS16CS7  ]";
	glPushMatrix();
	glTranslatef(500, -400, 0);
	glScaled(0.4, 0.4, 0);
	glColor3f(1, 1, 0);
	drawText(stringEnd_5);
	glPopMatrix();

	char stringEnd_6[] = "Arvind Babu [1DS16CS706]";
	glPushMatrix();
	glTranslatef(500, -500, 0);
	glScaled(0.4, 0.4, 0);
	glColor3f(1, 1, 0);
	drawText(stringEnd_6);
	glPopMatrix();

	glFlush();
}