
class Account
{

private :
	int balance;

public:
	explicit Account(int);
	void setBalance(int);
	int getBalance(void)const;
	void credit(int);
	void debit(int);
};