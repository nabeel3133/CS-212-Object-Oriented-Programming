/*
Name: Nabeel Hussain Syed
Class: BSCS-5C
Reg. no.: 122937
*/

#include<conio.h> //Console Input/Output Library
#include<iostream> //Input/Output Stream Liberary
using namespace std; //
int factorial(int n); //Function Prototype
int main()
{
	int n1, fact; //Variable Declaration
	cout << "Enter the number whose factorial has to be calculated" << endl; //Output Statement
	cin >> n1; // Input
	fact = factorial(n1);// Function call
	cout << "The factorial of " << n1 << " is : " << fact << endl; //Output Statement
	return(0); //return command
	_getch(); //to make the consol after ending execution
}
//FUNCTION
int factorial(int n)
{
	int i = 0, fact = 1; //Variable Declaration
	if (n <= 1) //decision statement
	{
		return(1); //return command
	}
	else
	{
		for (i = 1; i <= n; i++) //for loop
		{
			fact = fact*i; //calculation command
		}
		return(fact); //return command
	}
}