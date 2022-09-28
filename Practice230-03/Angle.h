/*************************************************************
* Header File:
*    Angle.h
* Author:
*    Tyler Shellman & Caleb Rasmussen
* Summary:
*    This file holds the class definition for the Angle class.
**************************************************************/

#include <iostream>
using namespace std;

#define PI       3.14159265358979323846

 /*************************************************************
 * Angle
 * A class that represents an angle
 **************************************************************/
class Angle
{
public:

	// Constructors
	Angle();
	Angle(const Angle& rhs);

	// Getters
	double getDegrees() const;
	double getRadians() const;

	// Setters
	void setDegrees(double degrees);
	void setRadians(double radians);

	void display() const;

private:
	double angle;

	double convertToDegrees(double radians) const;
	double convertToRadians(double degrees) const;
	double normalize(double angle) const;
};

