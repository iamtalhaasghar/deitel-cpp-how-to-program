#include<iostream>
#include<iomanip>
#include"Time.h"

using namespace std;

Time::Time(int h, int m, int s){
	setTime(h, m, s);
}

int Time::setTime(int h, int m, int s){
	int errorIndicator = 0;
	if(setHour(h)==-1){
		cout<<"\nInvalid Hour Value!!! Setting it to 12 AM.";
		errorIndicator = -1;
	}
	if(setMinute(m)==-2){
		cout<<"\nInvalid Minute Value!!! Setting it to zero.";
		errorIndicator = -2;
	}
	if(setSecond(s)==-3){
		cout<<"\nInvalid Second Value!!! Setting it to zero.";
		errorIndicator = -3;
	}
	return errorIndicator;
}

int Time::setHour(int h){
	if(h>=0 && h<=23){
		hour = h;
		return 0;
	}
	else
	{
		hour = 0;
		return -1;
	}
}

int Time::setMinute(int m){
	if(m>=0 && m<=59){
		minute = m;
		return 0;
	}
	else
	{
		minute = 0;
		return -2;
	}
	
}

int Time::setSecond(int s){
	if(s>=0 && s<=59){
		second = s;
		return 0;
	}
	else
	{
		second = 0;
		return -3;
	}
}

int Time::getHour()const{
	return hour;
}

int Time::getMinute()const{
	return minute;
}

int Time::getSecond()const{
	return second;
}

void Time::printUniversal()const{
	cout<<setfill('0')<<setw(2)<<getHour()<<":"
		<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()
		<<setfill(' ');
}

void Time::printStandard()const{
	cout<<setfill('0')<<setw(2)
		<<( (getHour()==12 || getHour()==0) ? (12) : (getHour()%12) )
		<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()
		<<(getHour()<12 ? " AM" : " PM")
		<<setfill(' ');
}



