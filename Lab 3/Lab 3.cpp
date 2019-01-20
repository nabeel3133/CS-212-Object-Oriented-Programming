/*
Name : Nabeel Hussain Syed
Reg# : 122937
class : BSCS-5A
*/


#include <iostream>
using namespace std;

class angle
{
	int degrees;
	float minutes;
	char direction;
public:
	angle()
	{
	}
	angle(int a, float b, char c){
		degrees = a;
		minutes = b;
		direction = c;
	}
	void inputDir(int a, float b, char c){
		degrees = a;
		minutes = b;
		direction = c;
	}
	void outputDir()
	{
		cout << degrees << "\xF8" << minutes << "'" << direction;
	}
};
class numb
{
	int number;
public:
	numb()
	{
		static int count = 1;
		number = count;
		count++;
	}
	int pnum()
	{
		return number;
	}
};
class ship
{
public:
	angle longitude;
	angle latitude;
	numb serial;
	ship()
	{
	}
};
void main(){
	ship s[3];
	for (int i = 0; i < 3; i++)
	{
		int a1, a2;
		float b1, b2;
		char c1, c2;
		cout << "Enter the longitude values for ship number " << s[i].serial.pnum() << endl;
		cin >> a1 >> b1 >> c1;
		cout << "Enter the latitude values for ship number " << s[i].serial.pnum() << endl;
		cin >> a2 >> b2 >> c2;
		s[i].longitude.inputDir(a1, b1, c1);
		s[i].latitude.inputDir(a2, b2, c2);
	}
	cout << "\nNow the list \n" << endl;
	cout << "#" << "\tLongitude" << "\tLatitude" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << s[i].serial.pnum() << "\t";
		s[i].longitude.outputDir();
		cout << "\t\t";
		s[i].latitude.outputDir();
		cout << endl;
	}
	getchar();
	getchar();
}