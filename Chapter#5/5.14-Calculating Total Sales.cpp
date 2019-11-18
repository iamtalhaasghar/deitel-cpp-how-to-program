#include<iostream>
#include<conio.h>

using namespace std;

int main(){

	int product = 0;
	double total = 0;
	
	while(product!=-1){

		double price = 0;
		
		cout<<"Enter product number (-1 to Quit) : ";
		cin>>product;

		switch(product){
			case 1:
				price = 2.98;
				break;
			case 2:
				price = 4.5;
				break;
			case 3:
				price = 9.98;
				break;
			case 4:
				price = 4.49;
				break;
			case 5:
				price = 6.87;
				break;
			case -1:
				cout<<"End of User Input.\n";
				break;
			default:
				cout<<"Invalid product number entered.\n\n";
		}
		int quantity = 0;
		if(product>=1 && product <=5){

			while(quantity<=0){
				cout<<"Enter quantity : ";
				cin>>quantity;
			}
			total += price * quantity;
		}

	}

	cout<<"Total Retail Value of all products sold : "<<total<<endl;

	_getch();
}