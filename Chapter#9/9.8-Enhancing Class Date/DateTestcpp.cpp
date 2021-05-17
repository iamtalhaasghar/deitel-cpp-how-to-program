#include<iostream>
#include<conio.h>
#include "Date.h"

using namespace std;

int main(){

	Date d(12,2,2012);

	do
	{
		system("cls");
		cout<<"Date: ";
		d.print();
		d.nextDay();
	} while (true);

	_getch();
}
