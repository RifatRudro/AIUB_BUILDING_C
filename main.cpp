#include <windows.h>  // for MS Windows
#include <GL/glut.h>
#include<math.h>>
#define PI 3.14159265359
void BdFlag()
{
     glTranslatef(.4,-.8,0);
     glScalef(.8,1.2,0);
     glBegin(GL_QUADS);

    glColor3ub(0, 179, 0);
    glVertex2f(-0.7f,0.4f);
    glVertex2f(-0.3f,0.4f);
    glVertex2f(-0.3f,0.6f);
    glVertex2f(-0.7f,0.6f);

    glColor3ub(0, 0, 0);
    glVertex2f(-0.7f,0.6f);
    glVertex2f(-0.73f,0.6f);
    glVertex2f(-0.73f,-0.2f);
    glVertex2f(-0.7f,-0.2f);
    glEnd();

    int i;
	GLfloat x=-0.5f; GLfloat y=0.5f; GLfloat radius =.08f;
	int triangleAmount = 40; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 51);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++)
            {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			        y + (radius * sin(i * twicePi / triangleAmount))
			);
		   }
	glEnd();
glLoadIdentity();

}


void YellowFlag()
{
     glTranslatef(-.350,-.8,0);
     glScalef(.8,.8,0);
     glBegin(GL_QUADS);

    glColor3ub(213,220,98);
    glVertex2f(-0.7f,0.4f);
    glVertex2f(-0.3f,0.4f);
    glVertex2f(-0.3f,0.6f);
    glVertex2f(-0.7f,0.6f);

    glColor3ub(0, 0, 0);
    glVertex2f(-0.7f,0.6f);
    glVertex2f(-0.73f,0.6f);
    glVertex2f(-0.73f,-0.2f);
    glVertex2f(-0.7f,-0.2f);

    glEnd();
glLoadIdentity();

}
void RedFlag()
{
     glTranslatef(.03,-.8,0);
     glScalef(.8,.8,0);
     glBegin(GL_QUADS);

    glColor3ub(220,84,77);
    glVertex2f(-0.7f,0.4f);
    glVertex2f(-0.3f,0.4f);
    glVertex2f(-0.3f,0.6f);
    glVertex2f(-0.7f,0.6f);

    glColor3ub(0, 0, 0);
    glVertex2f(-0.7f,0.6f);
    glVertex2f(-0.73f,0.6f);
    glVertex2f(-0.73f,-0.2f);
    glVertex2f(-0.7f,-0.2f);

    glEnd();
glLoadIdentity();

}
void GreenFlag()
{
     glTranslatef(.78,-.8,0);
     glScalef(.8,.8,0);
     glBegin(GL_QUADS);

    glColor3ub(73,239,95);
    glVertex2f(-0.7f,0.4f);
    glVertex2f(-0.3f,0.4f);
    glVertex2f(-0.3f,0.6f);
    glVertex2f(-0.7f,0.6f);

    glColor3ub(0, 0, 0);
    glVertex2f(-0.7f,0.6f);
    glVertex2f(-0.73f,0.6f);
    glVertex2f(-0.73f,-0.2f);
    glVertex2f(-0.7f,-0.2f);

    glEnd();
glLoadIdentity();

}

void BlueFlag()
{
     glTranslatef(1.15,-.8,0);
     glScalef(.8,.8,0);
    glBegin(GL_QUADS);

    glColor3ub(82,141,218);
    glVertex2f(-0.7f,0.4f);
    glVertex2f(-0.3f,0.4f);
    glVertex2f(-0.3f,0.6f);
    glVertex2f(-0.7f,0.6f);

    glColor3ub(0, 0, 0);
    glVertex2f(-0.7f,0.6f);
    glVertex2f(-0.73f,0.6f);
    glVertex2f(-0.73f,-0.2f);
    glVertex2f(-0.7f,-0.2f);

    glEnd();
glLoadIdentity();
}

void display(void)
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(2.5);
    // Draw a Red 1x1 Square centered at origin
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    int i;
    GLfloat x=.0f; GLfloat y= .0f; GLfloat radius= .735f;
    int triangleAmount = 40;

    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 146, 148 );
    glVertex2f(x,y);
    for(i=0; i<=triangleAmount; i++)
    {
        glVertex2f(x+(radius *cos(i * twicePi/triangleAmount)),
                   y+ (radius*sin(i *  twicePi/triangleAmount))
                   );
    }
    glEnd();



