#include<iostream>
#include<conio.h>

using namespace std;

void displaySolidSquare(int, char);

int main(){

	int side = 0;
	char ch = '\0';
	cout<<"Enter the sides of the square : ";
	cin>>side;
	cout<<"Enter the fill character : ";
	cin>>ch;

	cout<<"\n\n";
	displaySolidSquare(side, ch);

	_getch();
}

void displaySolidSquare(int side, char fillCharacter){
	for(int i=0; i<side; i++){
		for(int j=0; j<side; j++)
			cout<<fillCharacter;
		cout<<endl;
	}
}