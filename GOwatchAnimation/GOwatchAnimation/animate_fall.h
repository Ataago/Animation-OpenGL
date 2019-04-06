//
//  animate_fall.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 6/04/19.
//  Copyright © 2019 Ataago. All rights reserved.
//


bool animate_fall()
{
	if (angle1 > -90)
	{
		angle1 -= 2;	// simulate fall
		angle -= 1;		// Move legs and hands
	}
	else
	{
		angle = 0;
		flag_fall = 2;	// Passer by arrives
		return false;
	}

	return true;
}