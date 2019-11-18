#include<iostream>
#include<conio.h>

using namespace std;

int main(){

	for(int i=1; i<=12; i++){
		cout<<"\n\tThe ";
					switch(i){
				case 1:
					cout<<"\"First\" ";
					break;
				case 2:
					cout<<"\"Second\" ";
					break;
				case 3:
					cout<<"\"Third\" ";
					break;
				case 4:
					cout<<"\"Fourth\" ";
					break;
				case 5:
					cout<<"\"Fifth\" ";
					break;
				case 6:
					cout<<"\"Sixth\" ";
					break;
				case 7:
					cout<<"\"Seventh\" ";
					break;
				case 8:
					cout<<"\"Eighth\" ";
					break;
				case 9:
					cout<<"\"Ninth\" ";
					break;
				case 10:
					cout<<"\"Tenth\" ";
					break;
				case 11:
					cout<<"\"Eleventh\" ";
					break;
				case 12:
					cout<<"\"Twelfth\" ";
					break;
				
			}
			cout<<"day of Christmas\n"
					"\t\tMy true love fent to me\n";
		for(int j=i; j>0; j--){
			cout<<"\t\t";
			switch(j){
				case 1:
					cout<<"A partridge in a peer tree.\n";
					break;
				case 2:
					cout<<"Two turtles doves, and\n";
					break;
				case 3:
					cout<<"Three Freench hens,\n";
					break;
				case 4:
					cout<<"Four colly birds,\n";
					break;
				case 5:
					cout<<"Five gold rings,\n";
					break;
				case 6:
					cout<<"Six geefe a laying,\n";
					break;
				case 7:
					cout<<"Seven fwans a fwimming,\n";
					break;
				case 8:
					cout<<"Eight maids a milking,\n";
					break;
				case 9:
					cout<<"Nine drummers drumming,\n";
					break;
				case 10:
					cout<<"Ten pipers piping,\n";
					break;
				case 11:
					cout<<"Eleven ladies dancing,\n";
					break;
				case 12:
					cout<<"Twelve lords a leaping,\n";
					break;
				
			}
		}
		cout<<endl;
	}

	_getch();
}