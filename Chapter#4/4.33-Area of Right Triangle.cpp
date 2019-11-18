#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	double base = 0;
	double height =0;

	cout<<"Enter the base of triangle : ";
	cin>>base;
	cout<<"Enter the height of triangle : ";
	cin>>height;

	cout<<"\n\nThe area of the triangle is : "<<(1.0/2.0) * base * height<<endl;
	_getch();
}
