/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/
#include<iostream>
#include<string>
using namespace std;
class Person               //Class Definition of Person Class
{
protected:
	string name;             //Data Members of Person Class
	int age;        
public:
	Person()         //Default Constructor for Person Class
	{
	}
	Person(string n, int a)              //Parametrized Constructor for Person class
	{
		name = n;
		age = a;
	}
	virtual void print()             //Print function of Person class
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};
class Faculty : public virtual Person            //Publically inherited definition of class Faculty
{
protected:
	string school;             //Data Members of the Faculty class
	double officeNo;
public:
	Faculty()               //Default Constructor for Faculty class
	{}
	Faculty(string n, int a, string s, double o) :Person(n, a)        //Parametrized Constructor for Faculty class
	{
		school = s;
		officeNo = o;
	}
	void print()             //Print function for the details of Person class
	{
		cout << "\n\n         FACULTY DETAILS" << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "School: " << school << endl;
		cout << "Office No: " << officeNo << endl;
	}

};
class Student : public virtual Person        ////Publically inherited definition of class Faculty
{
protected:
	string course;
	string classM;           //Data members of the class Student
	float CGPA;
public:
	Student(){}        //Default Constructor for class Student
	Student(string n, int a, string c, string cM, float g) :Person(n, a)   //Parametrized Constructor for class Student
	{
		course = c;
		classM = cM;
		CGPA = g;
	}
	void print()          //Print Function for the details of Student
	{
		cout << "\n\n       STUDENT DETAILS" << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Course: " << course << endl;
		cout << "Class: " << classM << endl;
		cout << "CGPA: " << CGPA << endl;
	}
};
class TA :public Faculty, public Student        //TA class definition publically inherited from Faculty and Student classes
{
public:
	TA(string n, int a, string s, double o, string c, string cM, float g) :Faculty(n, a, s, o), Student(n, a, c, cM, g), Person(n, a)
	{           //Parametrized constructor for the class of TA
	}
	void print()         //Print function for the details of TA
	{
		cout << "\n\n       TA DETAILS" << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "School: " << school << endl;
		cout << "Office No: " << officeNo << endl;
		cout << "Course: " << course << endl;
		cout << "Class: " << classM << endl;
		cout << "CGPA: " << CGPA << endl;
	}

};
int main()
{
	Person *ptr;       //Base (Person) class pointer
	Faculty f("Faculty", 32, "SEECS", 1234);      //Making object of Faculty class with the calling of constructor
	ptr = &f;       //Base class pointer pointing to the object of base (Person) class
	ptr->print();       //Base class pointer calling the print function of the base class 
	Student s("Student", 20, "CS", "BSCS-5A", 3.42);   //Making object of Student class with the calling of constructor
	ptr = &s;    //Base class pointer pointing to the object of derived (Faculty) class
	ptr->print();   //Base class pointer calling the print function of the derived (Faculty) class 
	TA t("TA", 27, "SEECS", 5678, "CS", "BSCS-2A", 3.86);   //Making object of TA class with the calling of constructor
	ptr = &t;    //Base class pointer pointing to the object of derived (Faculty) class
	ptr->print();  //Base class pointer calling the print function of the derived (TA) class 
	getchar();
	getchar();
	getchar();

}