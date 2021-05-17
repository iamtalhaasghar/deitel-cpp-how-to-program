#include<iostream>
#include<conio.h>
#include"Rectangle.h"

using namespace std;
int main(){

	double w = 0, l = 0;
	cout<<"Enter Length of Rectangle : ";
	cin>>l;
	cout<<"Enter Width of Rectangle : ";
	cin>>w;

	Rectangle myRectangle(l, w);

	cout<<"\nArea of Rectangle = "<<myRectangle.area();
	cout<<"\nPerimeter of Rectangle = "<<myRectangle.perimeter();

	_getch();
}
