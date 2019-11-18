#include<iostream>
#include<conio.h>

using namespace std;
 
int lcm(int, int);

int main(){
	
	int n1, n2;
	cout<<"Enter two numbers : ";
	cin>>n1>>n2;

	cout<<"L.C.M = "<<lcm(n1,n2);
	
	_getch();
}

int lcm(int num1, int num2){
	
	int i = 2;		
	
	while(true){
		if(i%num1==0 && i%num2==0){
			return i;
		}
		i++;
	}

	return -1;	// -1 indicates that "lcm" was not found
}