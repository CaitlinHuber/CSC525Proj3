#include <iostream>
#include <string>
#include <GL/glut.h>
#include <cmath>
#include <fstream>
#include <math.h>

using namespace std;

//***********************************************************************************
//Declaring Variables
float r = 0;
float g = 0;
float b = 0;
int choice = 1;
//***********************************************************************************

//three layer cube body
void body_One()
{
	glPushMatrix();
	glTranslated(0, 30, 0);
	glColor3d(0, 0, 0);
	glutSolidCube(30);
	
	glPopMatrix();
	glPushMatrix();
	glTranslated(0, -30, 0);
	glColor3d(1, 0, 0);
	glutSolidCube(30);
	
	
	glPopMatrix();
	glTranslated(0, 0, 0);
	glColor3d(0, 0, 1);
	glutSolidCube(30);
	
}

//cone body
void body_Two()
{
	glPushMatrix();
	glRotated(-90, 1, 0, 0);
	glutSolidCone(30, 60, 50, 50);
	glPopMatrix();

}
	
//torus body
void body_Three()
{
	glPushMatrix();
	glRotated(90, 1, 0, 0);
	glColor3d(1, 0, 0);
	glutSolidTorus(10, 50, 50, 50);
	glPopMatrix();

	//top of the torus body
	glPushMatrix();
	glRotated(90, 1, 0, 0);
	glTranslated(0, 0, -10);
	glColor3d(0, 1, 0);
	glutSolidTorus(10, 45, 50, 50);
	glPopMatrix();

	//top of the torus body
	glPushMatrix();
	glRotated(90, 1, 0, 0);
	glTranslated(0, 0, -20);
	glColor3d(0, 0, 1);
	glutSolidTorus(10, 35, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glRotated(90, 1, 0, 0);
	glTranslated(0, 0, -30);
	glColor3d(1, 0, 0);
	glutSolidTorus(10, 20, 50, 50);
	glPopMatrix();

	//bottom of the torus body
	glPushMatrix();
	glRotated(90, 1, 0, 0);
	glTranslated(0, 0, 10);
	glColor3d(0, 1, 0);
	glutSolidTorus(10, 45, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glRotated(90, 1, 0, 0);
	glTranslated(0, 0, 20);
	glColor3d(0, 0, 1);
	glutSolidTorus(10, 35, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glRotated(90, 1, 0, 0);
	glTranslated(0, 0, 30);
	glColor3d(1, 0, 0);
	glutSolidTorus(10, 20, 50, 50);
	glPopMatrix();
}

//double cube head with a 
void head_One()
{
	glPushMatrix();
	glColor3d(1, 0, 0);
	glTranslated(-25, 0, 0);
	glutSolidCube(50);
	glPopMatrix();

	glPushMatrix();
	glTranslated(25, 0, 0);
	glutSolidCube(50);
	glPopMatrix();

	//neck
	glPushMatrix();
	glColor3d(0, 1, 0);
	glRotated(90, 1, 0, 0);
	glTranslated(0, 0, 35);
	glutSolidTorus(10, 20, 5, 5);
	glPopMatrix();

}

//sphere head
void head_Two()
{
	glPushMatrix();
	glColor3d(1, 0, 0);
	glTranslated(0, 10, 0);
	glutSolidSphere(20, 50, 50);
	glPopMatrix();
}

//cone head
void head_Three()
{
	glPushMatrix();
	glColor3d(1, 0, 0);
	glRotated(-90, 1, 0, 0);
	glutSolidCone(20, 70, 50, 50);
	glPopMatrix();
}

void left_Leg_one()
{
	glColor3d(0, 0, 1);
	glPushMatrix();
	glTranslated(0, 0, 0);
	glutSolidCube(20);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 20, 0);
	//glTranslated(0 + x, 20 + y, 0 + z);
	glutSolidCube(20);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 40, 0);
	//glTranslated(0 + x, 40 + y, 0 + z);
	glutSolidCube(20);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 60, 0);
	//glTranslated(0 + x, 60 + y, 0 + z);
	glutSolidCube(20);
	glPopMatrix();
}

void left_Leg_Two()
{
	glColor3d(0, 0, 1);
	glPushMatrix();
	glTranslated(0, 60, 0);
	glutSolidCube(20);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 40, 0);
	glutSolidCube(20);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 20, 0);
	glutSolidCube(20);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, 0);
	glutSolidCube(20);
	glPopMatrix();

	glPushMatrix();
	glTranslated(20, 0, 0);
	glutSolidCube(20);
	glPopMatrix();
}

