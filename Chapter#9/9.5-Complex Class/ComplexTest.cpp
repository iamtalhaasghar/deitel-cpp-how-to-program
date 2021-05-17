#include<iostream>
#include<conio.h>
#include"Complex.h"

using namespace std;
int main(){

	double real = 0;
	double imaginary = 0;

	cout<<"First Complex Number : \n"
		<<"Enter Real part : ";
	cin>>real;
	cout<<"Enter Imaginary part : ";
	cin>>imaginary;

	Complex a(real, imaginary);

	cout<<"\n\nSecond Complex Number : \n"
		<<"Enter Real part : ";
	cin>>real;
	cout<<"Enter Imaginary part : ";
	cin>>imaginary;

	Complex b(real, imaginary);

	cout<<"\n\nFirst Complex Number : ";
	a.print();
	cout<<"\nSecond Complex Number : ";
	b.print();

	cout<<"\n\n[";
	a.print();
	cout<<"] + [";
	b.print();
	cout<<"] = ";
	Complex result = a.add(b);
	result.print();
	
	cout<<"\n[";
	a.print();
	cout<<"] - [";
	b.print();
	cout<<"] = ";
	result = a.subtract(b);
	result.print();

	_getch();
}
