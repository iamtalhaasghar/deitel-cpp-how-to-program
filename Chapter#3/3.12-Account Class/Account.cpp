#include<iostream>
#include "Account.h"

using namespace std;

Account::Account(int balance)
{
	setBalance(balance);
}

void Account::setBalance(int balance)
{
	if(balance<0){
		Account::balance = 0;
		cout<<"Invalid Balance!! Setting balance to zero."<<endl;
	}
	else{
		Account::balance = balance;
	}

}

int Account::getBalance() const
{
	return balance;
}

void Account::credit(int balance)
{
	if(balance<0)
	{
		cout<<"Invalid Credit Balance!!"<<endl;
	}
	else{
		setBalance(getBalance()+balance);
		cout<<"New Balance = "<<getBalance()<<endl<<endl;
	}
}

void Account::debit(int balance)
{
	if(balance>getBalance())
	{
		cout<<"Debit Amount exceeded current Account Balance!!"<<endl;
	}
	else{
		setBalance(getBalance()-balance);
		cout<<"Remaining Balance = "<<getBalance()<<endl<<endl;
	}
}