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
#define PI       3.14159265358979323846

/***************************************************
* Default Constructor
* Initializes Angle object with passed angle
* INPUT
*		angle
* OUTPUT
*		N/A
**************************************************/
Angle::Angle(double angle) {
	this->angle = angle;
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
*
**************************************************/
double Angle::getDegrees() const {
	return angle * (180 / PI);
}

/***************************************************
* GET RADIANS
*
**************************************************/
double Angle::getRadians() const {
	return angle;
}

/***************************************************
* SET DEGREES
*
**************************************************/
void Angle::setDegrees(double degrees) {
	this->angle = convertToRadians(degrees);
}

/***************************************************
 * SET RADIANS
 *
 **************************************************/
void Angle::setRadians(double radians) {
	this->angle = radians;

}


/***************************************************
 * DISPLAY
 * Display the value, in degrees, to 1 decimal place 
 * of accuracy.
 * INPUT
 *		value : data to be displayed
 * OUTPUT
 *		N/A
 **************************************************/
void Angle::display(double value) const {

	cout.setf(ios::fixed | ios::showpoint);
	cout.precision(1);
	cout << value << endl;
}

/***************************************************
 * CONVERT TO DEGREES
 *
 **************************************************/
double Angle::convertToDegrees(double radians) const {
	return radians * (180 / PI);
}

/***************************************************
 * CONVERT TO RADIANS
 *
 **************************************************/
double Angle::convertToRadians(double degrees) const {
	return (degrees / 360) * (2 * PI);
}

/***************************************************
 * NORMALIZE
 *
 **************************************************/
double Angle::normalize(double angle) const {

	return;
}