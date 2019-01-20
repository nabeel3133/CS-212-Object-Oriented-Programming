/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/
#include<iostream>
using namespace std;
class Distance                     //Defining class
{
private:
	int feet, inches;               //Declaring data members
public:
	void setter()               //Setter function
	{
		cout << "\n\nEnter feet: ";
		cin >> feet;
		if (feet <1)
		{
			cout << "Enter valid feet!(Feet cannot be less than 1)\nEnter feet again: ";
			cin >> inches;
		}
		cout << "Enter inches: ";
		cin >> inches;
		if (inches > 11 || inches <1)
		{
			cout << "Enter valid inches!(Inches cannot be greater than 11 or less than 1)\nEnter inches again: ";
			cin >> inches;
		}
	}
	void operator++(int inches)                        //Increment function using overloading operator
	{
		this->inches++;
		if (this->inches>11)
		{
			this->inches = 1;
			this->feet = this->feet+1;
		}
	}
	void operator--(int inch)                        //Increment function using overloading operator
	{
		this->inches--;
		if (this->inches<1)
		{
			this->inches = 11;
			this->feet-=1;
		}
		
	}
	Distance operator-(Distance &d)           //Decrement function using overloading operator and passing an argument as a function
	{
		d.inches = this->inches - 2;
		if (d.inches < 1)
		{
			d.inches = 11;
			d.feet = this->feet - 1;
			return d;
		}
		else
		{
	    d.feet=this->feet;
		d.inches=d.inches;
	    }
		return d;
	}
	void display1()                 //Displaying function for incrementing
	{
		cout << "\nNew Distance after incrementing inches is: " << feet << "ft " << inches << "in";
	}
	void display2()             //Displaying function for decrementing
	{
		cout << "\nNew Distance after decrementing inches is: " << feet << "ft " << inches << "in";
	}

};
int main()
{
	Distance d1, d2, d3;           //Making objects
	d1.setter();                   //Calling setter function
	d1++;                         //Calling increment operator function
	d1.display1();             //Calling display function
	//d2.setter();                 //Calling setter function again
	//d2--;
	//d2.display1();
	d3 = d1 - d2;                 //Calling decrement operator function
	d3.display2();                //Calling display function
	getchar();
	getchar();
	getchar();
}


