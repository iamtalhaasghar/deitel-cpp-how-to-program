#include<iostream>
#include<stdexcept>
#include "Rational.h"

using namespace std;

Rational::Rational(int numerator, int denominator){
	setNumerator(numerator);
	setDenominator(denominator);
	reduceFraction();
}

Rational Rational::add(Rational obj){
	Rational answer;
	int temp = lcm(obj);
	answer.setNumerator((temp/this->denominator)*(this->numerator) + 
		(temp/obj.denominator)*(obj.numerator));
	answer.setDenominator(temp);
	answer.reduceFraction();
	return answer;
}

Rational Rational::subtract(Rational obj){
	Rational answer;
	int temp = lcm(obj);
	answer.setNumerator((temp/this->denominator)*(this->numerator) - 
		(temp/obj.denominator)*(obj.numerator));
	answer.setDenominator(temp);
	answer.reduceFraction();
	return answer;
}

Rational Rational::multiply(Rational obj){
	Rational answer;
	answer.setNumerator(this->numerator * obj.numerator);
	answer.setDenominator(this->denominator * obj.denominator);
	answer.reduceFraction();
	return answer;
}

Rational Rational::divide(Rational obj){
	Rational answer;
	answer.setNumerator(this->numerator * obj.denominator);
	answer.setDenominator(this->denominator * obj.numerator);
	answer.reduceFraction();
	return answer;
}


int Rational::lcm(Rational obj){
	for (int i = 2; ; i++)
	{
		if(i%this->denominator==0 && i%obj.denominator==0){
			return i;
		}
	}
	return -1;
}

void Rational::reduceFraction(){
	int minimum = min(numerator,denominator);
	for (int i = 2; i <= minimum; i++)
	{
		if(numerator%i==0 && denominator%i==0){
			numerator /= i;
			denominator /= i;
			minimum = min(numerator, denominator);
		}
	}
}

void Rational::setNumerator(int n){
	numerator = n;
}

void Rational::setDenominator(int d){
	if(d != 0){
		denominator = d;
	}
	else
	{
		throw invalid_argument("Denomiator can not be zero.");
	}
}

void Rational::print(){
	cout<<numerator<<" / "<<denominator;
}

void Rational::printAsFloatingPoint(){
	cout<<static_cast<double>(numerator)/denominator;
}