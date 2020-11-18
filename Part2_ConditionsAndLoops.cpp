#include <iostream>

using namespace std;

int main(){
	int mark;
	
	for(int counter = 1; counter <= 3; counter++){
		cout<<"Enter mark: ";
		cin>>mark;
		
		if (mark >= 75 && mark <= 100){
			cout<<"A"<<endl;
		}else if (mark >= 50 && mark <= 74){
			cout<<"B"<<endl;
		}else{
			cout<<"C"<<endl;
		}	
	}
	
	return 0;
}
