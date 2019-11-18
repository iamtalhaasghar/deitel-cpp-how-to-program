#include<iostream>
#include<conio.h>

using namespace std;

bool multiple(int, int);

int main(){
	
	int num1 = 0;
	cout<<"Enter a number (-1 to Quit) : ";
	cin>>num1;

	while(num1!=-1){
		int num2 = 0;
		cout<<"Enter a second number : ";
		cin>>num2;
		cout<<"The second number entered \""<<num2<<"\" is "
			<<(multiple(num1, num2) ? "a" : "not a" )
			<<" factor of \""<<num1<<"\".\n\n";
		cout<<"Enter a number (-1 to Quit) : ";
		cin>>num1;
	}
	_getch();
}

bool multiple(int number1, int number2){
	if(number2!=0 && number1%number2==0){
		return true;
	}
	return false;
}