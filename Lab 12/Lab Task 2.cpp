/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class student
{
private:
	float grade;
	string newname;
public:
	student()
	{
	}
	student(string s, char g)
	{
		newname = s;
		grade = g;
	}
	string getnewname()
	{
		return newname;
	}
	float getgrade()
	{
		return grade;
	}
	void setnewname()
	{
		cout << "Enter name: ";
		cin >> newname;
	}
	void setgrade()
	{
		cout << "Enter grade: ";
		cin >> grade;
	}
	~student()                   
	{
	}
};
void printvector(vector<student>& v)
{
	vector<student>::iterator itr;
	for (itr = v.begin(); itr != v.end(); itr++) 
	{
		cout << itr->getnewname() << endl;
		cout << itr->getgrade() << endl;
	}
}
void fillvector(vector<student>& v)
{
	int j;
	vector<student>::iterator itr;
	cout << "How many objects you wanna enter: ";
	cin >> j;
	for (int i = 1; i <= j; i++)
	{
		student students;
		cout << "\nEnter values for object # " << i << endl;
		students.setnewname();
		students.setgrade();
		v.push_back(students);
	}
}
int main()
{
	vector<student> v;
	fillvector(v);
	printvector(v);
	getchar();
	getchar();
}
