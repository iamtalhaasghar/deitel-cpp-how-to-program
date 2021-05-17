#include<iostream>
#include<conio.h>
#include"Rectangle.h"

using namespace std;
int main(){

	double x[4] = {1,1,5,5};
	double y[4] = {1,5,5,1};
	try{
	
		for (int i = 0; i < 4; i++)
		{
			cout<<"Enter Vertex # "<<i+1<<" of Triangle : ";
			cin>>x[i]>>y[i];
		}
		
		Rectangle myRectangle(x, y);
		cout<<"\nLength = "<<myRectangle.getLength();
		cout<<"\nWidth = "<<myRectangle.getWidth();
		cout<<"\nArea = "<<myRectangle.area();
		cout<<"\nPerimeter = "<<myRectangle.perimeter();
		cout<<boolalpha<<"\nIs Square() = "<<myRectangle.isSquare();
		
		char ch = '\0';
		cout<<"\nEnter Rectangle Fill Character : ";
		cin>>ch;
		myRectangle.setFillCharacter(ch);
		cout<<"Enter Rectangle Perimeter Character : ";
		cin>>ch;
		myRectangle.setPerimeterCharacter(ch);
		cout<<"\n\nDrawing Rectangle : \n\n";
		myRectangle.draw();

	}
	catch(exception ex){
		cout<<ex.what();
	}

	_getch();
}
