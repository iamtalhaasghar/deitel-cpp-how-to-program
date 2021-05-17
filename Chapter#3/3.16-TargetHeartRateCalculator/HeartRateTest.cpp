#include<iostream>
#include<conio.h>
#include<string>
#include "HeartRate.h"

using namespace std;

int main()
{
	string fName;
	string lName;
	int d, m, y;
	
	cout<<"Enter First Name : ";
	cin>>fName;
	cout<<"Enter Last Name : ";
	cin>>lName;
	cout<<"\nEnter Your Date of Birth : \n\n";
	cout<<"Day : ";
	cin>>d;
	cout<<"Month : ";
	cin>>m;
	cout<<"Year : ";
	cin>>y;

	HeartRate hRate(fName, lName, d, m, y);

	cout<<"\n*************Summary*************\n\n";
	cout<<"Name : "<<hRate.getFirstName()<<" "<<hRate.getLastName()<<endl;
	cout<<"Date of Birth : "<<hRate.getDay()<<"/"<<hRate.getMonth()
		<<"/"<<hRate.getYear()<<endl;
	
	int temp = hRate.getAge();
	
	cout<<"Your Age : "<<temp<<" years"<<endl;
	temp = hRate.getMaximumHeartRate(temp);
	cout<<"Maximum Heart Rate : "<<temp<<" beats per min."<<endl;
	cout<<"Taraget Heart Rate : "<<hRate.getTargetHeartRate(temp)
		<<" beats per min."<<" (70% of Max. Heart Rate)"<<endl;
	
	_getch();
}
