#include<iostream>
#include<conio.h>

using namespace std;

int main(){

	int employee = 0;
	double salary = 0;
	cout<<"\nEmployee Codes\n\n"
			"1 = Managers\n"
			"2 = Hourly Employees\n"
			"3 = Commission Employees\n"
			"4 = Piece Workers\n\n";
	cout<<"Enter Employee code (-1 to Quit) : ";
	cin>>employee;
	while( employee != -1 ){
		
		salary = 0;

		double rate = 0, hours = 0, overtime = 0;
		double sales = 0;
		
		switch(employee){
			case 1:
				cout<<"Enter the weekly salary of manager : ";	 
				cin>>salary;
				break;
			case 2:
				cout<<"Enter the hourly pay rate of employee : ";
				cin>>rate;
				cout<<"Enter total hours worked this week : ";
				cin>>hours;
				if(hours>40)
					overtime = (hours-40) * (rate*0.5);
				salary = (hours * rate) + overtime;
				break;
			case 3:
				
				cout<<"Enter gross sales of employee : ";
				cin>>sales;
				salary = 250 + sales * 0.057;
				break;
			case 4:
				
				cout<<"Enter unit price of item produced by the employee: ";
				cin>>rate;
				cout<<"Enter number of items produced : ";
				cin>>sales;
				salary = rate * sales;
				break;
			default:
				cout<<"\nInvalid Employee type entered.\n";

		}

		cout<<"Total Salary = "<<salary<<endl;

		cout<<"\nEmployee Codes\n\n"
			"1 = Managers\n"
			"2 = Hourly Employees\n"
			"3 = Commission Employees\n"
			"4 = Piece Workers\n\n";
		cout<<"Enter Employee code (-1 to Quit) : ";
		cin>>employee;		

	}
	_getch();
}