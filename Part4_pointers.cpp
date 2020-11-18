#include <iostream>
using namespace std;

void getStudentInfo(int lid, string *lname, int &lage);
int id = 1;
int main(){
	
	string name;
	int age;
	
	getStudentInfo(id, &name, age);
	
	cout<<"id: "<<id<<endl;
	cout<<"name: "<<name<<endl;
	cout<<"age: "<<age<<endl;
	
	return 0;
}

void getStudentInfo(int lid, string *lname, int &lage){
	if (id == 1){
		*lname = "John";
		lage = 18;
	}
}
