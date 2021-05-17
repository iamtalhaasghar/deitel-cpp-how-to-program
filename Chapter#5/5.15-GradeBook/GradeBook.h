#include<string>

class GradeBook{

private:
	std::string courseName;
	int countA;
	int countB;
	int countC;
	int countD;
	int countF;

public:
	explicit GradeBook(){}
	explicit GradeBook(std::string);
	void setCourseName(std::string);
	std::string getCourseName()const;
	void inputGrades();
	void displayMessage()const;
	void displayGradeReport()const;
	double calculateGPA()const;

};