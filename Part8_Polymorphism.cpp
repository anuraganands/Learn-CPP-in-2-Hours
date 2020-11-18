#include <iostream>
#include <math.h>
using namespace std;

const double PI = 2*acos(0.0);

class Shape{
	public:
		virtual float area()=0;
};

class Circle: public Shape{
	protected:
		float radius;
	public:
		Circle(float radius){this->radius = radius;}		
		virtual float area(){return PI*pow(radius,2);}		
		float getRadius(){return radius;}	
};

class Cylinder: public Circle{
	private:
		float height;
	public:
		Cylinder(float radius, float height)
		:Circle(radius){this->height = height;}		
		virtual float area(){return 2*PI*radius*height;}
		float getHeight(){return height;}
		
};

float calcArea(Shape *C){
	return C->area();
}
int main(){	
	Circle C(1);	
	Cylinder * Cyl = new Cylinder(0.5, 2.0);
			
	cout<<"Area of the circle: "<<calcArea(&C)<<endl;
	cout<<"Area of the cylinder: "<<calcArea(Cyl)<<endl;
	
	return 0;
}
	
	
	
	
