#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int counter = 1;
	int number = 0;
	int largest = INT_MIN;
	
	while(counter <= 10)
	{
		cout<<"Enter number # "<<counter<<" : ";
		cin>>number;

		if(number>largest)
			largest = number;
	
		++counter;
	}	

	cout<<"\nThe largest number entered was : "<<largest<<endl;

	_getch();
}