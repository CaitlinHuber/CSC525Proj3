/*==================================================================================================
PROGRAMMER:			Caitlin Huber && Cristian Moncada
Folder IDs:			Caitlin115
					Cristian
COURSE:				CSC 525/625
MODIFIED BY:		Caitlin Huber & Cristian Moncada
LAST MODIFIED DATE:	12/11/2016
DESCRIPTION:		A 3D interactive advertisment for a product
NOTE:				
Contribution:		Cristian 50%:
					Did all code for: 
					3D head objects
					3D arm objects
					3D leg objects
					3D body parts
					mouse event / rotation animation

					Caitlin 50%:
					Did all code for:
					Menus & Menu Options
					Help Window
					3D faces
					Aligned starting body part positions
FILES:				project3.cpp
IDE/COMPILER:		MicroSoft Visual Studio 2013
INSTRUCTION FOR COMPILATION AND EXECUTION:
1.		Double click on project3.cpp	to OPEN the project in either folder ID's listed above
2.		Press Ctrl+F7					to COMPILE
3.		Press Ctrl+Shift+B				to BUILD (COMPILE+LINK)
4.		Press Ctrl+F5					to EXECUTE
==================================================================================================*/
#include <iostream>
#include <string>
#include <GL/glut.h>
#include <cmath>
#include <fstream>
#include <math.h>

using namespace std;

//***********************************************************************************
//Declaring Variables

void myDisplayCallback(); //able to use the method before they are constructed

float r = 0;
float g = 0;
float b = 0;

int infoWindow;

float rValHead = .5;
float gValHead = .5;
float bValHead = .5;

float rValBody = .5;
float gValBody = .5;
float bValBody = .5;

float rValRightArm = .5;
float gValRightArm = .5;
float bValRightArm = .5;

float rValLeftArm = .5;
float gValLeftArm = .5;
float bValLeftArm = .5;

float rValRightLeg = .5;
float gValRightLeg = .5;
float bValRightLeg = .5;

float rValLeftLeg = .5;
float gValLeftLeg = .5;
float bValLeftLeg = .5;

rm, b
bool headchoice1, headchoice2, headchoice3;
bool bodychoice1, bodychoice2, bodychoice3;
bool leftLegChoice1, leftLegChoice2, leftLegChoice3;
bool rightLegChoice1, rightLegChoice2, rightLegChoice3;
bool leftArmChoice1, leftArmChoice2, leftArmChoice3;
bool rightArmChoice1, rightArmChoice2, rightArmChoice3;

string introHelpString = "Welcome to Build - A - Robot Information Window";
string introHelpString2 = "--------------------------------------------------";
string helpString = "Ready to build you're very own unique robot?";
string helpString1 = "Right click in the Build - A - Robot window to pick the";
string helpString2 = "head, body, arms, legs and color you want your robot to have";
string helpString3 = "With over 32,000 different possibilities, your robot is sure to amaze!";
string helpString4 = "Don't forget to rotate your robot around to see exactly what you're choosing, by ";
string helpString5 = "left clicking!"; 

//***********************************************************************************
//Creating all Robot Parts

//Heads
//double cube head with a neck (Block head)
void head_One()
{
	glPushMatrix();
	glTranslated(0, -10, 0);
	glClear(GL_DEPTH_BUFFER_BIT);
	glPushMatrix();
	glColor3d(rValHead, gValHead, bValHead);
	glTranslated(-25, 95, 0);
	glutSolidCube(50);
	glPopMatrix();

	//right eye
	glPushMatrix();
	glColor3d(0, 0, 0);
	glTranslated(-30, 105, 25);
	glutSolidSphere(5, 10, 10);
	glPopMatrix();

	//left eye
	glPushMatrix();
	glColor3d(0, 0, 0);
	glTranslated(30, 105, 25);
	glutSolidSphere(5, 10, 10);
	glPopMatrix();

	//mouth
	glPushMatrix();
	glColor3d(0, 0, 0);
	glTranslated(-15, 90, 25);
	glutSolidCube(10);
	glPopMatrix();
	glPushMatrix();
	glColor3d(0, 0, 0);
	glTranslated(-5, 90, 25);
	glutSolidCube(10);
	glPopMatrix();
	glPushMatrix();
	glColor3d(0, 0, 0);
	glTranslated(5, 90, 25);
	glutSolidCube(10);
	glPopMatrix();
	glPushMatrix();
	glColor3d(0, 0, 0);
	glTranslated(15, 90, 25);
	glutSolidCube(10);
	glPopMatrix();

	glColor3d(rValHead, gValHead, bValHead);
	glPushMatrix();
	glTranslated(25, 95, 0);
	glutSolidCube(50);
	glPopMatrix();

	//neck
	glPushMatrix();
	glColor3d(0, 0, 0);
	glRotated(90, 1, 0, 0);
	glTranslated(0, 0, -55);
	glutSolidTorus(10, 20, 5, 5);
	glPopMatrix();

	glPopMatrix();
}

