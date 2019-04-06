//
//  animate_walk.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 7/03/19.
//  Copyright © 2019 Ataago. All rights reserved.
//


bool animate_walk()
{
	if (moveX > UNIT * aspectRatio - 200)		// Stop the walk at the mid of the screen.
	{
		angle = 0;
		flag_fall = 1;
		return false;
	}
	else
	{
		moveX += speed * 2;
	}

	if (angle > 45)		// Anticlockwise
	{
		direction = 0;
	}
	if (angle < -45)
	{
		direction = 1;
	}

	if (direction == 1)
	{
		angle += speed;
		moveY += 0.5;
	}

	if (direction == 0)
	{
		angle -= speed;
		moveY -= 0.5;
	}
	return true;
}