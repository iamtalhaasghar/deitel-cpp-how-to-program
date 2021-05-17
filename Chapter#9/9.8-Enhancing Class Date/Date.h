#ifndef DATE_H
#define DATE_H

class Date{
private:
	int day;
	int month;
	int year;
	bool isEndOfMonth();

public:
	explicit Date(int = 1, int = 1, int = 1900);
	void setMonth(int);
	void setYear(int);
	void setDate(int, int, int);
	void print();
	void nextDay();
	bool isLeapYear(int);
};


#endif