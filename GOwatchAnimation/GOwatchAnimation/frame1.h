//
//  frame1.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 7/03/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	Display 2015 and Animate
//


void frame1()
{
	char string1_1[] = "2015";

	// Display Text
	glPushMatrix();
	glScalef(scale, scale, 0);
	glTranslatef(-120, 0, 0);
	glColor3f(1, 0, 0);
	drawText(string1_1);
	glPopMatrix();

	glFlush();
}