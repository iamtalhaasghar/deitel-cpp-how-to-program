#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	cout<<"Enter any 3 integers : ";

	int n1=0,n2=0,n3=0;
	int compare = n1;
	
	cin>>n1>>n2>>n3;

	cout<<"Smallest Number = ";
	if(n1<n2)
	{
		if(n1<n3)
		{
			cout<<n1<<endl;
		}
		else
		{
			cout<<n3<<endl;
		}
	}
	else if(n2<n3)
	{
		cout<<n2<<endl;
	}
	else
	{
		cout<<n3<<endl;
	}

	cout<<"Largest Number = ";
	if(n1>n2)
	{
		if(n1>n3)
		{
			cout<<n1<<endl;
		}
		else
		{
			cout<<n3<<endl;
		}
	}
	else if(n2>n3)
	{
		cout<<n2<<endl;
	}
	else
	{
		cout<<n3<<endl;
	}

	_getch();
}

