#ifndef COMPLEX_H
#define COMPLEX_H

class Complex{
private: 
	double real;
	double imaginary;

public:
	explicit Complex(double = 0, double = 0);
	Complex add(Complex);
	Complex subtract(Complex);
	void print();
};

#endif