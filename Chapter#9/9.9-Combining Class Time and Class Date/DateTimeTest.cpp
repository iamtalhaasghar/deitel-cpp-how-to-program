#include<iostream>
#include<conio.h>
#include"DateTime.h"

using namespace std;
int main(){

	DateTime date(13, 10, 2016, 23, 58, 00);

	while(true){
		system("cls");
		cout<<"DateTime is : \n";
		cout<<"In Standard Form : ";
		date.printStandard();
		date.tick();
	}


	_getch();
}
