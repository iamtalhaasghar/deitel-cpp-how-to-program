#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	unsigned int passes = 0;
	unsigned int failures = 0;
	unsigned int studentCounter = 1;

	while(studentCounter <= 10 )
	{
		int result  = 0;
		cout<<"Enter result (1 = pass, 2 = fail) : ";
		cin>>result;
		
		if(result == 1)
		{
			++passes;
			++studentCounter;
		}
		else if(result == 2)
		{
			++failures;
			++studentCounter;
		}
		else
		{
			cout<<"Invalid Value!!\n";
		}
		
	}
 
	cout<<"\n\nPasses : "<<passes<<endl;
	cout<<"Failures : "<<failures<<endl;

	if(passes > 8)
	{
		cout<<"Bonus to Instructor!!!"<<endl;
	
	}
	_getch();
}