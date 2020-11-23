#include <iostream>
#include <fstream>
using namespace std;

const int TOTAL_STUDENTS = 100;

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
};

void discard_line(ifstream &in);

int main(){
	Student s[TOTAL_STUDENTS];
			
	ifstream inFile("students.txt", ios::in);
	if(inFile.is_open()){
		int i = 0;
		discard_line(inFile);
		while(!inFile.eof()){
        	inFile>>s[i].id>>s[i].mark;
        	cout<<"id: "<<s[i].id<<", mark: "<<s[i].mark
				<<", grade: "<<s[i].calcGrade()<<endl;
            i++;         
        	inFile>>ws; //read any additional white spaces. 
        }
	}else{
		cerr<<"File Not Found!"<<endl;
	}
	
	return 0;
}

void discard_line(ifstream &in){
    char c;
    
    do
   	    in.get(c);
    while (c!='\n');
}



