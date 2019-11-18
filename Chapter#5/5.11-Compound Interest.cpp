#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>

using namespace std;

int main(){

	double principleAmount = 1000;
	double amount = 0;
	
	cout<<setw(10)<<"Interest Rate"<<setw(10)<<"Year"<<setw(25)
		<<"Amount on Deposit\n\n"<<setprecision(2)<<fixed;
	
	for(int rate = 11; rate<=16 ; rate++){
		for(int n=1; n<=10 ; n++){
			amount = principleAmount * pow(1+rate/100.0, n);
			cout<<setw(10)<<rate<<" %"<<setw(10)<<n<<setw(25)<<amount<<endl;
		}
	}

	_getch();
}