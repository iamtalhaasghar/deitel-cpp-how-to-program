#include<iostream>
#include<conio.h>
#include<random>
#include<time.h>
#include<array>
#include<iomanip>

using namespace std;

default_random_engine engine(static_cast<unsigned int>(time(0)));
uniform_int_distribution<unsigned int> random(1,6);

int rollDices();


int main(){
	
	
	array<int, 13>sum = {0};

	for(int i=0; i<36000; i++){
		++sum[rollDices()];
	}

	for(int p=2; p<13; p++){
		cout<<setw(5)<<p<<setw(10)<<sum[p]<<endl;
	}
	
	_getch();
}

int rollDices(){
	return random(engine) + random(engine);
}