#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){

	long double principalAmount = 24;
	long double amount = 0;
	
	cout<<setw(8)<<"Year"<<setw(50)<<"Amount on deposit"<<endl;
	for(int rate=5; rate<=10; rate++){
		cout<<"\nInterest Rate = "<<rate<<" %. Press any key to continue...\n\n";
		_getch();
		for(int year=1626; year<=2018; year++){
			amount = principalAmount * pow(1+rate/100.0,year-1626); 
			cout<<setprecision(2)<<fixed<<setw(8)<<year<<setw(40)<<amount<<endl;
		}
		
	}


	_getch();
}