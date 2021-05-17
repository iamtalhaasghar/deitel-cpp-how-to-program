#include<iostream>
#include<string>
#include<conio.h>
#include"HealthProfile.h"

using namespace std;

int main()
{
	string fName;
	string lName;
	
	int d, m, y;
	float h, w;

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
	
	cout<<"Enter your Height (in meters) : ";
	cin>>h;
	cout<<"Enter your Weight (in kgs) : ";
	cin>>w;



	HealthProfile hProfile(fName, lName, d, m, y, h, w);

	cout<<"\n*************Summary*************\n\n";
	cout<<"Name : "<<hProfile.getFirstName()<<" "<<hProfile.getLastName()<<endl;
	cout<<"Date of Birth : "<<hProfile.getDay()<<"/"<<hProfile.getMonth()
		<<"/"<<hProfile.getYear()<<endl;
	
	int temp = hProfile.getAge();
	
	cout<<"Your Age : "<<temp<<" years"<<endl;
	temp = hProfile.getMaximumHeartRate(temp);
	cout<<"Maximum Heart Rate : "<<temp<<" beats per min."<<endl;
	cout<<"Taraget Heart Rate : "<<hProfile.getTargetHeartRate(temp)
		<<" beats per min."<<" (70% of Max. Heart Rate)"<<endl;
	cout<<"Height : "<<hProfile.getHeight()<<" meters"<<endl;
	cout<<"Weight : "<<hProfile.getWeight()<<" kg "<<endl;
	cout<<"Your BMI is : "<<hProfile.getBmi()<<endl;

	cout<<"\n**************BMI Chart**************\n\n";
	cout<<"BMI Values\n"<<endl;
	cout<<"Underweight : less than 18.5"<<endl;
	cout<<"Normal : between 18.5 and 24.9"<<endl;
	cout<<"Overweight : between 25 and 29.9"<<endl;
	cout<<"Obesse : 30 or greater"<<endl;

	_getch();
}
