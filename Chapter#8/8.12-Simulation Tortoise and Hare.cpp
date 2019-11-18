#include<iostream>
#include<conio.h>
#include<random>
#include<time.h>

#define LENGTH 70
using namespace std;

default_random_engine engine(static_cast<unsigned>(time(0)));


void moveTortoise(int* const);
void moveHare(int* const);
void updateRacePath(char* const,int, int, int);
void printRacePath(const char* const , int);
void initializePath(char* const, int, char = ' ');



int main(){
	
	
	cout<<"\n\n\tBANG!!!\n\tAND THEY`RE OFF!!!\n";
	_sleep(3000);
	char racePath[70];
	initializePath(racePath,LENGTH);
	
	bool raceFinished = false;
	int tortoise = 1;
	int hare = 1;
	
	while (!raceFinished)
	{
		system("cls");
		cout<<"\n\n\t";
		moveTortoise(&tortoise);
		moveHare(&hare);

		if(tortoise >= LENGTH && hare<LENGTH){
			cout<<"TORTOISE WINS!!! YAY!!!\n";
			raceFinished = true;
		}
		else if (hare >= LENGTH && tortoise<LENGTH)
		{
			cout<<"Hare wins. Yuch.\n";
			raceFinished = true;
		}
		else if(hare >= LENGTH && tortoise >= LENGTH){
			cout<<"It`s a tie.\n";
			raceFinished = true;
		}
		else
		{
			updateRacePath(racePath, LENGTH, tortoise, hare);
			printRacePath(racePath, LENGTH);
		}
	}
	

	_getch();
}

void moveTortoise(int* const position){
	uniform_int_distribution<int> random(1,10);
	int jump = random(engine);
	
	if(1==jump && jump<=5){
		*position += 3;
	}
	else if(6==jump && jump<=7){
		*position -= 6;
	}
	else if(8==jump && jump<=10){
		++(*position);
	}

	if(*position < 1){
		*position = 1;
	}
}

void moveHare(int* const position ){
	uniform_int_distribution<int> random(1,10);
	int jump = random(engine);

	if (3==jump && jump<=4)
	{
		*position += 9;	
	}
	else if (5 == jump)
	{
		*position -= 12;
	}		
	else if (6==jump && jump<=8)
	{
		++(*position);
	}
	else if (9==jump && jump<=10)
	{
		*position -= 2;
	}

	if(*position < 1){
		*position = 1;
	}
}

void updateRacePath(char* const path, int length,
		int tortoisePos, int harePos){
	
		initializePath(path, length);

		if (tortoisePos == harePos)
		{
			int temp = tortoisePos;
			path[temp++] = 'O';
			cout<<"\a";
			path[temp++] = 'U';
			path[temp++] = 'C';
			path[temp++] = 'H';
			path[temp++] = '!';
			path[temp++] = '!';
			path[temp++] = '!';
			

		}
		else{
			path[tortoisePos] = 'T';
			path[harePos] = 'H';
		}
}

void printRacePath(const char* const path, int length){

	for (int i = 0; i < length; i++)
	{
		cout<<path[i];
	}
	cout<<endl;
}


void initializePath(char* const path, int length, char symbol){
	
	path[0] = '#';
	for (int i = 1; i < length-1; i++)
	{
		path[i] = symbol;
	}
	path[length-1] = '#';

}

