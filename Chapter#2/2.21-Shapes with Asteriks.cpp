#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	int size = 10;
	int length = 10;

	cout<<"\n\n";

	//	design of Rectangle using asteriks

	for (int i = 0; i < size; i++)
	{
		cout<<"*";
		for (int j = 0; j < length-2; j++)
		{
			if(i==0 || i==size-1)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}

		}
		cout<<"*"<<endl;
	}
	
	// design of oval using asteriks

	cout<<"\n\n\n";
	length = 9;
	char ch = '\0';

	for(int i=0; i<size; i++)
	{
		for(int j=0; j<length; j++)
		{
			if(i==0 || i==size-1)
			{
				if(j<3 || j>5){
					ch = ' ';
				}
				else
				{
					ch = '*';
				}
				
			}
			else if(i==1 || i==size-2)
			{
				if(j==1 || j==length-2)
				{
					ch = '*';
				}
				else
				{
					ch = ' ';
				}

			}
			else
			{
				if(j==0 || j==length-1)
				{
				
					ch = '*';
				}
				else
				{
					ch = ' ';
				}
			}
			cout<<ch;
		}
		cout<<"\n";
	
	}

	// design of upward arrow using asteriks

	cout<<"\n\n\n";
	length = 5;

	for(int i=0; i<size; i++)
	{
		for(int j=0; j<length ; j++)
		{
			if(i==1)
			{
				if(j>0 && j<4)
				{
					cout<<"*";
				}
				else
				{
					cout<<" ";
				}
			}
			else if(i==2)
			{
				cout<<"*";
			}
			else
			{
				if(j==2)
				{
					cout<<"*";
				}
				else
				{
					cout<<" ";
				}
			}
		
		}
		cout<<"\n";
	}

	// design of diamond using asteriks

	cout<<"\n\n";
	length = 9;
	size = 9;
	int o_space = length / 2;
	int i_space = -1;
	int k = 0;
	for(int i=0; i<size; i++)
	{
		

		for(int j=0; j<length ; j++)
		{
			if(j<o_space)
			{
				cout<<" ";
			}
			else if(j==o_space){
				cout<<"*";
				k=0;
			}
			else if(k<i_space)
			{
				cout<<" ";
				k++;
			}
			else if(k==i_space)
			{
				cout<<"*";
				k++;
			}
		}
		if(i<4)
		{
			o_space--;
			i_space+=2;
		}
		else
		{
			o_space ++;
			i_space -=2;
		}
		cout<<"\n";
	}

	_getch();
}
