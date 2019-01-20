/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/
#include <iostream>
using namespace std;

class Temperature;
class Humidity
{
	float humidity;                                //humidity is the data member which stores value of Humidity
	friend  void display(Humidity obj1, Temperature obj2);    //Friend Function declared in which two objects of two classes are will be as arguments

public:
	void Setter()                              //Setter function for setting the value of humidity
	{
		cout << "Enter the value of humidity: ";
		cin >> humidity;
	}

};

class Temperature
{
	float temperature;                               //temperature is the data member which stores the value of Temperature
	friend  void display(Humidity obj1, Temperature obj2);

public:
	void setter()                            //Setter Function for setting the value of temperature
	{
		cout << "Enter the value of temperature: ";
		cin >> temperature;
	}

};

void display(Humidity obj1, Temperature obj2)
{
	cout << "Humidity is: " << obj1.humidity << endl;
	cout << "Temperature is: " << obj2.temperature; 
	
}

int main(){

	Humidity obj1;           //Creating Humidity Object
	Temperature obj2;        //Creating Temperature Object
	obj1.Setter();
	obj2.setter();
	display(obj1, obj2);
	getchar();
	getchar();
	return 0;
}