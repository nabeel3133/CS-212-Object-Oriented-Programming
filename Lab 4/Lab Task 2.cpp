/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg#: 122937
*/
#include<iostream>
using namespace std;
class circle            //Data class prototype
{
	float radius;                    //Data members
	const float pi = 3.14159;
public:
	circle()                  //Default constructor
	{
		radius = 0;
	}
	circle(float radius)              //Constructor with initial
	{
		this->radius = radius;
	}
	~circle()            //Destructor
	{
	}
	void setValues()              //Setter function
	{
		cout << "Enter radius: ";
		cin >> radius;
		if (radius < 0)
		{
			cout << "Invalid input! Radius is autoset to 0";
			radius = 0;

		}
	}
	float getArea()                   //Getter function
	{ 
		return (radius*radius*pi);
	}
	void display1()              //Displaying the area of the 1st circle function
	{
		cout << "Area of 1st circle is: " << this ->getArea();
	}
	void display2(circle b)              //Displaying the area of the 1st circle function
	{
		cout << "Area of 2nd circle is: " << b.getArea();
	}
	void compAreas(circle b)               //Comparing areas function
	{
		if (this->getArea() > b.getArea())
		{
			cout << "\n\n";
				cout <<"Area of 1st circle i.e " << this->getArea() << " is greater than Area of 2nd circle i.e " << b.getArea();
		}
		else if (this->getArea() < b.getArea())
		{
			cout << "\n\n";
			cout <<"Area of 2nd circle i.e "<< b.getArea() << " is greater than Area of 1st circle i.e " << this->getArea();
		}
		else if (this->getArea() == b.getArea())
		{
			cout << "\n\n";
			cout << "Area of 1st circle i.e "<<this->getArea()<< " is equal to Area of 2nd circle i.e " << b.getArea();
		}
	}

};
int main()
{
	circle c1, c2;             //Creating objects
	cout << "Circle 1:- \n" << endl;
	c1.setValues();           //Setting values for the first object
	c1.display1();            //Displaying area of the first circle
	cout << "\n\nCircle 2:- \n" << endl;
	c2.setValues();          //Setting values for the second object
	c1.display2(c2);         //Displaying area of the first circle
	c1.compAreas(c2);        //Compaying Areas
	getchar();
	getchar();
	getchar();
	getchar();
	return 0;
}

