#include<iostream>
#include<conio.h>
#include<iomanip>


#define SIZE 100
#define SENTINEL -99999

using namespace std;

void welcomeToSimpletron();
void inputProgram(int* const);
void executeProgram(int*, int&, int&,int&, int&, int&);
void printRegisters(const int&, const int&,
		const int&, const int&, const int&);
void printMemoryDump(const int* const);


int main(){

	int memory[SIZE] = {0};
	int accumulator = 0;
	int instructionCounter = 0;
	int instructionRegister = 0;
	int operationCode = 0;
	int operand = 0;
	
	welcomeToSimpletron();
	inputProgram(memory);

	executeProgram(memory, accumulator, instructionCounter, instructionRegister,
		operationCode, operand);
	
	_getch();
}

void welcomeToSimpletron(){
	
	system("cls");
	printf("*** %s ***\n", "Welcome to Simpletron!");
	printf("*** %s ***\n", "Copyright (c) 2018");
	printf("*** %s ***\n\n", "Programmer : Talha Asghar");
	printf("*** %s ***\n", "Please Enter your program one instruction");
	printf("*** %s ***\n", "(or data word) at a time. I will type the");
	printf("*** %s ***\n", "location number and a question mark (?).");
	printf("*** %s ***\n", "You then type the word for that location.");
	printf("*** %s ***\n", "Type the sentinel -99999 to stop entering");
	printf("*** %s ***\n\n", "your program.");
	
}

void inputProgram(int* const memory){
	int index = 0;
	int input = 0;

	//do{
		cout<<setw(2)<<setfill('0')<<index<<" ? ";
		cin>>input;
	//}while(input<-9999 || input>9999);
	
	while(input!=SENTINEL && index<SIZE)
	{
		memory[index++] = input;
		//do{
			cout<<setw(2)<<setfill('0')<<index<<" ? ";
			cin>>input;
		//}while(input<-9999 || input>9999);	
	}
	printf("*** %s ***\n", "Program Loading Completed.");
	cout<<setfill(' ');
}

void executeProgram(int* const memory,int& accumulator, 
		int& instructionCounter, int& instructionRegister,
		int& operationCode, int& operand)
{
	
	bool programFinished = false;	
	bool hasBranched = false;
	printf("*** %s ***\n", "Program Execution begins.");

	if(memory[0] != 0){
	
		while( (!programFinished) && instructionCounter<SIZE){
	
			instructionRegister = memory[instructionCounter];
			operationCode = instructionRegister / 100;
			operand = instructionRegister % 100;
	
			switch (operationCode)
			{
				case 10:
					cout<<"? ";
					cin>>memory[operand];
					instructionCounter++;
					break;
				case 11:
					cout<<">>> "<<memory[operand]<<endl;
					instructionCounter++;
					break;
				case 20:
					accumulator = memory[operand];
					instructionCounter++;
					break;
				case 21:
					memory[operand] = accumulator;
					instructionCounter++;
					break;
				case 30:
					accumulator += memory[operand];
					instructionCounter++;
					break;
				case 31:
					accumulator -= memory[operand];
					instructionCounter++;
					break;
				case 32:
					accumulator /= memory[operand];
					instructionCounter++;
					break;
				case 33:
					accumulator *= memory[operand];
					instructionCounter++;
					break;
				case 40:
					instructionCounter = operand;
					break;
				case 41:
					if(accumulator < 0){
						instructionCounter = operand;
					}
					else{
						instructionCounter++;
					}
					break;
				case 42:
					if(accumulator == 0){
						instructionCounter = operand;
					}
					else{
						instructionCounter++;
					}
					break;
				case 43: 
					printf("*** %s ***\n", "Simpletron Execution Terminated."); ;
					programFinished = true;
					break;
				default:
					printf("*** %s ***\n", "Invalid Operation Code");
					printf("*** %s ***\n", "Simpletron Execution abnormally Terminated."); 				
					programFinished = true;
					break;
			}		
		
		}
	}
	else{
		printf("*** %s ***\n", "No Code to execute.");
	}

	printRegisters(accumulator, instructionCounter,
		instructionRegister,operationCode, operand);
	printMemoryDump(memory);
}

void printRegisters(const int& accumulator, const int& instructionCounter,
		const int& instructionRegister, const int& operationCode,
		const int& operand)
{
	cout<<internal<<left<<"\n\nREGISTERS:\n\n"<<showpos<<setfill(' ')
		<<setw(30)<<"Accumulator : "<<setfill('0')<<setw(5)
		<<accumulator<<endl<<noshowpos<<setfill(' ')
		<<setw(30)<<"Instruction Counter : "<<setfill('0')<<setw(5)
		<<instructionCounter<<endl<<setfill(' ')<<setw(30)<<showpos
		<<"Instruction Register : "<<setfill('0')<<setw(5)
		<<instructionRegister<<endl<<noshowpos<<setfill(' ')<<setw(30)
		<<"Operation Code : "<<setfill('0')<<setw(5)<<operationCode<<endl
		<<setfill(' ')<<setw(30)<<"Operand : "<<setfill('0')
		<<setw(5)<<operand<<endl<<setfill(' ');

}

void printMemoryDump(const int* const memory){
	
	int index = 0;
	cout<<"\n\nMEMORY : \n\n";
	
	for (int i = 0; i < 11; i++)
	{
		if(i!=0){
			cout<<left<<setfill(' ')<<setw(5)<<(i-1)*10;
		}
		for (int j = 0; j < 10; j++)
		{
			if(i == 0){
				cout<<setfill(' ')<<setw(7)<<j;
			}
			else
			{
				cout<<internal<<showpos<<setw(5)<<setfill('0')
					<<memory[index++]<<"  "<<noshowpos<<setfill(' ');	
			}
		}
		cout<<endl;
	}
	cout<<setfill(' ');
}