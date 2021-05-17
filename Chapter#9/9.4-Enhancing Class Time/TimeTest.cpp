#include<iostream>
#include<ctime>
#include<conio.h>
#include<stdexcept>
#include"Time.h"

using namespace std;
int main(){

	Time t(time(0));

	cout<<"Current System Time : \n"
		<<"In Universal-Time Format : ";
	t.printUniversal();
	
	cout<<"\nIn Standard-Time Format : ";
	t.printStandard();
	
	_getch();
}
