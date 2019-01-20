/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg no: 122937
*/

#include <stdio.h>   //Including header files
#include <conio.h>    //Including header files
void main()   //Main function
{     
	int x ;   //Declaring variable
	
	printf("Please Enter the Value: ");    //Asking value from user
	scanf_s("%d",&x); //Taking input of value from user

	if ((x>20) && (x<100))  //Checking conditional statement whether value input from user is greater than 20 or less than 100
printf("x is inside open interval 20-100");  //If above conditional statement is true,then it will print this line

	if ((x<5) || (x>20))   //Checking conditional statement whether value input from user is less than 5 or greater than 20
printf("x is not inside closed interval 5-20");   //If above conditional statement is true,then it will print this line

	if (!(x>20))   //Checking conditional statement whether value input from user is not greater than 20
printf("x is smaller or equal to 20");   //If above conditional statement is true,then it will print this line
_getch();  
}