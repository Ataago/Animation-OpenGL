#include <GL/glut.h>

void square(float x)
{
	glColor3d(0.8, 0, 0);

	glBegin(GL_POLYGON);
	glVertex3f(1 * x, 1 * x, 0);
	glVertex3f(-1 * x, x, 0);
	glVertex3f(-1 * x, -1 * x, 0);
	glVertex3f(x, -1 * x, 0);
	glEnd();
}

void square0()
{
	glColor3d(0.8, 0.0, 0.0);

	glBegin(GL_POLYGON);
	glVertex3f(1, 1, 0);
	glVertex3f(-1, 1, 0);
	glVertex3f(-1, -1, 0);
	glVertex3f(1, -1, 0);
	glEnd();
}