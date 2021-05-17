#include<iostream>
#include<conio.h>
#include "Employee.h"

using namespace std;

int main()
{
	string fName;
	string lName;
	int salary;

	cout<<"Enter First Name : ";
	cin>>fName;
	cout<<"Enter Last Name : ";
	cin>>lName;
	cout<<"Enter Monthly Salary : ";
	cin>>salary;

	Employee e1(fName, lName, salary);

	cout<<endl;
	cout<<"Enter First Name : ";
	cin>>fName;
	cout<<"Enter Last Name : ";
	cin>>lName;
	cout<<"Enter Monthly Salary : ";
	cin>>salary;

	Employee e2(fName, lName, salary);

	cout<<"\n\n*************Yearly Salaries Before Increment*************\n\n";
	cout<<e1.getFirstName()<<" "<<e1.getLastName()<<" = "<<e1.getSalary()*12<<endl;
	cout<<e2.getFirstName()<<" "<<e2.getLastName()<<" = "<<e2.getSalary()*12<<endl;

	cout<<"\n\nIncrementing salaries by 10%..."<<endl;
	e1.setSalary(e1.getSalary()*1.1);
	e2.setSalary(e2.getSalary()*1.1);
	
	cout<<"\n\n*************Yearly Salaries After Increment*************\n\n";
	cout<<e1.getFirstName()<<" "<<e1.getLastName()<<" = "<<e1.getSalary()*12<<endl;
	cout<<e2.getFirstName()<<" "<<e2.getLastName()<<" = "<<e2.getSalary()*12<<endl;


	_getch();
}