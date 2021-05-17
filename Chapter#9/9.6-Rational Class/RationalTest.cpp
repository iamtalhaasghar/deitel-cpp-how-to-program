#include<iostream>
#include<conio.h>
#include"Rational.h"

using namespace std;
int main(){

	int n = 0;
	int d = 0;
	Rational answer;

	cout<<"First Fractional Number : \n";
	cout<<"Numerator : ";
	cin>>n;
	cout<<"Denominator : ";
	cin>>d;

	Rational first(n,d);

	cout<<"Second Fractional Number : \n";
	cout<<"Numerator : ";
	cin>>n;
	cout<<"Denominator : ";
	cin>>d;

	Rational second(n,d);

	cout<<"\nFirst Fraction : ";
	first.print();
	cout<<"\nSecond Fraction : ";
	second.print();

	cout<<"\n\n";
	first.print();
	cout<<" + ";
	second.print();
	cout<<" = ";
	answer = first.add(second);
	answer.print();

	cout<<"\n";
	first.print();
	cout<<" - ";
	second.print();
	cout<<" = ";
	answer = first.subtract(second);
	answer.print();

	cout<<"\n";
	first.print();
	cout<<" * ";
	second.print();
	cout<<" = ";
	answer = first.multiply(second);
	answer.print();

	cout<<"\n";
	first.print();
	cout<<" * ";
	second.print();
	cout<<" = ";
	answer = first.divide(second);
	answer.print();

	cout<<"\n\nIn Floating-Point format : \n";
	cout<<"First Number : ";
	first.printAsFloatingPoint();
	cout<<"\nSecond Number : ";
	second.printAsFloatingPoint();


	_getch();
}
