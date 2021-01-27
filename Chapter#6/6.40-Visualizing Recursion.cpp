#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int factorial(int);
static int spaces = 0;
int main(){
	
	for(int i=0; i<=10; i++){
		spaces = 0;
		cout<<i<<"! = "<<factorial(i)<<endl<<endl;
		cout<<setfill('*')<<setw(30)<<"\n";
	}

	_getch();
}

int factorial(int number){

	for(int i=0; i<::spaces; i++)
		cout<<" ";
	
	::spaces ++;

	cout<<setw(number)<<"factorial ("<<number<<") = ";
	if(number==1 || number==0){
		cout<<number<<endl;
		return 1;
	}
	cout<<number<<" * "<<number-1<<" !"<<endl;
	return (number * factorial(number-1));
	
}