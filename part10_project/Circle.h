#include <iostream>
#include <math.h>
using namespace std;

//preprocessor directives
#ifndef CIRCLE_H 
#define CIRCLE_H

const double PI = 2*acos(0.0);

class Circle{
	protected:
		float radius;
	public:
		Circle(float radius);		
		float area();		
		float getRadius();
};
#endif
