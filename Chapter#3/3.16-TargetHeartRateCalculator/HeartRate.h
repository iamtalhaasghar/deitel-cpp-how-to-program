#include<string>

class HeartRate{

private:

	std::string firstName;
	std::string lastName;
	int day;
	int month;
	int year;

public:
	
	HeartRate(std::string, std::string, int, int, int);
	
	std::string getFirstName()const;
	std::string getLastName()const;
	int getDay()const;
	int getMonth()const;
	int getYear()const;

	void setFirstName(std::string);
	void setLastName(std::string);
	void setDay(int);
	void setMonth(int);
	void setYear(int);

	int getAge()const;
	int getMaximumHeartRate(int)const;
	int getTargetHeartRate(int)const;


};