#ifndef TIME_H
#define TIME_H

class Time{
private:
	int hour;
	int minute;
	int second;

public:
	explicit Time(int = 0, int = 0, int = 0);
	int setTime(int ,int, int);
	int setHour(int);
	int setMinute(int);
	int setSecond(int);

	int getHour()const;
	int getMinute()const;
	int getSecond()const;

	void printUniversal()const;
	void printStandard()const;

};

#endif // !TIME_H
