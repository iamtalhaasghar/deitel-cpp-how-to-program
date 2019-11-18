#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

inline double round(double num){
	return floor(num+0.5);
}

int main(){

	double num=0;

	cout<<"Enter a number (-1 to Quit) : ";
	cin>>num;
	while(num!=-1){
		cout<<"Original Number : "<<num<<endl;
		cout<<"Rounded Number : "<<round(num)<<"\n\n";
		cout<<"Enter a number (-1 to Quit) : ";
		cin>>num;
	}
	_getch();
}