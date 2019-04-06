//
//  frame6.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 6/04/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	_________________________________________________________
//


void frame6()
{
	frame4();

	glPushMatrix();
	glTranslated(moveX_Amb, 0, 0);
	glTranslated(-UNIT * aspectRatio - 400, -400, 0);
	ambulance();
	glPopMatrix();

	glFlush();
}
