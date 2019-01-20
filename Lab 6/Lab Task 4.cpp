/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/
#include<iostream>
using namespace std;
class Date                //Defining class
{
	int day, month, year;              //Declaring data members
};
class Distance             //Defining second class
{
	int feet, inches;                //Declaring data members of second class
};
int main()
{
	Date d;                 //Making the object of Date class
	Distance d1;            //Making the object of Distance class
	cout << "Size of Date class: " << sizeof(d);                  //Printing the size of Date class
	cout << "\nSize of Distance class: " << sizeof(d1);          //Printing the size of Distance class
	getchar();
	getchar();
	getchar();
}
