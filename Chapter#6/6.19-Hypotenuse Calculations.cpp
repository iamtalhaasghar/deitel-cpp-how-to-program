#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>

using namespace std;

double hypotenuse(double, double);

int main(){

	int s1 = 0;
	int s2 = 0;
	
	for(int i=1; i<=3; i++){
		cout<<"Triangle # "<<i<<"\nSide 1 : ";
		cin>>s1;
		cout<<"Side 2 : ";
		cin>>s2;
		cout<<"Hypotenuse : "<<hypotenuse(s1, s2)<<"\n\n";
	}
	

	_getch();
}

double hypotenuse(double side1, double side2){
	return (sqrt(pow(side1,2) + pow(side2,2)));
}