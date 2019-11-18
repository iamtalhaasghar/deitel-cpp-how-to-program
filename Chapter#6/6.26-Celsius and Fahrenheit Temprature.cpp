#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

double celsius(double);
double fahrenheit(double);

int main(){
	
	cout<<setprecision(2)<<fixed<<setw(10)<<"Celsius"
		<<setw(15)<<"Fahrenheit"<<"\n\n";
	for(int c=0; c<=100; c++){
		cout<<setw(10)<<c<<setw(15)<<fahrenheit(c)<<endl;
	}

	cout<<"\n\n\n"<<setw(15)<<"Fahrenheit"<<setw(10)<<"Celsius"<<"\n\n";
	for(int f=32; f<=212; f++){
		cout<<setw(15)<<f<<setw(10)<<celsius(f)<<endl;
	}

	_getch();
}

double celsius(double f){
	
	return ((5.0/9.0)*(f-32.0));
}

double fahrenheit(double c){
	return (9.0/5.0 * c + 32.0);
}