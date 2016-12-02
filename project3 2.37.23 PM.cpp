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
void drawPoints()
{
	glColor3f(r, g, b);
}

//***********************************************************************************
void myInit()
{
	glClearColor(1, 1, 1, 0);			// specify a background clor: white
	gluOrtho2D(-200, 200, -200, 200);  // specify a viewing area
}

//***********************************************************************************
void myDisplayCallback()
{
	glClear(GL_COLOR_BUFFER_BIT);	// draw the background
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
void main()
{
	//infoFunc();
	textEditor();

	glutDisplayFunc(myDisplayCallback);		// register a callback
	//glutKeyboardFunc(character);
	//glutMouseFunc(mouseClicks);
	glutMainLoop();							// get into an infinite loop
}
