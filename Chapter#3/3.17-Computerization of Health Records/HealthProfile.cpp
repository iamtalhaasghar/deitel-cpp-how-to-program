#include<string>
#include<iostream>
#include"HealthProfile.h"

using namespace std;

HealthProfile::HealthProfile(
	string firstName, string lastName, int day, int month, int year,
	float height, float weight
	)
{
	setFirstName(firstName);
	setLastName(lastName);
	setDay(day);
	setMonth(month);
	setYear(year);
	setHeight(height);
	setWeight(weight);

}
string HealthProfile::getFirstName()const
{
	return firstName;
}

string HealthProfile::getLastName()const
{
	return lastName;	
}

int HealthProfile::getDay()const
{
	return day;
}

int HealthProfile::getMonth()const
{
	return month;
}

int HealthProfile::getYear()const
{
	return year;
}

float HealthProfile::getHeight()const
{
	return height;
}

float HealthProfile::getWeight()const
{
	return weight;
}

void HealthProfile::setFirstName(string firstName)
{
	HealthProfile::firstName = firstName;
}

void HealthProfile::setLastName(string lastName)
{
	HealthProfile::lastName = lastName;
}

void HealthProfile::setDay(int day)
{
	HealthProfile::day = day;
}

void HealthProfile::setMonth(int month)
{
	HealthProfile::month = month;
}

void HealthProfile::setYear(int year)
{
	HealthProfile::year = year;
}

void HealthProfile::setHeight(float height)
{
	HealthProfile::height = height;
}

void HealthProfile::setWeight(float weight)
{
	HealthProfile::weight = weight;
}

int HealthProfile::getAge()const
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

float HealthProfile::getMaximumHeartRate(int age)const
{
	return 220 - age;
}

float HealthProfile::getTargetHeartRate(int max)const
{
	return max*0.7;		// Target Heart Rate is 70% of Max. Heart Rate
}

float HealthProfile::getBmi()const
{
	return (getWeight())/(getHeight()*getHeight());
}