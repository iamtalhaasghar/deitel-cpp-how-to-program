#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	cout<<"Enter a number : ";
	int num = 0;
	cin>>num;

	int c_num = num;
	int divisor = 1;
	while(c_num>0){
		divisor *= 10;
		c_num /= 10;
	}
	divisor /= 10;
	c_num = num;
	while(c_num>0)
	{
		cout<<c_num/divisor<<"   ";
		c_num %= divisor;
		divisor /= 10;
		
	}
	_getch();
}