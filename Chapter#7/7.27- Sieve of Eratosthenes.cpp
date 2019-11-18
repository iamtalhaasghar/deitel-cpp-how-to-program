#include<iostream>
#include<conio.h>
#include<array>

#define SIZE 1000

using namespace std;

int main(){

	array<int, SIZE> numbers;

	for (size_t i = 0; i < numbers.size(); i++)
	{
		numbers[i] = 1;
	}
	
	for (size_t i = 2; i < numbers.size(); i++)
	{
		for (size_t j = i+1 ; j < numbers.size(); j++)
		{
			if(numbers[j]==1 && j%i==0)
			numbers[j] = 0;
		}
	}

	for (size_t i = 2; i < numbers.size(); i++)
	{
		if (numbers[i])
		{
			cout<<i<<"\t";
		}
	}
	
	
	_getch();
}


