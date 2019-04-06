//
//  animate_ambulance.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 6/04/19.
//  Copyright © 2019 Ataago. All rights reserved.
//


bool animate_ambulance()
{
	if (moveX_Amb > UNIT * aspectRatio / 1.3)		// Stop the walk at the mid of the screen.
	{
		return false;
	}
	else
	{
		moveX_Amb += speed * 4;
	}

	return true;
}