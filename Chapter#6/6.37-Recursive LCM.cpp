#include<iostream>
#include<conio.h>

using namespace std;

int lcm(int, int);

int main(){

	int a,b;
	cout<<"Enter two numbers : ";
	cin>>a>>b;

	cout<<"L.C.M = "<<lcm(a,b);
	

	_getch();
}

int lcm(int number1, int number2){

	static int divisor = 2;

	if((divisor%number1 == 0) && (divisor%number2==0)){
		int temp = divisor;
		divisor = 2;
		return temp;
	}
	++divisor;
	return lcm(number1, number2);
	
}