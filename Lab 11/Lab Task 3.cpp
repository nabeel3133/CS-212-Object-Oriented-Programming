/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	const int MAX = 80;
	char buffer1[50];
	cout << "Enter anything(Without spaces): ";
	cin >> buffer1;
	ofstream outfile1("BinaryFile1.bin");
	outfile1 << buffer1 << endl;
	ifstream infile1("BinaryFile1.bin");
	while (!infile1.eof()){
		infile1.read(buffer1, MAX);
		cout << buffer1 << endl;
	}
	ofstream outfile2("BinaryFile2.bin");
	while (!infile1.eof()){
		infile1.read(buffer1, MAX);
		outfile2 << buffer1 << endl;
	}
	ifstream infile2("BinaryFile2.bin");
	while (!infile2.eof()){
		infile2.read(buffer1, MAX);
		cout << buffer1 << endl;
	}
	getchar();
	getchar();
	getchar();
}