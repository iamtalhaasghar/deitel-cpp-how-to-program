#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

bool isPrime(int);

int main(){

	for(int i=2 ;i<=10000; i++){
			if(isPrime(i)){
				cout<<"\t"<<i;
			}
	}

	_getch();
}

bool isPrime(int number){
	
	for(int i=2; i<=sqrt(number); i++){
		
		if(number % i == 0){

			// The first divisor of the number which makes that number non-prime
			//cout<<number<<"/"<<i<<endl;		
			return false;
		}
	}
	return true;
}