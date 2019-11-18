#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
const double PI = 3.14159;

inline double cylinderVolume(double radius, double height){
	return (PI * pow(radius,3.0) * height);	
}

int main(){

	double radius = 0;
	double height = 0;
	cout<<"Enter radius of Cylinder : ";
	cin>>radius;
	cout<<"Enter height of Cylinder : ";
	cin>>height;
	cout<<"Volume of Cylinder = "<<cylinderVolume(radius, height)<<endl;

	_getch();
}

