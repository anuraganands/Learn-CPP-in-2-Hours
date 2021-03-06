#include <iostream>
#include <fstream>
using namespace std;

void printArray(int a[], const int size);
void printArrayToFile(int a[], const int size, ofstream &fout);

int main(){
	int number[5]; //2, 4, 6, 8, 10
	
	ofstream fileOut("evenNumbers.txt", ios::out);
	
	for (int i = 1; i<= 5; i++){
		number[i-1] = 2*i;
	}
	
	if(fileOut.is_open()){
		printArrayToFile(number,5,fileOut);	
	}else{
		cerr<<"File Not Found!"<<endl;
	}
	
	fileOut.close();	
	
	printArray(number, 5);
	return 0;
}

void printArray(int a[], const int size){
	for (int i = 0; i<size; i++){
		cout<<a[i]<<" ";
	}	
	cout<<endl;
}

void printArrayToFile(int a[], const int size, ofstream &fout){
	for (int i = 0; i<size; i++){
		fout<<a[i]<<" ";
	}	
	fout<<endl;
}



