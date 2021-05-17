#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
private:
	static const int SIDES = 4;
	double xCordinates[SIDES];
	double yCordinates[SIDES];
	double length;
	double width;
	bool isARectangle;

	void calculateDimensions();
	double calculateLineLength(double[], double[])const;
		
public:	
	Rectangle(double [], double []);
	void setRectangleCoordinates(double [], double []);
	double getWidth() const;
	double getLength() const;
	double area() const;
	double perimeter() const;
	bool isRectangle()const;
	bool isSquare() const;
	
};

#endif