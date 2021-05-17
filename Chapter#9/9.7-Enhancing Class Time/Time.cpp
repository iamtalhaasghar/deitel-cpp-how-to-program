#include<iostream>
#include<stdexcept>
#include<iomanip>
#include "Time.h"

using namespace std;

Time::Time(int h, int m, int s)
{
	setTime(h, m, s);

}

Time::Time(time_t t){
	tm *time = localtime(&t);
	setTime(time->tm_hour, time->tm_min, time->tm_sec);
}



void Time::setTime(int h, int m, int s){
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void Time::printUniversal(){
	cout<<setfill('0')<<setw(2)<<getHour()<<":"
		<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()
		<<setfill(' ');
}

void Time::printStandard(){
	cout<<setfill('0')<<setw(2)
		<<( (getHour()==12 || getHour()==0) ? (12) : (getHour()%12) )
		<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()
		<<(getHour()<12 ? " AM" : " PM")
		<<setfill(' ');
}


int Time::getHour(){
	return hour;
}

int Time::getMinute(){
	return minute;
}

int Time::getSecond(){
	return second;
}

void Time::setHour(int h){
	if(h>=0 && h<=23){
		hour = h;
	}
	else
	{
		throw invalid_argument("Hours must be 0-23.");
	}

}

void Time::setMinute(int m){
	if(m>=0 && m<=59){
		minute = m;
	}
	else
	{
		throw invalid_argument("Minutes must be 0-59.");
	}

}

void Time::setSecond(int s){
	if(s>=0 && s<=59){
		second = s;
	}
	else
	{
		throw invalid_argument("Second must be 0-59.");
	}

}

void Time::tick(){

	if(second<59){
		second++;
	}
	else if(minute<59){
		second = 0;
		minute++;
	}
	else if(hour<23){
		hour++;
		minute = 0;
		second = 0;
	}
	else{
		hour = 0;
		minute = 0;
		second = 0;
	}
}
