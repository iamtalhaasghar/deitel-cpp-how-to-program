#include<string>

class Employee
{

private :
	std::string firstName;
	std::string lastName;
	int salary;
public:
	Employee(std::string, std::string, int);
	
	std::string getFirstName()const;
	std::string getLastName()const;
	int getSalary()const; 

	void setFirstName(std::string);
	void setLastName(std::string);
	void setSalary(int);
};