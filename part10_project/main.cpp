#include <iostream>
#include "Circle.h"
#include "Cylinder.h"

int main(int argc, char** argv) { //provide optional parameters if running from the command prompt. 
	Circle C(1);
	
	Cylinder * Cyl = new Cylinder(0.5, 2.0);
		
	cout<<"Area of the circle is: "<<C.area()<<endl;
	cout<<"Area of  the cylinder is: "<<Cyl->area()<<endl;
	
	return 0;
}
