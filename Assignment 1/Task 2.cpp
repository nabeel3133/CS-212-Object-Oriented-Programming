/*
Nabeel Hussain Syed
Regn# 122937
BSCS-5A 
*/

#include<iostream>
using namespace std;
class time
{
	private:
		int hours;         //Data member
	public:
		time(int h)         //Constructor
		{
			hours=h;
		}
		~time()   //Destructor
		{
		}
		void setTime(int st)      //Setter Function
		{
			hours=st;
		}
		int getTime()           //Getter Function
		{
			return hours;
		}
		int changeTime(int st)          //Change Time Function
		{
			if(st>12 && st<24)
			return st-12;
			else if(st<12 && st>0)
			return st;
			else
			return 0;
		}
		void displayTime(int st)        //Display Time Function
		{
			if(st>12 && st<24)
			{
				cout<<"Time in 12 hour format is: "<<st-12<<" P.M";
			}
			else if(st==12)
			{
				cout<<"Time in 12 hour format is: 12"<<" P.M";
			}
				else if(st==24)
			{
				cout<<"Time in 12 hour format is: 00"<<" A.M";
			}
			
			else if(st<12 && st>0)
			{
				cout<<"Time in 12 hour format is: "<<st<<" A.M";
			}
			else
			{
			cout<<"Invalid Input";	
			}
			
		}
};
int main()
{
	int hours_in_day;
	cout<<"Enter hours in 24 hour format: ";
	cin>>hours_in_day;
	time t1(hours_in_day);       //Creating object
	t1.setTime(hours_in_day);    //Setting value of hour
	t1.getTime();                //Getting value of hour
	t1.changeTime(hours_in_day);     //Changing value of hour
	t1.displayTime(hours_in_day);     //Displaying time  
}
