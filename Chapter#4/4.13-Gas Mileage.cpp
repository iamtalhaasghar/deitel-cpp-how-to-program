		// Gas Mileage

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	float miles = 0;
	float gallons = 0;
	float total_miles = 0;
	float total_gallons = 0;
	

	cout<<"Enter miles driven (-1 to Quit) : ";
	cin>>miles;

	while(miles != -1)
	{
		
		cout<<"Enter gallons used in this trip : ";
		cin >> gallons;
		cout<<fixed<<"Mileage this trip : "<<miles/gallons<<endl;
		
		total_miles += miles;
		total_gallons += gallons;
		
		cout<<"Total Mileage : "<<total_miles/total_gallons<<endl<<endl;
		
		cout<<"Enter miles driven (-1 to Quit) : ";
		cin>>miles;
	}

	_getch();
}