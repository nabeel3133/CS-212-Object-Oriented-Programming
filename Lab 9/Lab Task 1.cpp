/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/

#include <iostream>
#include <string>
using namespace std;
class Employee              //class employee declared
{     
private:
	string name;            //Data member of class employee
public:
	Employee(string s)        //Constructor of Employee class
	{ 
		name = s; 
	}             
	~Employee()              //Destructor of class Employee
	{ 
		cout << "Employee destructor called" << endl; 
	}
	void disp()                  //Display Name function called for employee
	{  
		cout << name << endl;
	}
};
class Company                //class Company declared
{
public:
	string Cname;
	Employee *E;                    //Pointer of employee class made in company class (Aggregation)
public:
	Company(string s, Employee &x)
	{
		Cname = s;
		E = &x;
	}
	~Company()
	{ 
		cout << "Company destructor called" << endl; 
	}
};
int main()                        //main function
{
	Employee *e1 = new Employee("Nabeel");      //Object of employee class made by dynamically allocating memory
		Company *c1 = new Company("Amazon", *e1);           //Object of company class made by dynamically allocating memory
		Company *c2 = new Company("OLX", *e1);                 //Object of company class made by dynamically allocating memory
		try           //Error handling
		{
			e1->disp();                         //Display function called for Employee
			if (c1->E == c2->E)
				throw *c2;               //Throwing the 2nd object of company class
		}
		catch (Company &x)          
		{
			cout << "A single employee can't be in two companies: "<<x.Cname<<endl;
		}
	delete e1;
	getchar();
	getchar();
	getchar();
	getchar();
}
