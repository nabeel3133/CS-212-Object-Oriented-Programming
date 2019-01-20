/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/
#include<iostream>
#include<math.h>
using namespace std;
class equation
{
private:
	int a, b, c;
	float proot, nroot;
public:
	friend void determining(equation &);
	friend void displaying(equation &);
	equation()
	{
	}
	void setter()
	{
		cout << "Enter the value of a,b and c respectively(ax^2 + bx + c) to get the\npositive and negative roots\n\n";
		cout << "Enter the value of a: ";
		cin >> a;
		cout << "Enter the value of b: ";
		cin >> b;
		cout << "Enter the value of c: ";
		cin >> c;
	}
};
void determining(equation &e)
{
	float r1 = (-(e.b) + sqrt((e.b*e.b) - (4 * e.a*e.c))) / (2 * e.a);
	float r2 = (-(e.b) - sqrt((e.b*e.b) - (4 * e.a*e.c))) / (2 * e.a);
	e.proot = r1;
	e.nroot = r2;
}
void displaying(equation &e)
{
	cout << "Positive root: " << e.proot << endl;
	cout << "Negative root: " << e.nroot << endl;
}
int main()
{
	equation e1;
	e1.setter();
	determining(e1);
	displaying(e1);
	getchar();
	getchar();
	getchar();
}
