#include<iostream>
#include<conio.h>

using namespace std;

int main(){

	double result = 0;
	for(int i=1,count=1 ; ; i+=2,count++){
		
		if(count%2){
			result += (4.0/i);
		}
		else{
			result -= (4.0/i);
		}
		if(count%1000==0){
			cout<<count<<"\t"<<result<<endl;
			_getch();
		}
	}


	_getch();
}
