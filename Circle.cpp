//Example: Circle.cpp

#include "Circle.h"
//Construct a default circle object

Circle::Circle() {
	radius = 1;
}

//Construct a circle object
Circle::Circle(double radius) {
	//radius = newRadius;
	this->radius = radius;
	// or (*this).radius = radius;
}

//Return the area of this circle
double Circle::getArea() {
	return radius * radius * 3.14159;
}

//Return the area of this circle
double Circle::getRadius() {
	return radius;
}

//Set a new radius
void Circle::setRadius(double radius) {
	//radius = (newRadius >= 0) ? newRadius : 0;
	this -> radius = (radius >= 0) ? radius : 0;
}
