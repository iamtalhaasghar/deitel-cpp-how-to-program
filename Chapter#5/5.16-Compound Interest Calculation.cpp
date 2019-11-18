#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){

	int principalAmount = 0;
	int depositAmount = 0;
	int rate = 0;
	cout<<"Enter principal amount : ";
	cin>>principalAmount;
	cout<<"Enter interest rate : ";
	cin>>rate;
	cout<<"\n\n"<<setw(8)<<"Year"<<setw(20)<<"Deposit Amount\n\n";
	for(int n=1; n<=10; n++ ){
		
		depositAmount = principalAmount *(1+rate/100.0,n);
		cout<<setw(8)<<n<<setw(15)<<depositAmount<<endl;
	}
	
	_getch();
}