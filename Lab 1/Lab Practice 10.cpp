/*
Name: Nabeel Hussain Syed
Class: BSCS-5C
Reg. no.: 122937
*/

#include<iostream> //Input/Output Stream Liberary
#include<conio.h> //Console Input/Output Library
void read(int *, int); //Read Function Prototype
void dis(int *, int); //Display Function Prototype

void main()
{
	int a[5], b[5], c[5], i; //Variable Declaration
	printf("Enter the elements of first list \n"); //Output Statement
	read(a, 5); // read FUnction Calling
	printf("The elements of first list are \n"); //Output Statement
	dis(a, 5); // 
}

//Read Function
void read(int c[], int i)
{
	int j; //Variable Declaration
	for (j = 0; j<i; j++) //for loop
		scanf_s("%d", &c[j]); //input Coomand
	fflush(stdin); //to make sure the data have saved in memory
}

//Display Function
void dis(int d[], int i)
{
	int j; //Variable Declaration
	for (j = 0; j<i; j++) //for loop
		printf("%d ", d[j]); //output command
	printf("\n"); //Output Statement
}