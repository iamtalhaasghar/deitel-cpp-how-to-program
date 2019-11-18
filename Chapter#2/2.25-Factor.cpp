#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	cout<<"Enter two numbers : ";

	int n1 = 0,n2 = 0;
	cin>>n1>>n2;

	if(n2%n1)
	{
		cout<<"The number "<<n1<<" is not a factor of "<<n2<<endl;

	}
	else
	{
		cout<<"The number "<<n1<<" is a factor of "<<n2<<endl;
	}
	

	_getch();
}
   
