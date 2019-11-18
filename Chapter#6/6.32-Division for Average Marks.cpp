#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

enum class Average {FIRST, SECOND, THIRD, FAIL};
Average generateDivision(double);

int main(){

	double average = 0;
	cout<<"Enter the average of Student : ";
	cin>>average;

	cout<<"Division of Student = ";

	switch(generateDivision(average)){
		case Average::FIRST:
			cout<<"First";
			break;
		case Average::SECOND:
			cout<<"Second";
			break;
		case Average::THIRD:
			cout<<"Third";
			break;
		case Average::FAIL:
			cout<<"Fail";
			break;
		default:
			cout<<"Invalid Division.";
			break;
	}

	_getch();
}

Average generateDivision(double average){

	if(average>=60 && average<=100)
		return Average::FIRST;
	else if(average>=45 && average<=59)
		return Average::SECOND;
	else if(average>=35 && average<=44)
		return Average::THIRD;
	else
		return Average::FAIL;
}