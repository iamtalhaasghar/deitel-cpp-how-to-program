#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	double side1 = 0, side2 = 0, side3 = 0;
	cout<<"Enter the length of 3 sides of a triangle : ";
	cin>>side1>>side2>>side3;

	if(side1+side2>side3)
	{
		if(side2+side3>side1)
		{
			if(side3+side1>side2)
				cout<<"\nThe given sides represent a triangle.\n";
			else
				cout<<"\nThe given sides does not represent a triangle.\n";
		}
		else	
			cout<<"\nThe given sides does not represent a triangle.\n";
	}
	else
			cout<<"\nThe given sides does not represent a triangle.\n";
	_getch();
}