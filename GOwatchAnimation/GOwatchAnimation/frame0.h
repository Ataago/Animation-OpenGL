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


void frame0()
{
	char string0_1[] = "GO Smart Watch";
	char string0_2[] = "Animated AD.";
	char string0_3[] = "Press 'Spacebar' to Play...";


	// Display "GO Smart Watch"
	glPushMatrix();
	glTranslatef(-500, 400, 0);
	glColor3f(1, 0, 0);
	drawText(string0_1);
	glPopMatrix();

	// Display  "Animated AD."
	glPushMatrix();
	glTranslatef(100, 250, 0);
	glScaled(0.7, 0.7, 0);
	drawText(string0_2);
	glPopMatrix();

	// Display "Press Spacebar to Play...".
	glPushMatrix();
	glTranslatef(500, -500, 0);
	glScaled(0.4, 0.4, 0);
	glColor3f(1, 1, 0);
	drawText(string0_3);
	glPopMatrix();

	glFlush();
}