#include<iostream>
#include<string>
#include"Account.h"

using namespace std;

Account::Account(unsigned int accountNumber, string firstName,
		string lastName, double balance)
{
	this->accountNumber = accountNumber;
	this->firstName = firstName;
	this->lastName = lastName;
	this->balance = balance;
}

void Account::printAccountInfo()
	{
		cout<<"\n\nAccount Number : "<<accountNumber
			<<"\nName : "<<firstName<<" "<<lastName
			<<"\nBalance : "<<balance<<std::endl;
		
	}