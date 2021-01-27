#include<iostream>
#include<conio.h>

using namespace std;

template <typename T>
T product(T number1, T number2){
	return number1 * number2;
}

int main(){

	int n1, n2;
	cout<<"Enter two integers : ";
	cin>>n1>>n2;
	cout<<"Product of "<<n1<<" & "<<n2<<" = "<<product(n1,n2)<<endl<<endl;

	
	long num1, num2;
	cout<<"Enter two longs : ";
	cin>>num1>>num2;
	cout<<"Product of "<<num1<<" & "<<num2<<" = "<<product(num1,num2)<<endl<<endl;

	float f1, f2;

	cout<<"Enter two floats : ";
	cin>>f1>>f2;
	cout<<"Product of "<<f1<<" & "<<f2<<" = "<<product(f1,f2)<<endl<<endl;

	_getch();
}