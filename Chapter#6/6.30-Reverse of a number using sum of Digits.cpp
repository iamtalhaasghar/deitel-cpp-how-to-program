#include<iostream>
#include<conio.h>

using namespace std;

int reverseNumber(int);

int main(){
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	cout<<"Reversed number = "<<reverseNumber(n);
	_getch();
}

int reverseNumber(const int num){
	int temp = num;
	int reverse = 0;
	while(temp>0){
		reverse = (reverse*10)+(temp % 10);
		temp /= 10;
	}
	return reverse;
}