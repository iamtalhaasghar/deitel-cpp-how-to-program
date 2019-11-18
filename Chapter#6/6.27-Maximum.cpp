#include<iostream>
#include<conio.h>

using namespace std;

double maximum(double, double, double);

int main(){

	double i,j,k;
	cout<<"Enter number # 1 : ";
	cin>>i;
	cout<<"Enter number # 2 : ";
	cin>>j;
	cout<<"Enter number # 3 : ";
	cin>>k;

	cout<<"The largest number is : "<<maximum(i,j,k);


	_getch();
}

double maximum(double x, double y, double z){
	
	if(x>y && x>z)
		return x;
	else if(y>x && y>z)
		return y;
	else if(z>x && z>y)
		return z;
}