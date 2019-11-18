#include<iostream>
#include<conio.h>

using namespace std;

int main(){

	int input = 0;
	cin>>input;
	int total = 0;
	int counter = 0 ;

	for( counter = 0 ; input != 9999 ; ){
		
		++counter;
		total += input;
		cin>>input;
	}

	cout<<"The average of given "<<counter<<" numbers is : "<<
		static_cast<int>(total)/counter<<endl;

	_getch();
}