#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;

int main(){

	vector<int>numbers;
	bool worstCase = true;
	cout<<"Enter a number between 10 and 100, inclusive : \n\n";
	for(int i=0; i<5; i++){
		
		int input = 0;
		do{
			cout<<"["<<i<<"] : ";
			cin>>input;
		}while(input<10 || input>100);

		for(int j=i-1; j>=0; j--){
			while( input == numbers[j]){
				worstCase = false;
				cout<<"\nThe number "<<numbers[j]
				<<" is already present in array at index "<<j<<".\n";
				cout<<"Duplicates are not allowed. Enter number again : \n\n";
				do{
					cout<<"["<<i<<"] : ";
					cin>>input;
				}while(input<10 || input>100);	
				
				j = i - 1;
			}
		}

		numbers.push_back(input);
	}

	if(worstCase)
		cout<<"\nAll elements entered by the user were different.\n\n";

	cout<<"Elements of vector are : \n\n";
	for(int n : numbers){
		cout<<n<<"\t";
	}
	
	_getch();
}

