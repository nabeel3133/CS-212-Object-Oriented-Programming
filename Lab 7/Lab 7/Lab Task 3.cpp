/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/
#include<iostream>
#include<math.h>
using namespace std;
class Box                           //Class Definition
{
private:
	int *length = new int;             //Data Members
	int *width=  new int;    
	int *height = new int;
public:
	Box(){}                   //Default Constructor
	Box(int l, int w,int h)         //Initializer List Constructor
	{
		*length = l;
		*width = w;
		*height = h;
	}
	box(const Box& newO)                 //Copy Constructor
	{
		*this->height = *newO.height;
		*this->width = *newO.width;
		*this->length = *newO.length;
	}
	friend ostream &operator<<(ostream&, const Box &);          //Declaration of Non Member Functions
	friend istream &operator>>(istream&, Box &);
	void operator *=(const Box &b)             //Operator *= overloaded function defined
	{
		*this->length *=  *b.length;                      
		*this->width *=   *b.width;
		*this->height *= *b.height;
	}
	void operator =(const Box &b)             //Operator Assignment = overloaded function defined
	{
		*this->length = *b.length;
		*this->width = *b.width;
		*this->height = *b.height;
	}
	void operator !=(const Box &b)                 //Operator != overloaded function defined
	{
		if (this->length && this->width && this->height != b.length && b.width && b.height)
			cout << "Dimensions are not equal of both boxes." << endl;
		else
			cout << "Dimensions are equal";
	}
	void showData()                  //Display Data
	{
		cout << "Length is: " << *length << "        Width is: " << *width <<  "      Height is: " << *height << endl;
	}

	~Box()            //Destructor
	{
		delete length;
		delete width;
		delete height;
	}

};
		ostream &operator<<(ostream& output, const Box& b)             //Overloading << operator function
{
	output <<"\nLength is: "<<*b.length<<endl;
	output <<"Width is: "<<*b.width<<endl;
	output<<"Height is: "<<*b.height<<endl;
	return output;
}
istream &operator>>(istream& input, Box & b)          //Overloading >> Operator function
{
	cout<<"Enter length: ";
	input >> *b.length;
	cout<<"Enter width: ";
	input >> *b.width; 
	cout<<"Enter height: ";
	input >> *b.height; 
	
  
	return input; 
}

int main()
{
	Box *b1 = new Box(4, 4, 4);              //Dynamically 1st Box created and allocated memory 
	Box *b2 = new Box(2, 2, 2);               //Dynamically 2nt Box created and allocated memory 
	Box *b3=new Box(*b2);            //Dynamically 3rd Box created and allocated memory with calling of copy constructor
	b1->showData();          //Display function called for 1st object
	b2->showData();           //Display function called for 2nd object
	*b1 *= *b2;             //*= overloaded operator function called
	b1->showData();    //Display function called for first object
	*b1 != *b2;            //!= Overloaded operator function called
	*b1 = *b2;             //= Assignment Overloaded operator function called
	b1->showData();           //Display function called for first object
	cin >>*b1;            //>> Overloaded operator function called to take input
	cout<<*b1;            //<< Overloaded operator function called to give output
	delete b1;           //Deletion of first object
	delete b2;          //Deletetion of second object
	getchar();
	getchar();
	getchar();

}

