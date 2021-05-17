#include<iostream>
#include<conio.h>
#include"Account.h"

using namespace std;

int main()
{
	unsigned int studentCounter = {0};
	double initialBalance = {1000.0};

	cout<<"unsigned int studentCounter = "<<studentCounter<<endl;
	cout<<"double initialBalance = "<<initialBalance<<endl;

	Account account1 = {12345, "Mr.", "Programmer", 5000};
	account1.printAccountInfo();
	_getch();
}