//sphere head with neck
void head_Two()
{
	glPushMatrix();
	glTranslated(0, -10, 0);
	glClear(GL_DEPTH_BUFFER_BIT);
	glPushMatrix();
	glColor3d(rValHead, gValHead, bValHead);
	glTranslated(0, 80, 0);
	glutSolidSphere(30, 50, 50);
	glPopMatrix();

	//right eye
	glPushMatrix();
	glColor3d(0, 0, 0);
	glTranslated(-15, 100, 10);
	glutSolidSphere(5, 10, 10);
	glPopMatrix();

	//left eye
	glPushMatrix();
	glColor3d(0, 0, 0);
	glTranslated(15, 100, 10);
	glutSolidSphere(5, 10, 10);
	glPopMatrix();

	//mouth
	glPushMatrix();
	glColor3d(0, 0, 0);
	glTranslated(-10, 90, 25);
	glutSolidCube(10);
	glPopMatrix();
	glPushMatrix();
	glColor3d(0, 0, 0);
	glTranslated(-5, 90, 25);
	glutSolidCube(10);
	glPopMatrix();
	glPushMatrix();
	glColor3d(0, 0, 0);
	glTranslated(5, 90, 25);
	glutSolidCube(10);
	glPopMatrix();
	glPushMatrix();
	glColor3d(0, 0, 0);
	glTranslated(10, 90, 25);
	glutSolidCube(10);
	glPopMatrix();



	//neck
	glPushMatrix();
	glColor3d(0, 0, 0);
	glRotated(90, 1, 0, 0);
	glTranslated(0, 0, -55);
	glutSolidTorus(10, 20, 5, 5);
	glPopMatrix();

	glPopMatrix();
}

//cone head with neck
void head_Three()
{
	glPushMatrix();
	glColor3d(rValHead, gValHead, bValHead);
	glRotated(-90, 1, 0, 0);
	glTranslated(0, 0, 60);
	glutSolidCone(35, 75, 50, 50);
	glPopMatrix();

	//right eye
	glPushMatrix();
	glColor3d(0, 0, 0);
	glTranslated(-15, 100, 10);
	glutSolidSphere(5, 10, 10);
	glPopMatrix();

	//left eye
	glPushMatrix();
	glColor3d(0, 0, 0);
	glTranslated(15, 100, 10);
	glutSolidSphere(5, 10, 10);
	glPopMatrix();

	//mouth
	glPushMatrix();
	glColor3d(0, 0, 0);
	glTranslated(-10, 80, 25);
	glutSolidCube(10);
	glPopMatrix();
	glPushMatrix();
	glColor3d(0, 0, 0);
	glTranslated(-5, 80, 25);
	glutSolidCube(10);
	glPopMatrix();
	glPushMatrix();
	glColor3d(0, 0, 0);
	glTranslated(5, 80, 25);
	glutSolidCube(10);
	glPopMatrix();
	glPushMatrix();
	glColor3d(0, 0, 0);
	glTranslated(10, 80, 25);
	glutSolidCube(10);
	glPopMatrix();

	//neck
	glPushMatrix();
	glColor3d(0, 0, 0);
	glRotated(90, 1, 0, 0);
	glTranslated(0, 0, -50);
	glutSolidTorus(10, 20, 5, 5);
	glPopMatrix();

}

//three layer cube body "Block Body"
void body_One()
{
	glPushMatrix();
	glTranslated(0, -20, 0);

	glPushMatrix();
	glTranslated(0, 30, 0);
	glColor3d(rValBody, gValBody, bValBody);
	glutSolidCube(60);

	glPopMatrix();
	glPushMatrix();
	glTranslated(0, -30, 0);
	glColor3d(rValBody, gValBody, bValBody);
	glutSolidCube(45);


	glPopMatrix();
	glTranslated(0, 0, 0);
	glColor3d(0, 0, 0);
	glutSolidCube(55);
	
	glPopMatrix();
}

