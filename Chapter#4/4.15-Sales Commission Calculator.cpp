#include<iostream>
#include<conio.h>
#include<iomanip>


using namespace std;

int main()
{
	float sales = 0;
	
	cout<<"Enter sales in dollars (-1) : ";
	cin>>sales;

	while(sales != -1)
	{
		float commission = (0.09) * sales;
		cout<<fixed<<setprecision(2)<<"Salary is :  $"<< commission + 200 <<"\n\n";

		cout<<"Enter sales in dollars (-1) : ";
		cin>>sales;

	}

	_getch();
}