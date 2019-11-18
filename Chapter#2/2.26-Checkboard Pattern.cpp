#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

	char ch ='\0';

	for(int i=0; i<10;i++)
	{
		if(i%2)
		{
			ch = ' ';
		}
		else
		{
			ch = '*';
		}

		for(int j=0; j<20; j++)
		{
			if(ch=='*')
			{
				cout<<ch;
				ch = ' ';
			}	
			else
			{
				cout<<ch;
				ch = '*';
			}
		}
		
		cout<<endl;
	}

	_getch();
}
