/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/
#include<iostream>
#include<math.h>
using namespace std;
class Integer                           //Class Definition
{
private:
	int left, right;                //Data Members
public:
	Integer(){}                   //Default Constructor
	Integer(int l, int r)         //Initializer List Constructor
	{
		left = l;
		right = r;
	}
	Integer operator /(const Integer &i)             //Operator / overloaded function defined
	{
		Integer firstdivide;
		firstdivide.left = this -> left / i.left;                       //Dividing first object by second
		firstdivide.right = this->right / i.right;
		return firstdivide;
	} 
	Integer operator ^(const Integer &i)          //Operator ^ overloaded function defined
	{ 
		Integer firstPov;
		firstPov.left = pow(this->left,i.left);
		firstPov.right = pow(this->right,i.right);
		return firstPov;
	}
	void showData()                  //Display Data
	{
		cout << "Left is: " << left << "        Right is: " << right << endl;

	}
};
int main()
{
	Integer i1(4, 4), i2(2, 2);              //Two objects created
	i1.showData();            //Showing the data of the first object
	i2.showData();            //Showing the data of the second object
	Integer i3 = i1 / i2;       //Calling operator (/) overloaded function
	i3.showData();              //Showing the data of the third object
	Integer i4 = i1^i2;        //Calling operator (^) overloaded function
	i4.showData();             //Showing the data of the fourth object
	getchar();
	getchar();
	getchar();

}
