//
//  frame4.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 7/03/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	Display "Time : 17 : 30HRS" and animate
//


void frame3()
{
	char string3_1[] = "Time: 17:30 HRS";

	// Display Text
	glPushMatrix();
	//glLoadIdentity();
	glScalef(scale, scale, 0);
	glTranslatef(-450, 0, 0);
	glColor3f(1, 0, 0);
	drawText(string3_1);
	glPopMatrix();

	glFlush();
}
