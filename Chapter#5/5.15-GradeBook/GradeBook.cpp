#include<iostream>
#include"GradeBook.h"

using namespace std;

GradeBook::GradeBook(string course)
	: countA(0), countB(0), countC(0), countD(0), countF(0)
{
	setCourseName(course);
}

void GradeBook::setCourseName(string course){

	if(course.size()<=25){
		courseName = course;
	}
	else{
		cout<<"\nCourseName is greater than 25 characters.\n"
			"Limiting CourseName upto 25 characters.\n";
		courseName = course.substr(0,25);
	}

}

string GradeBook::getCourseName()const{
	return courseName;
}

void GradeBook::displayMessage()const{
	cout<<"\nWelcome to GradeBook for \" "<<getCourseName()<<" \".\n";
}

void GradeBook::inputGrades(){
	
	int input = 0;
	cout<<"Enter Grades (EOF to Quit) : ";
	cin.clear();	// clear input stream
	while((input = cin.get())!=EOF){
		
		switch(input){
			case 'A':
			case 'a':
				++countA;
				break;
			case 'B':
			case 'b':
				++countB;
				break;
			case 'C':
			case 'c':
				++countC;
				break;
			case 'D':
			case 'd':
				++countD;
				break;
			case 'F':
			case 'f':
				++countF;
				break;
			case ' ':
			case '\n':
			case '\t':
				break;
			default:
				cout<<"Incorrect Grade Entered.\n"
					"Enter Correct Grade!!\n";
		}
	}
}

void GradeBook::displayGradeReport()const{
	
	cout<<"\nGrade Report : \n";
	cout<<"A = "<<countA
		<<"\nB = "<<countB
		<<"\nC = "<<countC
		<<"\nD = "<<countD
		<<"\nF = "<<countF<<endl;
}

double GradeBook::calculateGPA() const{
	
	
	int input = 0;
	int total = 0;
	int counter = 0;
	cout<<"Enter Grades to caluclate GradePoint Average (EOF to Quit) : ";
	cin.clear();	// clear input stream
	while((input=cin.get()) != EOF ){
		
		switch(input){
			case 'A':
			case 'a':
				total += 5;
				counter++;
				break;
			case 'B':
			case 'b':
				total += 4;
				counter++;
				break;
			case 'C':
			case 'c':
				total += 3;
				counter++;
				break;
			case 'D':
			case 'd':
				total += 2;
				counter++;
				break;
			case 'F':
			case 'f':
				total += 1;
				counter++;
				break;
			case ' ':
			case '\n':
			case '\t':
				break;
			default:
				cout<<"Incorrect Grade Entered.\n"
					"Enter Correct Grade!!\n";
		}
	
	}

	return (static_cast<double>(total) / counter);
}