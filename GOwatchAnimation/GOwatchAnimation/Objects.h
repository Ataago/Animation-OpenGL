

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

void circleD(double radius, double depth)
{
	glBegin(GL_POLYGON);
	for (double theta = 0; theta < 2 * PI; theta += 0.1)
	{
		glVertex3d(radius * cos(theta), radius * sin(theta), depth);
	}
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
	char stringO_1[] = "AMBULANCE";

	// Display Text
	glPushMatrix();
	glTranslatef(-90, -100, 3);
	glScaled(0.5, 0.5, 0);
	glColor3f(1, 0, 0);
	drawText(stringO_1);
	glPopMatrix();

	// Ambulance Body
	glColor3d(1, 1, 1);
	rectangleD(-350, -200, 350, 200, 2);
	
	// Ambulance Engine
	glBegin(GL_POLYGON);
	glColor3d(1, 1, 1);
	glVertex3d(355, -200, 2);
	glVertex3d(650, -200, 2);
	glVertex3d(650, -65, 2);
	glVertex3d(635, -50, 2);
	glVertex3d(550, -50, 2);
	glVertex3d(500, 100, 2);
	glVertex3d(355, 100, 2);
	glEnd();
	
	// Lights
	glColor3d(0, 0, 1);
	rectangleD(380, 100, 420, 140, 2);
	glColor3d(1, 0, 0);
	rectangleD(440, 100, 480, 140, 2);

	// Back Tire
	glPushMatrix();
	glTranslated(-150, -210, 0);
	glColor3d(0, 0, 0);		// Tire
	circleD(75, 3);
	glColor3d(0.8, 0, 0);	// Rim
	circleD(50, 4);
	glPopMatrix();

	//Front Tire
	glPushMatrix();
	glTranslated(500, -210, 0);
	glColor3d(0, 0, 0);		// Tire
	circleD(75, 3);
	glColor3d(0.8, 0, 0);	// Rim
	circleD(50, 4);
	glPopMatrix();

	//Window Back
	glColor3d(0.7, 0.7, 1);
	rectangleD(-300, 0, 300, 150, 3);

	// Window Front
	glBegin(GL_POLYGON);
	glVertex3d(375, -50, 3);
	glVertex3d(520, -50, 3);
	glVertex3d(480, 75, 3);
	glVertex3d(375, 75, 3);
	glEnd();
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