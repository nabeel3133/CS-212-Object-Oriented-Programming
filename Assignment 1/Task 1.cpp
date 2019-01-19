/*
Nabeel Hussain Syed
Regn# 122937
BSCS-5A 
*/

#include <iostream>
#include <string>
using namespace std;
class car
{	
    private:
    static int petrolLevel;
    string color;
    string model;
    int year;
    int speed;
    public:
   car():color(),model(),year()          //initializer list construtor
   { 
   }
   
   car(string x,string y,int z);       //Constructor with default argument
   
   void setPetrol(int s)     //Setter Function
   {
   petrolLevel=s;
   }
   void movecar(int m)      //Move Car Function
   {
   if(petrolLevel<=0)
    { 
   cout<<"You cannot move the car as your tank is empty.\nPlease refill your tank to move your car";
    }
    else if(m>petrolLevel)
    {
    	cout<<"You can only travel a distance of "<<petrolLevel<<"km"<<" as your petrol level is only "<<petrolLevel<<".";
    	cout<<"\nYou have travelled a distance of "<<petrolLevel<<" km.";
    		petrolLevel-=petrolLevel;
	}
   else
    {
    petrolLevel-=m;
    cout<<"You have travelled a distance of "<<m<<"km";
    }
   }
   void refill()        //Refill Petrol Function
   {
   	if(petrolLevel==100)
   	{
	cout<<"Your petrol Level is already maximum i.e "<<petrolLevel;   
	}
	else
	{
   petrolLevel=100; 
   cout<<"Your petrol Level is now maximum i.e "<<petrolLevel<<endl;
    }
   }
   void isEmpty()      //Check Petrol Level Function
   {
   if(petrolLevel<=10)
    {
   cout<<"Your Petrol level is almost empty i.e "<<petrolLevel<<endl;
    }
   else if(petrolLevel<=0)
    {
   cout<<"Your Petrol level is empty i.e "<<petrolLevel<<endl;
    }
   else if(petrolLevel>10&&petrolLevel<100)
    {
   cout<<"Your Petrol Level is Enough i.e "<<petrolLevel<<endl;
    }
    else if(petrolLevel==100)
    {
    cout<<"Your Petrol Level is maximum i.e "<<petrolLevel<<endl;
	}
   }
 
   int getpetrolValue()     //Getter Function
   {
   return petrolLevel;
   }
   void exitMessage()
   {
   	cout<<"Thankyou for using this program.";
   }
};
car::car(string x,string y,int z)
{
color=x;
model=y;
year=z;
}
int car:: petrolLevel=100;           //Initializing value of petrol Level
int main()
{
  string model,color;
  int year,distance,speed;
car obj1(color,model,year);
int petrol;
obj1.setPetrol(100);
obj1.getpetrolValue();
char choice;
  do{
cout <<"\n\n     Car Menu " << endl;
cout << "-------------------------------" << endl;
cout << "A) Move the Car" << endl;
cout << "B) Check the Petrol Level" << endl;
cout << "C) Refill the tank" << endl;
cout << "D) Exit" << endl;
cout << "Enter your choice: ";
cin >> choice;
    if(choice=='a'||choice=='A')
	{
    cout<<"How much distance do you want to move your car? ";
    cin >> distance;
    obj1.movecar(distance);
    }
    else if(choice=='b'||choice=='B')
	{
    obj1.isEmpty();
	}
    else if(choice=='c'||choice=='C')
	{
    obj1.refill();
    }
    else if(choice=='d'||choice=='D')
    {
    	obj1.exitMessage();
	}
    
	}while( choice!='d'&&choice!='D');
  getchar();
  getchar();
  return 0;
}
