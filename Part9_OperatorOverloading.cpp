#include <iostream>
using namespace std;

class Student{
	public:
		string id;
		double mark;
		char calcGrade(){
			if(mark>=50){
				grade = 'P';
			}else
				grade = 'F';
			return grade;
		}
	private:
		char grade;
	friend ostream &operator << (ostream &out, Student &val); //NOT a class member
}; 
 
int main(){
	Student S1;
	S1.id = "S1111";
	S1.mark = 65;
	
	Student S2;
	S2.id = "S2222";
	S2.mark = 34;

	cout<<S1<<endl;
	cout<<S2<<endl;
	
	return 0;
}

ostream &operator << (ostream &out, Student &val)
{
	out <<"ID: "<<val.id<<endl
		<<"Mark: "<<val.mark<<endl
		<<"Grade: "<<val.calcGrade()<<endl;
		
	return out; //cout<<S2;
}








