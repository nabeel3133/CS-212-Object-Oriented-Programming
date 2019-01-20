/*
Name: Nabeel Hussain Syed
Reg no: 122937
Class: BSCS-5A
*/
#include<iostream>
using namespace std;
class temperature
{
	float celsius;
public:
	temperature();
	temperature(float);
	float conversion(float);
};
temperature::temperature()
{
	celsius = 37.7;
}
temperature::temperature(float celsius)
{
	celsius = 37.7;
}

float temperature::conversion(float x)
{
	x = (x * 9.0) / 5.0 + 32;
	return x;
}

int main()
{
	float celsiusx1;
	cout << "Enter temperature in degree celsius: ";
	cin >> celsiusx1;
	temperature t1(celsiusx1);
	celsiusx1 = t1.conversion(celsiusx1);
	cout << "The temperature in Fahrenheit: " << celsiusx1 << endl;
	getchar();
	getchar();
	return 0;
}