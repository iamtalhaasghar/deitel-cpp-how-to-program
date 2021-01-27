#ifndef HUGE_INTEGER_H
#define HUGE_INTEGER_H

class HugeInteger{
private:
	static const int SIZE = 40;
	char number[SIZE];

public:
	explicit HugeInteger();
	void input();
	void output();
	HugeInteger add(HugeInteger);
	HugeInteger subtract(HugeInteger);
	bool isEqualTo(HugeInteger);
	bool isNotEqualTo(HugeInteger);
	bool isGreaterThan(HugeInteger);
	bool isLessThan(HugeInteger);
	bool isGreaterThanOrEqualTo(HugeInteger);
	bool isLessThanOrEqualTo(HugeInteger);
	bool isZero(HugeInteger);

};

#endif