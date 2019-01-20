/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg no: 122937
*/

#include<stdio.h>        //Including header files
#include<conio.h>       //Including header files
void main()  
{   
	//**Example: Take  match score from user.**  
	int score;    //Declaring variable
	printf("Enter the score: ");   //Asking score from user
	scanf_s("%d", &score);    //Taking input of score from user
	if(score>=300)    //Checking conditional statement whether scored entered by user is greater than or equal to 300
	{
		printf("\n***Pakistan won  and scores are \t: %d",score);    //If condditional statement is true,it will print this line
	}   
	else  
	{    
		printf("\n***England won and scores are \t:%d",score);  //If conditional statement is false,it will print this line
	}   
	printf("\n**--**");   
	_getch(); 
}