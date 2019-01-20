/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/
#include<iostream>
using namespace std;
template <class M>        //Template function
	M maximum(M x, M y)
	{
		if (x > y)
			return x;
		else
			return y;
	}
int main()          //Main Function
{
		int a, b;             //Testing template function for integers (Defining integers as data variables)
		cout << "Enter first number: ";
		cin >> a;
		cout << "Enter second number: ";
		cin >> b;
		cout<<"Maximum of these two numbers is: "<<maximum<int>(a, b);          //Calling template function for the testing of two integers
		cout << "\n\nTesting for float numbers";
		cout << "\nMaximum of two float numbers is: "<<maximum<float>(7.5, 9.8);   //Calling template function for the testing of two floating point numbers
		getchar();
		getchar();
		getchar();
}
