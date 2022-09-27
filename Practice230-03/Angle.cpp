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
 *
 **************************************************/
Angle::Angle() {

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
 *
 **************************************************/
void Angle::display() const {

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