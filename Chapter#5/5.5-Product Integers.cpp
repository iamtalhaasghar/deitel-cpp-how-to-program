#include<iostream>
#include<conio.h>

using namespace std;

int main(){

	int totalNumbers = 0;
	cin>>totalNumbers;
	int product = 1;

	for(int i=0; i<totalNumbers; i++){
		int temp = 0;
		cin>>temp;
		product *= temp;
	}

	cout<<"\n\nThe product is : "<<product<<endl;

	_getch();
}