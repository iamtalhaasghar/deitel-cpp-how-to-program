#include<string>

class GradeBook{

private:
	std::string courseName;
	std::string instructorName;

public:
	GradeBook(std::string, std::string);
	void displayMessage()const;
	void setCourseName(std::string);
	std::string getCourseName() const;
	void setInstructorName(std::string);
	std::string getInstructorName() const;

};