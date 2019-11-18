#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main(){
	
	cout<<"\n\n\t\t\t\tNumber System Table\n\n";
	cout<<setw(10)<<"Decimal"<<setw(12)<<"Binary"<<setw(10)<<"Octal"
		<<setw(10)<<"Hexa"<<endl;

	for(int i=1; i<=256; i++){
		int copy = i;
		int temp = 1;
		while(copy>0){
			temp = (temp * 10) + (copy % 2);
			copy/=2;
			
		}
		copy = temp;
		temp = 0;
		while(copy>0){
			if(copy==1){
				break;
			}
			temp = (temp*10) + (copy%10);
			copy/=10;
		}
		cout<<dec<<setw(10)<<i<<setw(12)<<temp<<oct<<setw(10)<<i<<hex<<setw(10)<<i<<endl;
	}

	_getch();
}