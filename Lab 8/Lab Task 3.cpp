/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/
#include<iostream>
using namespace std;
class Container         //Class Definition for container class
{
protected:
	float boxPercent;
	float cylinderPercent;        //Data members for the container class
public:
	void setpercentLoaded()       //Setting liquid percent of the container class function
	{
		cout << "\n\nHow much percent is the box filled: ";
		cin >> boxPercent;
		cout << "How much percent is the cylinder filled: ";
		cin >> cylinderPercent;
	}
	void getpercentLoaded()       //Getting liquid percent of the container class function
	{
		cout << "\nBox is " << boxPercent << "% filled" << endl;
		cout << "Cylinder is " << cylinderPercent << "% filled" << endl;
	}
};
class Circle            //Class Definition for Circle class
{ 
protected:
	float radius;        //Data members for the circle class
public:
	void setRadius()         //Setting the radius for the circle class
	{
		cout << "\n\nEnter the radius of the circle: ";
		cin >> radius;
	}
	void calCircleArea()        //Calculating the area of the circle
	{
		cout << "\nArea of the circle is: " << radius*radius*3.14159;
	}
};
class Box:public Container             //Publically derived class of Box from class of container
{
protected:
	float length;           //Data members of the class box
	float height;
	float width;
public:
	void setBoxData()        //Setting the data of the box
	{
		cout << "\n\nEnter the length of the box: ";
		cin >> length;
		cout << "Enter the height of the box: ";
		cin >> height;
		cout << "Enter the width of the box: ";
		cin >> width;
	}
	void calBoxVolume()      //Calculating the volume of the box
	{
		cout << "\nVolume of the box is: " << length*width*height;
	}
};
class Cylinder:public Container,public Circle           //Publically derived class of Box from class of container
{
protected:
	float height;            //Data member for the cylinder class
public:
	void setCylData()      //Setting cylinder data
	{
		cout << "\n\nEnter the height of the cylinder: ";
		cin >> height;
		cout << "Enter the radius of cylinder: ";
		cin >> radius;

	}
	void calCylVol()     //Calculating the cylinder volume
	{
		cout << "\nVolume of cylinder is: " << radius*radius*3.14159*height;
	}
};
int main()
{
	Container c;      //Making object of container class
	Circle c1;        //Making object of container class
	Box b1;           //Making object of container class
	Cylinder c2;      //Making object of container class
	c.setpercentLoaded();        //Calling the setter function of container class which sets the liquid percentages 
	c1.setRadius();         //Calling setter function for the circle class which sets the radius of the circle
	b1.setBoxData();           //Calling setBoxData function for the class of box
	c2.setCylData();         //Calling set cyclinder data function for the class of cylinder
	c1.calCircleArea();         //Calling the function for the calculation of the area of the circle
	b1.calBoxVolume();         //Calling the function for the calculation of the volume of the box
	c2.calCylVol();            //Calling the function for the calculation of volume of cylinder
	c.getpercentLoaded();          //getting the liquid percentages
	getchar();
	getchar();
	getchar();
}