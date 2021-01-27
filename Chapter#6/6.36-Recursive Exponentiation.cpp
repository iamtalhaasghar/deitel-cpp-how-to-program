#include<iostream>
#include<conio.h>

using namespace std;

int power(int, int);

int main(){

	int b = 0;
	int e = 0;
	cout<<"Enter base : ";
	cin>>b;
	cout<<"Enter exponent : ";
	cin>>e;

	cout<<"\n("<<b<<" ^ "<<e<<") = "<<power(b,e)<<endl;

	_getch();
}

int power(int base, int exponent){
	
	if(exponent==1)
		return base;
	else if(exponent==0)
		return 1;

	return (base * power(base, exponent-1));
}