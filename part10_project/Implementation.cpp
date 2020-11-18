#include "Circle.h"
#include "Cylinder.h"

Circle::Circle(float radius){
	this->radius = radius;	
}
		
float Circle::area(){
	return PI*pow(radius,2);
}
		
float Circle::getRadius(){
	return radius;
}	

Cylinder::Cylinder(float radius, float height)
:Circle(radius){
	this->height = height;	
}
		
float Cylinder::area(){
	return 2*PI*radius*height;
}

float Cylinder::getHeight(){
	return height;
}
