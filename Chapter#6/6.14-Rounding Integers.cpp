#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

double roundToInteger(double);
double roundToTenths(double);
double roundToHundrendths(double);
double roundToThousands(double);

int main(){

	double number = 0;
	cout<<"Enter a number (-1 to Quit) : ";
	cin>>number;
	while(number != -1){

		cout<<"Original Number : "<<number<<endl;
		cout<<"Rounded to Integer : "<<roundToInteger(number)<<endl;
		cout<<"Rounded to Tenths : "<<roundToTenths(number)<<endl;
		cout<<"Rounded to Hundrendths : "<<roundToHundrendths(number)<<endl;
		cout<<"Rounded to Thousands : "<<roundToThousands(number)<<endl<<endl;
		cout<<"Enter a number (-1 to Quit) : ";
		cin>>number;
	}
	_getch();
}

double roundToInteger(double num){
	return floor(num+0.5);
}

double roundToTenths(double num){
	return floor(num*10+0.5)/10;
}

double roundToHundrendths(double num){
	return floor(num*100+0.5)/100;
}

double roundToThousands(double num){
	return floor(num*1000+0.5)/1000;
}