#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
private:
	int numerator;
	int denominator;
	void reduceFraction();
	int lcm(Rational);

public:
	explicit Rational(int = 0, int = 1);
	Rational add(Rational);
	Rational subtract(Rational);
	Rational multiply(Rational);
	Rational divide(Rational);
	void print();
	void printAsFloatingPoint();

	void setNumerator(int);
	void setDenominator(int);

};

#endif // !RATIONAL_H
