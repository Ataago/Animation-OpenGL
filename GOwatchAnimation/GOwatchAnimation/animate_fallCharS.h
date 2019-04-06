//
//  animate_fallCharS.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 6/04/19.
//  Copyright © 2019 Ataago. All rights reserved.
//


bool animate_fallCharS()
{
	if (anglefall_charS > -90)
	{
		anglefall_charS -= 2;	// simulate fall
		angle_charS -= 1;		// Move legs and hands
	}
	else
	{
		angle_charS = 0;
		flag_fall = 2;	// Passer by arrives
		return false;
	}

	return true;
}