#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

double calculateCharges(double);

int main(){

	double hour1 = 0;
	double hour2 = 0;
	double hour3 = 0;

	cout<<"Enter car parking hours of customer # 1 : ";
	cin>>hour1;
	cout<<"Enter car parking hours of customer # 2 : ";
	cin>>hour2;
	cout<<"Enter car parking hours of customer # 3 : ";
	cin>>hour3;
	
	cout<<setprecision(2)<<fixed<<left
		<<setw(15)<<"Car"<<setw(15)<<"Hours"<<setw(15)<<"Charges"<<endl;
	cout<<setw(15)<<1<<setw(15)
		<<hour1<<setw(15)<<calculateCharges(hour1)<<endl;
	cout<<setw(15)<<2<<setw(15)
		<<hour2<<setw(15)<<calculateCharges(hour2)<<endl;
	cout<<setw(15)<<3<<setw(15)
		<<hour3<<setw(15)<<calculateCharges(hour3)<<endl;
	cout<<setw(15)<<"Total"<<setw(15)<<hour1+hour2+hour3
		<<setw(15)<<calculateCharges(hour1)
		+calculateCharges(hour2)+calculateCharges(hour3)<<endl;

	_getch();
}

double calculateCharges(double hours){
	
	double charges = 0;
	if(hours<=3)
		return 2.0;
	else if(hours==24)
		return 10;
	else{
		int temp = hours-3;
		charges = 2.0 + (temp*0.5);
	}
	return charges;
}