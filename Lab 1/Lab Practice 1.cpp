/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg no: 122937
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>         //Including header file
#include<conio.h>         //Including header file
void main()  
{ 
float phy, chem, maths, comp, bio, mobtained, Percentage;            //Declaring variables
printf("Enter the marks of Physics: ");         //Asking Physics marks from user
scanf("%f", &phy);                             //Taking input from user of Physics marks
printf("Enter the marks of Chemistry: ");     //Asking Chemistry marks from user
scanf("%f", &chem);                           //Taking input from user of Chemistry marks
printf("Enter the marks of mathematics: ");   //Asking Mathematics marks from user
scanf("%f", &maths);                          //Taking input from user of Mathematics marks
printf("Enter the marks of Computer: ");      //Asking Computer marks from user
scanf("%f", &comp);                           //Taking input from user of Computer marks
printf("Enter the marks of BIO: ");          //Asking Bio marks from user
scanf("%f", &bio);                          //Taking input from user of bio marks
mobtained = phy + chem + maths + comp + bio;      //Declaring the formula of total marks obtained
Percentage = (mobtained / 500) * 100;             //Declaring the formula of percentage of total marks obtained
printf("\nThe aggregated marks are %f\n", mobtained);         //Showing the total marks obtained by the user
printf("The aggregated marks are %f", Percentage);          //Showing the total percentage obtained by the user
_getch(); 
}