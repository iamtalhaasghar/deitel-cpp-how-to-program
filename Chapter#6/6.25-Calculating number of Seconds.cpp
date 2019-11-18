#include<iostream>
#include<conio.h>

using namespace std;

long calculateSeconds(int,int,int);

int main(){

	int h1, m1, s1, h2, m2, s2;
	cout<<"Enter time # 1 : (hours, minutes, seconds) : ";
	cin>>h1>>m1>>s1;
	cout<<"Enter time # 2 : (hours, minutes, seconds) : ";
	cin>>h2>>m2>>s2;

	cout<<"\nTime1 - Time2 = \""
		<<(calculateSeconds(h1,m1,s1)-calculateSeconds(h2,m2,s2))
		<<"\" seconds\n\n";

	_getch();
}

long calculateSeconds(int hour, int min, int sec){

	long total = hour * 60 * 60;
	total += min * 60;
	total += sec;

	return total;
}