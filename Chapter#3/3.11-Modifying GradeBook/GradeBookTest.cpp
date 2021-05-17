#include<iostream>
#include<string>
#include<conio.h>
#include"GradeBook.h"

using namespace std;

int main()
{
	string course, instructor;
	cout<<"Enter the name of course : ";
	getline(cin,course);
	cout<<"Enter the name of Instructor : ";
	getline(cin,instructor);

	GradeBook gradeBookTest(course,instructor);
	gradeBookTest.displayMessage();
	_getch();
}