void left_Leg_Three()
{
	glPushMatrix();
	glColor3d(0, 1, 0);
	glTranslated(0, 70, 0);
	//glTranslated(0 + x, 70 + y, 0 + z);
	glutSolidSphere(10, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glColor3d(0, 0, 1);
	glRotated(-90, 1, 0, 0);
	glTranslated(0, 0, 0);
	//glTranslated(0 + x, 0 + z, 0 + y);
	glutSolidCone(10, 70, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glColor3d(1, 0, 0);
	glTranslated(0, 0, 10);
	//glTranslated(0 + x, 0 + y, 10 + z);
	glutSolidCone(5, 20, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glColor3d(1, 0, 0);
	glRotated(120, 0, 1, 0);
	glTranslated(0, 0, 10);
	//glTranslated(0 + x, 0 + y, 10 + z);
	glutSolidCone(5, 20, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glColor3d(1, 0, 0);
	glRotated(240, 0, 1, 0);
	glTranslated(0, 0, 10);
	//glTranslated(0 + x, 0 + y, 10 + z);
	glutSolidCone(5, 20, 50, 50);
	glPopMatrix();

	glTranslated(20, 30, 0);
}

void left_Arm_One()
{
	glColor3d(1, 0, 0);

	glPushMatrix();
	glTranslated(0, 0, 0);
	glutSolidSphere(10, 50, 50);
	glPopMatrix();

	glColor3d(0, 1, 0);
	glPushMatrix();
	glTranslated(-20, 0, 0);
	glutSolidSphere(10, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-40, 0, 0);
	glutSolidSphere(10, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-60, 0, 0);
	glutSolidSphere(10, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-80, 0, 0);
	glutSolidSphere(10, 50, 50);
	glPopMatrix();
}

void Left_Arm_Two()
{
	glColor3d(1, 0, 0);
	glPushMatrix();
	glTranslated(0, 0, 0);
	glutSolidCube(10);
	glPopMatrix();

	glColor3d(0, 1, 0);
	glPushMatrix();
	glTranslated(-20, 0, 0);
	glutSolidCube(10);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-40, 0, 0);
	glutSolidCube(10);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-60, 0, 0);
	glutSolidCube(10);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-80, 0, 0);
	glutSolidCube(10);
	glPopMatrix();
}

void Left_Arm_Three()
{
	glColor3d(1, 0, 0);
	glPushMatrix();
	glTranslated(0, 0, 0);
	glutSolidCube(10);
	glPopMatrix();

	glColor3d(0, 0, 1);
	glPushMatrix();
	glTranslated(-10, 0, 0);
	glutSolidSphere(5, 50, 50);
	glPopMatrix();

	glColor3d(0, 1, 0);
	glPushMatrix();
	glTranslated(-20, 0, 0);
	glutSolidCube(10);
	glPopMatrix();

	glColor3d(0, 0, 1);
	glPushMatrix();
	glTranslated(-30, 0, 0);
	glutSolidSphere(5, 50, 50);
	glPopMatrix();

	glColor3d(0, 1, 0);
	glPushMatrix();
	glTranslated(-40, 0, 0);
	glutSolidCube(10);
	glPopMatrix();

	glColor3d(0, 0, 1);
	glPushMatrix();
	glTranslated(-50, 0, 0);
	glutSolidSphere(5, 50, 50);
	glPopMatrix();

	glColor3d(0, 1, 0);
	glPushMatrix();
	glTranslated(-60, 0, 0);
	glutSolidCube(10);
	glPopMatrix();

	glColor3d(0, 0, 1);
	glPushMatrix();
	glTranslated(-70, 0, 0);
	glutSolidSphere(5, 50, 50);
	glPopMatrix();

	glColor3d(0, 1, 0);
	glPushMatrix();
	glTranslated(-80, 0, 0);
	glutSolidCube(10);
	glPopMatrix();
}
	//***********************************************************************************
bool headchoice1 = false;
bool headchoice2 = false;
bool headchoice3 = false;
void drawPoints()
{
	Left_Arm_Three();
	glColor3f(r, g, b);

	if (headchoice1){
		head_One();
	}
	else if (headchoice2){
		head_Two();
	}
	else if (headchoice3){
		head_Three();
	}

	glBegin(GL_POINTS);	// use points to form X-/Y-axes
	glColor3f(0, 0, 0);			 // change drawing color to black
	for (int x = -150; x <= 150; x++) // draw X-axis
		glVertex3i(x, 0, 0);
	for (int y = -150; y <= 150; y++) // draw Y-axis
		glVertex3i(0, y, 0);
	for (int Z = -150; Z <= 150; Z++) // draw Y-axis
		glVertex3i(0, 0, Z);
	glEnd();
}

//***********************************************************************************
void myInit()
{
	glClearColor(1, 1, 1, 0);			// specify a background clor: white
	glOrtho(-200, 200, -200, 200, -200, 200);  // specify a viewing area
	gluLookAt(60, 70, 60, 0, 0, 0, 0, 1, 0);
	glEnable(GL_DEPTH_TEST);
}

//***********************************************************************************
void myDisplayCallback()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// draw the background
	drawPoints();
	glFlush(); // flush out the buffer contents
}
//***********************************************************************************
//Creating Info Window and all menu features included in Info Window and Text Editor Window
void colorChoice(int option){
	switch (option){
		//Steel Blue
	case 1:
		r = .24;
		g = .51;
		b = .871;
		break;
		//Make Gold
		// 212,175,55
	case 2:
		r = 1;
		g = .855;
		b = .725;
		break;
		//metallic silver
		//188, 198, 204
	case 3:
		r = 1;
		g = .08;
		b = .58;
		break;
	}
	myDisplayCallback();
}

