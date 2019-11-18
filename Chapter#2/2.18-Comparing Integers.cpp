#include<iostream>
#include<conio.h>
 
using namespace std;
 
int main()
{
	int n1 = 0;
	int n2 = 0;
	cout<<"Enter two numbers : ";
	cin>>n1>>n2;

	if(n1<n2)
	{
		cout<<n1<<" is smaller than "<<n2<<endl;
	}
	else if (n1==n2)
	{
		cout<<"These numbers are equal.\n";
	}
	else
	{
		cout<<n2<<" is smaller than "<<n1<<endl;
	}
	
	_getch();

}