#include<iostream>
#include<conio.h>

using namespace std;

void displaySolidSquare(int);

int main(){

	int side = 0;
	cout<<"Enter the sides of the square : ";
	cin>>side;

	displaySolidSquare(side);

	_getch();
}

void displaySolidSquare(int side){
	for(int i=0; i<side; i++){
		for(int j=0; j<side; j++)
			cout<<"*";
		cout<<endl;
	}
}