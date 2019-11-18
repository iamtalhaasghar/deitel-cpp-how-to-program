#include<iostream>
#include<conio.h>

using namespace std;

int main(){

	int totalNumbers = 0;
	cin>>totalNumbers;
	int max = INT_MIN;

	for(int i=0; i<totalNumbers; i++){
		int input;
		cin>>input;
		if(input>max){
			max = input;
		}
	}

	cout<<"The maximum entered was : "<<max<<endl;

	_getch();
}