#include<iostream>
#include<conio.h>

using namespace std;

int main(){

	int x = 0, y = 0;

	cout<<boolalpha;
	
	x = 6;
	y = 4;
	cout<<"Assume x = "<<x<<" and y = "<<y<<"\n";
	cout<<"!(x<5) && !(y>=7) : "<<(!(x<5)&&!(y>=7))
		<<" is equivalent to "<<"!((x<5) || (y>=7)) : "<<!((x<5)||(y>=7))<<endl;
	
	int a = 8, b=7, g=9;
	cout<<"\nAssume a = "<<a<<", b = "<<b<<" and g = "<<g<<"\n";
	cout<<"!(a==b) || !(g!=5) : "<<(!(a==b)||!(g!=5))
		<<" is equivalent to "<<"!((a==b) && (g!=5)) : "<<!((a==b)&&(g!=5))<<endl;
	
	x = 3, y = 2;
	cout<<"\nAssume x = "<<x<<" and y = "<<y<<"\n";
	cout<<"!((x<=8) && (y>4)) : "<<!((x<=8) && (y>4))
		<<" is equivalent to "<<"(!(x<=8) || !(y>4)) : "<<(!(x<=8) || !(y>4))<<endl;
	
	int i = 1;
	cout<<"\nAssume i = "<<i<<endl;
	cout<<"!((i>4) || (i<=6)) : "<<!((i>4) || (i<=6))
		<<" is equivalent to "<<"(!(i>4) && !(i<=6)) : "<<(!(i>4) && !(i<=6))<<endl;
	

	_getch();
}