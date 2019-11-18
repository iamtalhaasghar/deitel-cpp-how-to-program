#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	// "break" is converted ...
	for(int i=1; i<=10 && i!=5; i++){
		cout<<i<<" ";
	}

	cout<<"\n\n";

	// "continue" is converted ...
	for(int j=1; j<=10; j++){
		if(j!=5)
			cout<<j<<" ";
	}


	_getch();
}