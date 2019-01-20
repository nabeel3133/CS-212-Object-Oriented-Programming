/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/
#include<iostream>
using namespace std;
class series                   //Defining class
{
	int firstTerm, lastTerm, totalTerms;                //Declaring Data Members
	float sum;
public:
	series()               //Default Constructor
	{
	}
	void setter()                //Setter Function
	{
		cout << "Enter the first term of the series: ";
		cin >> firstTerm;
		cout << "Enter the last term of the series: ";
		cin >> lastTerm;
		cout << "Enter the total terms of the series: ";
		cin >> totalTerms;
	}
	friend void determiningSum(series &);                   //Declaring friend function to determine the sum of the series
};
void determiningSum(series &s1)                   //Defining the function to determine the sum
{
	s1.sum = (s1.totalTerms*(s1.firstTerm+s1.lastTerm))/2;                //Calculating sum
	cout << "Sum of the series is: " << s1.sum << endl;                  //Displaying the value of sum
}
int main()
{
	series s;                            //Constructing object
	s.setter();                          //Calling Setter function
	determiningSum(s);                   //Calling friend function the determine the sum and display it
	getchar();
	getchar();
	getchar();

}
