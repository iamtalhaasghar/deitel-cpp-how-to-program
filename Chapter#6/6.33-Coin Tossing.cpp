#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;
	

int flip();

int main(){
	
	int headCount = 0;
	int tailCount = 0;
	srand(static_cast<unsigned int>(time(0)));

	for(int i=0; i<100; i++){

		if(flip()){
			cout<<"Head\n";
			headCount++;
		}
		else{
			cout<<"Tail\n";
			tailCount++;
		}
		
	}
	
	cout<<"\n\nTails = "<<tailCount<<"\nHeads = "<<headCount;
	

	_getch();
}

int flip(){

	return (rand()%2);
		
}