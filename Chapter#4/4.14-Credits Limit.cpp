#include <iostream>
#include <conio.h>
#include	<iomanip>
using namespace std;

int main()
{
	
	int accountNum;
	float beginBalance;
	float credit;
	float charge;
	float limit;
	
	cout<<"Enter account number (-1 to quit) : ";
	cin>>accountNum;

	while(accountNum !=  -1)
	{
		cout<<"Enter beginning balance : ";
		cin>>beginBalance;
		cout<<"Enter total charges : ";
		cin>>charge;
		cout<<"Enter total credits : ";
		cin>>credit;
		cout<<"Enter credit limit : ";
		cin>>limit;

		float newBalance = beginBalance + charge - credit;
		cout<<"New Balance is : "<<newBalance<<endl;

		if(newBalance>limit)
		{
			cout<<fixed<<setprecision(2);
			cout<<"Account Number : "<<accountNum<<endl;		
			cout<<"Credit Limit   : "<<limit<<endl;
			cout<<"New Balance    : "<<newBalance<<endl;
			cout<<"Credit Limit Exceeded !!"<<endl;
		}
		cout<<"\n\nEnter account number (-1 to quit) : ";
		cin>>accountNum;
	
	}

	_getch();

}