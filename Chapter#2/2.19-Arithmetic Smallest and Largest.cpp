#include<iostream>
#include<conio.h>

using namespace std;

int main(){

	int n1,n2,n3;

	cout<<"Input 3 different integers : ";
	cin>>n1>>n2>>n3;

	cout<<"Sum is : "<<n1+n2+n3<<endl;
	cout<<"Average is : "<<(n1+n2+n3)/3.0<<endl;
	cout<<"Product is : "<<n1*n2*n3<<endl;
	
	if(n1<n2)
	{
		if(n1<n3)
		{
			cout<<"Smallest is : "<<n1<<endl;
		}
		else
		{
			cout<<"Smallest is : "<<n3<<endl;
		}
	}
	else if(n2<n3)
	{
		cout<<"Smallest is : "<<n2<<endl;
	}
	else
	{
		cout<<"Smallest is : "<<n3<<endl;
	}
	
	if(n1>n2)
	{
		if(n1>n3)
		{
			cout<<"Largest is : "<<n1<<endl;
		}
		else
		{
			cout<<"Largest is : "<<n3<<endl;
		}
	}
	else if(n2>n3)
	{
		cout<<"Largest is : "<<n2<<endl;
	}
	else
	{
		cout<<"Largest is : "<<n3<<endl;
	}

	_getch();
}