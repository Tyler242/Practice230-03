/*************************************************************
* Source File:
*    Angle.cpp
* Author:
*    Tyler Shellman & Caleb Rasmussen
* Summary:
*    This file holds the method definitions for the Angle class
*	  methods.
**************************************************************/

#include "Angle.h"

/***************************************************
* Default Constructor
* Initializes Angle object with passed angle
* INPUT
*		angle
* OUTPUT
*		N/A
**************************************************/
Angle::Angle() {
	angle = 0;
}

/***************************************************
* Copy Constructor
* Copies the current Angle instances to rhs
* INPUT
*		rhs : Angle object to be copied to
* OUPUT
*		N/A
**************************************************/
Angle::Angle(const Angle& rhs) {
	*this = rhs;
}

/***************************************************
* GET DEGREES
* Returns the angle in degrees
* INPUT
*		N/A
* OUTPUT
*		angle : in degrees
**************************************************/
double Angle::getDegrees() const {
	return angle * (180 / PI);
}

/***************************************************
* GET RADIANS
* Returns the angle in degrees
* INPUT
*		N/A
* OUPUT
*		angle : in radians
**************************************************/
double Angle::getRadians() const {
	return angle;
}

/***************************************************
* SET DEGREES
* Updates the angle with the passed degrees 
* parameter.
* INPUT
*		degrees
* OUPUT
*		N/A
**************************************************/
void Angle::setDegrees(double degrees) {
	this->angle = convertToRadians(normalize(degrees));
}

/***************************************************
* SET RADIANS
* Updates the angle with the passed radains
* parameter.
* INPUT
*		radians
* OUPUT
*		N/A
 **************************************************/
void Angle::setRadians(double radians) {
	this->angle = normalize(radians);
}

/***************************************************
* DISPLAY
* Displays the value, in degrees, to 1 decimal place 
* of accuracy.
* INPUT
*		N/A
* OUTPUT
*		N/A
**************************************************/
void Angle::display() const {
	cout.setf(ios::fixed | ios::showpoint);
	cout.precision(1);
	cout << getDegrees() << endl;
}

/***************************************************
* CONVERT TO DEGREES
* Convert radians to degrees
* INPUT
*		radians
* OUPUT
*		degrees
**************************************************/
double Angle::convertToDegrees(double radians) const {
	return radians * (180 / PI);
}

/***************************************************
* CONVERT TO RADIANS
* Convert degrees to radians
* INPUT
*		degrees
* OUPUT
*		radians
**************************************************/
double Angle::convertToRadians(double degrees) const {
	return (degrees / 360) * (2 * PI);
}

/***************************************************
* NORMALIZE
* Reduce an angle to between 0 and 2π or 0 and 360°.
* INPUT
*		angle
* OUTPUT
*		angle
**************************************************/
double Angle::normalize(double angle) const {
	if (angle == int(angle)) {
		if (angle < 0) {
			int rev = (int(angle * -1) / 360) + 1;
			return angle + (360 * rev);
		}
		else {
			int rev = int(angle) / 360 == 1 ? 0 : int(angle) / 360;
			return angle - (360 * rev);
		}
	}
	else {
		double degreeAngle = convertToDegrees(angle);
		if (angle < 0) {
			int rev = ((degreeAngle * -1) / 360) + 1;
			return convertToRadians(degreeAngle + (360 * rev));
		}
		else {
			int rev = degreeAngle / 360 == 1 ? 0 : degreeAngle / 360;
			return convertToRadians(degreeAngle - (360 * rev));

		}
	}
}