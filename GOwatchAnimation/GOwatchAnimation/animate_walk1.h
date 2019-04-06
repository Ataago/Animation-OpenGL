//
//  animate_walk1.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 6/04/19.
//  Copyright © 2019 Ataago. All rights reserved.
//


bool animate_walk1()
{
	if (moveX1 < 0 )		// Stop the walk at the mid of the screen.
	{
		angle2 = 0;
		flag_fall = 3;
		return false;
	}
	else
	{
		moveX1 -= speed * 2;
	}

	if (angle2 > 45)		// Anticlockwise
	{
		direction = 0;
	}
	if (angle2 < -45)
	{
		direction = 1;
	}

	if (direction == 1)
	{
		angle2 += speed;
	}

	if (direction == 0)
	{
		angle2 -= speed;
	}
	return true;
}