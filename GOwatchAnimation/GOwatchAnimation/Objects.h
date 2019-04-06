

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

void rectangleD(double x1, double y1, double x2, double y2, double z)
{
	glBegin(GL_POLYGON);
	glVertex3d(x1, y1, z);
	glVertex3d(x2, y1, z);
	glVertex3d(x2, y2, z);
	glVertex3d(x1, y2, z);
	glEnd();
}

void ambulance()
{
	rectangleD(-400, -200, 400, 200, 2);
}


void leaf(double x, double z)
{
	glBegin(GL_POLYGON);
	glVertex3d(-x, -x / 3, z);
	glVertex3d(x, -x / 3, z);
	glVertex3d(0, x * 0.65, z);
	glEnd();
}

void tree(double h, double z)
{
	green = 1;

	glPushMatrix();
	glTranslated(0, h * 170, 0);
	for (int i = h; i > 0; i--)
	{
		glPushMatrix();
		glColor3d(0.2, green, 0.2);
		glTranslated(0, -h * 120 / i, 0);
		leaf(h * 100 / i, z);
		glPopMatrix();

		green -= 0.1;
	}
	glPopMatrix();

	glColor3d(0.3, 0.1, 0.1);
	rectangleD(-40, -100, 40, 100, z);

}