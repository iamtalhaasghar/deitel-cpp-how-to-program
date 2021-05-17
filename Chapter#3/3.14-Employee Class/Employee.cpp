#include<string>
#include<iostream>
#include "Employee.h"

using namespace std;
 
Employee::Employee(string firstName, string lastName, int salary)
{
	setFirstName(firstName);
	setLastName(lastName);
	setSalary(salary);
}

string Employee::getFirstName()const
{
	return firstName;
}

string Employee::getLastName()const
{
	return lastName;
}

int Employee::getSalary()const
{
	return salary;
}

void Employee::setFirstName(string firstName)
{
	Employee::firstName = firstName;
}

void Employee::setLastName(string lastName)
{
	Employee::lastName = lastName;
}

void Employee::setSalary(int salary)
{
	if(salary<=0)
	{
		cout<<"Invalid Salary!!"<<endl;
		Employee::salary = 0;
	}
	else
	{
		Employee::salary = salary;
	}
}