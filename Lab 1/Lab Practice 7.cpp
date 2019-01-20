/*
Name: Nabeel Hussain Syed
Class: BSCS-5C
Reg. no.: 122937 
*/

#include<stdio.h> //Standars Input/Output Library
#include<conio.h> //Console Input/Output Library
void main()
{
	int a[3][3], i, j; //Variable Declaration
	//clrscr();
	printf("\n\t Enter matrix of 3*3 : "); //Output Statement
	for (i = 0; i<3; i++) //for loop
	{
		for (j = 0; j<3; j++) //for loop
		{
			scanf_s("%d", &a[i][j]); //read 3*3 array
		}
	}
	printf("\n\t Matrix is : \n"); //Output Statement
	for (i = 0; i<3; i++) //for loop
	{
		for (j = 0; j<3; j++) //for loop
		{
			printf("\t %d", a[i][j]); //print 3*3 array
		}
		printf("\n"); //Output Statement
	}
	_getch(); //to make the consol after ending execution
}