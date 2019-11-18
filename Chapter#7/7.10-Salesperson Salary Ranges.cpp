#include<iostream>
#include<conio.h>
#include<array>

using namespace std;

int main(){

	array<int,11>salaries = {0};
	int sales = 0;
	do
	{
		cout<<"Enter gross sales (-1 to End) : ";
		cin>>sales;
		int total = static_cast<int>(200 + sales * 0.09);
		int index = total/100;
		if(index>=10)
			salaries[10]++;
		else
			salaries[index]++;

	} while (sales != -1);

	cout<<endl<<endl;

	for(size_t i=2 ; i<salaries.size(); i++){
		if(i==10)
			cout<<"$"<<i*100<<" and over : ";
		else
			cout<<"$"<<i*100<<"-"<<i*100+99<<" : ";
		
		for(int j=0; j<salaries[i]; j++)
			cout<<"*";
		cout<<endl;
	}


	_getch();
}