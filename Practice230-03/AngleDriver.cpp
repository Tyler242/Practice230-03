/*************************************************************
* Source File:
*    AngleDriver.cpp
* Author:
*    Tyler Shellman & Caleb Rasmussen
* Summary:
*    This file is a simple driver program to test the Angle 
*	 class
**************************************************************/

#include <iostream>
using namespace std;

#include "Angle.h"

/****************************************************************
* MAIN
****************************************************************/
int main() {

	// 1. Instantiating an Angle object
	Angle angle = Angle();

	cout << "Init Degrees:  ";
	angle.display();			// should display 0.0 

	//2. Set with degrees
	angle.setDegrees(90);		// set degrees to 90.0

	cout << "Get Degrees:   " << angle.getDegrees() << endl;	// should display 90.0
	cout << "Angle Display: ";
	angle.display();		// should also display 90.0

	// 3. Set new degrees
	angle.setDegrees(45);
	cout << "Set Degrees:   " << angle.getDegrees() << endl;	// should display 45.0

	// 4. Set radians 
	angle.setRadians(2 * PI);
	cout << "Set Radians:   " << angle.getRadians() << endl;	// should be 6.3

	// 5. Display radians as degrees
	cout << "Radian Degrees: ";
	angle.display();				// should be 365.0

	// 6. Test Normalize
	angle.setDegrees(-355); 
	cout << "Normal Degrees: ";
	angle.display();

	angle.setRadians(-3 * PI);
	cout << "Normal Radians: " << angle.getRadians() << endl;

	return 0;
}