#include<iostream>
#include<conio.h>
#include "Invoice.h"

using namespace std;

int main()
{
	string x, y;
	int a, b;

	cout<<"Enter Part Number : ";
	getline(cin,x);
	cout<<"Enter Part Description : ";
	getline(cin,y);
	cout<<"Enter Price Per Item : ";
	cin>>a;
	cout<<"Enter Quantity of Items : ";
	cin>>b;
	
	Invoice invoice(x, y, a, b);

	cout<<"\n\nBill Summary : \n\n";
	
	cout<<"Item Number : "<<invoice.getPartNumber()<<endl;
	cout<<"Item Description : "<<invoice.getPartDescription()<<endl;
	cout<<"Total Quantity : "<<invoice.getQuantity()<<endl;
	cout<<"Price Per Item : "<<invoice.getPricePerItem()<<endl<<endl;
	cout<<"\n*****************************************\n";
	cout<<"Total Bill Amount : "<<invoice.getInvoiceAmount()<<endl;

	_getch();
}
