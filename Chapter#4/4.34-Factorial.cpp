#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	unsigned int num = 0;
	cout<<fixed<<setprecision(8)<<"Enter a number : ";
	cin>>num;
	unsigned long long int factorial = 1;
	unsigned int i = 1;
	while(i <= num)
	{
		factorial *= i;
		i++;
	}
	cout<<"\nFactorial of "<<num<<" is : "<<factorial<<endl;

	cout<<"\n\t\tCalculating value of \"e\"\n\n";
	cout<<"Enter the desired accuracy : ";
	cin>>num;

	double e = 1;
	i = 1;
	
	while(i <= num)
	{
		unsigned int j = 1;
		factorial = 1;
		while(j <= i)
		{
			factorial *= j;
			++j;
		}	
		
		e += (1.0 / factorial);
		i++;
	}

	cout<<"\n\nValue of \'e\' is : "<<e<<endl;

	unsigned int x = 0;
	cout<<"\n\n\t\tCalculating \"e^x\"\n\n";
	cout<<"Enter 'x' (\"e^x\") : ";
	cin>>x;
	cout<<"Enter the desired accuracy : ";
	cin>>num;
	i = 1;
	e = 1;
	cout<<"1";
	while(i<=num)
	{
		factorial = 1;
		unsigned int j = 1;
		double power = 1;
		while(j<=i){
			
			factorial *= j;
			power *= x;
			++j;
		}
		// cout<<"+"<<power<<"/"<<factorial;	// for debugging purposes
		e += (power)/(factorial);
		++i;
	}

	cout<<"\n\n(e) ^ ("<<x<<") = "<<e<<endl;

	_getch();
}