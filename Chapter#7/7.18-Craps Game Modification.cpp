#include<iostream>
#include<random>
#include<time.h>
#include<conio.h>
#include<array>
#include<iomanip>


using namespace std;

default_random_engine engine(static_cast<unsigned int>(time(0)));

unsigned int rollDice();
bool craps(int &);


int main()
{ 
	array<int, 22>wins = {0};
	array<int, 22>loses = {0};

	int index = 0;
	int totalWins = 0;
	int totalLoses = 0;
	for(int i=0; i<1000; i++){
	
		if(craps(index)){
			if(index>20)
				wins[21]++;
			else
				wins[index]++;
		}
		else{
			if(index>20)
				loses[21]++;
			else
				loses[index]++;			
		}
		
	}

	cout<<setw(15)<<setfill('*')<<""<<"Game of Craps Statistics"
		<<setw(15)<<"\n\n"<<setfill(' ');
	cout<<left<<setw(15)<<"Rolls"<<setw(25)<<"Winnning Statistics"
		<<setw(25)<<"Losing Statistics"<<"\n\n";
	
	for(size_t i=1; i<wins.size(); i++){

		if(i==21)
			cout<<left<<setw(15)<<"Over 20";
		else
			cout<<left<<setw(15)<<i;
		
		cout<<right<<setw(15)<<wins[i]<<setw(15)<<loses[i]<<endl;
		
		totalWins += wins[i];
		totalLoses += loses[i];
	}

	cout<<left<<setw(15)<<"Total"<<right<<setw(15)<<totalWins
		<<setw(15)<<totalLoses<<endl;

	_getch(); 
}


unsigned int rollDice()
{
   uniform_int_distribution<unsigned int> random(1,6);
   unsigned int die1 = random(engine);
   unsigned int die2 = random(engine);
   
   unsigned int sum = die1 + die2;

   //cout << "Player rolled " << die1 << " + " << die2
    //  << " = " << sum << endl;
   return sum; 
}

bool craps(int &diceRolls){

	enum class Status { CONTINUE, WON, LOST }; 
	int numOfDiceRolls = 0;
   unsigned int myPoint = 0;
   Status gameStatus = Status::CONTINUE;
   bool isGameWon = false;
	
	unsigned int sumOfDice = rollDice();
	++numOfDiceRolls;
   
	switch ( sumOfDice ) 
   {
      case 7: 
      case 11:
         gameStatus = Status::WON;
			isGameWon = true;
         break;
      case 2: 
      case 3: 
      case 12:
         gameStatus = Status::LOST;
         break;
      default: 
         gameStatus = Status::CONTINUE; 
         myPoint = sumOfDice; 
         //cout << "Point is " << myPoint << endl;
			break;    
   } 

   
   while ( Status::CONTINUE == gameStatus )
   { 
      sumOfDice = rollDice();
		++numOfDiceRolls;

      if ( sumOfDice == myPoint ){
         gameStatus = Status::WON;
			isGameWon = true;
		}
      else if ( sumOfDice == 7 ){
            gameStatus = Status::LOST;
				isGameWon = false;
		}
   }

   if ( Status::WON == gameStatus ){
     // cout << "Player wins" << endl;
	}
   else{
    //  cout << "Player loses" << endl;
	}

	diceRolls = numOfDiceRolls;
	return isGameWon;
}
