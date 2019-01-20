/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/
#include<iostream>
using namespace std;
template <class I>          //Template for class
class Item            //Class Item defined
{ 
private:
	I value;         //Data member
public:
	void setter()          //Setter function
	{
		cout << "Enter the value of the item: ";
		cin >> value;
	}
	I getter()           //Getter function
	{
		return value;
	}
	void print()         //Print function
	{
		cout << "Value of item is: ";
	}
};
int main()
{
	Item<int> I1;         //Object made of class item for the testing of int
	cout << "TESTING FOR INT\n";
	I1.setter();           //Setter function called for first object 
	I1.print(); cout << I1.getter();        //Print and getter function called for first object
	Item<float> I2;        //Object made of class item for the testing of float
	cout << "\n\nTESTING FOR FLOAT\n"; 
	I2.setter();             //Setter function called for second object 
	I2.print(); cout << I2.getter();         //Print and getter function called for second object
	Item<char> I3;        //Object made of class item for the testing of char
	cout << "\n\nTESTING FOR CHAR\n";
	I3.setter();          //Setter function called for third object 
	I3.print(); cout << I3.getter();     //Print and getter function called for third object
	getchar();
	getchar();
	getchar();
}