#include <iostream>
using namespace std;

class Student{
	public:
		string ID;
		int mark;
	//private:
		char grade;
};

int main(){
	Student s;
	s.ID = "S1100";
	s.mark = 98;
	s.grade = 'A';
	cout<<"ID: "<<s.ID<<", mark: "<<s.mark<<endl;
	
	return 0;
}
