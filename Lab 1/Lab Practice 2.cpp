/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg no: 122937
*/

#include<stdio.h>      //Including header files
#include<conio.h>      //Including header files
void main()     //Main function
{   
//**Example: Take match score from user.**   
	int score;    //Declaring variable
	printf("Enter the score: ");   //Asking score from user
	scanf_s("%d", &score);      //Taking input of score from user
	if(score>=300)       //Using conditional statement to check if score is greater than or equal to 300
	{   
		printf("\n***Pakistan won \t: %d",score);   //If score is greater than or equal to 300 then print "Pakistan won"
	}   
	printf("\n**--**");   //If the score is not greater than or equal to 300 then it will print only this line
	_getch();  
} 