#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int product = 1;
	for(int i=2; i<=10 ; i++){
		
		if(i%2==0){

			cout<<product<<" * "<<i<<" = ";
			product *= i;
			cout<<product<<endl;	
		}
	
	}

	cout<<"\n\nThe result is : "<<product<<endl;
	_getch();
}