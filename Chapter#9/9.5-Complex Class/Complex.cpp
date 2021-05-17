#include<iostream>
#include "Complex.h"

using namespace std;

Complex::Complex(double r, double i){
	real = r;
	imaginary = i;
}

Complex Complex::add(Complex obj){
	return Complex(this->real + obj.real, this->imaginary + obj.imaginary);
}

Complex Complex::subtract(Complex obj){
	return Complex(this->real - obj.real, this->imaginary - obj.imaginary);
}

void Complex::print(){
	cout<<real<<" + ("<<imaginary<<")i";
}


