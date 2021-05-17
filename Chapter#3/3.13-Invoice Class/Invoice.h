#include<string>

class Invoice
{
private:
	std::string partNumber;
	std::string partDescription;
	int quantity;
	int pricePerItem;
public :
	Invoice(std::string, std::string, int, int);
	
	std::string getPartNumber()const;
	std::string getPartDescription()const;
	int getQuantity()const;
	int getPricePerItem()const;

	void setPartNumber(std::string);
	void setPartDescription(std::string);
	void setQuantity(int);
	void setPricePerItem(int);
	
	int getInvoiceAmount()const;

};