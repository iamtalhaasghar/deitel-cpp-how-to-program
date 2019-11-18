#include<iostream>
#include<conio.h>
 
using namespace std;

int main()
{

	cout<<"\n\t\t\tBMI Calculator\n\n";

	float height = 0;
	float weight = 0;

	cout<<"Enter height (in metres) : ";
	cin>>height;
	cout<<"Enter weight (in kgs) : ";
	cin>>weight;

	cout<<"Your BMI = "<<(weight)/(height*height)<<endl;

	cout<<"\n******************************\n\n";
	cout<<"BMI Values\n"<<endl;
	cout<<"Underweight : less than 18.5"<<endl;
	cout<<"Normal : between 18.5 and 24.9"<<endl;
	cout<<"Overweight : between 25 and 29.9"<<endl;
	cout<<"Obesse : 30 or greater"<<endl;
	_getch();
}