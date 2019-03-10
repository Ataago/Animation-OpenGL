//
//  writeText.h
//  GO watch Animation OpenGL
//
//  Created by Mohammed Ataa on 7/03/19.
//  Copyright © 2019 Ataago. All rights reserved.
//
//	Drawing Text on window
//

#include <GL/glut.h>


void drawText(char *text)
{
	char *letter;

	for (letter = text; *letter != '\0'; letter++)
	{
		glutStrokeCharacter(GLUT_STROKE_ROMAN, *letter);
	}
}