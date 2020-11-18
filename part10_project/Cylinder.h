#include "Circle.h"

#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder: public Circle{
	private:
		float height;
	public:
		Cylinder(float radius, float height);		
		float area();
		float getHeight();		
};

#endif

