/*
Name  : Nabeel Hussain Syed
Class : BSCS-5A
Reg#  : 122937
*/

#include <iostream>
using namespace std;

class calculator{
private:
	float n1;
	float n2;
public:
	//constructor
	calculator()
	{
		n1 = 0;
		n2 = 0;
	}
	//setters
	void setfirst(float x){
		n1 = x;
	}
	void setsecond(float y){
		n2 = y;
	}
	//member funcs
	void add(){
		cout << "First number added to second is " << n1 + n2 << endl;
	}
	void subtract(){
		cout << "Second number subtracted from first is " << n1 - n2 << endl;
	}
	void multiply(){
		cout << "The two numbers multiplied gives " << n1*n2 << endl;
	}
	void divide(){
		cout << "The first number divided by second gives " << n1 / n2 << endl;
	}
	void factorial(){
		float prod = 1;
		float current = n1;
		while (current != 1){
			prod *= current;
			current--;
		}
		cout << "The factorial of the first number is " << prod << endl;
	}
};

int main(){
	calculator calc;
	calc.setfirst(14);
	calc.setsecond(10);
	calc.add();
	calc.multiply();
	calc.subtract();
	calc.divide();
	calc.factorial();
}
