/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg no: 122937
*/

#include <stdio.h>    //Including header files
#include <conio.h> 
void main()   //Main function
{ 
int a[3], i;   //Initializing integer array of size 3 and an integer
printf("Enter three numbers: ");    //Asking for three number from user
for(i=0; i<3; i++)   //Loop used here to get three elements of the array
{   
	scanf_s("%d", &a[i]);  // read array   //Getting input of 3 numbers from user
}  
printf("\nNumbers are: ");  
for(i=0; i<3; i++)    //Loop used to print three elements of the array
{  
	printf("%d\t", a[i]);  // print array    //Printing the three numbers input by the user
}  
_getch(); 
}