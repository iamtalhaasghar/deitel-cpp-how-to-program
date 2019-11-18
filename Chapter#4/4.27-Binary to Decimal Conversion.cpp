#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int binary = 0;
	cout<<"Enter a binary number : ";
	cin>>binary;

	int multiplier = 1;
	int temp = binary;
	int decimal = 0;

	while(temp>0)
	{
		int digit = (temp % 10);
		
		if(digit != 1 && digit != 0){
			
			cout<<"\nThe given number is not a binary number.\n";
			cout<<"The digit \""<<digit<<"\" in "<<binary<<" is neither 0 nor 1.\n";
			_getch();
			return 0;
		}

		decimal += digit * multiplier;
		temp /= 10;
		multiplier *= 2;
	}

	cout<<"\nOriginal Binary Number : "<<binary<<endl;
	cout<<"Decimal Equivalent     : "<<decimal<<endl;

	_getch();
}