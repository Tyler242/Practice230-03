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

 /*************************************************************
 * Angle
 * A class that represents an angle
 **************************************************************/
class Angle
{
public:

	// Constructors
	Angle(double Angle);
	Angle(const Angle& rhs);

	// Getters
	double getDegrees() const;
	double getRadians() const;

	// Setters
	void setDegrees(double degrees);
	void setRadians(double radians);

	void display(double value) const;

private:
	double angle;

	double convertToDegrees(double) const;
	double convertToRadians(double) const;
	double normalize(double angle) const;
};

