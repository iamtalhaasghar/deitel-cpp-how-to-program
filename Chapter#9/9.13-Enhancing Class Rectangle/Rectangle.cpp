#include<iostream>
#include<stdexcept>
#include<math.h>

#include"Rectangle.h"

using namespace std;

Rectangle::Rectangle(double xCordinates[], double yCordinates[])
{
	setRectangleCoordinates(xCordinates, yCordinates);
	setPerimeterCharacter('#');
	setFillCharacter('*');

}
void Rectangle::setRectangleCoordinates(double xCordinates[],
	double yCordinates[])
{
	for (int i = 0; i < SIDES; i++)
	{
		if(xCordinates[i]>=0 && xCordinates[i]<=20){
			this->xCordinates[i] = xCordinates[i];
		}
		else
		{
			throw invalid_argument(
				"A x-Coordinates is invalid. Should be 0-20.");
		}

		if(yCordinates[i]>=0 && yCordinates[i]<=20){
			this->yCordinates[i] = yCordinates[i];
		}
		else
		{
			throw invalid_argument(
				"A y-Coordinates is invalid. Should be 0-20.");
		}
	}
	
	calculateDimensions();	
	if(!isRectangle()){
		throw invalid_argument("These Coordinates don`t make a rectangle.");
	}
}

double Rectangle::calculateLineLength(double x[], double y[])const
{
	double result = 0;
	result = sqrt(pow((fabs(x[1]-x[0])), 2.0) + pow((fabs(y[1]-y[0])), 2.0));
	return result;
}

void Rectangle::calculateDimensions()
{
	double dimensions[SIDES] = {0};
	for (int i = 0; i < SIDES; i++)
	{
		double xCord[2] = {xCordinates[i], xCordinates[(i+1)%4]};
		double yCord[2] = {yCordinates[i], yCordinates[(i+1)%4]};
		dimensions[i] = calculateLineLength(xCord, yCord);
	}

	if(dimensions[0]==dimensions[2] && dimensions[1]==dimensions[3]){
		length = max(dimensions[0], dimensions[1]);
		width = min(dimensions[0], dimensions[1]);
		isARectangle = true;
	}
	else
	{
		isARectangle = false;
	}
}

double Rectangle::getWidth()const
{
	return width;
}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::area() const
{
	return getLength() * getWidth();
}

double Rectangle::perimeter() const
{
	return (2 * getLength() + 2 * getWidth());
}

bool Rectangle::isSquare() const
{
	return (getLength() == getWidth());
}

bool Rectangle::isRectangle() const
{
	return isARectangle;
}

void Rectangle::draw() const
{
	char firstQuadrant[25][25] = {};
	
	for (int i = 0; i < 25; i++)
	{
		int j = 0;
		firstQuadrant[i][j++] = '-';
		for (; j < 25-1; j++)
		{
			if(i==0){
				firstQuadrant[i][j] = '-';
			}
			else
				firstQuadrant[i][j] = ' ';
		}
		if(i==0)
			firstQuadrant[i][j] = '-';
	}

	for (int i = 0, a = 0; i < width; i++,a++)
	{
		int j = 0;
		a = (int) yCordinates[0] + i;
		int b = (int) xCordinates[0] + j;
		firstQuadrant[a][b++] = perimeterChar;

		for (j++ ; j < length-1; j++,b++)
		{
			if(i==0 || i==width-1)
				firstQuadrant[a][b] = perimeterChar;
			else
				firstQuadrant[a][b] = fillChar;
		}
		firstQuadrant[a][b] = perimeterChar;
	}

	
	for (int i = 0; i < 25; i++)
	{
		cout<<"\t";
		for (int j = 0; j < 25; j++)
		{
			cout<<firstQuadrant[i][j];
		}
		cout<<endl;
	}

}

void Rectangle::setFillCharacter(char ch){
	fillChar = ch;
}

void Rectangle::setPerimeterCharacter(char ch){
	perimeterChar = ch;
}

