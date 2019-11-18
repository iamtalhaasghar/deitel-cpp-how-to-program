#include<iostream>
#include<conio.h>
#include<array>

using namespace std;

int main(){

	bool worstCase = true;
	array <int, 20> numbers = {0};

	cout<<"Enter 20 numbers between 10 and 100, inclusive : \n\n";
	for(int i=0; i<numbers.size(); i++){
		
		do{
			cout<<"["<<i<<"] : ";
			cin>>numbers[i];
		}while(numbers[i]<10 || numbers[i]>100);

		for(int j = i-1; j>=0; j--){
			while(numbers[j] == numbers[i]){
				worstCase = false;
				cout<<"\nThe number "<<numbers[j]
				<<" is already present in array at index "<<j<<".\n";		
				cout<<"Duplicates are not allowed. Enter number again : \n\n";
				do{
					cout<<"["<<i<<"] : ";
					cin>>numbers[i];
				}while(numbers[i]<10 || numbers[i]>100);
				
				j = i - 1;
			}
		}
	}

	if(worstCase){
		cout<<"\nWorst Case!! All elements entered by the user were different.\n";
	}

	cout<<"\n\nThe array is : \n";
	for(int p : numbers){
		cout<<p<<"\t";
	}


	_getch();
}
