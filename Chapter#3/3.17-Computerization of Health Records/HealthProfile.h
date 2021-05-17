#include<string>

class HealthProfile
{
private:
	std::string firstName;
	std::string lastName;
	float height;
	float weight;
	int day;
	int month;
	int year;

public:
	HealthProfile(std::string, std::string, int, int, int, float, float);
	std::string getFirstName()const;
	std::string getLastName()const;
	float getHeight()const;
	float getWeight()const;
	int getDay()const;
	int getMonth()const;
	int getYear()const;
	void setFirstName(std::string);
	void setLastName(std::string);
	void setHeight(float);
	void setWeight(float);
	void setDay(int);
	void setMonth(int);
	void setYear(int);

	float getBmi()const;
	float getMaximumHeartRate(int)const;
	float getTargetHeartRate(int)const;
	int getAge()const;
};