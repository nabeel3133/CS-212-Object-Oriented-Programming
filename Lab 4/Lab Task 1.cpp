/*
Name : Nabeel Hussain Syed
Class : BSCS-5A
Reg# : 122937
*/
#include <iostream>
using namespace std;

class Date                  //Date class prototype
{ 
	int day, month, year; //Date Members
public:
	Date()               // Default constructor
	{                      
		day = 0;
		month = 0;
		year = 0;
	}
	Date(int day, int month, int year) //Constructor with initials
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
	void setDate()
	{                                 //Setter function
		cout << "Enter day: ";
		cin >> day;
		cout << "Enter month: ";
		cin >> month;
		cout << "Enter year: ";
		cin >> year;
		if ((day <= 0 || day > 31) || (month <= 0 || month > 12) || (year <= 0)) //Check for invalid entry
		{
			cout << "\nInvalid entries! Date is auto set to 0/0/0. " << endl;
			day = 0;
			month = 0;
			year = 0;
		}
	}
	void getDate()                      //Displaying date function
	{ 
		cout << day << "/" << month << "/" << year;
	} 
	void compDate(Date a)             //Comparing dates function by passing object
	{
		if (a.year > year)
		{
			this->getDate();
			cout << " comes before ";
			a.getDate();
		}
		else if (a.year < year)
		{
			a.getDate();
			cout << " comes before ";
			this->getDate();
		}
		else if (a.year == year)
		{
			if (a.month < month)
			{
				a.getDate();
				cout << " comes before ";
				this->getDate();
			}
			else if (a.month > month)
			{
				this->getDate();
				cout << " comes before ";
				a.getDate();
			}
			else if (a.month == month)
			{
				if (a.day > day)
				{
					this->getDate();
					cout << " comes before ";
					a.getDate();
				}
				else if (a.day < day)
				{
					a.getDate();
					cout << " comes before ";
					this->getDate();
				}
				else if (a.day == day)
				{
					a.getDate();
					cout << " & ";
					this->getDate();
					cout << " are the same dates ";
				}
			}
		}
	}
	~Date()               //Destructor function
	{                  
	}
};

void main()            //Main function
{
	Date d1;               //Creating first object
	cout << "Date 1:- \n" << endl;
	d1.setDate();          //Setting date of first object
	Date d2;              //Creating second object
	cout << "\nDate 2:- \n" << endl;
	d2.setDate();         //Setting date of second object
	cout << "\nDates are "; d1.getDate(); cout << " & "; d2.getDate(); cout << "\n\n";
	d1.compDate(d2);       //Comparing Dates function called
	getchar();
	getchar();
}