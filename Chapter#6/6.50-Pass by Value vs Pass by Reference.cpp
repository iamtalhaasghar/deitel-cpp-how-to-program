#include<iostream>
#include<conio.h>

using namespace std;

int tripleByValue(int);
void tripleByReference(int &);

int main(){
	
	int count = 0;
	cout<<"Enter a number : ";
	cin>>count;
	cout<<"\nNumber before calling \"tripleByValue()\" = "<<count<<endl;
	cout<<"Calling \"tripleByValue("<<count<<")\" ...\n";
	cout<<"\"tripleByValue()\" returned = "<<tripleByValue(count)<<endl;
	cout<<"Number after calling \"tripleByValue()\" = "<<count<<endl<<endl;

	cout<<"Number before calling \"tripleByReference()\" = "<<count<<endl;
	cout<<"Calling \"tripleByReference("<<count<<")\" ...\n";
	tripleByReference(count);
	cout<<"Number after calling \"tripleByReference()\" = "<<count<<endl;



	_getch();
}

int tripleByValue(int number){
	return 3*number;
}

void tripleByReference(int &number){
	number *= 3;
}