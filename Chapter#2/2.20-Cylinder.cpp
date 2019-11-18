#include<iostream>
#include<conio.h>

using namespace std; 
 
int main(){

	int radius = 0;
	int height = 0;
	cout<<"Enter Radius of Cylinder : ";
	cin>>radius;
	cout<<"Enter Height of Cylinder : ";
	cin>>height;

	cout<<"Volume of Cylinder = "<<3.14159*radius*radius*height<<" units"<<endl;
	cout<<"Surface Area of Cylinder = "<<(2*3.14159*radius*height)+(2*3.14159*radius*radius)<<" sq.units"<<endl;
	_getch();
}