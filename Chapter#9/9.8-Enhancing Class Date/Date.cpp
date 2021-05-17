#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"Date.h"

using namespace std;

Date::Date(int d, int m, int y){
	setDate(d, m, y);
}
void Date::setDate(int d, int m, int y){
	
	static const int monthDays[] = {0, 31,28,31,30,31,30,31,31,30,31,30,31};

	setYear(y);
	setMonth(m);

	if( (m==2 && isLeapYear(y) && d>=1 && d<=29)
		|| (d>=1 && d<=monthDays[m]) ){
		
		day = d;
	}
	else{
		throw invalid_argument("Invalid day for given month and year.");	
	}

	
}

void Date::setMonth(int m){
	if(m<=12){
		month = m;
	}
	else
	{
		throw invalid_argument("Months must be 1-12.");
	}
}

void Date::setYear(int y){
	if(y>=1000){
		year = y;
	}
	else
	{
		throw invalid_argument("Year must be greater than or equal to 1000.");
	}
}

void Date::print(){
	cout<<setfill('0')<<setw(2)<<day<<" - "
		<<setw(2)<<month<<" - "
		<<setw(4)<<year<<setfill(' ');
}

void Date::nextDay(){

	if(!isEndOfMonth()){
		day++;
	}
	else if (month<12){
		day = 1;
		month++;
	}
	else
	{
		year++;
		day = 1;
		month = 1;
	}
}

bool Date::isEndOfMonth(){

	static const int monthDays[] = {0, 31,28,31,30,31,30,31,31,30,31,30,31};

	if( month==2 && isLeapYear(year) ){
		return (day == 29);
	}
	else 
		return (day == monthDays[month]);
}

bool Date::isLeapYear(int y){

	if( (y%400==0) || (y%100!=0 && y%4==0) )
		return true;

	return false;
}


