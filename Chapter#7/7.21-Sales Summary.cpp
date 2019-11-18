#include<iostream>
#include<conio.h>
#include<array>
#include<iomanip>

using namespace std;

int main(){

	array<array<double, 5>,6>sales = {
		0,0,0,0,0,
		0,2,3,4,5,
		0,6,7,8,9,
		0,10,11,12,13,
		0,14,15,16,17,
		0,18,19,20,21
	};

	int salesPersonNumber = 0;
	int productNumber = 0;
	
	do{
		cout<<"Enter sales person number (-1 to quit) : ";
		cin>>salesPersonNumber;
	}while(salesPersonNumber != -1 && salesPersonNumber<1 || salesPersonNumber>4);

	while(salesPersonNumber != -1){
		
		double total = 0;
		
		do{
			cout<<"Enter product number : ";
			cin>>productNumber;
		}while(productNumber<1 || productNumber>5);

		do{
			cout<<"Enter the total dollar value of the product sold : ";
			cin>>total;
		}while(total<0);

		sales[productNumber][salesPersonNumber] += total;

		do{
			cout<<"Enter sales person number (-1 to quit) : ";
			cin>>salesPersonNumber;
		}while(salesPersonNumber != -1 && 
			salesPersonNumber<1 || salesPersonNumber>4);
	}

	cout<<"\n\n"<<fixed<<setprecision(2);
	cout<<left<<setw(12)<<"Salesperson"<<right<<setw(10)<<"1"
		<<setw(10)<<"2"<<setw(10)<<"3"<<setw(10)<<"4"
		<<setw(10)<<"Total"<<"\n\n";
	
	for(size_t i=1; i<sales.size(); i++){
		double totalByProduct = 0;
		cout<<setw(10)<<"Product # "<<left<<setw(2)<<i;
		for(size_t j=1; j<sales[i].size(); j++){
			cout<<right<<setw(10)<<sales[i][j];
			totalByProduct += sales[i][j];
		}
		cout<<setw(10)<<totalByProduct<<endl;
	}

	cout<<"\n\n\n"<<left<<setw(12)<<"Total";

	for(size_t i=1; i<sales[i].size(); i++){
		double totalBySalesperson = 0;
		for(size_t j=1; j<sales.size(); j++){
			totalBySalesperson += sales[j][i];
		}
		cout<<right<<setw(10)<<totalBySalesperson;
	}

	_getch();
}