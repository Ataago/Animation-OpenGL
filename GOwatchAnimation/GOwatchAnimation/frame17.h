//
//  frame17.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 6/4/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	_________________________________________________________
//


void frame17()
{
	// Back Logo
	char string17_1[] = "GO Watch";

	glPushMatrix();
	glColor3d(1, 1, 1);
	glRotated(-90, 0, 0, 1);
	glRotated(-90, 0, 1, 0);
	glTranslated(-143, 0, 28.5);
	glScaled(0.45, 0.45, 1);
	drawText(string17_1);
	glPopMatrix();



	// Watch Body
	glPushMatrix();
	glColor3d(0.7, 0.7, 0.7);
	glScaled(1, 0.15, 1);
	glutSolidCube(350);
	glPopMatrix();

	// Screen
	glPushMatrix();
	glColor3d(0, 0, 0);
	glScaled(0.98, 0.15, 0.98);
	glTranslated(0, 20, 0);
	glutSolidCube(330);
	glPopMatrix();

	// Button home
	glPushMatrix();
	glColor3d(1, 0, 0);
	glScaled(1, 0.3, 0.85);
	glTranslated(-100, 0, 170);
	glutSolidCube(100);
	glPopMatrix();

	// Button back
	glPushMatrix();
	glColor3d(1, 0, 0);
	glScaled(1, 0.3, 0.85);
	glTranslated(100, 0, 170);
	glutSolidCube(100);
	glPopMatrix();

	// Up belt
	glPushMatrix();
	glColor3d(0.9, 0.6, 0.2);
	glScaled(1.6, 0.05, 0.5);
	glTranslated(310, 0, 0);
	glutSolidCube(500);
	glPopMatrix();

	// Clip
	glPushMatrix();
	glColor3d(0.8, 0, 0);
	glScaled(2.5, 0.3, 0.2);
	glTranslated(390, 0, 580);
	glutSolidCube(100);
	glPopMatrix();
	
	glPushMatrix();
	glColor3d(0.8, 0, 0);
	glScaled(2.5, 0.3, 0.2);
	glTranslated(390, 0, -580);
	glutSolidCube(100);
	glPopMatrix();
	

	glPushMatrix();
	glColor3d(0.8, 0, 0);
	glScaled(0.3, 0.3, 2.5);
	glTranslated(3700, 0, 0);
	glutSolidCube(100);
	glPopMatrix();

	// Pin
	glPushMatrix();
	glColor3d(0.8, 0, 0);
	glScaled(2.2, 0.3, 0.2);
	glTranslated(430, 0, 0);
	glutSolidCube(100);
	glPopMatrix();

	// Down Belt
	glPushMatrix();
	glColor3d(0.9, 0.6, 0.2);
	glScaled(2.5, 0.05, 0.5);
	glTranslated(-310, 0, 0);
	glutSolidCube(500);
	glPopMatrix();

	// Holes
	glPushMatrix();
	glColor3d(0, 0, 0);
	glScaled(1, 0.8, 1);
	glTranslated(-1000, 0, 0);
	glutSolidCube(50);
	glPopMatrix();

	glPushMatrix();
	glColor3d(0, 0, 0);
	glScaled(1, 0.8, 1);
	glTranslated(-900, 0, 0);
	glutSolidCube(50);
	glPopMatrix();

	glPushMatrix();
	glColor3d(0, 0, 0);
	glScaled(1, 0.8, 1);
	glTranslated(-800, 0, 0);
	glutSolidCube(50);
	glPopMatrix();

	glPushMatrix();
	glColor3d(0, 0, 0);
	glScaled(1, 0.8, 1);
	glTranslated(-700, 0, 0);
	glutSolidCube(50);
	glPopMatrix();
	
	glPushMatrix();
	glColor3d(0, 0, 0);
	glScaled(1, 0.8, 1);
	glTranslated(-600, 0, 0);
	glutSolidCube(50);
	glPopMatrix();
	glFlush();

	glPushMatrix();
	glColor3d(0, 0, 0);
	glScaled(1, 0.8, 1);
	glTranslated(-500, 0, 0);
	glutSolidCube(50);
	glPopMatrix();
}