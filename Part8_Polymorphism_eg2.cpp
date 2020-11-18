#include <iostream>
#include <fstream>

using namespace std;

void print(ostream &out){
	out<<"I love C++"<<endl;
}

int main(){
	ofstream fileOut("output.txt", ios::out);
	
	if(fileOut.is_open()){
		print(fileOut);
		print(cout);
	}else{	
		cerr<<"File Not Found!"<<endl;
	}
	
	fileOut.close();
	return 0;
}
