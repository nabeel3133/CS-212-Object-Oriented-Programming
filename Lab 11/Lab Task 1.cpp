/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ofstream outfile("LabTask1.txt");
	const int MAX = 80;
	int buffer1[MAX];
	cout << "Enter 5 numbers: " << endl;
	for (int i = 0; i < 5;i++)
	{
		cin >> buffer1[i];
		outfile << buffer1[i] << "\n";
	}
	outfile.close();
	cout << "The numbers are stored in the file";
	ifstream infile("LabTask1.txt");
	cout << "\n\n-----------------------AFTER READING THE NUMBERS FROM THE FILE-----------------\n";
	char buffer2[MAX];
	cout << "The numbers are: " << endl;
	while (!infile.eof())
	{
		infile.getline(buffer2, MAX);
		cout << buffer2 << endl;
	}
	getchar();
	getchar();
	getchar();
}