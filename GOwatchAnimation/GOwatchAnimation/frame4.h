//
//  frame4.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 7/03/19.
//  Copyright � 2019 Ataago. All rights reserved.
//
//	Character X is seen jogging. 
//	Character X collapses suddenly.
//



void charX();
void background1();
void passerby();

void frame4()
{
	glClearColor(0, 0, 0, 0);

	background1();

	if (!flag_fall)
	{
		glPushMatrix();
		glTranslated(moveX, 0, 0);
		glTranslated(-UNIT * aspectRatio + 200, 0, 0);
		charX();
		glPopMatrix();
	}
	else
	{
		glPushMatrix();
		//glTranslated(UNIT * aspectRatio + 200, 0, 0);
		glTranslated(0, -490, 0);
		glRotated(angle1, 0, 0, 1);
		glTranslated(0, 490, 0);
		charX();
		glPopMatrix();

		if (flag_fall > 1)
		{
			glPushMatrix();
			glTranslated(moveX1, 0, 0);
			glTranslated(UNIT, 0, 0);
			passerby();
			glPopMatrix();
		}

		if (flag_fall >= 3)
		{
			char string4_1[] = "Oh, no!";

			// Display Text
			glPushMatrix();
			glTranslatef(UNIT * aspectRatio / 2, 100, 0);
			glScaled(0.8, 0.8, 0);
			glColor3f(1, 0, 0);
			drawText(string4_1);
			glPopMatrix();

			flag_fall = 4;
		}


	}
	
	glFlush();
}


void charX()
{
	glColor3f(1, 1, 1);

	// Head
	glPushMatrix();
	glTranslated(0, moveY - 10, 0);
	rectangleD(-50, -50, 50, 50, 0);
	glPopMatrix();


	// Body
	glPushMatrix();
	glTranslated(0, -200, 0);
	rectangleD(-50, -100, 50, 100, 0);
	glPopMatrix();


	glColor3f(1, 0, 0);

	// Right Leg
	glPushMatrix();
	glTranslated(0, -400, 0);

	glTranslated(0, 90, 0);
	glRotated(-angle, 0, 0, 1);
	glTranslated(0, -90, 0);

	rectangleD(-20, -100, 20, 100, 2);
	rectangleD(-20, -100, 40, -80, 2);
	glPopMatrix();

	// Left Leg
	glColor3f(1, 1, 0);
	glPushMatrix();
	glTranslated(0, -400, 0);

	glTranslated(0, 90, 0);
	glRotated(angle, 0, 0, 1);
	glTranslated(0, -90, 0);

	rectangleD(-20, -100, 20, 100, -2);
	rectangleD(-20, -100, 40, -80, -2);
	glPopMatrix();

	// Right Hand
	glColor3f(1, 0, 0);
	glPushMatrix();
	glTranslated(0, -200, 0);

	glTranslated(0, 90, 0);
	glRotated(angle, 0, 0, 1);
	glTranslated(0, -90, 0);

	rectangleD(-20, -80, 20, 100, 2);
	glPopMatrix();

	// Left Hand
	glColor3f(1, 1, 0);
	glPushMatrix();
	glTranslated(0, -200, 0);                                             

	glTranslated(0, 90, 0);
	glRotated(-angle, 0, 0, 1);
	glTranslated(0, -90, 0);

	rectangleD(-20, -80, 20, 100, -2);
	glPopMatrix();
}

void passerby()
{
	glColor3f(1, 1, 1);

	// Head
	glPushMatrix();
	glTranslated(0, moveY - 10, 0);
	rectangleD(-50, -50, 50, 50, 0);
	glPopMatrix();


	// Body
	glPushMatrix();
	glTranslated(0, -200, 0);
	rectangleD(-50, -100, 50, 100, 0);
	glPopMatrix();


	glColor3f(1, 0, 0);

	// Right Leg
	glPushMatrix();
	glTranslated(0, -400, 0);

	glTranslated(0, 90, 0);
	glRotated(-angle2, 0, 0, 1);
	glTranslated(0, -90, 0);

	rectangleD(-20, -100, 20, 100, 2);
	rectangleD(-40, -100, 20, -80, 2);
	glPopMatrix();

	// Left Leg
	glColor3f(1, 1, 0);
	glPushMatrix();
	glTranslated(0, -400, 0);

	glTranslated(0, 90, 0);
	glRotated(angle2, 0, 0, 1);
	glTranslated(0, -90, 0);

	rectangleD(-20, -100, 20, 100, -2);
	rectangleD(-40, -100, 20, -80, -2);
	glPopMatrix();

	// Right Hand
	glColor3f(1, 0, 0);
	glPushMatrix();
	glTranslated(0, -200, 0);

	glTranslated(0, 90, 0);
	glRotated(angle2, 0, 0, 1);
	glTranslated(0, -90, 0);

	rectangleD(-20, -80, 20, 100, 2);
	glPopMatrix();

	// Left Hand
	glColor3f(1, 1, 0);
	glPushMatrix();
	glTranslated(0, -200, 0);

	glTranslated(0, 90, 0);
	glRotated(-angle2, 0, 0, 1);
	glTranslated(0, -90, 0);

	rectangleD(-20, -80, 20, 100, -2);
	glPopMatrix();
}

void background1()
{
	glBegin(GL_POLYGON);
	glColor3d(0, 0, 0.5);
	glVertex3d(-UNIT * aspectRatio, -UNIT, -10);
	glVertex3d( UNIT * aspectRatio, -UNIT, -10);
	glVertex3d( UNIT * aspectRatio,  UNIT, -10);
	glVertex3d(-UNIT * aspectRatio,  UNIT, -10);
	glEnd();
}



