/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg no: 122937
*/

#include <stdio.h>    //Including header file
int main()  //Main function
{    
	int color;  //Initializing variable
	printf("Please choose a color(1: red,2: green,3: blue):\n");  //Asking from user to choose a color     
	scanf_s("%d", &color);      //Input of color taken from user
	switch (color)    //Switch statement checking the value of variable "color"
	{
	case 1:     //If the variable checked by switch has value "1", then it will print the statement of case 1
	printf("you chose red color\n");
	break;         //A break added,so that it doesnot move on to the next cases if this is true
	
	case 2:    //If the variable checked by switch has value "2", then it will print the statement of case 2 
	printf("you chose green color\n");
	break;         //A break added,so that it doesnot move on to the next cases if this is true
	
	case 3:     //If the variable checked by switch has value "3", then it will print the statement of case 3
	printf("you chose blue color\n");
	break;     //A break added,so that it doesnot move on to the next cases if this is true
	
	default:   //If the value of the checking switch variable is other than the cases involved,then it will print the efault statement
	printf("you did not choose any color\n");
	}
    return 0;
 } 