#include <iostream>
#include <fstream>
using namespace std;

const int TOTAL_STUENTS = 100;

void discard_line(ifstream &in);

int main(){
	string id[TOTAL_STUENTS];
	double mark[TOTAL_STUENTS];
	char grade[TOTAL_STUENTS];
	
	ifstream inFile("students.txt", ios::in);
	if(inFile.is_open()){
		int i = 0;
		discard_line(inFile);
		while(!inFile.eof()){
        	inFile>>id[i]>>mark[i];
        	cout<<"id: "<<id[i]<<", mark: "<<mark[i]<<endl;
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



