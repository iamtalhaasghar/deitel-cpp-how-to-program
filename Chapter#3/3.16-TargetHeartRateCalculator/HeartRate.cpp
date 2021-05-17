#include<iostream>
#include<string>
#include "HeartRate.h"

using namespace std;

HeartRate::HeartRate(
	string firstName, string lastName, int day, int month, int year
	)
{
	setFirstName(firstName);
	setLastName(lastName);
	setDay(day);
	setMonth(month);
	setYear(year);
}

string HeartRate::getFirstName()const
{
	return firstName;
}

string HeartRate::getLastName()const
{
	return lastName;	
}

int HeartRate::getDay()const
{
	return day;
}

int HeartRate::getMonth()const
{
	return month;
}

int HeartRate::getYear()const
{
	return year;
}

void HeartRate::setFirstName(string firstName)
{
	HeartRate::firstName = firstName;
}

void HeartRate::setLastName(string lastName)
{
	HeartRate::lastName = lastName;
}

void HeartRate::setDay(int day)
{
	HeartRate::day = day;
}

void HeartRate::setMonth(int month)
{
	HeartRate::month = month;
}

void HeartRate::setYear(int year)
{
	HeartRate::year = year;
}

int HeartRate::getAge()const
{
	int d, m, y;
	cout<<"Enter Current Date : \n\n"<<"Day : ";
	cin>>d;
	cout<<"Month : ";
	cin>>m;
	cout<<"Year : ";
	cin>>y;

	return y - getYear();
}

int HeartRate::getMaximumHeartRate(int age)const
{
	return 220 - age;
}

int HeartRate::getTargetHeartRate(int max)const
{
	return max*0.7;		// Target Heart Rate is 70% of Max. Heart Rate
}