void headChoice(int option){
	headchoice1 = false;
	headchoice2 = false;
	headchoice3 = false;
	switch (option)
	{
	case 1:
		headchoice1 = true;
		break;
	case 2:
		headchoice2 = true;
		break;
	case 3:
		headchoice3 = true;
		break;
	default:
		break;
	}
	myDisplayCallback();
}

void armsChoice(int option){}

void rightArmChoice(int option){
}

void leftArmChoice(int option){
}

void bodyChoice(int option){
}


void legsChoice(int option){}

void rightLegChoice(int option){
}

void leftLegChoice(int option){
}
//***********************************************************************************
//Create menu choices for text editor and create Text Editor Window
void menuChoice(int option){
	switch (option)
	{
	case 1:
		exit(0);
	case 2:
		//glutDestroyWindow(infoWindow);
		//infoFunc();
	case 3:
		//writeToFile();
		break;
	}
}

void textEditor(){
	glutInitWindowSize(400, 400);				// specify a window size
	glutInitWindowPosition(100, 0);				// specify a window position
	glutCreateWindow("Text Editor");		    // create a titled window
	myInit();									// setting up
	glutDisplayFunc(myDisplayCallback);		   // register a callback

	glutCreateMenu(menuChoice);
	int colorMenu = glutCreateMenu(colorChoice);
	glutAddMenuEntry("Steel Blue", 1);
	glutAddMenuEntry("Peach", 2);
	glutAddMenuEntry("Deep Pink", 3);

	int rightArms = glutCreateMenu(rightArmChoice);
	glutAddMenuEntry("rightArm1", 1);
	glutAddMenuEntry("rightArm2", 2);
	glutAddMenuEntry("rightArm3", 3);

	int leftArms = glutCreateMenu(leftArmChoice);
	glutAddMenuEntry("leftArm1", 1);
	glutAddMenuEntry("leftArm2", 2);
	glutAddMenuEntry("leftArm3", 3);

	int armsMenu = glutCreateMenu(armsChoice);
	glutAddSubMenu("Right Arm", rightArms);
	glutAddSubMenu("Left Arm", leftArms);

	int headMenu = glutCreateMenu(headChoice);
	glutAddMenuEntry("headChoice1", 1);
	glutAddMenuEntry("headChoice2", 2);
	glutAddMenuEntry("headChoice3", 3);

	int rightLegs = glutCreateMenu(rightLegChoice);
	glutAddMenuEntry("rightLeg1", 1);
	glutAddMenuEntry("rightLeg2", 2);
	glutAddMenuEntry("rightLeg3", 3);

	int leftLegs = glutCreateMenu(leftLegChoice);
	glutAddMenuEntry("leftLeg1", 1);
	glutAddMenuEntry("leftLeg2", 2);
	glutAddMenuEntry("leftLeg3", 3);


	int legsMenu = glutCreateMenu(legsChoice);
	glutAddSubMenu("Right Leg", rightLegs);
	glutAddSubMenu("Left Leg", leftLegs);

	int bodysMenu = glutCreateMenu(bodyChoice);
	glutAddMenuEntry("body1", 1);
	glutAddMenuEntry("body2", 2);
	glutAddMenuEntry("body3", 3);

	glutCreateMenu(menuChoice);
	glutAddSubMenu("Head", headMenu);
	glutAddSubMenu("Arms", armsMenu);
	glutAddSubMenu("Body", bodysMenu);
	glutAddSubMenu("Legs", legsMenu);
	glutAddSubMenu("Colors", colorMenu);
	glutAddMenuEntry("Exit the Program", 1);
	glutAttachMenu(GLUT_RIGHT_BUTTON);

}

//***********************************************************************************
void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH);

	glutInitWindowSize(400, 400);
	glutInitWindowPosition(100, 0);

	//infoFunc();
	textEditor();

	glutDisplayFunc(myDisplayCallback);		// register a callback
	//glutKeyboardFunc(character);
	//glutMouseFunc(mouseClicks);
	glutMainLoop();							// get into an infinite loop
}