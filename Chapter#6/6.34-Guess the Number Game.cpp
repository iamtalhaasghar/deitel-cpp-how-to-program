#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){

	srand(static_cast<unsigned int>(time(0)));
	
	int guess = 0;
	char choice = 'Y';

	do{
		
		int number = 1 + rand()%1000;
	
		cout<<"\nI have a number between 1 and 1000.\n"
			"Can you guess my number ?\n"
			"Please enter your first Guess : ";
		cin>>guess;

		while(guess != number){
			if(guess>number){
				cout<<"Too High. Try again.\n? : ";
			}			
			else if(guess<number){
				cout<<"Too Low. Try again.\n? : ";			
			}
			cin>>guess;
		}
	
		cout<<"Excellent! you guessed the number.\n"
				<<"Would you like to play again? (y or n) : ";
		cin>>choice;

	}while(choice=='y' || choice=='Y');
	
	_getch();
}


