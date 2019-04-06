//
//  frame2.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 7/03/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	Display  "In Kumaraswamy Layout..." and Animate
//


const float speed2 = 0.01;
float scale2 = 0.1;

void frame2()
{
	char string2_1[] = "In Kumarswamy Layout";

	// Display Text
	glPushMatrix();
	//glLoadIdentity();
	glScalef(scale, scale, 0);
	glTranslatef(-550, 0, 0);
	glColor3f(1, 0, 0);
	drawText(string2_1);
	glPopMatrix();

	glFlush();
}