//
//  animate_textZoom.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 7/03/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	Function to animate Text 
//	text appears to zoom 
//

#include <GL/glut.h>


float scale = 0.1;
float speed = 0.01;

bool animate_textZoom()
{
	if (scale > 1)
	{
		scale = 0.1;
		return false;
	}
	scale += speed;

	return true;
}