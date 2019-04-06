//
//  frame11.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 6/4/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	_________________________________________________________
//

//
//  frame4.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 7/03/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	Character X is seen jogging. 
//	Character X collapses suddenly.
//



void charS();
void background2019();

void frame11()
{
	glClearColor(0, 0, 0, 0);

	background2019();

	if (!flag_fallS)
	{
		glPushMatrix();
		glTranslated(moveX_charS, 0, 0);
		glTranslated(-UNIT * aspectRatio + 200, 0, 0);
		charS();
		glPopMatrix();
	}
	else
	{
		glPushMatrix();
		glTranslated(0, -490, 0);
		glRotated(anglefall_charS, 0, 0, 1);
		glTranslated(0, 490, 0);
		charS();
		glPopMatrix();

	}
	glFlush();
}


void charS()
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
	glRotated(-angle_charS, 0, 0, 1);
	glTranslated(0, -90, 0);

	rectangleD(-20, -100, 20, 100, 2);
	rectangleD(-20, -100, 40, -80, 2);
	glPopMatrix();

	// Left Leg
	glColor3f(1, 1, 0);
	glPushMatrix();
	glTranslated(0, -400, 0);

	glTranslated(0, 90, 0);
	glRotated(angle_charS, 0, 0, 1);
	glTranslated(0, -90, 0);

	rectangleD(-20, -100, 20, 100, -2);
	rectangleD(-20, -100, 40, -80, -2);
	glPopMatrix();

	// Right Hand
	glColor3f(1, 0, 0);
	glPushMatrix();
	glTranslated(0, -200, 0);

	glTranslated(0, 90, 0);
	glRotated(angle_charS, 0, 0, 1);
	glTranslated(0, -90, 0);

	rectangleD(-20, -80, 20, 100, 2);
	glColor3d(0, 0, 0);
	rectangleD(-25, -40, 25, -20, 3);		// Go watch
	glColor3d(1, 1, 1);
	rectangleD(-10, -38, 10, -18, 4);
	glPopMatrix();

	// Left Hand
	glColor3f(1, 1, 0);
	glPushMatrix();
	glTranslated(0, -200, 0);

	glTranslated(0, 90, 0);
	glRotated(-angle_charS, 0, 0, 1);
	glTranslated(0, -90, 0);

	rectangleD(-20, -80, 20, 100, -2);
	glPopMatrix();
}


void background2019()
{
	glBegin(GL_POLYGON);
	glColor3d(0, 0, 0.3);
	glVertex3d(-UNIT * aspectRatio, -UNIT, -10);
	glVertex3d(UNIT * aspectRatio, -UNIT, -10);
	glVertex3d(UNIT * aspectRatio, UNIT, -10);
	glVertex3d(-UNIT * aspectRatio, UNIT, -10);
	glEnd();
}



