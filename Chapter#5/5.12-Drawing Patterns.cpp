#include<iostream>
#include<conio.h>

using namespace std;

int main(){

	int length = 0;
	cout<<"Enter Length of drawing patterns : ";
	cin>>length;

	cout<<"\n\n";

	// Pattern (a) :

	for(int i=1; i<=length ; i++){
		for(int j=1; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}

	cout<<"\n\n";

	// Pattern (b) : 

	for(int i=length; i>0 ; i--){
		for(int j=i; j>0 ; j--){
			cout<<"*";
		}
		cout<<endl;
	}

	cout<<"\n\n";

	// Pattern (c) : 

	int spaces = 0;
	for(int i=length; i>0; i--){
		
		for(int j=0; j<spaces; j++){
			cout<<" ";
		}
		spaces++;
		for(int k=i; k>0; k--){
			cout<<"*";
		}
		cout<<endl;
	}

	cout<<"\n\n";

	spaces = length-1;

	// Pattern (d) :

	for(int i=1; i<=length ; i++){
		
		for(int j=0; j<spaces; j++){
			cout<<" ";
		}
	
		spaces--;

		for(int k=1; k<=i; k++){
			cout<<"*";
		}
		cout<<endl;
	}

	_getch();
}