
#include<iostream>
#include "Date.h"

using namespace std;

Date::Date(int day, int month, int year)
{
	setDay(day);
	setMonth(month);
	setYear(year);
}

int Date::getDay()const
{
	return day;
}

int Date::getMonth()const
{
	return month;
}

int Date::getYear()const
{
	return year;
}

void Date::setDay(int day)
{
	Date::day = day;
}

void Date::setMonth(int month)
{
	if(month<1 || month>12)
	{
		Date::month = 1;
		cout<<"\nInvalid Month!!! Setting Month to \"1\".\n";
	}
	else
	{
		Date::month = month;
	}
}

void Date::setYear(int year)
{
	Date::year = year;
}

void Date::displayDate()const
{
	cout<<day<<"/"<<month<<"/"<<year;

}