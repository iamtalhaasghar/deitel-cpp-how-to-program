#include<iostream>
#include<conio.h>

#include "Account.h"

using namespace std;

int main()
{
	int x = 0;
	int y = 0;
	cout<<"Enter initial amount for accounts : ";
	cin>>x>>y;

	Account a1(x);
	Account a2(y);

	cout<<"Current balance of accounts : \n\n";

	cout<<"Balance in Account 1 : "<<a1.getBalance()<<endl;
	cout<<"Balance in Account 2 : "<<a2.getBalance()<<endl;

	cout<<"Enter amount to withdraw from account 1 : ";
	cin>>x;
	a1.debit(x);

	cout<<"Enter amount to add in account 2 : ";
	cin>>x;
	a2.credit(x);


	cout<<"Current balance of accounts : \n\n";

	cout<<"Balance in Account 1 : "<<a1.getBalance()<<endl;
	cout<<"Balance in Account 2 : "<<a2.getBalance()<<endl;


	_getch();
}