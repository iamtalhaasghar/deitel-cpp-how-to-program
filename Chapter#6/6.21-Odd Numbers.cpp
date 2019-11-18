#include<iostream>
#include<conio.h>

using namespace std;

bool isOdd(int);

int main(){

	int num = 0;
	cout<<"Enter a number (-1 to Quit) : ";
	cin>>num;
	
	while(num!=-1){
		
		cout<<"The number \""<<num<<"\" is an "
			<<(isOdd(num) ? "odd" : "even")<<" number.\n\n";
		
		cout<<"Enter a number (-1 to Quit) : ";
		cin>>num;
	
	}
	

	_getch();
}

bool isOdd(int number){
	if(number%2==1)
		return true;

	return false;
}