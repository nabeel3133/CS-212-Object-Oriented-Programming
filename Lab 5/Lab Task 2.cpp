/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/
#include <iostream>
using namespace std;

class surcharge;


class electricity
{
	int units;                                     //Data Members
	float cost, tax, total;
public:
	friend class surcharge;                 //Friend Class defined for the calculation of surcharge

	void Setter()
	{                                //Setter Function
		cout << "Enter the units which are consumed: ";
		cin >> units;
	}
	float Cost()                               //Function defined for calculating cost
	{
		if (units >= 0 && units <= 100)
			cost = units * 50;
		else if (units > 100 && units <= 300)
			cost = units * 55;
		else if (units>300)
			cost = units * 60;
		return cost;
	}
};
class surcharge                                //class of adding surcharge and calculating total
{
	electricity obj;
public:
	friend class electricity;
	void totalBill()
	{
		//total calculation function
		obj.Setter();
		obj.Cost();
		if (obj.cost >= 0 && obj.cost <= 250)
			obj.tax = 0;
		else
		obj.tax= obj.cost*0.15;
		obj.total = obj.cost + obj.tax;
		cout << "Your total bill is: " << obj.total;
	}
};

int main()
{
	surcharge a;                   //Creating Object
	a.totalBill();
	getchar();
	getchar();
}
