/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/
#include <iostream>
using namespace std;
template <class T>
double Average(T array[])
{

	double avg=0.0;
	int i;
	for (i = 0; i < 10; i++)
	{
		avg += array[i];
	}
	return (avg/i);
}

int main(){
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "TESTING FOR INT";
	cout << "\nAverage of integer numbers is " << Average<int>(array);
	float array2[10] = { 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5, 9.5, 10.5 };
	cout << "\n\nTESTING FOR FLOAT";
	cout << "\nAverage of Numbers is " << Average<float>(array2);
	getchar();
	getchar();
}
