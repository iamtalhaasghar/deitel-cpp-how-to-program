#include<iostream>
#include<conio.h>
#include"Time.h"

using namespace std;
int main(){

	int h, m, s;
	cout<<"Enter Hour : ";
	cin>>h;
	cout<<"Enter minutes : ";
	cin>>m;
	cout<<"Enter seconds : ";
	cin>>s;
	
	Time t(h, m, s);
	cout<<"\n\nThe Time you entered is : ";
	t.printStandard();


	_getch();
}
