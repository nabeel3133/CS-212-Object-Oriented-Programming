/*
Name  : Nabeel Hussain Syed
Class : BSCS-5A
Reg#  : 122937
*/

#include <iostream>
using namespace std;

class Date{
private:
	int day;
	int month;
	int year;
public:
	//constructor 1
	Date(int d, int m, int y){
		day = d;
		month = m;
		year = y;
	}
	//constructor 2
	Date(){
		day = 1;
		month = 1;
		year = 1;
	}
	//extra
	void pastDate(){
		if (year < 2016){
			cout << "This date has passed\n";
		}
		else if (year > 2016){
			cout << "Not yet passed\n";
		}
		else if (month < 2){
			cout << "This date has passed\n";
		}
		else if (month >2){
			cout << "Not yet passed\n";
		}
		else if (day < 15){
			cout << "This date has passed\n";
		}
		else{
			cout << "Not yet passed\n";
		}
	}
};

int main(){
	Date d1;
	Date d2(16, 2, 2016);
	Date d3(15, 2, 2016);   //current date
	d1.pastDate();
	d2.pastDate();
	d3.pastDate();
}