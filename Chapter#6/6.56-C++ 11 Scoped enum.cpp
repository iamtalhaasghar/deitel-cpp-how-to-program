#include<iostream>
#include<conio.h>

using namespace std;

int main(){

	enum struct Days : unsigned int {MON = 1, TUES, WED, THU, FRI, SAT, SUN};

	Days firstDayOfWeek = Days::MON;
	cout<<"First day of Week is = ";

	switch(firstDayOfWeek){
		case Days::MON:
			cout<<"Monday";
			break;
		case Days::TUES:
			cout<<"Tuesday";
			break;
		case Days::WED:
			cout<<"Wednesday";
			break;
		case Days::THU:
			cout<<"Thursday";
			break;
		case Days::FRI:
			cout<<"Friday";
			break;
		case Days::SAT:
			cout<<"Saturday";
			break;
		case Days::SUN:
			cout<<"Sunday";
			break;
	}

	_getch();
}
