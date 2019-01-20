/*
Name  : Nabeel Hussain Syed
Class : BSCS-5A
Reg#  : 122937
*/
#include <string.h>
#include <iostream>
using namespace std;
//our main class
class bicycle
{
    private:              //private variables
	string modelName;
	string modelNumber;
	string color;
	int price;
	int speed;
	//private attributes of the class bicycle or behaviors
public:
	bicycle();                 //Default construtor

	bicycle(string, string, string, int, int);                 	//constructor which creates a new object
	
	int incSpeed(int);                      //function to increase speed
	
	int decSpeed(int);                  //function to increase speed
	
	int applyBrakes(int);              //function to apply brakes

};
bicycle::bicycle()          //Default constructor definition
{
	modelName = "Nabeel";
	modelNumber = "2011";
	color = "White";
	price = 170000;
	speed = 0;
}

bicycle::bicycle(string name, string model, string color1, int price1, int speed1)         //constructor
{
	modelName = name;
	modelNumber = model;
	color = color1;
	price = price1;
	speed = speed1;
}

int bicycle::incSpeed(int x)                //function to increase speed
{
	x = x + 10;
	return x;
}

int bicycle::decSpeed(int x)                //function to increase speed
{ 
	x = x - 5;
	return x;
}

int bicycle::applyBrakes(int x)           //function to apply brakes
{ 
	return 0;
}

void main(){
	int speedx = 0, pricex = 170000;
	string namex = "Nabeel", modelx = "2011", colorx = "White";
	bicycle b1(namex, modelx, colorx, pricex, speedx);
	cout << "initial speed before increase function :" << speedx << endl;
	speedx = b1.incSpeed(speedx);
	cout << "speed after increase function: " << speedx << endl;
	speedx = b1.decSpeed(speedx);
	cout << "speed after decrease function: " << speedx << endl;
	speedx = b1.applyBrakes(speedx);
	cout << "speed after brake function: " << speedx << endl;
	getchar();
	getchar();
}
