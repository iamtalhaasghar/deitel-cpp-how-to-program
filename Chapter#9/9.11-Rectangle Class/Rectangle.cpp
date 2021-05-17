#include<stdexcept>
#include"Rectangle.h"

using namespace std;

Rectangle::Rectangle(double length, double width){
	setLength(length);
	setWidth(width);
}

void Rectangle::setLength(double l){
	if(l>0 && l<20){
		length = l;
	}
	else
	{
		throw invalid_argument("Length of Rectangle must be between 1-19.");
	}
}

void Rectangle::setWidth(double w){
	if(w>0 && w<20){
		width = w;
	}
	else
	{
		throw invalid_argument("Width of Rectangle must be between 1-19.");
	}

}

double Rectangle::getLength()const {
	return length;
}

double Rectangle::getWidth()const {
	return width;
}

double Rectangle::area()const {
	return getLength() * getWidth();
}

double Rectangle::perimeter()const {
	return ( 2 * getLength() + 2 * getWidth() );
}
