#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
private:
	double length;
	double width;

public:
	explicit Rectangle(double = 1, double = 1);
	void setLength(double);
	void setWidth(double);

	double getLength()const;
	double getWidth()const;

	double perimeter()const;
	double area()const;
};


#endif