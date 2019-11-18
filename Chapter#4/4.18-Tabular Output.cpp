#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int counter = 1;

	cout<<"N \t N*10 \t N*100 \t N*1000 \n\n";

	while(counter <= 5)
	{
		cout<<counter<<" \t "<<counter*10<<" \t "<<counter*100
			<<" \t "<<counter*1000<<endl;
		
		++counter;
	}


	_getch();
}