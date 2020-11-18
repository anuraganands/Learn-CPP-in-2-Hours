#include <iostream>
using namespace std;

string findGrade();

int main(){
	string returned_grade = findGrade();		
	cout<<returned_grade<<endl;
	
	return 0;
}

string findGrade(){
	int mark;
	string grade;
	
	cout<<"Enter mark: ";
	cin>>mark;
	
	if (mark >= 75 && mark <= 100){
		grade = "A"; //cout<<"A"<<endl;
	}else if (mark >= 50 && mark <= 74){
		grade = "B"; //cout<<"B"<<endl;
	}else{
		grade = "C"; //cout<<"C"<<endl;
	}
	
	//cout<<grade<<endl;
	return grade;	
}
