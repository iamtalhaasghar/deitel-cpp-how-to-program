#include<iostream>
#include<conio.h>
#include<string>
#include"GradeBook.h"

using namespace std;

int main(){

	string course;
	cout<<"Enter name of course : ";
	getline(cin, course);
	GradeBook gradeBook(course);
	gradeBook.displayMessage();
	gradeBook.inputGrades();
	gradeBook.displayGradeReport();
	cout<<"GPA : "<<gradeBook.calculateGPA();
	_getch();
}