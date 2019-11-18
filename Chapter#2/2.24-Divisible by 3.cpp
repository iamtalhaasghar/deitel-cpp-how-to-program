#include<iostream>
#include<conio.h>
 
using namespace std;

int main()
{
	cout<<"\n\t\t\tDivisible by 3 or not\n\n";
	cout<<"Enter a number : ";
	int n = 0;
	cin>>n;

	if(n%3)
	{
		cout<<"The number "<<n<<" is not divisible by 3.";
	}
	else
	{
		cout<<"The number is divisible by 3.";
	}
	
	_getch();
}
