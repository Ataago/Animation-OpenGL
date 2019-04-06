//
//  animate_walkCharS.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 7/03/19.
//  Copyright © 2019 Ataago. All rights reserved.
//


bool animate_walkCharS()
{
	if (moveX_charS > UNIT * aspectRatio - 200)		// Stop the walk at the mid of the screen.
	{
		angle_charS = 0;
		flag_fallS = 1;
		return false;
	}
	else
	{
		moveX_charS += speed * 2;
	}

	if (angle_charS > 45)		// Anticlockwise
	{
		direction = 0;
	}
	if (angle_charS < -45)
	{
		direction = 1;
	}

	if (direction == 1)
	{
		angle_charS += speed;
		moveY += 0.5;
	}

	if (direction == 0)
	{
		angle_charS -= speed;
		moveY -= 0.5;
	}
	return true;
}