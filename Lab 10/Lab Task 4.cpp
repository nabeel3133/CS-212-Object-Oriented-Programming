/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/
#include<iostream>
using namespace std;
template <class P1,class P2>           //Template function
void print(P1 x, P2 y)        //Print function defined
{
	cout << "\n\nValue of first argument is: " << x;
	cout << "\nValue of second argument is: " << y;
}
int main()
{
	int a;        
	float b;
	cout << "Enter first argument which is to be passed(int): ";
	cin >> a;
	cout << "Enter second argument which is to be passed(float): ";
	cin >> b;
	print(a, b);     //Calling print function
	getchar();
	getchar();
	getchar();
}