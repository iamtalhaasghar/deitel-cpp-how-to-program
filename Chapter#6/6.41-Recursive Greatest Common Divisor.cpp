#include<iostream>
#include<conio.h>

using namespace std;

int gcd(int,int);
void swap(int&,int&);

int main(){

	int a,b;
	cout<<"Enter two numbers : ";
	cin>>a>>b;

	cout<<"Greatest Common Divisor = "<<gcd(a,b);
	_getch();
}

int gcd(int x, int y){
	if(x<y)
		swap(x,y);
	
	if(y==0)
		return x;

	return gcd(y, x%y);

}

void swap(int &num1, int &num2){
	num1 += num2;	
	num2 = num1 - num2;	
	num1 = num1 - num2;
}