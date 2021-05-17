
#include<iostream>
#include<string>
#include "GradeBook.h"

using namespace std;

GradeBook::GradeBook(string course, string instructor)
{
	setCourseName(course);
	setInstructorName(instructor);

}

void GradeBook::displayMessage() const 
{
	cout<<"\n\nWelcome to the GradeBook for \" "<<getCourseName()<<" \"\n";
	cout<<"This course is presented by : \" "<<getInstructorName()<<" \"\n";

}

void GradeBook::setCourseName(string course)
{
	if(course.size()>25)
	{
		cout<<"\nInvalid Course Name.\nValidating Course Name : ";
		courseName = course.substr(0,25);
		cout<<courseName<<endl;
	}
	else
	{
		courseName = course;
	}
}

void GradeBook::setInstructorName(string instructor)
{
	instructorName = instructor;
}

string GradeBook::getCourseName() const
{
	return courseName;
}

string GradeBook::getInstructorName() const
{
return instructorName;
}