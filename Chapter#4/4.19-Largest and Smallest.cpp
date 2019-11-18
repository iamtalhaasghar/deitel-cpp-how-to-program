#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int largest = INT_MIN;
	int smallest = INT_MAX;
	int number = 0;

	int counter = 1;
	
	while(counter <= 10)
	{
		cout<<"Enter number # "<<counter<<" : ";
		cin>>number;

		if(number<smallest)
			smallest = number;

		if(number>largest)
			largest = number;

		++counter;
	}

	cout<<"\nThe Largest Number is : "<<largest<<endl;
	cout<<"The Smallest Number is : "<<smallest<<endl;

	_getch();
}