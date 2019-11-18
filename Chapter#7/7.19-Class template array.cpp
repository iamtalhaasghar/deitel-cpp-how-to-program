#include<iostream>
#include<conio.h>
#include<array>
#include<iomanip>
#include<stdexcept>

using namespace std;


int main(){

	array<int, 7>integers1 = {0};
	array<int, 10>integers2 = {0};

	cout<<"Size of array integers 1 is : "<<integers1.size()
		<<"\nArray after initialization : \n";
	
	for(int num : integers1)
		cout<<num<<" ";
	
	cout<<"\n\nSize of array integers 2 is : "<<integers2.size()
		<<"\nArray after intitalization : \n";
	for(int num : integers2)
		cout<<num<<" ";

	cout<<"\n\nEnter 17 integers : ";
	for(int &num : integers1)
		cin>>num;
	for(int &num : integers2)
		cin>>num;

	cout<<"\nAfter input, the arrays contain : \n"
		<<"integers 1 : ";
	for(int num : integers1)
		cout<<num<<" ";
	
	cout<<"\nintegers 2 : ";
	for(int num : integers2)
		cout<<num<<" ";

	array<int,7> integers3(integers1);

	cout<<"\nSize of array integers 3 is : "<<integers3.size()
		<<"\nArray after initialization : \n";
	
	for(int num : integers3)
		cout<<num<<" ";
	
	cout<<"\nEvaluating : integers1 == integers3\n";
	if(integers1==integers3)
		cout<<"integers1 and integers3 are equal.\n";

	cout<<"\nintegers1[5] is "<<integers1[5]<<endl;
	cout<<"\nAssigning 1000 to integers1[5]\n";
	integers1[5] = 1000;

	cout<<"\nintegers 1 : ";
	for(int num : integers1)
		cout<<num<<" ";

	try{
		
		cout<<"\nAttempt to dispaly integers1.at(15) : \n";
		cout<<integers1.at(15)<<endl;

	}catch(out_of_range &ex){
		cerr<<"An exception occurred : "<<ex.what();
	}
	
	_getch();
}
