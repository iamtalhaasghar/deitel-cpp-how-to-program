#include<iostream>
#include<conio.h>

using namespace std;
int main(){

	int size = 0;
	cout<<"Enter size of Diamond : ";
	cin>>size;

	cout<<"\n\n";
	
	int spaces = 0;
	int stars = 0;
	for(int i=1; i<=size; i++){
		
		if(i==1){
			spaces = size/2;
			stars = 1;
		}
		else if(i<=(size/2+1)){
			spaces--;
			stars += 2;
		}
		else {
			spaces++;
			stars -= 2;
		}

		for(int j=1; j<=spaces; j++){
			cout<<" ";
		}
		

		for(int k=1; k<=stars; k++){
			cout<<"*";
		}
		
		
		cout<<endl;
	}



	_getch();
}