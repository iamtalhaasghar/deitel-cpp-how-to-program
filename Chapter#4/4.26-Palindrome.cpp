#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

	int num = 0;
	cout<<"Enter a number (5-Digits only) : ";
	cin>>num;

	int temp = num;
	int reverseNum = 0;

	while(temp>0)
	{
		reverseNum = (reverseNum * 10) + (temp % 10);
		temp /= 10;
		
	}
	
	cout<<"Original Number : "<<num<<endl;
	cout<<"Reversed Number : "<<reverseNum<<endl;

	if(reverseNum == num)
	{
		cout<<"\n\nThe given numbers are \"Palindrome\".";
	}
	else
	{
		cout<<"\n\nThe given numbers are not \"Palindrome\".";
		
	}
	_getch();
}