#include<iostream>
#include<conio.h>

using namespace std;

int main(){

	int height = 8;
	int width = height*2;
	
	while(height > 0)
	{
		int temp = 0;
		int count = height % 2 ;

		while(temp++ < width)
		{
			if(count++ % 2)
			{
				cout<<" ";
			}
			else
			{
				cout<<"*";
			}
				
		}
		cout<<endl;
		--height;
	}

	_getch();
}