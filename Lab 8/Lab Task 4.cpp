/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/
#include <iostream>//preprocessors
#include <string>
using namespace std;
class Package         //Class Definition for the base class
{
protected:                   //Data members for the base class
	string name;
	string address;
	string city;
	string state;
	int zip;
	string name2;
	string address2;
	string city2;
	string state2;
	int zip2;
	int weight;
	float cost;
public:
	void setter()
	{
		cout << "Enter sender's name: " << endl;
		cin >> name;
		cout << "Enter sender's street address: " << endl;
		cin >> address;
		cout << "Enter sender's city: " << endl;
		cin >> city;
		cout << "Enter sender's state: " << endl;
		cin >> state;
		cout << "Enter sender's Area ZIP code: " << endl;
		cin >> zip;
		cout << "Enter receiver's name: " << endl;
		cin >> name2;
		cout << "Enter receiver's street address: " << endl;
		cin >> address2;
		cout << "Enter receiver's city: " << endl;
		cin >> city;
		cout << "Enter receiver's state: " << endl;
		cin >> state2;
		cout << "Enter receiver's Area ZIP code: " << endl;
		cin >> zip;
		cout << "\nWeight of the package in ounces: " << endl;
		cin >> weight;
	}
	virtual double calculateCost()
	{
		return (weight * 100);
	}
};
class twoDaysPackage : public Package              //Class Definition for the two Days Package
{
protected:
	int fee;
public:
	twoDaysPackage()
	{
		fee = 50;
	}
	double calculateCost()
	{
		return ((weight * 80) + fee);
	}
};
class OverNightDelivery : public Package       //Class definition for Overnight delivery
{
protected:
	float extra;
public:
	OverNightDelivery()          //Constructor for the class of Over Night Delivery
	{
		extra = 30;
	}
	double calculateCost()
	{
		return ((weight * 80) + (weight*extra));
	}
};
void main(){//main function//test main
	Package *ptr;
	cout << "\n****Test for basic Package****\n" << endl;
	Package p;
	ptr = &p;
	ptr->setter();
	cout << "Cost is " << ptr->calculateCost() << endl;
	cout << "\n****Test for 2 days delivery Package****\n" << endl;
	twoDaysPackage t;
	ptr = &t;
	cout << "Cost is " << ptr->calculateCost() << endl;
	cout << "\n****Test for One night delivery Package****\n" << endl;
	OverNightDelivery o;
	ptr = &o;
	cout << "cost is " << ptr->calculateCost() << endl;
	getchar();
	getchar();
	getchar();
	getchar();
}