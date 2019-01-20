/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/
#include<iostream>
using namespace std; 
template <class C>              //Template class
class calculator
{
private:
	C firstNumber;            //Data members
	C secondNumber;
public:
	void setter(C x, C y)          //Setter function
	{
		firstNumber = x;
		secondNumber = y;
	}
	C add()               //Add function
	{
		return (firstNumber+secondNumber);
	}
	C multiply()           //Multiply function
	{
		return (firstNumber*secondNumber);
	}


};
int main()
{

	calculator<float> c1;          //Object of class calculator
	int a, b;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	c1.setter(a, b);         //Setter function called for integer numbers
	cout<<"\nAddition result of these two numbers= "<<c1.add();            //Add function called for integer numbers
	cout<<"\nMultiplication result of these two numbers= " << c1.multiply();         //Multiply function called for integer numbers
	cout << "\n\n\nTesting for floating point numbers!";
	c1.setter(3.5, 8.9);                //Setter function called for integer numbers      
	cout << "\n\nAddition result of these two numbers= " << c1.add();        //Add function called for integer numbers
	cout << "\nMultiplication result of these two numbers= " << c1.multiply();   //Multiply function called for integer numbers
	getchar();
	getchar();
	getchar();
}