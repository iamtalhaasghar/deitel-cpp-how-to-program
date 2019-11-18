#include<iostream>
#include<conio.h>

using namespace std;

int main(){

	int number = 0;
	
	for(int j=0; j<5; j++){
		cout<<"? : ";
		cin>>number;	
		for(int i=0; i<number; i++){
			cout<<"*";
		}
		cout<<endl;
	}
	_getch();
}