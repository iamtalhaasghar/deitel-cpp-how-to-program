#include<iostream>
#include<conio.h>

using namespace std;

inline double squareArea(double side){
	return side*side;
}

int main(){

	int s = 0;
	cout<<"Enter the length of a side of the square : ";
	cin>>s;
	cout<<"The area of square = "<<squareArea(s);
	_getch();
}

