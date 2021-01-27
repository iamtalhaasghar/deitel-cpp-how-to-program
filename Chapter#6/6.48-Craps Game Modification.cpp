#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

double craps(double, double);
int rollDices();


int main(){

	srand(static_cast<unsigned int>(time(0)));

	double bankBalance = 1000;
	double wager = 0;
	char choice = '\0';

	cout<<"Wanna play \"Craps\" ? (y or n) : ";
	cin>>choice;

	while((bankBalance>0) && (choice == 'Y' || choice == 'y')){
		
		do{
			cout<<"\nCurrent Bank Balance : $"<<bankBalance
				<<"\nEnter wager : ";
			cin>>wager;
		}while(wager<0 || wager>bankBalance);

		bankBalance = craps(bankBalance, wager);
		cout<<"\nNew Balance : $"<<bankBalance<<endl;
		
		if(bankBalance == 0){
			cout<<"\nSorry. You busted!!\n";
		}
		else{
			cout<<"\nWant to take another chance buddy, huh? (y or n) : ";
			cin>>choice;
		}
	}
	

	cout<<"Game Over!!";
	_getch();
}

double craps(const double balance,const double wager){
	
	enum class Status {WIN, LOSE, CONTINUE};
	Status gameStatus = Status::CONTINUE;
	
	cout<<"Press any key to roll the dices...";
	_getch();
		
	int sum = rollDices();
	int gamePoint = 0;

	switch(sum){
		case 7:
		case 11:
			gameStatus = Status::WIN;
			cout<<"\nYou were Lucky this time!!\n";
			break;
		case 2:
		case 3:
		case 12:
			gameStatus = Status::LOSE;
			cout<<"\nAw cmon, take a chance!\n";
			break;
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
			gamePoint = sum;
			cout<<"\nYou`re up big. Now`s the time to cash in your chips.\n"
				<<"Player`s point is : "<<gamePoint<<endl;
			gameStatus = Status::CONTINUE;
			break;
		default:
			cout<<"The default case should not execute.\n";
	}

	while(gameStatus == Status::CONTINUE){
		
		cout<<"\nPress any key to roll the dices...";
		_getch();
		sum = rollDices();
		if(sum == gamePoint)
			gameStatus = Status::WIN;
		else if(sum == 7)
			gameStatus = Status::LOSE;
	}

	if(gameStatus == Status::WIN){
		cout<<"\nPlayer wins!!\n";
		return balance + wager;
	}
	else{ 
		cout<<"\nPlayer loses!!\n";
		return balance - wager;
	}
}

int rollDices(){
	int dice1 = 1 + rand()%6;
	int dice2 = 1 + rand()%6;

	cout<<"\nPlayer rolled "<<dice1<<" + "<<dice2<<" = "<<dice1+dice2<<endl;
	return dice1+dice2;
}