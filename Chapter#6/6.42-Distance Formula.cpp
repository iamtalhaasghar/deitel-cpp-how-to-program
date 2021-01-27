#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

double distance (double, double, double, double, double, double); 

int main(){

	int a,b,c,d,e,f;

	cout<<"Enter 3D co-ordinates of point A : ";
	cin>>a>>b>>c;
	cout<<"Enter 3D co-ordinates of point B : ";
	cin>>d>>e>>f;

	cout<<"Distance between given points = "
		<<distance(a,b,c,d,e,f);

	_getch();
}

double distance(double x1, double y1, double z1, 
		double x2, double y2, double z2){

	return (sqrt(x1*x2 + y1*y2 + z1*z2));
}