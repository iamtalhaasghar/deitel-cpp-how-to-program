#include<iostream>
#include<conio.h>
#include "Date.h"

using namespace std;

int main()
{
	int d, m, y;

	cout<<"Enter Day : ";
	cin>>d;
	cout<<"Enter Month : ";
	cin>>m;
	cout<<"Enter Year : ";
	cin>>y;

	Date date(d, m, y);

	cout<<"\n\n*****************************\n\n";
	cout<<"Day = "<<date.getDay()<<"\nMonth = "<<date.getMonth()
		<<"\nYear = "<<date.getYear()<<endl<<endl;

	cout<<"The Date is : ";
	date.displayDate();cout<<endl;
	
		

	_getch();
}