//Antina
    glBegin(GL_QUADS);
    glColor3ub(33,47,61);
    glVertex2f(-0.2,0.705);
    glVertex2f(-0.204,0.705);
    glVertex2f(-0.204,0.9);
    glVertex2f(-0.2,0.9);
    glEnd();



//mainbase
    glBegin(GL_QUADS);
    glColor3ub(101, 103, 82);
    glVertex2f(-1,-0.9);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glVertex2f(1,-0.9);
    glEnd();

   //Buildingbases
    glBegin(GL_QUADS);
    glColor3ub(106, 120, 119);
    glVertex2f(-0.23,-0.7);
    glVertex2f(-0.23,-0.9);
    glVertex2f(0.23,-0.9);
    glVertex2f(0.23,-0.7);
    glEnd();

    //floorbase
    glBegin(GL_QUADS);
    glColor3ub(106, 120, 119 );
    glVertex2f(-0.23,-0.76);
    glVertex2f(-0.23,-0.84);
    glVertex2f(0.23,-0.84);
    glVertex2f(0.23,-0.76);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3b(52,73,94);
    glVertex2f(-0.536,-0.5);
    glVertex2f(-0.435,-0.59);
    glVertex2f(0.435,-0.59);
    glVertex2f(0.536,-0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3b(52,73,94);
    glVertex2f(-0.67,-0.3);
    glVertex2f(-0.615,-0.4);
    glVertex2f(0.615,-0.4);
    glVertex2f(0.67,-0.3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3b(52,73,94);
    glVertex2f(-0.734,-0.03);
    glVertex2f(-0.709,-0.19);
    glVertex2f(0.709,-0.19);
    glVertex2f(0.734,-0.02);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3b(52,73,94);
    glVertex2f(-0.728,0.1);
    glVertex2f(-0.706,0.2);
    glVertex2f(0.706,0.2);
    glVertex2f(0.728,0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3b(52,73,94);
    glVertex2f(-0.66,0.32);
    glVertex2f(-0.59,0.44);
    glVertex2f(0.59,0.44);
    glVertex2f(0.66,0.32);
    glEnd();


    //left side grass
    glBegin(GL_POLYGON);
    glColor3ub(83, 213, 78);
    glVertex2f(-1,-0.9);
    glVertex2f(-0.97,-0.87);
    glVertex2f(-0.87,-0.9);
    glEnd();

    glTranslatef(0.1f, 0.0f, 0.0f);



    glBegin(GL_POLYGON);
    glColor3ub(83, 213, 78);
    glVertex2f(-1,-0.9);
    glVertex2f(-0.97,-0.87);
    glVertex2f(-0.87,-0.9);
    glEnd();
    glTranslatef(0.1f, 0.0f, 0.0f);



    glBegin(GL_POLYGON);
    glColor3ub(83, 213, 78);
    glVertex2f(-1,-0.9);
    glVertex2f(-0.97,-0.87);
    glVertex2f(-0.87,-0.9);
    glEnd();
    glTranslatef(0.1f, 0.0f, 0.0f);



    glBegin(GL_POLYGON);
    glColor3ub(83, 213, 78);
    glVertex2f(-1,-0.9);
    glVertex2f(-0.97,-0.87);
    glVertex2f(-0.87,-0.9);
    glEnd();
    glTranslatef(0.1f, 0.0f, 0.0f);



    glBegin(GL_POLYGON);
    glColor3ub(83, 213, 78);
    glVertex2f(-1,-0.9);
    glVertex2f(-0.97,-0.87);
    glVertex2f(-0.87,-0.9);
    glEnd();
    glTranslatef(0.1f, 0.0f, 0.0f);



    glBegin(GL_POLYGON);
    glColor3ub(83, 213, 78);
    glVertex2f(-1,-0.9);
    glVertex2f(-0.97,-0.87);
    glVertex2f(-0.87,-0.9);
    glEnd();
    glTranslatef(0.1f, 0.0f, 0.0f);



    glBegin(GL_POLYGON);
    glColor3ub(83, 213, 78);
    glVertex2f(-1,-0.9);
    glVertex2f(-0.97,-0.87);
    glVertex2f(-0.87,-0.9);
    glEnd();
    glLoadIdentity();

//rightside Grass
    glBegin(GL_POLYGON);
    glColor3ub(83, 213, 78);
    glVertex2f(1,-0.9);
    glVertex2f(0.97,-0.87);
    glVertex2f(0.87,-0.9);
    glEnd();
    glTranslatef(-0.1f, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(83, 213, 78);
    glVertex2f(1,-0.9);
    glVertex2f(0.97,-0.87);
    glVertex2f(0.87,-0.9);
    glEnd();
    glTranslatef(-0.1f, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(83, 213, 78);
    glVertex2f(1,-0.9);
    glVertex2f(0.97,-0.87);
    glVertex2f(0.87,-0.9);
    glEnd();
    glTranslatef(-0.1f, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(83, 213, 78);
    glVertex2f(1,-0.9);
    glVertex2f(0.97,-0.87);
    glVertex2f(0.87,-0.9);
    glEnd();
    glTranslatef(-0.1f, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(83, 213, 78);
    glVertex2f(1,-0.9);
    glVertex2f(0.97,-0.87);
    glVertex2f(0.87,-0.9);
    glEnd();
    glTranslatef(-0.1f, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(83, 213, 78);
    glVertex2f(1,-0.9);
    glVertex2f(0.97,-0.87);
    glVertex2f(0.87,-0.9);
    glEnd();
    glTranslatef(-0.1f, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(83, 213, 78);
    glVertex2f(1,-0.9);
    glVertex2f(0.97,-0.87);
    glVertex2f(0.87,-0.9);
    glEnd();
    glTranslatef(-0.1f, 0.0f, 0.0f);
    glLoadIdentity();

//AIUBTEXT
//A
    glBegin(GL_POLYGON);
    glColor3ub(222, 225, 194);
    glVertex2f(-0.14,-0.99);
    glVertex2f(-0.15,-0.99);
    glVertex2f(-0.14,-0.91);
    glVertex2f(-0.13,-0.91);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(222, 225, 194);
    glVertex2f(-0.14,-0.945);
    glVertex2f(-0.15,-0.955);
    glVertex2f(-0.125,-0.955);
    glVertex2f(-0.125,-0.955);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(222, 225, 194);
    glVertex2f(-0.11,-0.99);
    glVertex2f(-0.12,-0.99);
    glVertex2f(-0.13,-0.91);
    glVertex2f(-0.12,-0.91);
    glEnd();

//i
    glBegin(GL_POLYGON);
    glColor3ub(222, 225, 194);
    glVertex2f(-0.05,-0.99);
    glVertex2f(-0.06,-0.99);
    glVertex2f(-0.06,-0.91);
    glVertex2f(-0.05,-0.91);
    glEnd();

//U
    glBegin(GL_POLYGON);
    glColor3ub(222, 225, 194);
    glVertex2f(0.01,-0.91);
    glVertex2f(0.01,-0.99);
    glVertex2f(0.02,-0.99);
    glVertex2f(0.02,-0.91);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(222, 225, 194);
    glVertex2f(0.02,-0.98);
    glVertex2f(0.02,-0.99);
    glVertex2f(0.05,-0.99);
    glVertex2f(0.05,-0.98);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(222, 225, 194);
    glVertex2f(0.05,-0.91);
    glVertex2f(0.05,-0.99);
    glVertex2f(0.06,-0.99);
    glVertex2f(0.06,-0.91);
    glEnd();

//B
    glBegin(GL_POLYGON);
    glColor3ub(222, 225, 194);
    glVertex2f(0.11,-0.91);
    glVertex2f(0.11,-0.99);
    glVertex2f(0.12,-0.99);
    glVertex2f(0.12,-0.91);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(222, 225, 194);
    glVertex2f(0.14,-0.915);
    glVertex2f(0.14,-0.985);
    glVertex2f(0.145,-0.985);
    glVertex2f(0.145,-0.915);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(222, 225, 194);
    glVertex2f(0.11,-0.91);
    glVertex2f(0.11,-0.92);
    glVertex2f(0.14,-0.92);
    glVertex2f(0.14,-0.91);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(222, 225, 194);
    glVertex2f(0.11,-0.945);
    glVertex2f(0.11,-0.955);
    glVertex2f(0.14,-0.955);
    glVertex2f(0.14,-0.945);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(222, 225, 194);
    glVertex2f(0.11,-0.98);
    glVertex2f(0.11,-0.99);
    glVertex2f(0.14,-0.99);
    glVertex2f(0.14,-0.98);
    glEnd();
    glLoadIdentity();




BdFlag();
YellowFlag();
RedFlag();
GreenFlag();
BlueFlag();
glFlush();

}



/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInit(&argc, argv);                 // Initialize GLUT
    glutCreateWindow("Rifat Rudro"); // Create a window with the given title
    glutInitWindowSize(600, 900);   // Set the window's initial width & height
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}
