#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int size = 0;
	cout<<"Enter size of Square : ";
	cin>>size;

	cout<<"\n\n";

	int i = 0;
	
	while(i<size)
	{
		int j = 0;

		cout<<"*";

		while(j<size-2)
		{
			if(i==0)
			{
				cout<<"*";
			}
			else if(i == size-1)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}

			++j;
		}

		cout<<"*"<<endl;
		++i;
	}

	_getch();
}