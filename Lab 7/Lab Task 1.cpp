/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/
#include<iostream>
using namespace std;
class box
{


public:
	int *length = new int;            //Pointers as Data members
	int *width = new int;
	int *height = new int;
	box()               //Default Constructor
	{
	}
	box(int l, int w, int h)           //Initializer List Constructor
	{
		*length = l;
		*width = w;
		*height = h;
	}
	friend void checklen(box*);         //Non Member Functions Declaration
	friend void checkwid(box*);
	friend void checkhei(box*);
	void calVol()           //Member Function
	{
		cout << "\nVolume is: "<<*length*(*width)*(*height);
	} 
	void incVol()           //Increase Volume function definition
	{
		int vol = *length*(*width)*(*height) + 1;
		cout << "\nVolume after increment is: " << vol;
	}
	void decVol()           //Decrease Volume function definition
	{
		int vol = *length*(*width)*(*height) - 1;
		cout << "\nVolume after decrement is: " << vol;
	}
	~box()        //Destructor 
	{
		delete length;
		delete width;
		delete height;
	}

};
 void checklen(box &l1)            //Non member function definition to check length
{
	 cout << "\nLength of the box is: " << *l1.length;
}
 void checkwid(box &w1)             //Non member function definition to check width
 {
	 cout << "\nWidth of the box is: " << *w1.width;
 }
 void checkhei(box &h1)               //Non member function definition to check height
 {
	 cout << "\nHeight of the box is: " << *h1.height;
 }
int main()
{
	box *b1=new box();                    //First box creation and allocation of memory with default constructor called
	b1=new box(2, 2, 2);         //Initializer List constructor called for first object
	checklen(*b1);          //Check length function called
	checkwid(*b1);          //Check width function called
	checkhei(*b1);         //Check height function called
	b1->calVol();        //Calcuclate Volume function called for first object
	b1->decVol();        //Decrease Volume function called for first object
	b1->incVol();        //Increase Volume function called for first object
	delete b1;           //Deletion of first object
	getchar();
	getchar();
	getchar();
}

