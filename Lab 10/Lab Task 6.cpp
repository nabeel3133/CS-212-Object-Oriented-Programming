/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/
#include<iostream>
using namespace std;
template <class P1>           //Template function
void swapNumbers(P1 x, P1 y)        //Print function defined
{
	P1 temp = x;
	x = y;
	y = temp;
	cout << "\n\nAFTER SWAPPING\n";
	cout << "Value of first argument is: " << x;
	cout << "\nValue of second argument is: " << y;
}
int main()
{
	int a, b;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	swapNumbers(a, b);     //Calling swap function
	getchar();
	getchar();
	getchar();
}