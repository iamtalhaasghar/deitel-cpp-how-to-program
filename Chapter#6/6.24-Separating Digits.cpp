#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;


int intQuotient(int,int);
int intRemainder(int,int);
void printDigits(const int);

int main(){

	int num = 0;
	cout<<"Enter a number : ";
	cin>>num;
	printDigits(num);

	_getch();
}

void printDigits(const int number){
	
	int copy = number;
	int digits = 0;
	while(copy>0){
		digits++;
		copy=intQuotient(copy,10);
	}
	copy = number;
	for(int i=digits-1; i>=0; i--){
		int multiplier = pow(10,i);
		cout<<intQuotient(copy,multiplier)<<"  ";
		copy= intRemainder(copy,multiplier);
	}

}

int intQuotient(int num1, int num2){
	return num1/num2;
}

int intRemainder(int num1, int num2){
	return num1%num2;
}
