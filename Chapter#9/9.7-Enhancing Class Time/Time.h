

#ifndef TIME_H
#define TIME_H

class Time{	

public:
	
	explicit Time(int = 0, int = 0, int = 0);
	explicit Time(time_t);
	void setTime(int, int, int);
	void setHour(int);
	void setMinute(int);
	void setSecond(int);
	
	int getHour();
	int getMinute();
	int getSecond();

	void printUniversal();
	void printStandard();

	void tick();

private:
	unsigned hour;
	unsigned minute;
	unsigned second;

};

#endif