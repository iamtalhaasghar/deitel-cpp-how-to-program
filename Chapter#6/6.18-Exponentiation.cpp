#include<iostream>
#include<conio.h>

using namespace std;

int integerPower(const int,const int);

int main(){
	
	int base = 0;
	int power = 0;
	cout<<"Enter the base (-1 to Quit) : ";
	cin>>base;
	while(base!=-1){

		cout<<"Enter the power : ";
		cin>>power;
		cout<<"\n("<<base<<" ^ "<<power<<") = "<<integerPower(base, power)<<endl;
		cout<<"\nEnter the base (-1 to Quit) : ";
		cin>>base;
	}
	_getch();
}

int integerPower(const int base,const int power){
	
	int result = 1;
	for(int i=1; i<=power; i++){
		result *= base;
	}
	return result;
}
