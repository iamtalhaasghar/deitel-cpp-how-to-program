#include<iostream>
#include<conio.h>

using namespace std;

int sumOfDigits(int);

int main(){

	int num = 0;
	cout<<"Enter a number : ";
	cin>>num;
	cout<<"Sum of digits of \" "<<num<<" \" = "<<sumOfDigits(num);

	_getch();
}

int sumOfDigits(int number){
	int sum = 0;
	while(number>0){
		sum += (number%10);
		number /= 10;
	}
	return sum;
}
