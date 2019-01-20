/*
Name: Nabeel Hussain  Syed
Class: BSCS-5A
Reg No: 122937
*/
#include<fstream>
#include<iostream>
#include<string>
using namespace std;
class studentDetails
{
private:
	float CGPA;
	string name;
	string classAndSection;
	int age;
public:
	void setter()
	{
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter age: ";
		cin >> age;
		cout << "Enter class and section: ";
		cin >> classAndSection;
		cout << "Enter CGPA: ";
		cin >> CGPA;
	}
	void writetoFile()
	{
		ofstream write("Student-Details.txt");
		write << name << endl;
		write << age << endl;
		write << classAndSection << endl;
		write << CGPA << endl;
	}
	void readfromFile()
	{
		ifstream read("Student-Details.txt");
		const int MAX = 80;
		char buffer[MAX];
		while (!read.eof())
		{
			read.getline(buffer, MAX);
			cout << buffer << endl;
		}
	}
};
int main()
{
	studentDetails S1;
	S1.setter();
	S1.writetoFile();
	cout << "Details of the student are stored in the file";
	cout << "\n\nDetails of the student are read from the file and shown below on the console\n";
	S1.readfromFile();
	getchar();
	getchar();
	getchar();

}