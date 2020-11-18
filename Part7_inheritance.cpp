#include <iostream>
#include <math.h>
using namespace std;

const double PI = 2*acos(0.0);

class Circle{
	protected:
		float radius;
	public:
		Circle(float radius){
			this->radius = radius;
		}	
		float area(){
			return PI*pow(radius,2);
		}
};

class Cylinder: public Circle{
	private:
		float height;
	public:
		Cylinder(float radius, float height):Circle(radius){
			this->height = height;
		}		
		float area(){
			return 2*PI*radius*height;
		}
};
int main(){
	Circle C(1.0);	
	Cylinder * Cyl = new Cylinder(0.5, 2.0);
	
	cout<<"Area of the circle: "<<C.area()<<endl;
	cout<<"Area of the cylinder: "<<Cyl->area()<<endl;
	
	return 0;
}
