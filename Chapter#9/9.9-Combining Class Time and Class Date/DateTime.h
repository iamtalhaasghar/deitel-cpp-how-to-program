
#include<ctime>
#ifndef TIME_H
#define TIME_H

class DateTime{	

public:
	
	explicit DateTime(int = 0, int = 0, int = 0,
		int = 0, int = 0, int =0);
	
	explicit DateTime(time_t);
	void setTime(int, int, int);
	void setHour(int);
	void setMinute(int);
	void setSecond(int);
	
	void setMonth(int);
	void setYear(int);
	void setDate(int, int, int);
	
	int getHour();
	int getMinute();
	int getSecond();
	int getDay();
	int getMonth();
	int getYear();

	void printUniversal();
	void printStandard();

	void nextDay();
	bool isLeapYear(int);

	void tick();

private:
	unsigned hour;
	unsigned minute;
	unsigned second;
	int day;
	int month;
	int year;
	bool isEndOfMonth();

};

#endif