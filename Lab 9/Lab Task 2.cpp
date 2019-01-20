/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/
#include<iostream>
using namespace std;
class Person           //Parent Class Declared
{
protected:
	char name[15];
	int age;
};
class mother :public Person                //Derived class of mother from Person class
{
public:
	void takedata()              //Taking data of mother function
	{
		cout << "\n\nEnter name of mother: ";
		cin >> name;
		cout << "Enter age of mother: ";
		cin >> age;
	}
	int getdata()             //Getting age of mother function
	{
		return age;
	}
};
class child :public Person            //Derived class of child from Person class
{
public:
	void takedata()            //Taking data of child function
	{
		cout << "\n\nEnter name of child: ";
		cin >> name;
		cout << "Enter age of child: ";
		cin >> age;
	}
	int getdata()           //Getting age of mother function
	{
		return age;
	}
};
int main()
{
	mother m1;          //Object of mother class made
	child c1;             //Object of child class made
	m1.takedata();           //Taking data of mother function called
	try                //Exception handler if someone inputs the age of mother greater than 100
	{
		if (m1.getdata()>100)
			throw m1;                  //Throwing object of mother
	}
	catch (mother m)            //Catching the object of mother here and showing an error
	{
		cout << "ERROR! The input age is greater than 100";
	}
	c1.takedata();                  //Taking data of child function called 
	try                    //Exception handler if someone inputs the age of child greater than 100
	{
		if (c1.getdata() > 100)
			throw c1;                //Throwing object of child
	}
	catch (child c)                      //Catching the object of child here and showing an error
	{
		cout << "ERROR! The input age is greater than 100";
	}
	try                 //Exception handler if someone inputs the age of child greater than mother's age
	{
		if (c1.getdata() >= m1.getdata())
			throw c1;                   //Throwing object of child
	}
	catch (child c)              //Catching the object of child here and showing an error
	{
		cout << "\nERROR! Child's age " << c.getdata() << " is greater or equal to mother's age " << m1.getdata();
	}
	getchar();
	getchar();
	getchar();
	getchar();
}