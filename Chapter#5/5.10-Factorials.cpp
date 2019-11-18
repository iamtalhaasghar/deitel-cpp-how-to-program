#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main(){

	cout<<setw(10)<<"Number"<<setw(20)<<"Factorial\n\n";

	for(int i=1; i<=7 ; i++){
		int factorial = 1;
		for(int j=1 ; j<=i; j++){
			factorial *= j;
		}

		cout<<setw(10)<<i<<setw(20)<<factorial<<endl;
	}


	_getch();
}