#include<iostream>
#include<ctime>
#include<conio.h>
#include<stdexcept>
#include"Time.h"

using namespace std;
int main(){

	Time t(time(0));
	
	do{
		system("cls");
		cout<<"Current System Time : \n"
		<<"\nIn Standard-Time Format : ";
		t.printStandard();
		t.tick();
	}while(true);
	_getch();
}
