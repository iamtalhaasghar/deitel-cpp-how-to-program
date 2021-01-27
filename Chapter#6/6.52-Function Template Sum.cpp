#include<iostream>
#include<conio.h>

using namespace std;

template <typename T>
T sum(T number1, T number2){
	return number1 + number2;
}

int main(){

	int n1, n2;
	cout<<"Enter two integers : ";
	cin>>n1>>n2;
	cout<<"Sum of "<<n1<<" & "<<n2<<" = "<<sum(n1,n2)<<endl<<endl;

	
	long num1, num2;
	cout<<"Enter two longs : ";
	cin>>num1>>num2;
	cout<<"Sum of "<<num1<<" & "<<num2<<" = "<<sum(num1,num2)<<endl<<endl;

	float f1, f2;

	cout<<"Enter two floats : ";
	cin>>f1>>f2;
	cout<<"Sum of "<<f1<<" & "<<f2<<" = "<<sum(f1,f2)<<endl<<endl;

	_getch();
}


