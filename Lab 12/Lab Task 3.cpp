/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/
#include <iostream>
#include <deque>            //Header file for deque
using namespace std;
int main()
{
	deque<float>::iterator  itr;                // deque container with the declaration of its iterator
	deque<float> n1;                           // deque container for floating-point element declaration
	cout << "Inserting at the front\n";
	for (int i = 1; i <= 10; i++)
		n1.push_front(i*(1.2));                       	 // insert the elements each at the front
	for (itr = n1.begin(); itr != n1.end(); itr++)
		cout << *itr << endl;                       	// print all elements separated by a space
	getchar();
	getchar();
	getchar();
	return 0;
}