//cone body
void body_Two()
{
	glPushMatrix();
	glColor3d(rValBody, gValBody, bValBody);
	glRotated(-90, 1, 0, 0);
	glTranslated(0, 0, -20);
	glutSolidCone(60, 100, 50, 50);
	glPopMatrix();
}

//torus body
void body_Three()
{
	glPushMatrix();
	glRotated(90, 1, 0, 0);
	glColor3d(rValBody, gValBody, bValBody);
	glutSolidTorus(10, 50, 50, 50);
	glPopMatrix();

	//top of the torus body
	glPushMatrix();
	glRotated(90, 1, 0, 0);
	glTranslated(0, 0, -10);
	glColor3d(0, 0, 0);
	glutSolidTorus(10, 45, 50, 50);
	glPopMatrix();

	//top of the torus body
	glPushMatrix();
	glRotated(90, 1, 0, 0);
	glTranslated(0, 0, -20);
	glColor3d(rValBody, gValBody, bValBody);
	glutSolidTorus(10, 35, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glRotated(90, 1, 0, 0);
	glTranslated(0, 0, -30);
	glColor3d(0, 0, 0);
	glutSolidTorus(10, 20, 50, 50);
	glPopMatrix();

	//bottom of the torus body
	glPushMatrix();
	glRotated(90, 1, 0, 0);
	glTranslated(0, 0, 10);
	glColor3d(rValBody, gValBody, bValBody);
	glutSolidTorus(10, 45, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glRotated(90, 1, 0, 0);
	glTranslated(0, 0, 20);
	glColor3d(0, 0, 0);
	glutSolidTorus(10, 35, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glRotated(90, 1, 0, 0);
	glTranslated(0, 0, 30);
	glColor3d(rValBody, gValBody, bValBody);
	glutSolidTorus(10, 20, 50, 50);
	glPopMatrix();

	//NEED TO MOVE WHOLE TORUS OBJECT UP
	//glPushMatrix();
	//glTranslated(0, -100, 0);	
}

//Legs
void right_Leg_one()
{
	glPushMatrix();
	glTranslated(-25, -100, 0);
	glColor3d(rValRightLeg, gValRightLeg, bValRightLeg);
	glPushMatrix();
	glTranslated(0, 0, 0);
	glutSolidCube(20);
	glPopMatrix();
		
	glPushMatrix();
	glTranslated(0, 20, 0);
	glutSolidCube(20);
	glPopMatrix();
	glPushMatrix();
	glTranslated(0, 40, 0);
	glutSolidCube(20);
	glPopMatrix();
		
	glPushMatrix();
	glTranslated(0, 60, 0);
	glutSolidCube(20);
	glPopMatrix();	

	glPopMatrix();
}

void right_Leg_Two()
{
	glPushMatrix();
	glTranslated(-25, -100, 0);
	glRotated(-90, 0, 1, 0);

	glColor3d(rValRightLeg, gValRightLeg, bValRightLeg);
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
	
	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(0, 0, 0);
	glutSolidCube(20);
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(20, 0, 0);
	glutSolidCube(20);
	glPopMatrix();

	glPopMatrix();
}

void right_Leg_Three()
{
	glPushMatrix();
	glTranslated(-25, -100, 0);

	glPushMatrix();
	glColor3d(0,0,0);
	glTranslated(0, 70, 0);
	glutSolidSphere(10, 50, 50);
	glPopMatrix();
	
	glPushMatrix();
	glColor3d(rValRightLeg, gValRightLeg, bValRightLeg);
	glRotated(-90, 1, 0, 0);
	glTranslated(0, 0, 0);
	glutSolidCone(10, 70, 50, 50);
	glPopMatrix();
	
	glPushMatrix();
	glColor3d(0, 0, 0);
	glTranslated(0, 0, 10);
	glutSolidCone(5, 20, 50, 50);
	glPopMatrix();
	
	glPushMatrix();
	glColor3d(0,0,0);
	glRotated(120, 0, 1, 0);
	glTranslated(0, 0, 10);
	glutSolidCone(5, 20, 50, 50);
	glPopMatrix();
	
	glPushMatrix();
	glColor3d(0, 0, 0);
	glRotated(240, 0, 1, 0);
	glTranslated(0, 0, 10);
	//glTranslated(0 + x, 0 + y, 10 + z);
	glutSolidCone(5, 20, 50, 50);
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(20, 30, 0);
	glPopMatrix();

	glPopMatrix();
}

void left_Leg_one()
{
	glPushMatrix();
	glTranslated(25, -100, 0);

	glColor3d(rValLeftLeg, gValLeftLeg, bValLeftLeg);
	glPushMatrix();
	glTranslated(0, 0, 0);
	glutSolidCube(20);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 20, 0);
	glutSolidCube(20);
	glPopMatrix();
	glPushMatrix();
	glTranslated(0, 40, 0);
	glutSolidCube(20);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 60, 0);
	glutSolidCube(20);
	glPopMatrix();

	glPopMatrix();
}

void left_Leg_Two()
{
	glPushMatrix();
	glTranslated(25, -100, 0);
	glRotated(-90, 0, 1, 0);

	glColor3d(rValLeftLeg, gValLeftLeg, bValLeftLeg);
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

	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(0, 0, 0);
	glutSolidCube(20);
	glPopMatrix();

	glPushMatrix();
	glTranslated(20, 0, 0);
	glutSolidCube(20);
	glPopMatrix();

	glPopMatrix();
}

void left_Leg_Three()
{
	glPushMatrix();
	glTranslated(25, -100, 0);


	glPushMatrix();
	glColor3d(0, 0, 0);
	glTranslated(0, 70, 0);
	glutSolidSphere(10, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glColor3d(rValLeftLeg, gValLeftLeg, bValLeftLeg);
	glRotated(-90, 1, 0, 0);
	glTranslated(0, 0, 0);
	glutSolidCone(10, 70, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glColor3d(0, 0, 0);
	glTranslated(0, 0, 10);
	glutSolidCone(5, 20, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glColor3d(0, 0, 0);
	glRotated(120, 0, 1, 0);
	glTranslated(0, 0, 10);
	glutSolidCone(5, 20, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glColor3d(0, 0, 0);
	glRotated(240, 0, 1, 0);
	glTranslated(0, 0, 10);
	glutSolidCone(5, 20, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glTranslated(20, 30, 0);
	glPopMatrix();

	glPopMatrix();
}

//Arms
//Right Arms
void right_Arm_One()
{
	glPushMatrix();
	glTranslated(-10, 0, 0);
	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(0, 0, 0);
	glutSolidSphere(10, 50, 50);
	glPopMatrix();
	
	glColor3d(rValRightArm, gValRightArm, bValRightArm);
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

	glPopMatrix();
}

void right_Arm_Two()
{
	glColor3d(rValRightArm, gValRightArm, bValRightArm);
	glPushMatrix();
	glTranslated(0, 0, 0);
	glutSolidCube(10);
	glPopMatrix();
	
	glColor3d(rValRightArm, gValRightArm, bValRightArm);
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

void right_Arm_Three()
{
	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(0, 0, 0);
	glutSolidCube(10);
	glPopMatrix();
	
	glColor3d(rValRightArm, gValRightArm, bValRightArm);
	glPushMatrix();
	glTranslated(-10, 0, 0);
	glutSolidSphere(5, 50, 50);
	glPopMatrix();
	
	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(-20, 0, 0);
	glutSolidCube(10);
	glPopMatrix();
	
	glColor3d(rValRightArm, gValRightArm, bValRightArm);
	glPushMatrix();
	glTranslated(-30, 0, 0);
	glutSolidSphere(5, 50, 50);
	glPopMatrix();
	
	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(-40, 0, 0);
	glutSolidCube(10);
	glPopMatrix();
	
	glColor3d(rValRightArm, gValRightArm, bValRightArm);
	glPushMatrix();
	glTranslated(-50, 0, 0);
	glutSolidSphere(5, 50, 50);
	glPopMatrix();
	
	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(-60, 0, 0);
	glutSolidCube(10);
	glPopMatrix();
	
	glColor3d(rValRightArm, gValRightArm, bValRightArm);
	glPushMatrix();
	glTranslated(-70, 0, 0);
	glutSolidSphere(5, 50, 50);
	glPopMatrix();
	
	glColor3d(rValRightArm, gValRightArm, bValRightArm);
	glPushMatrix();
	glTranslated(-80, 0, 0);
	glutSolidCube(10);
	glPopMatrix();
}

//Left Arms
void left_Arm_One()
{
	glPushMatrix();
	glTranslated(10, 0, 0);

	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(0, 0, 0);
	glutSolidSphere(10, 50, 50);
	glPopMatrix();

	glColor3d(rValLeftArm, gValLeftArm, bValLeftArm);
	glPushMatrix();
	glTranslated(20, 0, 0);
	glutSolidSphere(10, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glTranslated(40, 0, 0);
	glutSolidSphere(10, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glTranslated(60, 0, 0);
	glutSolidSphere(10, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glTranslated(80, 0, 0);
	glutSolidSphere(10, 50, 50);
	glPopMatrix();

	glPopMatrix();
}

void Left_Arm_Two()
{
	glColor3d(rValLeftArm, gValLeftArm, bValLeftArm);
	glPushMatrix();
	glTranslated(0, 0, 0);
	glutSolidCube(10);
	glPopMatrix();

	glColor3d(rValLeftArm, gValLeftArm, bValLeftArm);
	glPushMatrix();
	glTranslated(20, 0, 0);
	glutSolidCube(10);
	glPopMatrix();

	glPushMatrix();
	glTranslated(40, 0, 0);
	glutSolidCube(10);
	glPopMatrix();

	glPushMatrix();
	glTranslated(60, 0, 0);
	glutSolidCube(10);
	glPopMatrix();

	glPushMatrix();
	glTranslated(80, 0, 0);
	glutSolidCube(10);
	glPopMatrix();
}

void Left_Arm_Three()
{
	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(0, 0, 0);
	glutSolidCube(10);
	glPopMatrix();

	glColor3d(rValLeftArm, gValLeftArm, bValLeftArm);
	glPushMatrix();
	glTranslated(10, 0, 0);
	glutSolidSphere(5, 50, 50);
	glPopMatrix();

	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(20, 0, 0);
	glutSolidCube(10);
	glPopMatrix();

	glColor3d(rValLeftArm, gValLeftArm, bValLeftArm);
	glPushMatrix();
	glTranslated(30, 0, 0);
	glutSolidSphere(5, 50, 50);
	glPopMatrix();

	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(40, 0, 0);
	glutSolidCube(10);
	glPopMatrix();

	glColor3d(rValLeftArm, gValLeftArm, bValLeftArm);
	glPushMatrix();
	glTranslated(50, 0, 0);
	glutSolidSphere(5, 50, 50);
	glPopMatrix();

	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(60, 0, 0);
	glutSolidCube(10);
	glPopMatrix();

	glColor3d(rValLeftArm, gValLeftArm, bValLeftArm);
	glPushMatrix();
	glTranslated(70, 0, 0);
	glutSolidSphere(5, 50, 50);
	glPopMatrix();

	glColor3d(rValLeftArm, gValLeftArm, bValLeftArm);
	glPushMatrix();
	glTranslated(80, 0, 0);
	glutSolidCube(10);
	glPopMatrix();
}

void helpWindow() {
	glColor3f(0, 0, 0);

	glRasterPos2i(-200, 150);
	for (int x = 0; x < introHelpString.size(); x++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, introHelpString[x]);
	}
	glRasterPos2i(-200, 130);
	for (int x = 0; x < introHelpString2.size(); x++) {
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, introHelpString2[x]);
	}

	glRasterPos2d(-200, 90);
	for (int x = 0; x < helpString.size(); x++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, helpString[x]);
	}
	glRasterPos2i(-200, 60);
	for (int x = 0; x < helpString1.size(); x++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, helpString1[x]);
	}
	glRasterPos2i(-200, 30);
	for (int x = 0; x < helpString2.size(); x++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, helpString2[x]);
	}
	glRasterPos2i(-200, -30);
	for (int x = 0; x < helpString3.size(); x++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, helpString3[x]);
	}

	glRasterPos2i(-200, -60);
	for (int x = 0; x < helpString4.size(); x++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, helpString4[x]);
	}
	glRasterPos2i(-200, -90);
	for (int x = 0; x < helpString5.size(); x++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, helpString5[x]);
	}
}
//***********************************************************************************
int angle = 0;
void drawPoints()
{
	glPushMatrix();
	glRotated(angle, 0, 1, 0);

	glColor3f(r, g, b);
	if (headchoice1 == true){
		head_One();
	}
	if (headchoice2 == true){
		head_Two();
	}
	if (headchoice3 == true){
		head_Three();
	}
	if (bodychoice1 == true){
		body_One();
	}
	if (bodychoice2 == true){
		body_Two();
	}
	if (bodychoice3 == true){
		body_Three();
	}
	if (leftLegChoice1 == true){
		left_Leg_one();
	}
	if (leftLegChoice2 == true){
		left_Leg_Two();
	}
	if (leftLegChoice3 == true){
		left_Leg_Three();
	}
	if (rightLegChoice1 == true){
		right_Leg_one();
	}
	if (rightLegChoice2 == true){
		right_Leg_Two();
	}
	if (rightLegChoice3 == true){
		right_Leg_Three();
	}
	if (leftArmChoice1 == true){
		left_Arm_One();
	}
	if (leftArmChoice2 == true){
		Left_Arm_Two();
	}
	if (leftArmChoice3 == true){
		Left_Arm_Three();
	}
	if (rightArmChoice1 == true){
		right_Arm_One();
	}
	if (rightArmChoice2 == true){
		right_Arm_Two();
	}
	if (rightArmChoice3 == true){
		right_Arm_Three();
	}

	glPopMatrix();
	//glBegin(GL_POINTS);	// use points to form X-/Y-axes
	//glColor3f(0, 0, 0);			 // change drawing color to black
	//for (int x = -150; x <= 150; x++) // draw X-axis
	//	glVertex3i(x, 0, 0);
	//for (int y = -150; y <= 150; y++) // draw Y-axis
	//	glVertex3i(0, y, 0);
	//for (int Z = -150; Z <= 150; Z++) // draw Y-axis
	//	glVertex3i(0, 0, Z);
	//glEnd();
}
//***********************************************************************************
//Mouse Event
int delay = 0;
int angleIncrament = 0;
void mouseClicked(int button, int state, int x, int y)
{
	while (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && angleIncrament < 45)
	{
		angle = angle + 5;
		angleIncrament = angleIncrament + 5;

		while (delay < 10000000)
		{
			delay = delay + 1;
		}
		delay = 0;
		myDisplayCallback();
	}
	angleIncrament = 0;
	if (angle == 360)
	{
		angle = 0;
	}
}
//***********************************************************************************
void myInit()
{
	glClearColor(1, 1, 1, 0);			// specify a background clor: white
	glOrtho(-200, 200, -200, 200, -200, 200);  // specify a viewing area
	gluLookAt(60, 70, 60, 0, 0, 0, 0, 1, 0);
	glEnable(GL_DEPTH_TEST);

}
void myInit2() {
	glClearColor(1, 1, 1, 0);
	gluOrtho2D(-200, 200, -200, 200);
}

//***********************************************************************************
void myDisplayCallback()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// draw the background
	drawPoints();
	glFlush(); // flush out the buffer contents

}

void drawHelpWindow(){
	glClear(GL_COLOR_BUFFER_BIT);
	helpWindow();
	glFlush();
}
//***********************************************************************************
//Creating Color menu options
void colorChoice(int option){
}
//Head Colors
void headColorChoice(int option){
	switch (option){
		//Steel Blue
	case 1:
		rValHead = .24;
		gValHead = .51;
		bValHead = .871;
		break;
		//Gold
	case 2:
		rValHead = .831;
		gValHead = .686;
		bValHead = .212;
		break;
		//metallic silver
	case 3:
		rValHead = .737;
		gValHead = .776;
		bValHead = .8;
		break;
	}
	myDisplayCallback();
}

//Body Colors
void bodyColorChoice(int option){
	switch (option){
		//Steel Blue
	case 1:
		rValBody = .24;
		gValBody = .51;
		bValBody = .871;
		break;
		//Gold
	case 2:
		rValBody = .831;
		gValBody = .686;
		bValBody = .212;
		break;
		//metallic silver
	case 3:
		rValBody = .737;
		gValBody = .776;
		bValBody = .8;
		break;
	}
	myDisplayCallback();
}

//Arm Colors
void armColorChoice(int option){
}

void rightArmColorChoice(int option){
	switch (option){
		//Steel Blue
	case 1:
		rValRightArm = .24;
		gValRightArm = .51;
		bValRightArm = .871;
		break;
		//Gold
	case 2:
		rValRightArm = .831;
		gValRightArm = .686;
		bValRightArm = .212;
		break;
		//metallic silver
	case 3:
		rValRightArm = .737;
		gValRightArm = .776;
		bValRightArm = .8;
		break;
	}
	myDisplayCallback();
}

void leftArmColorChoice(int option){
	switch (option){
		//Steel Blue
	case 1:
		rValLeftArm = .24;
		gValLeftArm = .51;
		bValLeftArm = .871;
		break;
		//Gold
	case 2:
		rValLeftArm = .831;
		gValLeftArm = .686;
		bValLeftArm = .212;
		break;
		//metallic silver
	case 3:
		rValLeftArm = .737;
		gValLeftArm = .776;
		bValLeftArm = .8;
		break;
	}
	myDisplayCallback();
}

//Leg Colors
void legColorChoice(int option){
}

void rightLegColorChoice(int option){
	switch (option){
		//Steel Blue
	case 1:
		rValRightLeg = .24;
		gValRightLeg = .51;
		bValRightLeg = .871;
		break;
		//Gold
	case 2:
		rValRightLeg = .831;
		gValRightLeg = .686;
		bValRightLeg = .212;
		break;
		//metallic silver
	case 3:
		rValRightLeg = .737;
		gValRightLeg = .776;
		bValRightLeg = .8;
		break;
	}
	myDisplayCallback();
}

void leftLegColorChoice(int option){
	switch (option){
		//Steel Blue
	case 1:
		rValLeftLeg = .24;
		gValLeftLeg = .51;
		bValLeftLeg = .871;
		break;
		//Gold
	case 2:
		rValLeftLeg = .831;
		gValLeftLeg = .686;
		bValLeftLeg = .212;
		break;
		//metallic silver
	case 3:
		rValLeftLeg = .737;
		gValLeftLeg = .776;
		bValLeftLeg = .8;
		break;
	}
	myDisplayCallback();
}
//***********************************************************************************
//Creating Body Parts Menu Options
void headChoice(int option){
	headchoice1 = false;
	headchoice2 = false;
	headchoice3 = false;
	switch (option){
	case 1:
		headchoice1 = true;
		break;
	case 2:
		headchoice2 = true;
		break;
	case 3:
		headchoice3 = true;
		break;
	}
	myDisplayCallback();
}

void armsChoice(int option){
}

void rightArmChoice(int option){
	rightArmChoice1 = false;
	rightArmChoice2 = false;
	rightArmChoice3 = false;
	switch (option){
	case 1:
		rightArmChoice1 = true;
		break;
	case 2:
		rightArmChoice2 = true;
		break;
	case 3:
		rightArmChoice3 = true;
		break;
	}
	myDisplayCallback();
}

void leftArmChoice(int option){
	leftArmChoice1 = false;
	leftArmChoice2 = false;
	leftArmChoice3 = false;
	switch (option){
	case 1:
		leftArmChoice1 = true;
		break;
	case 2:
		leftArmChoice2 = true;
		break;
	case 3:
		leftArmChoice3 = true;
		break;
	}
	myDisplayCallback();
}

void bodyChoice(int option){
	bodychoice1 = false;
	bodychoice2 = false;
	bodychoice3 = false;
	switch (option){
	case 1:
		bodychoice1 = true;
		break;
	case 2:
		bodychoice2 = true;
		break;
	case 3:
		bodychoice3 = true;
		break;
	}
	myDisplayCallback();
}

void legsChoice(int option){}

void rightLegChoice(int option){
	rightLegChoice1 = false;
	rightLegChoice2 = false;
	rightLegChoice3 = false;
	switch (option){
	case 1:
		rightLegChoice1 = true;
		break;
	case 2:
		rightLegChoice2 = true;
		break;
	case 3:
		rightLegChoice3 = true;
		break;
	}
	myDisplayCallback();
}

void leftLegChoice(int option){
	leftLegChoice1 = false;
	leftLegChoice2 = false;
	leftLegChoice3 = false;
	switch (option){
	case 1:
		leftLegChoice1 = true;
		break;
	case 2:
		leftLegChoice2 = true;
		break;
	case 3:
		leftLegChoice3 = true;
		break;
	}
	myDisplayCallback();
}

//***********************************************************************************
//Help Window
void helpChoice(int option){
	switch (option){
	case 1:
		glutDestroyWindow(infoWindow);
		break;
		myDisplayCallback();
	}
}

void infoFunc(){
	glutInitWindowSize(470, 180);
	glutInitWindowPosition(501, 0);
	infoWindow = glutCreateWindow("Info Window");
	myInit2();
	glutDisplayFunc(drawHelpWindow);

	glutCreateMenu(helpChoice);
	glutAddMenuEntry("Exit Info Window", 1);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
}
//***********************************************************************************
//Create top Menu
void menuChoice(int option){
	switch (option)
	{
	case 1:
		exit(0);
	case 2:
		glutDestroyWindow(infoWindow);
		infoFunc();
	}
}

void mainWindow(){
	glutInitWindowSize(400, 400);				// specify a window size
	glutInitWindowPosition(100, 0);				// specify a window position
	glutCreateWindow("Build - A- Robot");		   
	myInit();									
	glutDisplayFunc(myDisplayCallback);		   

	int headColor = glutCreateMenu(headColorChoice);
	glutAddMenuEntry("Steal Blue", 1);
	glutAddMenuEntry("Gold", 2);
	glutAddMenuEntry("Metallic Silver", 3);

	int bodyColor = glutCreateMenu(bodyColorChoice);
	glutAddMenuEntry("Steel Blue", 1);
	glutAddMenuEntry("Gold", 2);
	glutAddMenuEntry("Metallic Silver", 3);

	int rightArmColor = glutCreateMenu(rightArmColorChoice);
	glutAddMenuEntry("Steal Blue", 1);
	glutAddMenuEntry("Gold", 2);
	glutAddMenuEntry("Metallic Silver", 3);

	int leftArmColor = glutCreateMenu(leftArmColorChoice);
	glutAddMenuEntry("Steal Blue", 1);
	glutAddMenuEntry("Gold", 2);
	glutAddMenuEntry("Metallic Silver", 3);

	int armColor = glutCreateMenu(armColorChoice);
	glutAddSubMenu("Left Arms", leftArmColor);
	glutAddSubMenu("Right Arms", rightArmColor);

	int rightLegColor = glutCreateMenu(rightLegColorChoice);
	glutAddMenuEntry("Steal Blue", 1);
	glutAddMenuEntry("Gold", 2);
	glutAddMenuEntry("Metallic Silver", 3);

	int leftLegColor = glutCreateMenu(leftLegColorChoice);
	glutAddMenuEntry("Steal Blue", 1);
	glutAddMenuEntry("Gold", 2);
	glutAddMenuEntry("Metallic Silver", 3);


	int legColor = glutCreateMenu(legColorChoice);
	glutAddSubMenu("Left Legs", leftLegColor);
	glutAddSubMenu("Right Legs", rightLegColor);

	glutCreateMenu(menuChoice);
	int colorMenu = glutCreateMenu(colorChoice);
	glutAddSubMenu("Head Color", headColor);
	glutAddSubMenu("Body Color", bodyColor);
	glutAddSubMenu("Arm Color", armColor);
	glutAddSubMenu("Leg Color", legColor);


	int rightArms = glutCreateMenu(rightArmChoice);
	glutAddMenuEntry("Spheres", 1);
	glutAddMenuEntry("Disconnected", 2);
	glutAddMenuEntry("Connected", 3);

	int leftArms = glutCreateMenu(leftArmChoice);
	glutAddMenuEntry("Spheres", 1);
	glutAddMenuEntry("Disconnected", 2);
	glutAddMenuEntry("Connected", 3);

	int armsMenu = glutCreateMenu(armsChoice);
	glutAddSubMenu("Left Arm", leftArms);
	glutAddSubMenu("Right Arm", rightArms);

	int headMenu = glutCreateMenu(headChoice);
	glutAddMenuEntry("Block Head", 1);
	glutAddMenuEntry("Sphere Head", 2);
	glutAddMenuEntry("Cone Head", 3);

	int rightLegs = glutCreateMenu(rightLegChoice);
	glutAddMenuEntry("Simple Leg", 1);
	glutAddMenuEntry("Leg with Shoe", 2);
	glutAddMenuEntry("Tron Leg", 3);

	int leftLegs = glutCreateMenu(leftLegChoice);
	glutAddMenuEntry("Simple Leg", 1);
	glutAddMenuEntry("Leg with Shoe", 2);
	glutAddMenuEntry("Tron Leg", 3);

	int legsMenu = glutCreateMenu(legsChoice);
	glutAddSubMenu("Left Leg", leftLegs);
	glutAddSubMenu("RightLeg", rightLegs);

	int bodysMenu = glutCreateMenu(bodyChoice);
	glutAddMenuEntry("Block", 1);
	glutAddMenuEntry("Cone", 2);
	glutAddMenuEntry("Layered Sphere", 3);
	

	glutCreateMenu(menuChoice);
	glutAddSubMenu("Head", headMenu);
	glutAddSubMenu("Arms", armsMenu);
	glutAddSubMenu("Body", bodysMenu);
	glutAddSubMenu("Legs", legsMenu);
	glutAddSubMenu("Colors", colorMenu);
	glutAddMenuEntry("Need a little Help?", 2);
	glutAddMenuEntry("Exit the Program", 1);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
}

//***********************************************************************************
void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH);

	infoFunc();
	mainWindow();

	glutDisplayFunc(myDisplayCallback);		// register a callback
	glutMouseFunc(mouseClicked);
	glutMainLoop();							// get into an infinite loop
}
