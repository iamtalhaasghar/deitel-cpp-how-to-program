#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	cout<<"Enter a character : ";
	char ch = '\0';
	cin>>ch;

	cout<<"Integer Equivalent = "<<static_cast<int>(ch)<<endl;
	cout<<"Integer Equivalent = "<<(int) ch<<endl;

	_getch();
}