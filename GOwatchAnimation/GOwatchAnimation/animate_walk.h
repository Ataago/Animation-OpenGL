//
//  animate_walk.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 7/03/19.
//  Copyright © 2019 Ataago. All rights reserved.
//

bool animate_walk()
{
	if (angle > 45)
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

	if (moveX > UNIT * ASPECTRATIO * 2)
	{
		return false;
	}
	else
	{
		moveX += speed;
	}

	return true;
}