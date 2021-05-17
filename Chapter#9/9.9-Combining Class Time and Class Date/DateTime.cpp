#include<stdexcept>
#include<iostream>
#include<iomanip>
#include"DateTime.h"

using namespace std;

DateTime::DateTime(int day, int month, int year, 
			int hour, int minute, int second){
	
	setTime(hour, minute, second);
	setDate(day, month, year);
}

DateTime::DateTime(time_t t){
	
	tm* time;
	time = localtime(&t);
	setTime(time->tm_hour,  time->tm_min, time->tm_sec);
	setDate(time->tm_mday, time->tm_mon, time->tm_year);
}

void DateTime::setTime(int h, int m, int s){
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void DateTime::setHour(int h){
	if(h>=0 && h<=23){
		hour = h;
	}
	else
	{
		throw invalid_argument("Hours must be 0-23.");
	}

}

void DateTime::setMinute(int m){
	if(m>=0 && m<=59){
		minute = m;
	}
	else
	{
		throw invalid_argument("Minutes must be 0-59.");
	}

}

void DateTime::setSecond(int s){
	if(s>=0 && s<=59){
		second = s;
	}
	else
	{
		throw invalid_argument("Seconds must be 0-59.");
	}
	
}

void DateTime::setDate(int d, int m, int y){
	int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	
	setMonth(m);
	setYear(y);
	if( (m==2 && isLeapYear(y) && d<=29) 
		|| (d>=1 && d<=days[m]))
	{
		day = d;
	}
	else
	{
		throw invalid_argument("Days are invlalid for given month and year.");
	}

}

void DateTime::setMonth(int m){
	if(m>=1 && m<=12){
		month = m;
	}
	else
	{
		throw invalid_argument("Months must be 1-12.");
	}

}

void DateTime::setYear(int y){
	if(y>=1000){
		year = y;
	}
	else
	{
		throw invalid_argument("Year must be greater than or equal to 1000.");
	}

}


int DateTime::getHour(){
	return hour;
}

int DateTime::getMinute(){
	return minute;
}

int DateTime::getSecond(){
	return second;
}

int DateTime::getDay(){
	return day;
}

int DateTime::getMonth(){
	return month;
}

int DateTime::getYear(){
	return year;
}

void DateTime::printUniversal(){
	cout<<setfill('0')<<setw(2)<<getDay()
		<<"-"<<setw(2)<<getMonth()<<"-"
		<<setw(4)<<getYear()<<"   "
		<<setw(2)<<getHour()<<":"
		<<setw(2)<<getMinute()<<":"<<setw(2)
		<<getSecond()<<setfill(' ');
}

void DateTime::printStandard(){
	cout<<setfill('0')<<setw(2)<<getDay()
		<<"-"<<setw(2)<<getMonth()<<"-"
		<<setw(4)<<getYear()<<"   "<<setw(2)
		<<((getHour()==12 || getHour()==0)? 12 : getHour()%12)
		<<":"<<setw(2)<<getMinute()<<":"
		<<setw(2)<<getSecond()
		<<(getHour()>12 ? " PM" : " AM" )<<setfill(' ');
}

bool DateTime::isEndOfMonth(){
	int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

	if(month==2 && isLeapYear(year))
	{
		return true;
	}
	else
	{
		return day == days[month];
	}
	
}

void DateTime::nextDay(){
	if(!isEndOfMonth()){
		day++;
	}
	else if(getMonth() < 12){
		day = 1;
		month++;
	}
	else
	{
		month = 1;
		day = 1;
		year++;
	}


}

void DateTime::tick(){

	if(getSecond() < 59){
		second++;
	}
	else if(getMinute() < 59){
		second = 0;
		minute++;
	}
	else if(getHour() < 23){
		second = 0;
		minute = 0;
		hour++;
	}
	else
	{
		second = 0;
		minute = 0;
		hour = 0;
		nextDay();
	}

}

bool DateTime::isLeapYear(int y){
	if(y%400==0 || (y%4==0 && y%100!=0)){
		return true;
	}
	else
	{
		return false;
	}

}
