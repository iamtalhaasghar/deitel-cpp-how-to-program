#include<iostream>
#include<conio.h>

using namespace std;

bool isPerfect(int);

int main(){
	
	for(int n=1; n<=1000; n++){
	
		if(isPerfect(n)){
			
			for(int j=1; j<n ; j++){
				if(n%j==0)
					cout<<j<<"+";			
			}
			cout<<"\b="<<n<<endl;
		}
		
	}
	cout<<"Done!";
	_getch();
}

bool isPerfect(int number){
	bool perfect = false;
	int total = 0;

	for(int j=1; j<number ; j++){
		if(number%j==0)
			total += j;			
	}
	
	if(total == number){
		perfect = true;
	}

	return perfect;
}