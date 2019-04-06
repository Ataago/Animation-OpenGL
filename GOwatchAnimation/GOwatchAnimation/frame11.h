//
//  frame11.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 6/4/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	_________________________________________________________
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
	glColor3d(0.5, 0.2, 0);
	glTranslated(0, moveY - 20, 0);
	rectangleD(-50, -50, 50, 50, 0);
	glPopMatrix();


	// Body
	glPushMatrix();
	glColor3d(0.7, 0, 0.4);
	glTranslated(0, -200, 0);
	rectangleD(-50, -100, 50, 100, 0);
	glPopMatrix();


	// Right Leg
	glPushMatrix();
	glTranslated(0, -400, 0);
	glColor3d(0.5, 0.2, 0);
	glTranslated(0, 90, 0);
	glRotated(-angle_charS, 0, 0, 1);
	glTranslated(0, -90, 0);

	rectangleD(-20, -100, 20, 100, 2);
	rectangleD(-20, -100, 40, -80, 2);
	glPopMatrix();

	// Left Leg
	glColor3d(0.4, 0.1, 0);
	glPushMatrix();
	glTranslated(0, -400, 0);

	glTranslated(0, 90, 0);
	glRotated(angle_charS, 0, 0, 1);
	glTranslated(0, -90, 0);

	rectangleD(-20, -100, 20, 100, -2);
	rectangleD(-20, -100, 40, -80, -2);
	glPopMatrix();

	// Right Hand
	glColor3d(0.5, 0.2, 0);
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
	glColor3d(0.4, 0.1, 0);
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
	// Tree 1
	glPushMatrix();
	glTranslated(UNIT / 2, -UNIT / 2.5, 0);
	tree(7, -9);
	glPopMatrix();

	// Tree 2
	glPushMatrix();
	glTranslated(UNIT * aspectRatio, -UNIT / 2.5, 0);
	tree(3, -9);
	glPopMatrix();

	// Tree 3
	glPushMatrix();
	glTranslated(-UNIT, -UNIT / 2.5, 0);
	tree(4, -9);
	glPopMatrix();

	
	// Road
	glBegin(GL_POLYGON);
	glColor3d(0, 0, 0);
	glVertex3d(-UNIT * aspectRatio, -UNIT, -9);
	glVertex3d(UNIT * aspectRatio, -UNIT, -9);
	glVertex3d(UNIT * aspectRatio, -UNIT / 2, -9);
	glVertex3d(-UNIT * aspectRatio, -UNIT / 2, -9);
	glEnd();

	// Sky and bushes
	glBegin(GL_POLYGON);
	glColor3d(0.1, 0.6, 0.1);
	glVertex3d(-UNIT * aspectRatio, -UNIT / 2, -9);
	glVertex3d(UNIT * aspectRatio, -UNIT / 2, -9);
	glColor3d(0.1, 0.1, 0.7);
	glVertex3d(UNIT * aspectRatio, UNIT, -9);
	glVertex3d(-UNIT * aspectRatio, UNIT, -9);
	glEnd();
}
