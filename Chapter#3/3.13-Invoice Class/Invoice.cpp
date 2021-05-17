#include<iostream>
#include<string>
#include "Invoice.h"

using namespace std;

Invoice::Invoice(
	string partNumber, string partDescription, 
	int quantity, int pricePerItem)
{
	setPartNumber(partNumber);
	setPartDescription(partDescription);
	setQuantity(quantity);
	setPricePerItem(pricePerItem);
}

string Invoice::getPartNumber() const
{
	return partNumber;
}

string Invoice::getPartDescription() const
{
	return partDescription;
}

int Invoice::getQuantity() const 
{
	return quantity;
}

int Invoice::getPricePerItem() const
{
	return pricePerItem;
}

void Invoice::setPartNumber(string partNumber)
{
	Invoice::partNumber = partNumber;
}

void Invoice::setPartDescription(string partDescription)
{
	Invoice::partDescription = partDescription;
}

void Invoice::setQuantity(int quantity)
{
	if(quantity<=0)
	{
		cout<<"Invalid Quantity!!"<<endl;
		Invoice::quantity = 0;
	}
	else
	{
		Invoice::quantity = quantity;
	}
}

void Invoice::setPricePerItem(int pricePerItem)
{
	if(pricePerItem<=0)
	{
		cout<<"Invalid Price Per Item!!"<<endl;
		Invoice::pricePerItem = 0;
	}
	else
	{
		Invoice::pricePerItem = pricePerItem;
	}

}

int Invoice::getInvoiceAmount()const
{
	return (getPricePerItem()*getQuantity());
}