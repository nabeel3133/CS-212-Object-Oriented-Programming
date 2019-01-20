/*
Name: Nabeel Hussain Syed
Class: BSCS-5C
Reg. no.: 122937
*/

#include<iostream> //Input/Output Stream Liberary
int main()
{
	using namespace std;
	unsigned short int * pPointer = 0;	// Declare and initialize a pointer.
	unsigned short int twoInt = 35698;	// Declare an integer variable and initialize it with 35698
	unsigned short int oneInt = 77;	// Declare an integer variable and initialize it with 77
	pPointer = &twoInt;	// Use address-of operator & to assign a memory address of twoInt to a pointer

	// Pointer pPointer now holds a memory address of twoInt
	// Print out associated memory addresses and its values

	cout << "pPointer's memory address:\t\t" << &pPointer << endl; // pointer's memory address
	cout << "Integer's oneInt memory address:\t" << &oneInt << "\tInteger value:\t" << oneInt << endl; //Integer's oneInt memory address
	cout << "Integer's twoInt memory address:\t" << &twoInt << "\tInteger value:\t" << twoInt << endl; //Integer's twoInt memory address
	cout << "pPointer is pointing to memory address:\t" << pPointer << "\tInteger value:\t" << *pPointer << endl; //pPointer is pointing to memory address

	return 0; //return command
}