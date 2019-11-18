#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	float hours = 0;
	
	cout<<"Enter hours worked (-1 to quit) : ";
	cin>>hours;

	while(hours != -1)
	{
		float rate = 0;
		float salary = 0;
		float bonus = 0;

		cout<<"Enter hourly rate of Employee ($00.00) : ";
		cin>>rate;

		if(hours > 40)
		{
			bonus = (hours - 40) * (rate / 2);
		}
		
		salary = (rate * hours) + bonus;
		

		cout<<fixed<<setprecision(2)<<"Salary is :  $"<<salary<<endl;
		cout<<"\n\nEnter hours worked (-1 to quit) : ";
		cin>>hours;

	}
	_getch();
}
