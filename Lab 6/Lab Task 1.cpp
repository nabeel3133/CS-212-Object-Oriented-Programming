/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/
#include<iostream>
using namespace std;
class Date                   //Defining class
{
private:
	int day, month, year;                 //Declaring Data members
public:
	void setter()                   //Setter Function
	{
		cout << "\n\nEnter day: ";
		cin >> day;
		if (day > 31 || day < 1)
		{
			cout << "Enter valid day!(Cannot enter day less than 1 or greater than 31)\nEnter day again: ";
			cin >> day;
		}
		cout << "Enter month: ";
		cin >> month;
		if (month > 12 || month < 1)
		{
			cout << "Enter valid month!(Cannot enter month less than 1 or greater than 12)\nEnter month again: ";
			cin >> month;
		}
		cout << "Enter year: ";
		cin >> year;
		if (year < 1)
		{
			cout << "Enter valid year !(Cannot enter year less than 1)\nEnter year again:";
			cin >> year;
		}
		if (month == 1 && day > 31)
		{
			cout << "Invalid Input!\nEnter right month and day: \n";
			cin >> month;
			cin >> day;
		}
		else if (month == 3 && day > 31)
		{
			cout << "Invalid Input!\nEnter right month and day: \n";
			cin >> month;
			cin >> day;
		}
		else if (month == 4 && day > 30)
		{
			cout << "Invalid Input!\nEnter right month and day: \n";
			cin >> month;
			cin >> day;
		}
		else if (month == 5 && day > 31)
		{
			cout << "Invalid Input!\nEnter right month and day: \n";
			cin >> month;
			cin >> day;
		}
		else if (month == 6 && day > 30)
		{
			cout << "Invalid Input!\nEnter right month and day: \n";
			cin >> month;
			cin >> day;
		}
		else if (month == 7 && day > 31)
		{
			cout << "Invalid Input!\nEnter right month and day: \n";
			cin >> month;
			cin >> day;
		}
		else if (month == 8 && day > 31)
		{
			cout << "Invalid Input!\nEnter right month and day: \n";
			cin >> month;
			cin >> day;
		}
		else if (month == 9 && day > 30)
		{
			cout << "Invalid Input!\nEnter right month and day: \n";
			cin >> month;
			cin >> day;
		}
		else if (month == 10 && day > 31)
		{
			cout << "Invalid Input!\nEnter right month and day: \n";
			cin >> month;
			cin >> day;
		}
		else if (month == 11 && day > 30)
		{
			cout << "Invalid Input!\nEnter right month and day: \n";
			cin >> month;
			cin >> day;
		}
		else if (month == 12 && day > 31)
		{
			cout << "Invalid Input!\nEnter right month and day: \n";
			cin >> month;
			cin >> day;
		}
	}
	void operator++ (int day)                 //Increment function using overloading operator
	{
		this->day++;
		if (this->day > 31)
		{
			this->day = 1;
			this->month = this->month++;
			if (this->month > 12)
			{
				this->month = 1;
				this->year = this->year++;
			}
		}
		else if (this->day < 1)
		{
			this->day = 31;
			this->month = this->month - 1;
			if (this->month>12)
			{
				this->year = this->year++;
			}

		}
	}
	Date operator- (Date &d)                //Decrement function using overloading operator and passing an object as an argument
	{
		d.day = this->day - 1;
		if (d.day > 31)
		{
			d.day = 1;
			d.month = this->month + 1;
			if (d.month > 12)
			{
				d.month = 1;
				d.year = this->year + 1;
			}
			return d;
		}
		else if (d.day < 1)
		{
			d.day = 31;
			if (this->month == 1)
			{
				d.month = 12;
				d.year = this->year - 1;
			}
			if (d.month>12)
			{
				d.year = this->year + 1;
			}
			return d;
		}
		d.month = this->month;
		d.year = this->year;
		return d;
	}
	void display1()                 //Displaying new date after incrementing
	{
		cout << "New Date after incrementing day is: " << day << "/" << month << "/" << year;
	}
	void display2()                 //Displaying new date after decrementing
	{
		cout << "New Date after decrementing day is: " << day << "/" << month << "/" << year;
	}
};
int main()
{
	Date d1, d2, d3;                //Making objects
	d1.setter();                  //Calling setter function
	d1++;                          //Calling increment operator function
	d1.display1();                 //Calling display function
	d1.setter();                   //Calling setter function
	d3 = d1 - d2;                  //Calling decrement operator function
	d3.display2();                 //Calling display function
	getchar();
	getchar();
	getchar();
}
